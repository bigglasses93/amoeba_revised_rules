#include<stdio.h>
//#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N_VARIABLE 212
#define N_CLAUSE 478 //9
#define N_LITERAL 3
const int MAX_N_STEP = 1500;
const int EPSILON = 687194767; //429496730;//536870912;
#define MAX_CONTRA 150000

int LargeX[N_VARIABLE+1][2];
int Y[N_VARIABLE+1][2];
int L[N_VARIABLE+1][2];
int Z[N_VARIABLE+1][2];
int f[N_CLAUSE][N_LITERAL];
<<<<<<< HEAD
<<<<<<< HEAD
char x[N_VARIABLE+1];
char x_fixed[N_VARIABLE+1];
int inter[3*N_CLAUSE][6];
=======
<<<<<<< HEAD
char x[N_VARIABLE+1];
char x_fixed[N_VARIABLE+1];
int inter[3*N_CLAUSE][6];
=======
char x[N_VARIABLE+1];
char x_fixed[N_VARIABLE+1];
int inter[3*N_CLAUSE][6];
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
char x[N_VARIABLE+1];
char x_fixed[N_VARIABLE+1];
int inter[3*N_CLAUSE][6];
>>>>>>> hotfix
<<<<<<< HEAD
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
int size_inter;
int size_contra;
int contra_new[MAX_CONTRA][8];

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
void generate_contra(int size_contra, int contra[size_contra][8], int contra_new[MAX_CONTRA][8]);
void update_L_intra();
void update_L_inter(int inter[3*N_CLAUSE][6]);
void update_L_contra(int size_contra, int contra[size_contra][8]);
int amoebasat(char s[N_VARIABLE+100]);
void create_local_rules(int inter[3*N_CLAUSE][6], int contra_new[MAX_CONTRA][8]);

