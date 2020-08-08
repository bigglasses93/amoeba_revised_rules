#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N_VARIABLE 1016
#define N_CLAUSE 18936 //9
#define N_LITERAL 3
#define CONN_THRES 20
const int MAX_N_STEP = 100000;
const int EPSILON1 = 687194767; //1030792151; //fixed = 0.32
const int EPSILON2 = 515396076;//515396076; //varied
#define MAX_CONTRA 40000

int LargeX[N_VARIABLE+1][2];
int Y[N_VARIABLE+1][2];
int L[N_VARIABLE+1][2];
int Z[N_VARIABLE+1][2];
int f[N_CLAUSE][N_LITERAL];
char x[N_VARIABLE+1];
char x_fixed[N_VARIABLE+1];
int inter[3*N_CLAUSE][6];
int size_inter;
int size_contra;
int contra_new[MAX_CONTRA][8];
int conn[N_VARIABLE+1][2]; //connections# of all variables

unsigned state[1];

void init();
void update_Y();
void update_Z();
int update_f();
void update_LargeX();
void update_x();
int sign_x(int x);
int loadformula(char *filename);
void generate_inter();
int survey_size_contra();
void generate_contra(int size_contra, int **contra, int contra_new[MAX_CONTRA][8]);
void update_L_intra();
void update_L_inter(int inter[3*N_CLAUSE][6]);
void update_L_contra(int size_contra, int contra[size_contra][8]);
void update_L_collapse(int inter[3*N_CLAUSE][6]);
int amoebasat(char s[N_VARIABLE+100]);
void count_connection(int inter[3*N_CLAUSE][6], int contra_new[MAX_CONTRA][8]);

FILE *fp1;
FILE *fp2; //write down connections#