FILE *fp1;
int main() {
    char filename[128]="test33_5_6_6_out.cnf";
    char logfile[128]= "test33_5_6_6_log.txt";
    //strncpy(logfile,filename,strlen(filename)-4);
    //strcat(logfile,"-log.txt");
    char s[N_VARIABLE+100]; //output solution
    fp1 = fopen(logfile,"w+");
    int NStep = 0;
    int NStep_avg = 0;
    int i;

    if (!loadformula(filename)) {
        return 1;
    }

    generate_inter();
    srand(time(NULL));
    for(i=0;i<100;i++){
        state[0] = rand();
        init();

        printf("\nRun %d: seed = %d",i+1,state[0]);
        fprintf(fp1,"\nRun #%d: seed = %d ",i+1,state[0]);
        NStep=amoebasat(s);
        fprintf(fp1,s);
        NStep_avg+=NStep;
    }
    printf("\nAverage #iterations = %d\n", NStep_avg/i);
<<<<<<< HEAD
<<<<<<< HEAD
    fprintf(fp1,"\nAverage #iterations = %d", NStep_avg/i);
=======
<<<<<<< HEAD
    fprintf(fp1,"\nAverage #iterations = %d", NStep_avg/i);
=======
    fprintf(fp1,"\nAverage #iterations = %d", NStep_avg/i);
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
    fprintf(fp1,"\nAverage #iterations = %d", NStep_avg/i);
=======
    fprintf(fp1,"\nAverage #iterations = %d", NStep_avg/i);
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
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
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
                    f[clause_id][j] = atoi(token);      //f[literal][clause_id]
                    if(j==1 && f[clause_id][j]==0){
                        int xi = abs(f[clause_id][0]);
                        int xi_sign = sign_x(f[clause_id][0]);
                        x[xi] = 1-xi_sign;
                        x_fixed[xi]=1;
                        printf("x[%d] = %d; x_fixed[%d] = %d; satisfiable[%d][0]=1; satisfiable[%d][1]=1;\n", xi, x[xi], xi, x[xi], xi, xi);
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
                    f[clause_id][j] = atoi(token);      //f[literal][clause_id]
                    if(j==1 && f[clause_id][j]==0){
                        int xi = abs(f[clause_id][0]);
                        int xi_sign = sign_x(f[clause_id][0]);
                        x[xi] = 1-xi_sign;
                        x_fixed[xi]=1;
                        printf("x[%d] = %d; x_fixed[%d] = %d; satisfiable[%d][0]=1; satisfiable[%d][1]=1;\n", xi, x[xi], xi, x[xi], xi, xi);
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
                    f[clause_id][j] = atoi(token);      //f[literal][clause_id]
                    if(j==1 && f[clause_id][j]==0){
                        int xi = abs(f[clause_id][0]);
                        int xi_sign = sign_x(f[clause_id][0]);
                        x[xi] = 1-xi_sign;
                        x_fixed[xi]=1;
                        printf("x[%d] = %d; x_fixed[%d] = %d; satisfiable[%d][0]=1; satisfiable[%d][1]=1;\n", xi, x[xi], xi, x[xi], xi, xi);
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
                    }
                }
                printf("\nClause%d:\t%d\t%d\t%d",clause_id,f[clause_id][0],f[clause_id][1],f[clause_id][2]);
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
        int i,j;
        update_Z();
        //update_Y();
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
<<<<<<< HEAD
<<<<<<< HEAD
    int i, j;
=======
<<<<<<< HEAD
    int i, j;
=======
    int i, j;
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
    int i, j;
=======
    int i, j;
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
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
<<<<<<< HEAD
<<<<<<< HEAD
			int sub = 2147483647 - EPSILON - Z[i][j] +1;
=======
<<<<<<< HEAD
			int sub = 2147483647 - EPSILON - Z[i][j] +1;
=======
			int sub = 2147483647 - EPSILON - Z[i][j] +1;
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
			int sub = 2147483647 - EPSILON - Z[i][j] +1;
=======
			int sub = 2147483647 - EPSILON - Z[i][j] +1;
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
			Y[i][j] = (!L[i][j]) & (sub>0);
            //printf("Y[%d][%d]=%d\t ",i,j,Y[i][j]);
        }
    }
}
void update_LargeX(){
    int i,j;
    //New version of LargeX (merged with Y)
    for(i=1;i<=N_VARIABLE;i++){
        for(j=0;j<=1;j++){
            if(L[i][j]==1 && LargeX[i][j]>-1) LargeX[i][j]--;
            else if(L[i][j]==0){
                int sub = 2147483647 - EPSILON - Z[i][j] +1;
                //if Z > 1- epsilon, X expands; otherwise shrink
                if(sub>0 && LargeX[i][j]<1){
                    LargeX[i][j]++;
                }else if(sub<0 && LargeX[i][j]>-1){
                    LargeX[i][j]--;
                }
            }else if(L[i][j]==2) LargeX[i][j]==-1;
        }
    }

    /*for(i=0;i<N_VARIABLE;i++){
        for(j=0;j<=1;j++){
            if(Y[i][j]==1 && LargeX[i][j]<1){
                LargeX[i][j]++;
            }else if(Y[i][j]==0 && LargeX[i][j]>-1){
                LargeX[i][j]--;
            }
        }
    }*/
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
        c1 = sign_x(id1) ^ x[abs(id1)];
        c2 = sign_x(id2) ^ x[abs(id2)];
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
        if(id3==0){
            c3 = 0;
        }else{
            c3 = sign_x(id3) ^ x[abs(id3)];
        }

/*        if(id3==0){
            f_val = f_val && (c1 || c2);
        }else{
            f_val = f_val && (c1 || c2 || c3);
        }*/
        f_val = f_val && (c1 || c2 || c3);
        if (f_val==0) {
            //printf("unsat clause id = %d: %d %d %d \n",clause_id, id1, id2, id3);
            return f_val;
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
        if(id3==0){
            c3 = 0;
        }else{
            c3 = sign_x(id3) ^ x[abs(id3)];
        }

/*        if(id3==0){
            f_val = f_val && (c1 || c2);
        }else{
            f_val = f_val && (c1 || c2 || c3);
        }*/
        f_val = f_val && (c1 || c2 || c3);
        if (f_val==0) {
            //printf("unsat clause id = %d: %d %d %d \n",clause_id, id1, id2, id3);
            return f_val;
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
        if(id3==0){
            c3 = 0;
        }else{
            c3 = sign_x(id3) ^ x[abs(id3)];
        }

/*        if(id3==0){
            f_val = f_val && (c1 || c2);
        }else{
            f_val = f_val && (c1 || c2 || c3);
        }*/
        f_val = f_val && (c1 || c2 || c3);
        if (f_val==0) {
            //printf("unsat clause id = %d: %d %d %d \n",clause_id, id1, id2, id3);
            return f_val;
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
        }
    }
    return f_val;
}
void generate_inter(){
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
    int i;
    size_inter=0;
    for(i=0; i<N_CLAUSE; i++){
        //-------- generate inter set size 3x
        int interQ, interQ_abs, interP1, interP1_abs, interP2, interP2_abs;
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
    int i;
    size_inter=0;
    for(i=0; i<N_CLAUSE; i++){
        //-------- generate inter set size 3x
        int interQ, interQ_abs, interP1, interP1_abs, interP2, interP2_abs;
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
    int i;
    size_inter=0;
    for(i=0; i<N_CLAUSE; i++){
        //-------- generate inter set size 3x
        int interQ, interQ_abs, interP1, interP1_abs, interP2, interP2_abs;
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
        if(f[i][1]==0) continue;

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
<<<<<<< HEAD
<<<<<<< HEAD

=======
<<<<<<< HEAD

=======

>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======

=======

>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
        size_inter++;
    }
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
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
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
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
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
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
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
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
        }
        //INTER
        L[ inter[i][4] ][ inter[i][5] ] = L[ inter[i][4] ][ inter[i][5] ] | inter1;
        //COLLAPSE
        //L[ inter[i][4] ][ 1-inter[i][5] ] = L[ inter[i][4] ][ 1-inter[i][5] ] & (!inter1);
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
        //printf("ok %d ", L[ inter[i][0]-1 ][ inter[i][1] ]);



/*        int id0 = inter[i][0];
    	int id1 = inter[i][1];
    	int id2 = inter[i][2];
    	int inter1;
    	if(id1>0){
    		inter1 = (LargeX[ inter[i][0] ][ inter[i][1] ] >0) & (LargeX[ inter[i][2] ][ inter[i][3] ] >0) & (LargeX[ inter[i][4] ][ inter[i][5] ] >0);
    	}else{
    		inter1 = (LargeX[ inter[i][0] ][ inter[i][1] ] >0)& (LargeX[ inter[i][4] ][ inter[i][5] ] >0);
    	}
    	//cout << "X[" << inter[i][0]-1 << "]["<< inter[i][1] <<"]="<<X_inter01 << "\n";

       L[ inter[i][0] ][ inter[i][1] ] = L[ inter[i][0] ][ inter[i][1] ] | inter1;
       //cout << "L[" <<inter[i][0]-1 <<"]["<< inter[i][1] <<"]="<<L[ inter[i][0]-1 ][ inter[i][1] ] << "\n";
       L[ inter[i][2] ][ inter[i][3] ] = L[ inter[i][2] ][ inter[i][3] ] | inter1;
       L[ inter[i][4] ][ inter[i][5] ] = L[ inter[i][4] ][ inter[i][5] ] | inter1;*/


    }
}
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
        //printf("ok %d ", L[ inter[i][0]-1 ][ inter[i][1] ]);



/*        int id0 = inter[i][0];
    	int id1 = inter[i][1];
    	int id2 = inter[i][2];
    	int inter1;
    	if(id1>0){
    		inter1 = (LargeX[ inter[i][0] ][ inter[i][1] ] >0) & (LargeX[ inter[i][2] ][ inter[i][3] ] >0) & (LargeX[ inter[i][4] ][ inter[i][5] ] >0);
    	}else{
    		inter1 = (LargeX[ inter[i][0] ][ inter[i][1] ] >0)& (LargeX[ inter[i][4] ][ inter[i][5] ] >0);
    	}
    	//cout << "X[" << inter[i][0]-1 << "]["<< inter[i][1] <<"]="<<X_inter01 << "\n";

       L[ inter[i][0] ][ inter[i][1] ] = L[ inter[i][0] ][ inter[i][1] ] | inter1;
       //cout << "L[" <<inter[i][0]-1 <<"]["<< inter[i][1] <<"]="<<L[ inter[i][0]-1 ][ inter[i][1] ] << "\n";
       L[ inter[i][2] ][ inter[i][3] ] = L[ inter[i][2] ][ inter[i][3] ] | inter1;
       L[ inter[i][4] ][ inter[i][5] ] = L[ inter[i][4] ][ inter[i][5] ] | inter1;*/


    }
}
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
        //printf("ok %d ", L[ inter[i][0]-1 ][ inter[i][1] ]);