int main(int argc, char* argv[]) {
    char filename[128]="benchmarks/SATC/test_8_8_8_out2.cnf";
    char logfile[128];
    //strcpy(filename, argv[1]);
    strncpy(logfile,filename,strlen(filename)-4);
    strcat(logfile,"-log.txt");

    char s[N_VARIABLE+100]; //output solution
    fp1 = fopen(logfile,"w+");
    int NStep = 0;
    int NStep_avg = 0;
    int i;

    if (!loadformula(filename)) {
        return 1;
    }

    generate_inter();
    size_contra = survey_size_contra();
	int **contra = malloc(sizeof(int *) * size_contra);
	for (i=0;i<size_contra;i++) {
		contra[i] = malloc(sizeof(int) * 8);
	}
    generate_contra(size_contra, contra, contra_new);
    count_connection(inter,contra_new);
    srand(time(NULL));
    for(i=0;i<100;i++){
        state[0] = rand();
        init();

    	if(i!=0){
	    	printf("\n");
	        fprintf(fp1,"\n");
	        }
        printf("Run %d: seed = %d",i+1,state[0]);
        fprintf(fp1,"Run #%d: seed = %d ",i+1,state[0]);
        NStep=amoebasat(s);
        fprintf(fp1,s);
        NStep_avg+=NStep;
    }
    printf("\nAverage #iterations = %d\n", NStep_avg/i);
    fprintf(fp1,"\nAverage #iterations = %d", NStep_avg/i);
    //for(i=1;i<=N_VARIABLE;i++) printf("%d", x[i]);
    fclose(fp1);
    return 0;
}
int loadformula(char *filename) {
    FILE *fp;
    char str[255];
    char *token;
    int j; // i = order of token; j = 0,1,2 -> 3 literals per clause
    int clause_id = 0;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }
    else {
        printf("%s ", filename);
        while (!feof(fp)) {
            fgets(str, 255, fp);
            // get N_LITERAL, N_CLAUSE
            if (strstr(str, "p cnf")) {
                continue;
            }
            //skip reading first lines begin with c
            else if (strstr(str, "c"))
                continue;
            // get Clause parameters
            else {
                token = strtok(str, " ,\t\n");
                if (strstr(str, "%"))
                    break;
                f[clause_id][0] = atoi(token);
                for (j = 1; j < N_LITERAL; j++) {
                    token = strtok(NULL, " ,\t\n");
                    f[clause_id][j] = atoi(token);      //f[literal][clause_id]
                    if(j==1 && f[clause_id][j]==0){
                        int xi = abs(f[clause_id][0]);
                        int xi_sign = sign_x(f[clause_id][0]);
                        x[xi] = 1-xi_sign;
                        x_fixed[xi]=1;
                        //printf("x%d fixed = %d \n", xi, x[xi]);
                    }
                }
                //printf("\nClause%d:\t%d\t%d\t%d",clause_id,f[clause_id][0],f[clause_id][1],f[clause_id][2]);
                clause_id++;
            }
        }
        fclose(fp);
    }
    return 1;
}
int amoebasat(char s[N_VARIABLE+100]){
    char tmp[N_VARIABLE+100];
    int NStep;
    for(NStep=1;NStep<MAX_N_STEP;NStep++){
        update_L_intra();
        update_L_inter(inter);
        update_L_contra(size_contra, contra_new);
        //update_L_collapse(inter);
        int i,j;
        update_Z();
        update_Y();
        update_LargeX();
        update_x();

        if(update_f()){
            sprintf(s,"\nFound: %d iterations ", NStep);
            //for(i=0;i<N_VARIABLE;i++) printf("%d",x[i]);
            for(i=1;i<=N_VARIABLE;i++) {
                sprintf(tmp,"%d",x[i]);
                strcat(s,tmp);
            }
            printf("%s",s);
            return NStep;
        }
    }
    printf("\nNot found.");

    return NStep;
}
unsigned xorshift32(unsigned state[1])
{
	/* Algorithm "xor" from p. 4 of Marsaglia, "Xorshift RNGs" */
	unsigned z0= state[0];
	z0 ^= z0 << 13;
	z0 ^= z0 >> 17;
	z0 ^= z0 << 5;
	state[0] = z0;
	return z0;
}
void init(){
    int i, j;
    LargeX[0][0]=1;
    for(i=1;i<=N_VARIABLE;i++){
        //x[i]=0;
        for(j=0;j<2;j++){
            LargeX[i][j]=0;
            L[i][j]=0;
            while(Z[i][j]==0||Z[i][j]==0x40000000UL){
                Z[i][j] = xorshift32(state)>>1;
            }
            //printf("Z[%d][%d]=%d\t",i,j,Z[i][j]);
        }
    }
}
void update_Z(){
    int i, j;
    for(i=1; i<=N_VARIABLE; i++){
        for(j=0; j<2; j++){
            //input bit = x30 ^ x20 ^ x10
            int bit30 = (Z[i][j] & ( 1 << 30 )) >> 30;
            int bitx = (Z[i][j] & ( 1 << 20 )) >> 20;
            bit30 = bit30 ^ bitx;
            bitx = (Z[i][j] & ( 1 << 10 )) >> 10;
            bit30 = bit30 ^ bitx;
            if(Z[i][j]<0x40000000UL){   //if <0.5
                Z[i][j] = Z[i][j]<<1;
                Z[i][j] += bit30;

            }else{
                Z[i][j] = ((0xffffffffUL ^ Z[i][j])+1)<<1;
                Z[i][j] += bit30;
            }
            //printf("Z[%d][%d]=%d\t",i,j,Z[i][j]);
        }
    }
}
void update_x(){
    int i;
    for(i=1; i<=N_VARIABLE; i++){
        if(x_fixed[i]<1 && LargeX[i][0]==1 && LargeX[i][1]<=0){
            x[i] = 0;
        }else if(x_fixed[i]<1 && LargeX[i][1]==1 && LargeX[i][0]<=0){
            x[i] = 1;
        }
        //printf("x[%d]=%d \t", i, x[i]);
    }
}
void update_Y(){
    int i, j;
    for(i=1;i<=N_VARIABLE;i++){
        for(j=0; j<2; j++){
			int sub;
			if(conn[i][j]>CONN_THRES) sub = 2147483647 - EPSILON1 - Z[i][j] +1;
			else sub = 2147483647 - EPSILON2 - Z[i][j] +1;
			Y[i][j] = (!L[i][j]) & (sub>0);
            //printf("Y[%d][%d]=%d\t ",i,j,Y[i][j]);
        }
    }
}
void update_LargeX(){
    int i,j;
    for(i=1;i<=N_VARIABLE;i++){
        for(j=0;j<=1;j++){
            if(Y[i][j]==1 && LargeX[i][j]<1){
                LargeX[i][j]++;
            }else if(Y[i][j]==0 && LargeX[i][j]>-1){
                LargeX[i][j]--;
            }
        }
    }
}
int sign_x(int x){
    if(x>=0) return 0;
    else return 1;
}
int update_f(){
    int clause_id;
    int f_val = 1;
    for(clause_id=0; clause_id<N_CLAUSE; clause_id++){
        int id1, id2, id3;
        int c1, c2, c3;
        id1 = f[clause_id][0];
        id2 = f[clause_id][1];
        id3 = f[clause_id][2];
        if(id2==0) continue;
        c1 = sign_x(id1) ^ x[abs(id1)];
        c2 = sign_x(id2) ^ x[abs(id2)];
        c3 = sign_x(id3) ^ x[abs(id3)];

        f_val = f_val && (c1 || c2 || c3);
        if (f_val==0) {
            //printf("unsat clause id = %d: %d %d %d \n",clause_id, id1, id2, id3);
            return f_val;
        }
    }
    return f_val;
}
void generate_inter(){
    int i;
    size_inter=0;
    for(i=0; i<N_CLAUSE; i++){
        //-------- generate inter set size 3x
        int interQ, interQ_abs, interP1, interP1_abs, interP2, interP2_abs;
        if(f[i][1]==0) {
			//printf("\nClause%d:\t%d\t%d\t%d",i,f[i][0],f[i][1],f[i][2]);
			continue;
		}
		size_inter++;
        interQ = abs(f[i][0]); interQ_abs = sign_x(f[i][0]);
        interP1= abs(f[i][1]); interP1_abs = sign_x(f[i][1]);
        interP2 = abs(f[i][2]); interP2_abs = sign_x(f[i][2]);

        inter[3*i][0] = interP1; inter[3*i][1] = interP1_abs;
        inter[3*i][2] = interP2; inter[3*i][3] = interP2_abs;
        inter[3*i][4] = interQ; inter[3*i][5] = interQ_abs;

        inter[3*i+1][0] = interQ; inter[3*i+1][1] = interQ_abs;
        inter[3*i+1][2] = interP2; inter[3*i+1][3] = interP2_abs;
        inter[3*i+1][4] = interP1; inter[3*i+1][5] = interP1_abs;

        inter[3*i+2][0] = interQ; inter[3*i+2][1] = interQ_abs;
        inter[3*i+2][2] = interP1; inter[3*i+2][3] = interP1_abs;
        inter[3*i+2][4] = interP2; inter[3*i+2][5] = interP2_abs;
    }
    printf("\nSize inter = %d ", size_inter);
}
int survey_size_contra(){
    //Survey size of contra
    int i,j;
    int size_contra=0;
    for(i=0; i<3*N_CLAUSE; i=i+3){
        for(j=i+3; j<3*N_CLAUSE; j++){
            if(inter[i][4]==inter[j][4] && inter[i][5]!=inter[j][5]) size_contra++;
            if(inter[i+1][4]==inter[j][4] && inter[i+1][5]!=inter[j][5]) size_contra++;
            if(inter[i+2][4]==inter[j][4] && inter[i+2][5 ]!=inter[j][5]) size_contra++;
        }
    }
    //printf("Size contra = %d\n", size_contra);
    return size_contra;
}
void generate_contra(int size_contra, int **contra, int contra_new[MAX_CONTRA][8]){
    int i,j,k;
    int size_contra0, size_contra1, counter;
    counter = 0;

    int contra0[N_CLAUSE][4];
    int contra1[N_CLAUSE][4];
    for(i=1; i<=N_VARIABLE; i++){
        size_contra0 = 0;
        size_contra1 = 0;
        for(j=0; j<3*N_CLAUSE; j++){
            if(inter[j][4]==i){
                if(inter[j][5]==0){
                    contra0[size_contra0][0] = inter[j][0];
                    contra0[size_contra0][1] = inter[j][1];
                    contra0[size_contra0][2] = inter[j][2];
                    contra0[size_contra0][3] = inter[j][3];
                    //printf("\ncontra0[%d]: %d%d , %d%d", size_contra0, contra0[size_contra0][0], contra0[size_contra0][1], contra0[size_contra0][2], contra0[size_contra0][3]);
                    size_contra0++;
                }else{
                    contra1[size_contra1][0] = inter[j][0];
                    contra1[size_contra1][1] = inter[j][1];
                    contra1[size_contra1][2] = inter[j][2];
                    contra1[size_contra1][3] = inter[j][3];
                    //printf("\ncontra1[%d]: %d%d , %d%d", size_contra1, contra1[size_contra1][0], contra1[size_contra1][1], contra1[size_contra1][2], contra1[size_contra1][3]);
                    size_contra1++;
                }
            }
        }
        for(j=0; j<size_contra0; j++){
            for(k=0; k<size_contra1; k++){
                contra[counter][0] = contra0[j][0];
                contra[counter][1] = contra0[j][1];
                contra[counter][2] = contra0[j][2];
                contra[counter][3] = contra0[j][3];

                contra[counter][4] = contra1[k][0];
                contra[counter][5] = contra1[k][1];
                contra[counter][6] = contra1[k][2];
                contra[counter][7] = contra1[k][3];

                counter++;
            }
        }
    }
    //clear redundant lines from contra: if there's a line containing 2 counterparts of a unit, for ex 8 0 8 1, the rule is never contradicted, so no need to check
    int counter_new = 0;
    for(k=0; k<size_contra; k++){
        if(contra[k][0]==contra[k][4] && contra[k][1]==(1-contra[k][5]) ) {
            //printf("\nc1=c3 %d %d , %d %d , %d %d , %d %d", contra[k][0], contra[k][1], contra[k][2], contra[k][3], contra[k][4], contra[k][5], contra[k][6], contra[k][7]);
            continue;
        }
        else if(contra[k][0]==contra[k][6] && contra[k][1]==(1-contra[k][7]) ) {
            //printf("\nc1=c4 %d %d , %d %d , %d %d , %d %d", contra[k][0], contra[k][1], contra[k][2], contra[k][3], contra[k][4], contra[k][5], contra[k][6], contra[k][7]);
            continue;
        }
        else if(contra[k][2]==contra[k][4] && contra[k][3]==(1-contra[k][5]) ) {
            //printf("\nc2=c3 %d %d , %d %d , %d %d , %d %d", contra[k][0], contra[k][1], contra[k][2], contra[k][3], contra[k][4], contra[k][5], contra[k][6], contra[k][7]);
            continue;
        }
        else if(contra[k][2]==contra[k][6] && contra[k][3]==(1-contra[k][7]) ) {
            //printf("\nc2=c4 %d %d , %d %d , %d %d , %d %d", contra[k][0], contra[k][1], contra[k][2], contra[k][3], contra[k][4], contra[k][5], contra[k][6], contra[k][7]);
            continue;
        }
        contra_new[counter_new][0] = contra[k][0];
        contra_new[counter_new][1] = contra[k][1];
        contra_new[counter_new][2] = contra[k][2];
        contra_new[counter_new][3] = contra[k][3];
        contra_new[counter_new][4] = contra[k][4];
        contra_new[counter_new][5] = contra[k][5];
        contra_new[counter_new][6] = contra[k][6];
        contra_new[counter_new][7] = contra[k][7];
        counter_new++;
    }
    size_contra=counter_new;
    printf("Size contra = %d\n", size_contra);
}
void update_L_intra(){
    int i,j;
    for(i=1;i<=N_VARIABLE;i++){
    	L[i][0] = (LargeX[i][1]>0);
    	L[i][1] = (LargeX[i][0]>0);
    }
}
void update_L_inter(int inter[3*N_CLAUSE][6]){
    int i;
    for(i=0;i<3*size_inter;i++){
        //printf("\nClause%d:\t%d\t%d\t%d",i,f[i][0],f[i][1],f[i][2]);
        int id1 = inter[i][0];
        int id2 = inter[i][2];
        int inter1;
        if(id1>0 && id2>0){
            inter1 = (LargeX[ inter[i][2] ][ inter[i][3] ] >0) & (LargeX[ inter[i][0] ][ inter[i][1] ] >0);
        }else if(id1==0){
            inter1 = (LargeX[ inter[i][2] ][ inter[i][3] ] >0);
        }else if(id2==0){
            inter1 = (LargeX[ inter[i][0] ][ inter[i][1] ] >0);
        }else if(id1==0 && id2==0){
            inter1 = 0;
        }
        //INTER
        L[ inter[i][4] ][ inter[i][5] ] = L[ inter[i][4] ][ inter[i][5] ] | inter1;
        //COLLAPSE
        L[ inter[i][4] ][ 1-inter[i][5] ] = L[ inter[i][4] ][ 1-inter[i][5] ] & (!inter1);
    }
}
void update_L_collapse(int inter[3*N_CLAUSE][6]){
    int i;
    for(i=0;i<3*N_CLAUSE;i++){
        //if(inter[i][0]==0 && inter[i][2]==0) continue;
        int id1 = inter[i][0];
        int id2 = inter[i][2];
        int inter1;
        if(id1>0 && id2>0){
            inter1 = (LargeX[ inter[i][2] ][ inter[i][3] ] >0) & (LargeX[ inter[i][0] ][ inter[i][1] ] >0);
        }else if(id1==0){
            inter1 = (LargeX[ inter[i][2] ][ inter[i][3] ] >0);
        }else if(id2==0){
            inter1 = (LargeX[ inter[i][0] ][ inter[i][1] ] >0);
        }else if(id1==0 && id2==0){
            inter1 = 0;
        }
        //COLLAPSE
        L[ inter[i][4] ][ 1-inter[i][5] ] = L[ inter[i][4] ][ 1-inter[i][5] ] & (!inter1);
    }
}
void update_L_contra(int size_contra, int contra[size_contra][8]){
    int i, j;
    for(i=0;i<size_contra;i++){
        int contra1;
        //int id1 = contra[i][0];
        int id2 = contra[i][2];
        //int id3 = contra[i][4];
        int id4 = contra[i][6];
        if(id2==0 && id4==0){
            contra1 = (LargeX[ contra[i][0] ][ contra[i][1] ]>0) & (LargeX[ contra[i][4] ][ contra[i][5] ]>0);
        }else if(id2==0){
            contra1 = (LargeX[ contra[i][0] ][ contra[i][1] ]>0) & (LargeX[ contra[i][4] ][ contra[i][5] ]>0) & (LargeX[ contra[i][6] ][ contra[i][7] ]>0);
        }else if(id4==0){
            contra1 = (LargeX[ contra[i][0] ][ contra[i][1] ]>0) & (LargeX[ contra[i][2] ][ contra[i][3] ]>0) & (LargeX[ contra[i][4] ][ contra[i][5] ]>0);
        }else{
            contra1 = (LargeX[ contra[i][0] ][ contra[i][1] ]>0) &
                (LargeX[ contra[i][2] ][ contra[i][3] ]>0) &
                (LargeX[ contra[i][4] ][ contra[i][5] ]>0) &
                (LargeX[ contra[i][6] ][ contra[i][7] ]>0);
        }

        //CONTRA - Light on CONTRA units - not good with CONFLICT only
        if(contra1){
            L[ contra[i][0] ][ contra[i][1] ] = 1;
            L[ contra[i][2] ][ contra[i][3] ] = 1;
            L[ contra[i][4] ][ contra[i][5] ] = 1;
            L[ contra[i][6] ][ contra[i][7] ] = 1;
        }
    }
}
void count_connection(int inter[3*N_CLAUSE][6], int contra_new[MAX_CONTRA][8]){
    int i, j; //unit index
    int k, l, m, n;
    fp2=fopen("conn.txt","w+");
    //write all rules for unit X[1][0]
    for(i=1;i<=N_VARIABLE;i++){
        if(x_fixed[i]==1) continue;
        for(j=0;j<=1;j++){
            //initialize connections# of unit[i][j]
            int connections[N_VARIABLE+1][2]; //connections# of only unit[i][j], each element represent wire (0 or 1) between unit [i][j] and another unit
            int connection_count=0;
            for (k=1;k<=N_VARIABLE;k++){
                connections[k][0]=0;
                connections[k][1]=0;
            }

            //Count connections (rules) from inter
            for(k=0;k<N_CLAUSE;k++){
                if(inter[3*k][0]==i && inter[3*k][1]==j){
                    //write to connections
                    connections[ inter[3*k][2] ][ inter[3*k][3] ] = 1;
                    connections[ inter[3*k][4] ][ inter[3*k][5] ] = 1;
                }
                if(inter[3*k][2]==i && inter[3*k][3]==j){
                    //write to connections
                    connections[ inter[3*k][0] ][ inter[3*k][1] ] = 1;
                    connections[ inter[3*k][4] ][ inter[3*k][5] ] = 1;
                }
                if(inter[3*k][4]==i && inter[3*k][5]==j){
                    //write to connections
                    connections[ inter[3*k][0] ][ inter[3*k][1] ] = 1;
                    connections[ inter[3*k][2] ][ inter[3*k][3] ] = 1;
                }
            }
            //Count connections (rules) from contra
            for(k=0;k<size_contra;k++){
                for(l=0;l<8;l=l+2){
                    if(contra_new[k][l]==i && contra_new[k][l+1]==j){
                        //int ok=1;
                        for(m=0;m<8;m=m+2){
                            if(m==l) continue;
                            if(contra_new[k][m]==i && contra_new[k][m+1]==j){
                                continue;
                            }
                            //write to connections
                            connections[ contra_new[k][m] ][ contra_new[k][m+1] ] = 1;
                        }
                        break;
                    }
                }
            }
            //Count connections#
            for(k=1;k<=N_VARIABLE;k++){
                connection_count+=connections[k][0] + connections[k][1];
                conn[i][j] = connection_count;
            }
            //print out connections# of unit[i][j]
            //printf("unit(%d,%d)'connections= %d\n",i,j,conn[i][j]);
            fprintf(fp2,"%d\n",connection_count);
        }
    }
    //fclose(fp2);
}
void update_L(){
    update_L_intra();
    update_L_inter(inter);
    update_L_contra(size_contra, contra_new);
    update_L_collapse(inter);
}