/*        int id0 = inter[i][0];
    	int id1 = inter[i][1];
    	int id2 = inter[i][2];
    	int inter1;
    	if(id1>0){
    		inter1 = (LargeX[ inter[i][0] ][ inter[i][1] ] >0) & (LargeX[ inter[i][2] ][ inter[i][3] ] >0) & (LargeX[ inter[i][4] ][ inter[i][5] ] >0);
    	}else{
    		inter1 = (LargeX[ inter[i][0] ][ inter[i][1] ] >0)& (LargeX[ inter[i][4] ][ inter[i][5] ] >0);
    	}
    	//cout << "X[" << inter[i][0]-1 << "]["<< inter[i][1] <<"]="<<X_inter01 << "\n";

       L[ inter[i][0] ][ inter[i][1] ] = L[ inter[i][0] ][ inter[i][1] ] | inter1;
       //cout << "L[" <<inter[i][0]-1 <<"]["<< inter[i][1] <<"]="<<L[ inter[i][0]-1 ][ inter[i][1] ] << "\n";
       L[ inter[i][2] ][ inter[i][3] ] = L[ inter[i][2] ][ inter[i][3] ] | inter1;
       L[ inter[i][4] ][ inter[i][5] ] = L[ inter[i][4] ][ inter[i][5] ] | inter1;*/


    }
}
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
