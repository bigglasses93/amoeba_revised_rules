#include<stdio.h>
#include "local_rules.h"
//#include "local_rules_update.c"
#include<string.h>
#include<time.h>
#define N_VARIABLE 50
#define N_CLAUSE 218 //9
#define N_LITERAL 3
const int MAX_N_STEP = 100000;
const int EPSILON = 687194767; //429496730;//536870912;
#define MAX_CONTRA 10000

int LargeX[N_VARIABLE+1][2];
int Y[N_VARIABLE+1][2];
int L[N_VARIABLE+1][2];
int Z[N_VARIABLE+1][2];
int satisfiable[N_VARIABLE+1][2];
int f[N_CLAUSE][N_LITERAL];
char x[N_VARIABLE+1];
int inter[3*N_CLAUSE][6];
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

FILE *fp1; //z
FILE *fp2; //inter
FILE *fp3; //contra
FILE *fp4; //local rules

int main() {
    char filename[128]="uf50-0100.cnf";
    char logfile[128];

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
    int contra[size_contra][8];
    generate_contra(size_contra, contra, contra_new);
    srand(time(NULL));
    for(i=0;i<1;i++){
        state[0] = rand();
        init();

        printf("\nRun %d: seed = %d",i+1,state[0]);
        fprintf(fp1,"\nRun #%d: seed = %d ",i+1,state[0]);
        NStep=amoebasat(s);
        fprintf(fp1,s);
        NStep_avg+=NStep;
    }
    printf("\nAverage #iterations = %d", NStep_avg/i);
    fprintf(fp1,"\nAverage #iterations = %d", NStep_avg/i);
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
                }
                //printf("Clause%d:\t%d\t%d\t%d\n",clause_id,f[clause_id][0],f[clause_id][1],f[clause_id][2]);
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
        update_L(L,LargeX,x,satisfiable);
        int i,j;
        update_Z();//printf("\n");
        //update_Y();
        update_LargeX();
        update_x();

        if(update_f()){
            sprintf(s,"\nFound: %d iterations ", NStep);
            //for(i=0;i<N_VARIABLE;i++) printf("%d",x[i]);
            for(i=0;i<N_VARIABLE;i++) {
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
	/* Algorithm "^" from p. 4 of Marsaglia, "^shift RNGs" */
	unsigned z0= state[0];
	z0 ^= z0 << 13;
	z0 ^= z0 >> 17;
	z0 ^= z0 << 5;
	state[0] = z0;
	return z0;
}
void init(){
    int i, j;
    for(i=1;i<=N_VARIABLE;i++){
        x[i]=0;
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
        if(LargeX[i][0]==1 && LargeX[i][1]<=0){
            x[i] = 0;
        }else if(LargeX[i][1]==1 && LargeX[i][0]<=0){
            x[i] = 1;
        }
        //printf("x[%d]=%d \t", i, x[i]);
    }
}
void update_Y(){
    int i, j;
    for(i=1;i<=N_VARIABLE;i++){
        for(j=0; j<2; j++){
            if(L[i][j]==1){
                Y[i][j] = 0;
            }
            else if(L[i][j]==0){
                int sub = 2147483647 - EPSILON - Z[i][j] + 1;
                Y[i][j] = sign_x(-sub);
            }
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
    if(x>0) return 0;
    else return 1;
}
/*int update_f(){
    int clause_id;
    int f_val = 1;
    for(clause_id=0; clause_id<N_CLAUSE; clause_id++){
        int id1, id2, id3;
        int c1, c2, c3;
        id1 = f[clause_id][0];
        id2 = f[clause_id][1];
        id3 = f[clause_id][2];
        c1 = sign_x(id1) ^ x[abs(id1)-1];
        c2 = sign_x(id2) ^ x[abs(id2)-1];
        c3 = sign_x(id3) ^ x[abs(id3)-1];

        f_val = f_val && (c1 || c2 || c3);
        if (f_val==0) return f_val;
    }
    return f_val;
}*/
int update_f(){
    int satisfied = 1;
	for(int i=1;i<=N_VARIABLE;i++){
		satisfied = satisfied & satisfiable[i][0] & satisfiable[i][1];
	}
	return satisfied;
}
void generate_inter(){
    int i;
    fp2 = fopen("inter.h", "w+");
    fp3 = fopen("inter_sign.h", "w+");
    //fprintf(fp2, "int interP2[%d][2] = {\n", 3*N_CLAUSE);

    fprintf(fp2,"six_bit_t inter[N_CLAUSE][3]={\n");
    fprintf(fp3,"one_bit_t inter_signlo[N_CLAUSE][3]={\n");
    for(i=0; i<N_CLAUSE; i++){
        //-------- generate inter set size 3x
        int interQ, interQ_abs, interP1, interP1_abs, interP2, interP2_abs;

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

        //--------- generate inter set size 1x
        //fprintf(fp2, "%d %d %d %d %d %d\n", inter[3*i][0], inter[3*i][1], inter[3*i][2], inter[3*i][3], inter[3*i][4], inter[3*i][5]);
        if(i==(N_CLAUSE-1)) fprintf(fp2, "%d, %d, %d};", inter[3*i][0], inter[3*i][2], inter[3*i][4]);
        else fprintf(fp2, "%d, %d, %d,\n", inter[3*i][0], inter[3*i][2], inter[3*i][4]);

        if(i==(N_CLAUSE-1)) fprintf(fp3, "%d, %d, %d};", inter[3*i][1], inter[3*i][3], inter[3*i][5]);
        else fprintf(fp3, "%d, %d, %d,\n", inter[3*i][1], inter[3*i][3], inter[3*i][5]);
    }
    //fprintf(fp2, "\};");
    fclose(fp2);
    fclose(fp3);
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
void generate_contra(int size_contra, int contra[size_contra][8], int contra_new[MAX_CONTRA][8]){
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

/*        if(i==N_VARIABLE) {
            //printf("\nsize_contra = %d\n", size_contra);
            for(k=0; k<size_contra; k++) {
                printf("\n%d %d , %d %d , %d %d , %d %d", contra[k][0], contra[k][1], contra[k][2], contra[k][3], contra[k][4], contra[k][5], contra[k][6], contra[k][7]);
            }
        }*/
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
    //write to file

    fp2 = fopen("contra.h", "w+");
    fp3 = fopen("contra_sign.h", "w+");
    fprintf(fp2, "six_bit_t contra[%d][4] = {\n", size_contra);
    fprintf(fp3, "one_bit_t contra_sign[%d][4] = {\n", size_contra);
    for(i=0;i<counter_new;i++){
        //fprintf(fp3, "%d %d %d %d %d %d %d %d\n", contra_new[i][0], contra_new[i][1], contra_new[i][2], contra_new[i][3], contra_new[i][4], contra_new[i][5], contra_new[i][6], contra_new[i][7]);
        if(i!=(counter_new-1)){
            fprintf(fp2, "%d, %d, %d, %d,\n", contra_new[i][0], contra_new[i][2], contra_new[i][4], contra_new[i][6]);
            fprintf(fp3, "%d, %d, %d, %d,\n", contra_new[i][1], contra_new[i][3], contra_new[i][5], contra_new[i][7]);
        }
        else {
            fprintf(fp2, "%d, %d, %d, %d};", contra_new[i][0], contra_new[i][2], contra_new[i][4], contra_new[i][6]);
            fprintf(fp3, "%d, %d, %d, %d};", contra_new[i][1], contra_new[i][3], contra_new[i][5], contra_new[i][7]);
        }
    }
    fclose(fp2);
    fclose(fp3);
}
void update_L(int L[N_VARIABLE+1][2], int LargeX[N_VARIABLE+1][2], int x[N_VARIABLE+1], int satisfiable[N_VARIABLE+1][2]){
	//Check all rules of unit[1][0]
	L[1][0] = LargeX[1][1]>0 ? 1 : 0;
	satisfiable[1][0]=1;
	if(!L[1][0]){
		for(int i=0;i<138;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit1_0[i][0] ][ unit1_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit1_0[i][2] ][ unit1_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit1_0[i][4] ][ unit1_0[i][5] ] >0);
			L[1][0] = L[1][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit1_0[i][4]==0){
				satisfiable[1][0]=satisfiable[1][0] & ((x[1] ^ 0) | (x[ unit1_0[i][0] ] ^ unit1_0[i][1]) |(x[ unit1_0[i][2] ] ^ unit1_0[i][3]));
			}
		}
	}
	//Check all rules of unit[1][1]
	L[1][1] = LargeX[1][0]>0 ? 1 : 0;
	satisfiable[1][1]=1;
	if(!L[1][1]){
		for(int i=0;i<51;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit1_1[i][0] ][ unit1_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit1_1[i][2] ][ unit1_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit1_1[i][4] ][ unit1_1[i][5] ] >0);
			L[1][1] = L[1][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit1_1[i][4]==0){
				satisfiable[1][1]=satisfiable[1][1] & ((x[1] ^ 1) | (x[ unit1_1[i][0] ] ^ unit1_1[i][1]) |(x[ unit1_1[i][2] ] ^ unit1_1[i][3]));
			}
		}
	}
	//Check all rules of unit[2][0]
	L[2][0] = LargeX[2][1]>0 ? 1 : 0;
	satisfiable[2][0]=1;
	if(!L[2][0]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit2_0[i][0] ][ unit2_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit2_0[i][2] ][ unit2_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit2_0[i][4] ][ unit2_0[i][5] ] >0);
			L[2][0] = L[2][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit2_0[i][4]==0){
				satisfiable[2][0]=satisfiable[2][0] & ((x[2] ^ 0) | (x[ unit2_0[i][0] ] ^ unit2_0[i][1]) |(x[ unit2_0[i][2] ] ^ unit2_0[i][3]));
			}
		}
	}
	//Check all rules of unit[2][1]
	L[2][1] = LargeX[2][0]>0 ? 1 : 0;
	satisfiable[2][1]=1;
	if(!L[2][1]){
		for(int i=0;i<105;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit2_1[i][0] ][ unit2_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit2_1[i][2] ][ unit2_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit2_1[i][4] ][ unit2_1[i][5] ] >0);
			L[2][1] = L[2][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit2_1[i][4]==0){
				satisfiable[2][1]=satisfiable[2][1] & ((x[2] ^ 1) | (x[ unit2_1[i][0] ] ^ unit2_1[i][1]) |(x[ unit2_1[i][2] ] ^ unit2_1[i][3]));
			}
		}
	}
	//Check all rules of unit[3][0]
	L[3][0] = LargeX[3][1]>0 ? 1 : 0;
	satisfiable[3][0]=1;
	if(!L[3][0]){
		for(int i=0;i<28;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit3_0[i][0] ][ unit3_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit3_0[i][2] ][ unit3_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit3_0[i][4] ][ unit3_0[i][5] ] >0);
			L[3][0] = L[3][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit3_0[i][4]==0){
				satisfiable[3][0]=satisfiable[3][0] & ((x[3] ^ 0) | (x[ unit3_0[i][0] ] ^ unit3_0[i][1]) |(x[ unit3_0[i][2] ] ^ unit3_0[i][3]));
			}
		}
	}
	//Check all rules of unit[3][1]
	L[3][1] = LargeX[3][0]>0 ? 1 : 0;
	satisfiable[3][1]=1;
	if(!L[3][1]){
		for(int i=0;i<90;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit3_1[i][0] ][ unit3_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit3_1[i][2] ][ unit3_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit3_1[i][4] ][ unit3_1[i][5] ] >0);
			L[3][1] = L[3][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit3_1[i][4]==0){
				satisfiable[3][1]=satisfiable[3][1] & ((x[3] ^ 1) | (x[ unit3_1[i][0] ] ^ unit3_1[i][1]) |(x[ unit3_1[i][2] ] ^ unit3_1[i][3]));
			}
		}
	}
	//Check all rules of unit[4][0]
	L[4][0] = LargeX[4][1]>0 ? 1 : 0;
	satisfiable[4][0]=1;
	if(!L[4][0]){
		for(int i=0;i<96;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit4_0[i][0] ][ unit4_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit4_0[i][2] ][ unit4_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit4_0[i][4] ][ unit4_0[i][5] ] >0);
			L[4][0] = L[4][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit4_0[i][4]==0){
				satisfiable[4][0]=satisfiable[4][0] & ((x[4] ^ 0) | (x[ unit4_0[i][0] ] ^ unit4_0[i][1]) |(x[ unit4_0[i][2] ] ^ unit4_0[i][3]));
			}
		}
	}
	//Check all rules of unit[4][1]
	L[4][1] = LargeX[4][0]>0 ? 1 : 0;
	satisfiable[4][1]=1;
	if(!L[4][1]){
		for(int i=0;i<107;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit4_1[i][0] ][ unit4_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit4_1[i][2] ][ unit4_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit4_1[i][4] ][ unit4_1[i][5] ] >0);
			L[4][1] = L[4][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit4_1[i][4]==0){
				satisfiable[4][1]=satisfiable[4][1] & ((x[4] ^ 1) | (x[ unit4_1[i][0] ] ^ unit4_1[i][1]) |(x[ unit4_1[i][2] ] ^ unit4_1[i][3]));
			}
		}
	}
	//Check all rules of unit[5][0]
	L[5][0] = LargeX[5][1]>0 ? 1 : 0;
	satisfiable[5][0]=1;
	if(!L[5][0]){
		for(int i=0;i<40;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit5_0[i][0] ][ unit5_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit5_0[i][2] ][ unit5_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit5_0[i][4] ][ unit5_0[i][5] ] >0);
			L[5][0] = L[5][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit5_0[i][4]==0){
				satisfiable[5][0]=satisfiable[5][0] & ((x[5] ^ 0) | (x[ unit5_0[i][0] ] ^ unit5_0[i][1]) |(x[ unit5_0[i][2] ] ^ unit5_0[i][3]));
			}
		}
	}
	//Check all rules of unit[5][1]
	L[5][1] = LargeX[5][0]>0 ? 1 : 0;
	satisfiable[5][1]=1;
	if(!L[5][1]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit5_1[i][0] ][ unit5_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit5_1[i][2] ][ unit5_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit5_1[i][4] ][ unit5_1[i][5] ] >0);
			L[5][1] = L[5][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit5_1[i][4]==0){
				satisfiable[5][1]=satisfiable[5][1] & ((x[5] ^ 1) | (x[ unit5_1[i][0] ] ^ unit5_1[i][1]) |(x[ unit5_1[i][2] ] ^ unit5_1[i][3]));
			}
		}
	}
	//Check all rules of unit[6][0]
	L[6][0] = LargeX[6][1]>0 ? 1 : 0;
	satisfiable[6][0]=1;
	if(!L[6][0]){
		for(int i=0;i<94;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit6_0[i][0] ][ unit6_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit6_0[i][2] ][ unit6_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit6_0[i][4] ][ unit6_0[i][5] ] >0);
			L[6][0] = L[6][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit6_0[i][4]==0){
				satisfiable[6][0]=satisfiable[6][0] & ((x[6] ^ 0) | (x[ unit6_0[i][0] ] ^ unit6_0[i][1]) |(x[ unit6_0[i][2] ] ^ unit6_0[i][3]));
			}
		}
	}
	//Check all rules of unit[6][1]
	L[6][1] = LargeX[6][0]>0 ? 1 : 0;
	satisfiable[6][1]=1;
	if(!L[6][1]){
		for(int i=0;i<65;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit6_1[i][0] ][ unit6_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit6_1[i][2] ][ unit6_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit6_1[i][4] ][ unit6_1[i][5] ] >0);
			L[6][1] = L[6][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit6_1[i][4]==0){
				satisfiable[6][1]=satisfiable[6][1] & ((x[6] ^ 1) | (x[ unit6_1[i][0] ] ^ unit6_1[i][1]) |(x[ unit6_1[i][2] ] ^ unit6_1[i][3]));
			}
		}
	}
	//Check all rules of unit[7][0]
	L[7][0] = LargeX[7][1]>0 ? 1 : 0;
	satisfiable[7][0]=1;
	if(!L[7][0]){
		for(int i=0;i<19;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit7_0[i][0] ][ unit7_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit7_0[i][2] ][ unit7_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit7_0[i][4] ][ unit7_0[i][5] ] >0);
			L[7][0] = L[7][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit7_0[i][4]==0){
				satisfiable[7][0]=satisfiable[7][0] & ((x[7] ^ 0) | (x[ unit7_0[i][0] ] ^ unit7_0[i][1]) |(x[ unit7_0[i][2] ] ^ unit7_0[i][3]));
			}
		}
	}
	//Check all rules of unit[7][1]
	L[7][1] = LargeX[7][0]>0 ? 1 : 0;
	satisfiable[7][1]=1;
	if(!L[7][1]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit7_1[i][0] ][ unit7_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit7_1[i][2] ][ unit7_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit7_1[i][4] ][ unit7_1[i][5] ] >0);
			L[7][1] = L[7][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit7_1[i][4]==0){
				satisfiable[7][1]=satisfiable[7][1] & ((x[7] ^ 1) | (x[ unit7_1[i][0] ] ^ unit7_1[i][1]) |(x[ unit7_1[i][2] ] ^ unit7_1[i][3]));
			}
		}
	}
	//Check all rules of unit[8][0]
	L[8][0] = LargeX[8][1]>0 ? 1 : 0;
	satisfiable[8][0]=1;
	if(!L[8][0]){
		for(int i=0;i<95;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit8_0[i][0] ][ unit8_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit8_0[i][2] ][ unit8_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit8_0[i][4] ][ unit8_0[i][5] ] >0);
			L[8][0] = L[8][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit8_0[i][4]==0){
				satisfiable[8][0]=satisfiable[8][0] & ((x[8] ^ 0) | (x[ unit8_0[i][0] ] ^ unit8_0[i][1]) |(x[ unit8_0[i][2] ] ^ unit8_0[i][3]));
			}
		}
	}
	//Check all rules of unit[8][1]
	L[8][1] = LargeX[8][0]>0 ? 1 : 0;
	satisfiable[8][1]=1;
	if(!L[8][1]){
		for(int i=0;i<134;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit8_1[i][0] ][ unit8_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit8_1[i][2] ][ unit8_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit8_1[i][4] ][ unit8_1[i][5] ] >0);
			L[8][1] = L[8][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit8_1[i][4]==0){
				satisfiable[8][1]=satisfiable[8][1] & ((x[8] ^ 1) | (x[ unit8_1[i][0] ] ^ unit8_1[i][1]) |(x[ unit8_1[i][2] ] ^ unit8_1[i][3]));
			}
		}
	}
	//Check all rules of unit[9][0]
	L[9][0] = LargeX[9][1]>0 ? 1 : 0;
	satisfiable[9][0]=1;
	if(!L[9][0]){
		for(int i=0;i<144;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit9_0[i][0] ][ unit9_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit9_0[i][2] ][ unit9_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit9_0[i][4] ][ unit9_0[i][5] ] >0);
			L[9][0] = L[9][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit9_0[i][4]==0){
				satisfiable[9][0]=satisfiable[9][0] & ((x[9] ^ 0) | (x[ unit9_0[i][0] ] ^ unit9_0[i][1]) |(x[ unit9_0[i][2] ] ^ unit9_0[i][3]));
			}
		}
	}
	//Check all rules of unit[9][1]
	L[9][1] = LargeX[9][0]>0 ? 1 : 0;
	satisfiable[9][1]=1;
	if(!L[9][1]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit9_1[i][0] ][ unit9_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit9_1[i][2] ][ unit9_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit9_1[i][4] ][ unit9_1[i][5] ] >0);
			L[9][1] = L[9][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit9_1[i][4]==0){
				satisfiable[9][1]=satisfiable[9][1] & ((x[9] ^ 1) | (x[ unit9_1[i][0] ] ^ unit9_1[i][1]) |(x[ unit9_1[i][2] ] ^ unit9_1[i][3]));
			}
		}
	}
	//Check all rules of unit[10][0]
	L[10][0] = LargeX[10][1]>0 ? 1 : 0;
	satisfiable[10][0]=1;
	if(!L[10][0]){
		for(int i=0;i<38;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit10_0[i][0] ][ unit10_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit10_0[i][2] ][ unit10_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit10_0[i][4] ][ unit10_0[i][5] ] >0);
			L[10][0] = L[10][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit10_0[i][4]==0){
				satisfiable[10][0]=satisfiable[10][0] & ((x[10] ^ 0) | (x[ unit10_0[i][0] ] ^ unit10_0[i][1]) |(x[ unit10_0[i][2] ] ^ unit10_0[i][3]));
			}
		}
	}
	//Check all rules of unit[10][1]
	L[10][1] = LargeX[10][0]>0 ? 1 : 0;
	satisfiable[10][1]=1;
	if(!L[10][1]){
		for(int i=0;i<127;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit10_1[i][0] ][ unit10_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit10_1[i][2] ][ unit10_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit10_1[i][4] ][ unit10_1[i][5] ] >0);
			L[10][1] = L[10][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit10_1[i][4]==0){
				satisfiable[10][1]=satisfiable[10][1] & ((x[10] ^ 1) | (x[ unit10_1[i][0] ] ^ unit10_1[i][1]) |(x[ unit10_1[i][2] ] ^ unit10_1[i][3]));
			}
		}
	}
	//Check all rules of unit[11][0]
	L[11][0] = LargeX[11][1]>0 ? 1 : 0;
	satisfiable[11][0]=1;
	if(!L[11][0]){
		for(int i=0;i<127;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit11_0[i][0] ][ unit11_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit11_0[i][2] ][ unit11_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit11_0[i][4] ][ unit11_0[i][5] ] >0);
			L[11][0] = L[11][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit11_0[i][4]==0){
				satisfiable[11][0]=satisfiable[11][0] & ((x[11] ^ 0) | (x[ unit11_0[i][0] ] ^ unit11_0[i][1]) |(x[ unit11_0[i][2] ] ^ unit11_0[i][3]));
			}
		}
	}
	//Check all rules of unit[11][1]
	L[11][1] = LargeX[11][0]>0 ? 1 : 0;
	satisfiable[11][1]=1;
	if(!L[11][1]){
		for(int i=0;i<8;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit11_1[i][0] ][ unit11_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit11_1[i][2] ][ unit11_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit11_1[i][4] ][ unit11_1[i][5] ] >0);
			L[11][1] = L[11][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit11_1[i][4]==0){
				satisfiable[11][1]=satisfiable[11][1] & ((x[11] ^ 1) | (x[ unit11_1[i][0] ] ^ unit11_1[i][1]) |(x[ unit11_1[i][2] ] ^ unit11_1[i][3]));
			}
		}
	}
	//Check all rules of unit[12][0]
	L[12][0] = LargeX[12][1]>0 ? 1 : 0;
	satisfiable[12][0]=1;
	if(!L[12][0]){
		for(int i=0;i<111;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit12_0[i][0] ][ unit12_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit12_0[i][2] ][ unit12_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit12_0[i][4] ][ unit12_0[i][5] ] >0);
			L[12][0] = L[12][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit12_0[i][4]==0){
				satisfiable[12][0]=satisfiable[12][0] & ((x[12] ^ 0) | (x[ unit12_0[i][0] ] ^ unit12_0[i][1]) |(x[ unit12_0[i][2] ] ^ unit12_0[i][3]));
			}
		}
	}
	//Check all rules of unit[12][1]
	L[12][1] = LargeX[12][0]>0 ? 1 : 0;
	satisfiable[12][1]=1;
	if(!L[12][1]){
		for(int i=0;i<153;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit12_1[i][0] ][ unit12_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit12_1[i][2] ][ unit12_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit12_1[i][4] ][ unit12_1[i][5] ] >0);
			L[12][1] = L[12][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit12_1[i][4]==0){
				satisfiable[12][1]=satisfiable[12][1] & ((x[12] ^ 1) | (x[ unit12_1[i][0] ] ^ unit12_1[i][1]) |(x[ unit12_1[i][2] ] ^ unit12_1[i][3]));
			}
		}
	}
	//Check all rules of unit[13][0]
	L[13][0] = LargeX[13][1]>0 ? 1 : 0;
	satisfiable[13][0]=1;
	if(!L[13][0]){
		for(int i=0;i<52;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit13_0[i][0] ][ unit13_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit13_0[i][2] ][ unit13_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit13_0[i][4] ][ unit13_0[i][5] ] >0);
			L[13][0] = L[13][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit13_0[i][4]==0){
				satisfiable[13][0]=satisfiable[13][0] & ((x[13] ^ 0) | (x[ unit13_0[i][0] ] ^ unit13_0[i][1]) |(x[ unit13_0[i][2] ] ^ unit13_0[i][3]));
			}
		}
	}
	//Check all rules of unit[13][1]
	L[13][1] = LargeX[13][0]>0 ? 1 : 0;
	satisfiable[13][1]=1;
	if(!L[13][1]){
		for(int i=0;i<74;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit13_1[i][0] ][ unit13_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit13_1[i][2] ][ unit13_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit13_1[i][4] ][ unit13_1[i][5] ] >0);
			L[13][1] = L[13][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit13_1[i][4]==0){
				satisfiable[13][1]=satisfiable[13][1] & ((x[13] ^ 1) | (x[ unit13_1[i][0] ] ^ unit13_1[i][1]) |(x[ unit13_1[i][2] ] ^ unit13_1[i][3]));
			}
		}
	}
	//Check all rules of unit[14][0]
	L[14][0] = LargeX[14][1]>0 ? 1 : 0;
	satisfiable[14][0]=1;
	if(!L[14][0]){
		for(int i=0;i<89;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit14_0[i][0] ][ unit14_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit14_0[i][2] ][ unit14_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit14_0[i][4] ][ unit14_0[i][5] ] >0);
			L[14][0] = L[14][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit14_0[i][4]==0){
				satisfiable[14][0]=satisfiable[14][0] & ((x[14] ^ 0) | (x[ unit14_0[i][0] ] ^ unit14_0[i][1]) |(x[ unit14_0[i][2] ] ^ unit14_0[i][3]));
			}
		}
	}
	//Check all rules of unit[14][1]
	L[14][1] = LargeX[14][0]>0 ? 1 : 0;
	satisfiable[14][1]=1;
	if(!L[14][1]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit14_1[i][0] ][ unit14_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit14_1[i][2] ][ unit14_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit14_1[i][4] ][ unit14_1[i][5] ] >0);
			L[14][1] = L[14][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit14_1[i][4]==0){
				satisfiable[14][1]=satisfiable[14][1] & ((x[14] ^ 1) | (x[ unit14_1[i][0] ] ^ unit14_1[i][1]) |(x[ unit14_1[i][2] ] ^ unit14_1[i][3]));
			}
		}
	}
	//Check all rules of unit[15][0]
	L[15][0] = LargeX[15][1]>0 ? 1 : 0;
	satisfiable[15][0]=1;
	if(!L[15][0]){
		for(int i=0;i<76;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit15_0[i][0] ][ unit15_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit15_0[i][2] ][ unit15_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit15_0[i][4] ][ unit15_0[i][5] ] >0);
			L[15][0] = L[15][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit15_0[i][4]==0){
				satisfiable[15][0]=satisfiable[15][0] & ((x[15] ^ 0) | (x[ unit15_0[i][0] ] ^ unit15_0[i][1]) |(x[ unit15_0[i][2] ] ^ unit15_0[i][3]));
			}
		}
	}
	//Check all rules of unit[15][1]
	L[15][1] = LargeX[15][0]>0 ? 1 : 0;
	satisfiable[15][1]=1;
	if(!L[15][1]){
		for(int i=0;i<87;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit15_1[i][0] ][ unit15_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit15_1[i][2] ][ unit15_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit15_1[i][4] ][ unit15_1[i][5] ] >0);
			L[15][1] = L[15][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit15_1[i][4]==0){
				satisfiable[15][1]=satisfiable[15][1] & ((x[15] ^ 1) | (x[ unit15_1[i][0] ] ^ unit15_1[i][1]) |(x[ unit15_1[i][2] ] ^ unit15_1[i][3]));
			}
		}
	}
	//Check all rules of unit[16][0]
	L[16][0] = LargeX[16][1]>0 ? 1 : 0;
	satisfiable[16][0]=1;
	if(!L[16][0]){
		for(int i=0;i<60;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit16_0[i][0] ][ unit16_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit16_0[i][2] ][ unit16_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit16_0[i][4] ][ unit16_0[i][5] ] >0);
			L[16][0] = L[16][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit16_0[i][4]==0){
				satisfiable[16][0]=satisfiable[16][0] & ((x[16] ^ 0) | (x[ unit16_0[i][0] ] ^ unit16_0[i][1]) |(x[ unit16_0[i][2] ] ^ unit16_0[i][3]));
			}
		}
	}
	//Check all rules of unit[16][1]
	L[16][1] = LargeX[16][0]>0 ? 1 : 0;
	satisfiable[16][1]=1;
	if(!L[16][1]){
		for(int i=0;i<46;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit16_1[i][0] ][ unit16_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit16_1[i][2] ][ unit16_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit16_1[i][4] ][ unit16_1[i][5] ] >0);
			L[16][1] = L[16][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit16_1[i][4]==0){
				satisfiable[16][1]=satisfiable[16][1] & ((x[16] ^ 1) | (x[ unit16_1[i][0] ] ^ unit16_1[i][1]) |(x[ unit16_1[i][2] ] ^ unit16_1[i][3]));
			}
		}
	}
	//Check all rules of unit[17][0]
	L[17][0] = LargeX[17][1]>0 ? 1 : 0;
	satisfiable[17][0]=1;
	if(!L[17][0]){
		for(int i=0;i<64;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit17_0[i][0] ][ unit17_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit17_0[i][2] ][ unit17_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit17_0[i][4] ][ unit17_0[i][5] ] >0);
			L[17][0] = L[17][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit17_0[i][4]==0){
				satisfiable[17][0]=satisfiable[17][0] & ((x[17] ^ 0) | (x[ unit17_0[i][0] ] ^ unit17_0[i][1]) |(x[ unit17_0[i][2] ] ^ unit17_0[i][3]));
			}
		}
	}
	//Check all rules of unit[17][1]
	L[17][1] = LargeX[17][0]>0 ? 1 : 0;
	satisfiable[17][1]=1;
	if(!L[17][1]){
		for(int i=0;i<97;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit17_1[i][0] ][ unit17_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit17_1[i][2] ][ unit17_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit17_1[i][4] ][ unit17_1[i][5] ] >0);
			L[17][1] = L[17][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit17_1[i][4]==0){
				satisfiable[17][1]=satisfiable[17][1] & ((x[17] ^ 1) | (x[ unit17_1[i][0] ] ^ unit17_1[i][1]) |(x[ unit17_1[i][2] ] ^ unit17_1[i][3]));
			}
		}
	}
	//Check all rules of unit[18][0]
	L[18][0] = LargeX[18][1]>0 ? 1 : 0;
	satisfiable[18][0]=1;
	if(!L[18][0]){
		for(int i=0;i<136;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit18_0[i][0] ][ unit18_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit18_0[i][2] ][ unit18_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit18_0[i][4] ][ unit18_0[i][5] ] >0);
			L[18][0] = L[18][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit18_0[i][4]==0){
				satisfiable[18][0]=satisfiable[18][0] & ((x[18] ^ 0) | (x[ unit18_0[i][0] ] ^ unit18_0[i][1]) |(x[ unit18_0[i][2] ] ^ unit18_0[i][3]));
			}
		}
	}
	//Check all rules of unit[18][1]
	L[18][1] = LargeX[18][0]>0 ? 1 : 0;
	satisfiable[18][1]=1;
	if(!L[18][1]){
		for(int i=0;i<112;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit18_1[i][0] ][ unit18_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit18_1[i][2] ][ unit18_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit18_1[i][4] ][ unit18_1[i][5] ] >0);
			L[18][1] = L[18][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit18_1[i][4]==0){
				satisfiable[18][1]=satisfiable[18][1] & ((x[18] ^ 1) | (x[ unit18_1[i][0] ] ^ unit18_1[i][1]) |(x[ unit18_1[i][2] ] ^ unit18_1[i][3]));
			}
		}
	}
	//Check all rules of unit[19][0]
	L[19][0] = LargeX[19][1]>0 ? 1 : 0;
	satisfiable[19][0]=1;
	if(!L[19][0]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit19_0[i][0] ][ unit19_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit19_0[i][2] ][ unit19_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit19_0[i][4] ][ unit19_0[i][5] ] >0);
			L[19][0] = L[19][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit19_0[i][4]==0){
				satisfiable[19][0]=satisfiable[19][0] & ((x[19] ^ 0) | (x[ unit19_0[i][0] ] ^ unit19_0[i][1]) |(x[ unit19_0[i][2] ] ^ unit19_0[i][3]));
			}
		}
	}
	//Check all rules of unit[19][1]
	L[19][1] = LargeX[19][0]>0 ? 1 : 0;
	satisfiable[19][1]=1;
	if(!L[19][1]){
		for(int i=0;i<131;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit19_1[i][0] ][ unit19_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit19_1[i][2] ][ unit19_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit19_1[i][4] ][ unit19_1[i][5] ] >0);
			L[19][1] = L[19][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit19_1[i][4]==0){
				satisfiable[19][1]=satisfiable[19][1] & ((x[19] ^ 1) | (x[ unit19_1[i][0] ] ^ unit19_1[i][1]) |(x[ unit19_1[i][2] ] ^ unit19_1[i][3]));
			}
		}
	}
	//Check all rules of unit[20][0]
	L[20][0] = LargeX[20][1]>0 ? 1 : 0;
	satisfiable[20][0]=1;
	if(!L[20][0]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit20_0[i][0] ][ unit20_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit20_0[i][2] ][ unit20_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit20_0[i][4] ][ unit20_0[i][5] ] >0);
			L[20][0] = L[20][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit20_0[i][4]==0){
				satisfiable[20][0]=satisfiable[20][0] & ((x[20] ^ 0) | (x[ unit20_0[i][0] ] ^ unit20_0[i][1]) |(x[ unit20_0[i][2] ] ^ unit20_0[i][3]));
			}
		}
	}
	//Check all rules of unit[20][1]
	L[20][1] = LargeX[20][0]>0 ? 1 : 0;
	satisfiable[20][1]=1;
	if(!L[20][1]){
		for(int i=0;i<45;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit20_1[i][0] ][ unit20_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit20_1[i][2] ][ unit20_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit20_1[i][4] ][ unit20_1[i][5] ] >0);
			L[20][1] = L[20][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit20_1[i][4]==0){
				satisfiable[20][1]=satisfiable[20][1] & ((x[20] ^ 1) | (x[ unit20_1[i][0] ] ^ unit20_1[i][1]) |(x[ unit20_1[i][2] ] ^ unit20_1[i][3]));
			}
		}
	}
	//Check all rules of unit[21][0]
	L[21][0] = LargeX[21][1]>0 ? 1 : 0;
	satisfiable[21][0]=1;
	if(!L[21][0]){
		for(int i=0;i<25;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit21_0[i][0] ][ unit21_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit21_0[i][2] ][ unit21_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit21_0[i][4] ][ unit21_0[i][5] ] >0);
			L[21][0] = L[21][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit21_0[i][4]==0){
				satisfiable[21][0]=satisfiable[21][0] & ((x[21] ^ 0) | (x[ unit21_0[i][0] ] ^ unit21_0[i][1]) |(x[ unit21_0[i][2] ] ^ unit21_0[i][3]));
			}
		}
	}
	//Check all rules of unit[21][1]
	L[21][1] = LargeX[21][0]>0 ? 1 : 0;
	satisfiable[21][1]=1;
	if(!L[21][1]){
		for(int i=0;i<72;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit21_1[i][0] ][ unit21_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit21_1[i][2] ][ unit21_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit21_1[i][4] ][ unit21_1[i][5] ] >0);
			L[21][1] = L[21][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit21_1[i][4]==0){
				satisfiable[21][1]=satisfiable[21][1] & ((x[21] ^ 1) | (x[ unit21_1[i][0] ] ^ unit21_1[i][1]) |(x[ unit21_1[i][2] ] ^ unit21_1[i][3]));
			}
		}
	}
	//Check all rules of unit[22][0]
	L[22][0] = LargeX[22][1]>0 ? 1 : 0;
	satisfiable[22][0]=1;
	if(!L[22][0]){
		for(int i=0;i<53;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit22_0[i][0] ][ unit22_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit22_0[i][2] ][ unit22_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit22_0[i][4] ][ unit22_0[i][5] ] >0);
			L[22][0] = L[22][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit22_0[i][4]==0){
				satisfiable[22][0]=satisfiable[22][0] & ((x[22] ^ 0) | (x[ unit22_0[i][0] ] ^ unit22_0[i][1]) |(x[ unit22_0[i][2] ] ^ unit22_0[i][3]));
			}
		}
	}
	//Check all rules of unit[22][1]
	L[22][1] = LargeX[22][0]>0 ? 1 : 0;
	satisfiable[22][1]=1;
	if(!L[22][1]){
		for(int i=0;i<24;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit22_1[i][0] ][ unit22_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit22_1[i][2] ][ unit22_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit22_1[i][4] ][ unit22_1[i][5] ] >0);
			L[22][1] = L[22][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit22_1[i][4]==0){
				satisfiable[22][1]=satisfiable[22][1] & ((x[22] ^ 1) | (x[ unit22_1[i][0] ] ^ unit22_1[i][1]) |(x[ unit22_1[i][2] ] ^ unit22_1[i][3]));
			}
		}
	}
	//Check all rules of unit[23][0]
	L[23][0] = LargeX[23][1]>0 ? 1 : 0;
	satisfiable[23][0]=1;
	if(!L[23][0]){
		for(int i=0;i<55;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit23_0[i][0] ][ unit23_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit23_0[i][2] ][ unit23_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit23_0[i][4] ][ unit23_0[i][5] ] >0);
			L[23][0] = L[23][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit23_0[i][4]==0){
				satisfiable[23][0]=satisfiable[23][0] & ((x[23] ^ 0) | (x[ unit23_0[i][0] ] ^ unit23_0[i][1]) |(x[ unit23_0[i][2] ] ^ unit23_0[i][3]));
			}
		}
	}
	//Check all rules of unit[23][1]
	L[23][1] = LargeX[23][0]>0 ? 1 : 0;
	satisfiable[23][1]=1;
	if(!L[23][1]){
		for(int i=0;i<65;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit23_1[i][0] ][ unit23_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit23_1[i][2] ][ unit23_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit23_1[i][4] ][ unit23_1[i][5] ] >0);
			L[23][1] = L[23][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit23_1[i][4]==0){
				satisfiable[23][1]=satisfiable[23][1] & ((x[23] ^ 1) | (x[ unit23_1[i][0] ] ^ unit23_1[i][1]) |(x[ unit23_1[i][2] ] ^ unit23_1[i][3]));
			}
		}
	}
	//Check all rules of unit[24][0]
	L[24][0] = LargeX[24][1]>0 ? 1 : 0;
	satisfiable[24][0]=1;
	if(!L[24][0]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit24_0[i][0] ][ unit24_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit24_0[i][2] ][ unit24_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit24_0[i][4] ][ unit24_0[i][5] ] >0);
			L[24][0] = L[24][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit24_0[i][4]==0){
				satisfiable[24][0]=satisfiable[24][0] & ((x[24] ^ 0) | (x[ unit24_0[i][0] ] ^ unit24_0[i][1]) |(x[ unit24_0[i][2] ] ^ unit24_0[i][3]));
			}
		}
	}
	//Check all rules of unit[24][1]
	L[24][1] = LargeX[24][0]>0 ? 1 : 0;
	satisfiable[24][1]=1;
	if(!L[24][1]){
		for(int i=0;i<124;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit24_1[i][0] ][ unit24_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit24_1[i][2] ][ unit24_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit24_1[i][4] ][ unit24_1[i][5] ] >0);
			L[24][1] = L[24][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit24_1[i][4]==0){
				satisfiable[24][1]=satisfiable[24][1] & ((x[24] ^ 1) | (x[ unit24_1[i][0] ] ^ unit24_1[i][1]) |(x[ unit24_1[i][2] ] ^ unit24_1[i][3]));
			}
		}
	}
	//Check all rules of unit[25][0]
	L[25][0] = LargeX[25][1]>0 ? 1 : 0;
	satisfiable[25][0]=1;
	if(!L[25][0]){
		for(int i=0;i<92;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit25_0[i][0] ][ unit25_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit25_0[i][2] ][ unit25_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit25_0[i][4] ][ unit25_0[i][5] ] >0);
			L[25][0] = L[25][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit25_0[i][4]==0){
				satisfiable[25][0]=satisfiable[25][0] & ((x[25] ^ 0) | (x[ unit25_0[i][0] ] ^ unit25_0[i][1]) |(x[ unit25_0[i][2] ] ^ unit25_0[i][3]));
			}
		}
	}
	//Check all rules of unit[25][1]
	L[25][1] = LargeX[25][0]>0 ? 1 : 0;
	satisfiable[25][1]=1;
	if(!L[25][1]){
		for(int i=0;i<63;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit25_1[i][0] ][ unit25_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit25_1[i][2] ][ unit25_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit25_1[i][4] ][ unit25_1[i][5] ] >0);
			L[25][1] = L[25][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit25_1[i][4]==0){
				satisfiable[25][1]=satisfiable[25][1] & ((x[25] ^ 1) | (x[ unit25_1[i][0] ] ^ unit25_1[i][1]) |(x[ unit25_1[i][2] ] ^ unit25_1[i][3]));
			}
		}
	}
	//Check all rules of unit[26][0]
	L[26][0] = LargeX[26][1]>0 ? 1 : 0;
	satisfiable[26][0]=1;
	if(!L[26][0]){
		for(int i=0;i<77;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit26_0[i][0] ][ unit26_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit26_0[i][2] ][ unit26_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit26_0[i][4] ][ unit26_0[i][5] ] >0);
			L[26][0] = L[26][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit26_0[i][4]==0){
				satisfiable[26][0]=satisfiable[26][0] & ((x[26] ^ 0) | (x[ unit26_0[i][0] ] ^ unit26_0[i][1]) |(x[ unit26_0[i][2] ] ^ unit26_0[i][3]));
			}
		}
	}
	//Check all rules of unit[26][1]
	L[26][1] = LargeX[26][0]>0 ? 1 : 0;
	satisfiable[26][1]=1;
	if(!L[26][1]){
		for(int i=0;i<15;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit26_1[i][0] ][ unit26_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit26_1[i][2] ][ unit26_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit26_1[i][4] ][ unit26_1[i][5] ] >0);
			L[26][1] = L[26][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit26_1[i][4]==0){
				satisfiable[26][1]=satisfiable[26][1] & ((x[26] ^ 1) | (x[ unit26_1[i][0] ] ^ unit26_1[i][1]) |(x[ unit26_1[i][2] ] ^ unit26_1[i][3]));
			}
		}
	}
	//Check all rules of unit[27][0]
	L[27][0] = LargeX[27][1]>0 ? 1 : 0;
	satisfiable[27][0]=1;
	if(!L[27][0]){
		for(int i=0;i<206;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit27_0[i][0] ][ unit27_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit27_0[i][2] ][ unit27_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit27_0[i][4] ][ unit27_0[i][5] ] >0);
			L[27][0] = L[27][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit27_0[i][4]==0){
				satisfiable[27][0]=satisfiable[27][0] & ((x[27] ^ 0) | (x[ unit27_0[i][0] ] ^ unit27_0[i][1]) |(x[ unit27_0[i][2] ] ^ unit27_0[i][3]));
			}
		}
	}
	//Check all rules of unit[27][1]
	L[27][1] = LargeX[27][0]>0 ? 1 : 0;
	satisfiable[27][1]=1;
	if(!L[27][1]){
		for(int i=0;i<116;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit27_1[i][0] ][ unit27_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit27_1[i][2] ][ unit27_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit27_1[i][4] ][ unit27_1[i][5] ] >0);
			L[27][1] = L[27][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit27_1[i][4]==0){
				satisfiable[27][1]=satisfiable[27][1] & ((x[27] ^ 1) | (x[ unit27_1[i][0] ] ^ unit27_1[i][1]) |(x[ unit27_1[i][2] ] ^ unit27_1[i][3]));
			}
		}
	}
	//Check all rules of unit[28][0]
	L[28][0] = LargeX[28][1]>0 ? 1 : 0;
	satisfiable[28][0]=1;
	if(!L[28][0]){
		for(int i=0;i<124;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit28_0[i][0] ][ unit28_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit28_0[i][2] ][ unit28_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit28_0[i][4] ][ unit28_0[i][5] ] >0);
			L[28][0] = L[28][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit28_0[i][4]==0){
				satisfiable[28][0]=satisfiable[28][0] & ((x[28] ^ 0) | (x[ unit28_0[i][0] ] ^ unit28_0[i][1]) |(x[ unit28_0[i][2] ] ^ unit28_0[i][3]));
			}
		}
	}
	//Check all rules of unit[28][1]
	L[28][1] = LargeX[28][0]>0 ? 1 : 0;
	satisfiable[28][1]=1;
	if(!L[28][1]){
		for(int i=0;i<62;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit28_1[i][0] ][ unit28_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit28_1[i][2] ][ unit28_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit28_1[i][4] ][ unit28_1[i][5] ] >0);
			L[28][1] = L[28][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit28_1[i][4]==0){
				satisfiable[28][1]=satisfiable[28][1] & ((x[28] ^ 1) | (x[ unit28_1[i][0] ] ^ unit28_1[i][1]) |(x[ unit28_1[i][2] ] ^ unit28_1[i][3]));
			}
		}
	}
	//Check all rules of unit[29][0]
	L[29][0] = LargeX[29][1]>0 ? 1 : 0;
	satisfiable[29][0]=1;
	if(!L[29][0]){
		for(int i=0;i<133;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit29_0[i][0] ][ unit29_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit29_0[i][2] ][ unit29_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit29_0[i][4] ][ unit29_0[i][5] ] >0);
			L[29][0] = L[29][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit29_0[i][4]==0){
				satisfiable[29][0]=satisfiable[29][0] & ((x[29] ^ 0) | (x[ unit29_0[i][0] ] ^ unit29_0[i][1]) |(x[ unit29_0[i][2] ] ^ unit29_0[i][3]));
			}
		}
	}
	//Check all rules of unit[29][1]
	L[29][1] = LargeX[29][0]>0 ? 1 : 0;
	satisfiable[29][1]=1;
	if(!L[29][1]){
		for(int i=0;i<66;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit29_1[i][0] ][ unit29_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit29_1[i][2] ][ unit29_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit29_1[i][4] ][ unit29_1[i][5] ] >0);
			L[29][1] = L[29][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit29_1[i][4]==0){
				satisfiable[29][1]=satisfiable[29][1] & ((x[29] ^ 1) | (x[ unit29_1[i][0] ] ^ unit29_1[i][1]) |(x[ unit29_1[i][2] ] ^ unit29_1[i][3]));
			}
		}
	}
	//Check all rules of unit[30][0]
	L[30][0] = LargeX[30][1]>0 ? 1 : 0;
	satisfiable[30][0]=1;
	if(!L[30][0]){
		for(int i=0;i<154;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit30_0[i][0] ][ unit30_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit30_0[i][2] ][ unit30_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit30_0[i][4] ][ unit30_0[i][5] ] >0);
			L[30][0] = L[30][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit30_0[i][4]==0){
				satisfiable[30][0]=satisfiable[30][0] & ((x[30] ^ 0) | (x[ unit30_0[i][0] ] ^ unit30_0[i][1]) |(x[ unit30_0[i][2] ] ^ unit30_0[i][3]));
			}
		}
	}
	//Check all rules of unit[30][1]
	L[30][1] = LargeX[30][0]>0 ? 1 : 0;
	satisfiable[30][1]=1;
	if(!L[30][1]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit30_1[i][0] ][ unit30_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit30_1[i][2] ][ unit30_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit30_1[i][4] ][ unit30_1[i][5] ] >0);
			L[30][1] = L[30][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit30_1[i][4]==0){
				satisfiable[30][1]=satisfiable[30][1] & ((x[30] ^ 1) | (x[ unit30_1[i][0] ] ^ unit30_1[i][1]) |(x[ unit30_1[i][2] ] ^ unit30_1[i][3]));
			}
		}
	}
	//Check all rules of unit[31][0]
	L[31][0] = LargeX[31][1]>0 ? 1 : 0;
	satisfiable[31][0]=1;
	if(!L[31][0]){
		for(int i=0;i<56;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit31_0[i][0] ][ unit31_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit31_0[i][2] ][ unit31_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit31_0[i][4] ][ unit31_0[i][5] ] >0);
			L[31][0] = L[31][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit31_0[i][4]==0){
				satisfiable[31][0]=satisfiable[31][0] & ((x[31] ^ 0) | (x[ unit31_0[i][0] ] ^ unit31_0[i][1]) |(x[ unit31_0[i][2] ] ^ unit31_0[i][3]));
			}
		}
	}
	//Check all rules of unit[31][1]
	L[31][1] = LargeX[31][0]>0 ? 1 : 0;
	satisfiable[31][1]=1;
	if(!L[31][1]){
		for(int i=0;i<129;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit31_1[i][0] ][ unit31_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit31_1[i][2] ][ unit31_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit31_1[i][4] ][ unit31_1[i][5] ] >0);
			L[31][1] = L[31][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit31_1[i][4]==0){
				satisfiable[31][1]=satisfiable[31][1] & ((x[31] ^ 1) | (x[ unit31_1[i][0] ] ^ unit31_1[i][1]) |(x[ unit31_1[i][2] ] ^ unit31_1[i][3]));
			}
		}
	}
	//Check all rules of unit[32][0]
	L[32][0] = LargeX[32][1]>0 ? 1 : 0;
	satisfiable[32][0]=1;
	if(!L[32][0]){
		for(int i=0;i<86;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit32_0[i][0] ][ unit32_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit32_0[i][2] ][ unit32_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit32_0[i][4] ][ unit32_0[i][5] ] >0);
			L[32][0] = L[32][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit32_0[i][4]==0){
				satisfiable[32][0]=satisfiable[32][0] & ((x[32] ^ 0) | (x[ unit32_0[i][0] ] ^ unit32_0[i][1]) |(x[ unit32_0[i][2] ] ^ unit32_0[i][3]));
			}
		}
	}
	//Check all rules of unit[32][1]
	L[32][1] = LargeX[32][0]>0 ? 1 : 0;
	satisfiable[32][1]=1;
	if(!L[32][1]){
		for(int i=0;i<82;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit32_1[i][0] ][ unit32_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit32_1[i][2] ][ unit32_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit32_1[i][4] ][ unit32_1[i][5] ] >0);
			L[32][1] = L[32][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit32_1[i][4]==0){
				satisfiable[32][1]=satisfiable[32][1] & ((x[32] ^ 1) | (x[ unit32_1[i][0] ] ^ unit32_1[i][1]) |(x[ unit32_1[i][2] ] ^ unit32_1[i][3]));
			}
		}
	}
	//Check all rules of unit[33][0]
	L[33][0] = LargeX[33][1]>0 ? 1 : 0;
	satisfiable[33][0]=1;
	if(!L[33][0]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit33_0[i][0] ][ unit33_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit33_0[i][2] ][ unit33_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit33_0[i][4] ][ unit33_0[i][5] ] >0);
			L[33][0] = L[33][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit33_0[i][4]==0){
				satisfiable[33][0]=satisfiable[33][0] & ((x[33] ^ 0) | (x[ unit33_0[i][0] ] ^ unit33_0[i][1]) |(x[ unit33_0[i][2] ] ^ unit33_0[i][3]));
			}
		}
	}
	//Check all rules of unit[33][1]
	L[33][1] = LargeX[33][0]>0 ? 1 : 0;
	satisfiable[33][1]=1;
	if(!L[33][1]){
		for(int i=0;i<55;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit33_1[i][0] ][ unit33_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit33_1[i][2] ][ unit33_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit33_1[i][4] ][ unit33_1[i][5] ] >0);
			L[33][1] = L[33][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit33_1[i][4]==0){
				satisfiable[33][1]=satisfiable[33][1] & ((x[33] ^ 1) | (x[ unit33_1[i][0] ] ^ unit33_1[i][1]) |(x[ unit33_1[i][2] ] ^ unit33_1[i][3]));
			}
		}
	}
	//Check all rules of unit[34][0]
	L[34][0] = LargeX[34][1]>0 ? 1 : 0;
	satisfiable[34][0]=1;
	if(!L[34][0]){
		for(int i=0;i<58;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit34_0[i][0] ][ unit34_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit34_0[i][2] ][ unit34_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit34_0[i][4] ][ unit34_0[i][5] ] >0);
			L[34][0] = L[34][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit34_0[i][4]==0){
				satisfiable[34][0]=satisfiable[34][0] & ((x[34] ^ 0) | (x[ unit34_0[i][0] ] ^ unit34_0[i][1]) |(x[ unit34_0[i][2] ] ^ unit34_0[i][3]));
			}
		}
	}
	//Check all rules of unit[34][1]
	L[34][1] = LargeX[34][0]>0 ? 1 : 0;
	satisfiable[34][1]=1;
	if(!L[34][1]){
		for(int i=0;i<72;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit34_1[i][0] ][ unit34_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit34_1[i][2] ][ unit34_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit34_1[i][4] ][ unit34_1[i][5] ] >0);
			L[34][1] = L[34][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit34_1[i][4]==0){
				satisfiable[34][1]=satisfiable[34][1] & ((x[34] ^ 1) | (x[ unit34_1[i][0] ] ^ unit34_1[i][1]) |(x[ unit34_1[i][2] ] ^ unit34_1[i][3]));
			}
		}
	}
	//Check all rules of unit[35][0]
	L[35][0] = LargeX[35][1]>0 ? 1 : 0;
	satisfiable[35][0]=1;
	if(!L[35][0]){
		for(int i=0;i<62;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit35_0[i][0] ][ unit35_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit35_0[i][2] ][ unit35_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit35_0[i][4] ][ unit35_0[i][5] ] >0);
			L[35][0] = L[35][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit35_0[i][4]==0){
				satisfiable[35][0]=satisfiable[35][0] & ((x[35] ^ 0) | (x[ unit35_0[i][0] ] ^ unit35_0[i][1]) |(x[ unit35_0[i][2] ] ^ unit35_0[i][3]));
			}
		}
	}
	//Check all rules of unit[35][1]
	L[35][1] = LargeX[35][0]>0 ? 1 : 0;
	satisfiable[35][1]=1;
	if(!L[35][1]){
		for(int i=0;i<167;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit35_1[i][0] ][ unit35_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit35_1[i][2] ][ unit35_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit35_1[i][4] ][ unit35_1[i][5] ] >0);
			L[35][1] = L[35][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit35_1[i][4]==0){
				satisfiable[35][1]=satisfiable[35][1] & ((x[35] ^ 1) | (x[ unit35_1[i][0] ] ^ unit35_1[i][1]) |(x[ unit35_1[i][2] ] ^ unit35_1[i][3]));
			}
		}
	}
	//Check all rules of unit[36][0]
	L[36][0] = LargeX[36][1]>0 ? 1 : 0;
	satisfiable[36][0]=1;
	if(!L[36][0]){
		for(int i=0;i<133;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit36_0[i][0] ][ unit36_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit36_0[i][2] ][ unit36_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit36_0[i][4] ][ unit36_0[i][5] ] >0);
			L[36][0] = L[36][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit36_0[i][4]==0){
				satisfiable[36][0]=satisfiable[36][0] & ((x[36] ^ 0) | (x[ unit36_0[i][0] ] ^ unit36_0[i][1]) |(x[ unit36_0[i][2] ] ^ unit36_0[i][3]));
			}
		}
	}
	//Check all rules of unit[36][1]
	L[36][1] = LargeX[36][0]>0 ? 1 : 0;
	satisfiable[36][1]=1;
	if(!L[36][1]){
		for(int i=0;i<122;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit36_1[i][0] ][ unit36_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit36_1[i][2] ][ unit36_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit36_1[i][4] ][ unit36_1[i][5] ] >0);
			L[36][1] = L[36][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit36_1[i][4]==0){
				satisfiable[36][1]=satisfiable[36][1] & ((x[36] ^ 1) | (x[ unit36_1[i][0] ] ^ unit36_1[i][1]) |(x[ unit36_1[i][2] ] ^ unit36_1[i][3]));
			}
		}
	}
	//Check all rules of unit[37][0]
	L[37][0] = LargeX[37][1]>0 ? 1 : 0;
	satisfiable[37][0]=1;
	if(!L[37][0]){
		for(int i=0;i<66;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit37_0[i][0] ][ unit37_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit37_0[i][2] ][ unit37_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit37_0[i][4] ][ unit37_0[i][5] ] >0);
			L[37][0] = L[37][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit37_0[i][4]==0){
				satisfiable[37][0]=satisfiable[37][0] & ((x[37] ^ 0) | (x[ unit37_0[i][0] ] ^ unit37_0[i][1]) |(x[ unit37_0[i][2] ] ^ unit37_0[i][3]));
			}
		}
	}
	//Check all rules of unit[37][1]
	L[37][1] = LargeX[37][0]>0 ? 1 : 0;
	satisfiable[37][1]=1;
	if(!L[37][1]){
		for(int i=0;i<133;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit37_1[i][0] ][ unit37_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit37_1[i][2] ][ unit37_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit37_1[i][4] ][ unit37_1[i][5] ] >0);
			L[37][1] = L[37][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit37_1[i][4]==0){
				satisfiable[37][1]=satisfiable[37][1] & ((x[37] ^ 1) | (x[ unit37_1[i][0] ] ^ unit37_1[i][1]) |(x[ unit37_1[i][2] ] ^ unit37_1[i][3]));
			}
		}
	}
	//Check all rules of unit[38][0]
	L[38][0] = LargeX[38][1]>0 ? 1 : 0;
	satisfiable[38][0]=1;
	if(!L[38][0]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit38_0[i][0] ][ unit38_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit38_0[i][2] ][ unit38_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit38_0[i][4] ][ unit38_0[i][5] ] >0);
			L[38][0] = L[38][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit38_0[i][4]==0){
				satisfiable[38][0]=satisfiable[38][0] & ((x[38] ^ 0) | (x[ unit38_0[i][0] ] ^ unit38_0[i][1]) |(x[ unit38_0[i][2] ] ^ unit38_0[i][3]));
			}
		}
	}
	//Check all rules of unit[38][1]
	L[38][1] = LargeX[38][0]>0 ? 1 : 0;
	satisfiable[38][1]=1;
	if(!L[38][1]){
		for(int i=0;i<134;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit38_1[i][0] ][ unit38_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit38_1[i][2] ][ unit38_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit38_1[i][4] ][ unit38_1[i][5] ] >0);
			L[38][1] = L[38][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit38_1[i][4]==0){
				satisfiable[38][1]=satisfiable[38][1] & ((x[38] ^ 1) | (x[ unit38_1[i][0] ] ^ unit38_1[i][1]) |(x[ unit38_1[i][2] ] ^ unit38_1[i][3]));
			}
		}
	}
	//Check all rules of unit[39][0]
	L[39][0] = LargeX[39][1]>0 ? 1 : 0;
	satisfiable[39][0]=1;
	if(!L[39][0]){
		for(int i=0;i<121;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit39_0[i][0] ][ unit39_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit39_0[i][2] ][ unit39_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit39_0[i][4] ][ unit39_0[i][5] ] >0);
			L[39][0] = L[39][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit39_0[i][4]==0){
				satisfiable[39][0]=satisfiable[39][0] & ((x[39] ^ 0) | (x[ unit39_0[i][0] ] ^ unit39_0[i][1]) |(x[ unit39_0[i][2] ] ^ unit39_0[i][3]));
			}
		}
	}
	//Check all rules of unit[39][1]
	L[39][1] = LargeX[39][0]>0 ? 1 : 0;
	satisfiable[39][1]=1;
	if(!L[39][1]){
		for(int i=0;i<100;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit39_1[i][0] ][ unit39_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit39_1[i][2] ][ unit39_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit39_1[i][4] ][ unit39_1[i][5] ] >0);
			L[39][1] = L[39][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit39_1[i][4]==0){
				satisfiable[39][1]=satisfiable[39][1] & ((x[39] ^ 1) | (x[ unit39_1[i][0] ] ^ unit39_1[i][1]) |(x[ unit39_1[i][2] ] ^ unit39_1[i][3]));
			}
		}
	}
	//Check all rules of unit[40][0]
	L[40][0] = LargeX[40][1]>0 ? 1 : 0;
	satisfiable[40][0]=1;
	if(!L[40][0]){
		for(int i=0;i<97;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit40_0[i][0] ][ unit40_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit40_0[i][2] ][ unit40_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit40_0[i][4] ][ unit40_0[i][5] ] >0);
			L[40][0] = L[40][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit40_0[i][4]==0){
				satisfiable[40][0]=satisfiable[40][0] & ((x[40] ^ 0) | (x[ unit40_0[i][0] ] ^ unit40_0[i][1]) |(x[ unit40_0[i][2] ] ^ unit40_0[i][3]));
			}
		}
	}
	//Check all rules of unit[40][1]
	L[40][1] = LargeX[40][0]>0 ? 1 : 0;
	satisfiable[40][1]=1;
	if(!L[40][1]){
		for(int i=0;i<94;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit40_1[i][0] ][ unit40_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit40_1[i][2] ][ unit40_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit40_1[i][4] ][ unit40_1[i][5] ] >0);
			L[40][1] = L[40][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit40_1[i][4]==0){
				satisfiable[40][1]=satisfiable[40][1] & ((x[40] ^ 1) | (x[ unit40_1[i][0] ] ^ unit40_1[i][1]) |(x[ unit40_1[i][2] ] ^ unit40_1[i][3]));
			}
		}
	}
	//Check all rules of unit[41][0]
	L[41][0] = LargeX[41][1]>0 ? 1 : 0;
	satisfiable[41][0]=1;
	if(!L[41][0]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit41_0[i][0] ][ unit41_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit41_0[i][2] ][ unit41_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit41_0[i][4] ][ unit41_0[i][5] ] >0);
			L[41][0] = L[41][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit41_0[i][4]==0){
				satisfiable[41][0]=satisfiable[41][0] & ((x[41] ^ 0) | (x[ unit41_0[i][0] ] ^ unit41_0[i][1]) |(x[ unit41_0[i][2] ] ^ unit41_0[i][3]));
			}
		}
	}
	//Check all rules of unit[41][1]
	L[41][1] = LargeX[41][0]>0 ? 1 : 0;
	satisfiable[41][1]=1;
	if(!L[41][1]){
		for(int i=0;i<84;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit41_1[i][0] ][ unit41_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit41_1[i][2] ][ unit41_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit41_1[i][4] ][ unit41_1[i][5] ] >0);
			L[41][1] = L[41][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit41_1[i][4]==0){
				satisfiable[41][1]=satisfiable[41][1] & ((x[41] ^ 1) | (x[ unit41_1[i][0] ] ^ unit41_1[i][1]) |(x[ unit41_1[i][2] ] ^ unit41_1[i][3]));
			}
		}
	}
	//Check all rules of unit[42][0]
	L[42][0] = LargeX[42][1]>0 ? 1 : 0;
	satisfiable[42][0]=1;
	if(!L[42][0]){
		for(int i=0;i<81;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit42_0[i][0] ][ unit42_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit42_0[i][2] ][ unit42_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit42_0[i][4] ][ unit42_0[i][5] ] >0);
			L[42][0] = L[42][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit42_0[i][4]==0){
				satisfiable[42][0]=satisfiable[42][0] & ((x[42] ^ 0) | (x[ unit42_0[i][0] ] ^ unit42_0[i][1]) |(x[ unit42_0[i][2] ] ^ unit42_0[i][3]));
			}
		}
	}
	//Check all rules of unit[42][1]
	L[42][1] = LargeX[42][0]>0 ? 1 : 0;
	satisfiable[42][1]=1;
	if(!L[42][1]){
		for(int i=0;i<64;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit42_1[i][0] ][ unit42_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit42_1[i][2] ][ unit42_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit42_1[i][4] ][ unit42_1[i][5] ] >0);
			L[42][1] = L[42][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit42_1[i][4]==0){
				satisfiable[42][1]=satisfiable[42][1] & ((x[42] ^ 1) | (x[ unit42_1[i][0] ] ^ unit42_1[i][1]) |(x[ unit42_1[i][2] ] ^ unit42_1[i][3]));
			}
		}
	}
	//Check all rules of unit[43][0]
	L[43][0] = LargeX[43][1]>0 ? 1 : 0;
	satisfiable[43][0]=1;
	if(!L[43][0]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit43_0[i][0] ][ unit43_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit43_0[i][2] ][ unit43_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit43_0[i][4] ][ unit43_0[i][5] ] >0);
			L[43][0] = L[43][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit43_0[i][4]==0){
				satisfiable[43][0]=satisfiable[43][0] & ((x[43] ^ 0) | (x[ unit43_0[i][0] ] ^ unit43_0[i][1]) |(x[ unit43_0[i][2] ] ^ unit43_0[i][3]));
			}
		}
	}
	//Check all rules of unit[43][1]
	L[43][1] = LargeX[43][0]>0 ? 1 : 0;
	satisfiable[43][1]=1;
	if(!L[43][1]){
		for(int i=0;i<110;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit43_1[i][0] ][ unit43_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit43_1[i][2] ][ unit43_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit43_1[i][4] ][ unit43_1[i][5] ] >0);
			L[43][1] = L[43][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit43_1[i][4]==0){
				satisfiable[43][1]=satisfiable[43][1] & ((x[43] ^ 1) | (x[ unit43_1[i][0] ] ^ unit43_1[i][1]) |(x[ unit43_1[i][2] ] ^ unit43_1[i][3]));
			}
		}
	}
	//Check all rules of unit[44][0]
	L[44][0] = LargeX[44][1]>0 ? 1 : 0;
	satisfiable[44][0]=1;
	if(!L[44][0]){
		for(int i=0;i<85;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit44_0[i][0] ][ unit44_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit44_0[i][2] ][ unit44_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit44_0[i][4] ][ unit44_0[i][5] ] >0);
			L[44][0] = L[44][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit44_0[i][4]==0){
				satisfiable[44][0]=satisfiable[44][0] & ((x[44] ^ 0) | (x[ unit44_0[i][0] ] ^ unit44_0[i][1]) |(x[ unit44_0[i][2] ] ^ unit44_0[i][3]));
			}
		}
	}
	//Check all rules of unit[44][1]
	L[44][1] = LargeX[44][0]>0 ? 1 : 0;
	satisfiable[44][1]=1;
	if(!L[44][1]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit44_1[i][0] ][ unit44_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit44_1[i][2] ][ unit44_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit44_1[i][4] ][ unit44_1[i][5] ] >0);
			L[44][1] = L[44][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit44_1[i][4]==0){
				satisfiable[44][1]=satisfiable[44][1] & ((x[44] ^ 1) | (x[ unit44_1[i][0] ] ^ unit44_1[i][1]) |(x[ unit44_1[i][2] ] ^ unit44_1[i][3]));
			}
		}
	}
	//Check all rules of unit[45][0]
	L[45][0] = LargeX[45][1]>0 ? 1 : 0;
	satisfiable[45][0]=1;
	if(!L[45][0]){
		for(int i=0;i<62;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit45_0[i][0] ][ unit45_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit45_0[i][2] ][ unit45_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit45_0[i][4] ][ unit45_0[i][5] ] >0);
			L[45][0] = L[45][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit45_0[i][4]==0){
				satisfiable[45][0]=satisfiable[45][0] & ((x[45] ^ 0) | (x[ unit45_0[i][0] ] ^ unit45_0[i][1]) |(x[ unit45_0[i][2] ] ^ unit45_0[i][3]));
			}
		}
	}
	//Check all rules of unit[45][1]
	L[45][1] = LargeX[45][0]>0 ? 1 : 0;
	satisfiable[45][1]=1;
	if(!L[45][1]){
		for(int i=0;i<94;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit45_1[i][0] ][ unit45_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit45_1[i][2] ][ unit45_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit45_1[i][4] ][ unit45_1[i][5] ] >0);
			L[45][1] = L[45][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit45_1[i][4]==0){
				satisfiable[45][1]=satisfiable[45][1] & ((x[45] ^ 1) | (x[ unit45_1[i][0] ] ^ unit45_1[i][1]) |(x[ unit45_1[i][2] ] ^ unit45_1[i][3]));
			}
		}
	}
	//Check all rules of unit[46][0]
	L[46][0] = LargeX[46][1]>0 ? 1 : 0;
	satisfiable[46][0]=1;
	if(!L[46][0]){
		for(int i=0;i<110;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit46_0[i][0] ][ unit46_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit46_0[i][2] ][ unit46_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit46_0[i][4] ][ unit46_0[i][5] ] >0);
			L[46][0] = L[46][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit46_0[i][4]==0){
				satisfiable[46][0]=satisfiable[46][0] & ((x[46] ^ 0) | (x[ unit46_0[i][0] ] ^ unit46_0[i][1]) |(x[ unit46_0[i][2] ] ^ unit46_0[i][3]));
			}
		}
	}
	//Check all rules of unit[46][1]
	L[46][1] = LargeX[46][0]>0 ? 1 : 0;
	satisfiable[46][1]=1;
	if(!L[46][1]){
		for(int i=0;i<47;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit46_1[i][0] ][ unit46_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit46_1[i][2] ][ unit46_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit46_1[i][4] ][ unit46_1[i][5] ] >0);
			L[46][1] = L[46][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit46_1[i][4]==0){
				satisfiable[46][1]=satisfiable[46][1] & ((x[46] ^ 1) | (x[ unit46_1[i][0] ] ^ unit46_1[i][1]) |(x[ unit46_1[i][2] ] ^ unit46_1[i][3]));
			}
		}
	}
	//Check all rules of unit[47][0]
	L[47][0] = LargeX[47][1]>0 ? 1 : 0;
	satisfiable[47][0]=1;
	if(!L[47][0]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit47_0[i][0] ][ unit47_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit47_0[i][2] ][ unit47_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit47_0[i][4] ][ unit47_0[i][5] ] >0);
			L[47][0] = L[47][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit47_0[i][4]==0){
				satisfiable[47][0]=satisfiable[47][0] & ((x[47] ^ 0) | (x[ unit47_0[i][0] ] ^ unit47_0[i][1]) |(x[ unit47_0[i][2] ] ^ unit47_0[i][3]));
			}
		}
	}
	//Check all rules of unit[47][1]
	L[47][1] = LargeX[47][0]>0 ? 1 : 0;
	satisfiable[47][1]=1;
	if(!L[47][1]){
		for(int i=0;i<55;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit47_1[i][0] ][ unit47_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit47_1[i][2] ][ unit47_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit47_1[i][4] ][ unit47_1[i][5] ] >0);
			L[47][1] = L[47][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit47_1[i][4]==0){
				satisfiable[47][1]=satisfiable[47][1] & ((x[47] ^ 1) | (x[ unit47_1[i][0] ] ^ unit47_1[i][1]) |(x[ unit47_1[i][2] ] ^ unit47_1[i][3]));
			}
		}
	}
	//Check all rules of unit[48][0]
	L[48][0] = LargeX[48][1]>0 ? 1 : 0;
	satisfiable[48][0]=1;
	if(!L[48][0]){
		for(int i=0;i<117;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit48_0[i][0] ][ unit48_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit48_0[i][2] ][ unit48_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit48_0[i][4] ][ unit48_0[i][5] ] >0);
			L[48][0] = L[48][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit48_0[i][4]==0){
				satisfiable[48][0]=satisfiable[48][0] & ((x[48] ^ 0) | (x[ unit48_0[i][0] ] ^ unit48_0[i][1]) |(x[ unit48_0[i][2] ] ^ unit48_0[i][3]));
			}
		}
	}
	//Check all rules of unit[48][1]
	L[48][1] = LargeX[48][0]>0 ? 1 : 0;
	satisfiable[48][1]=1;
	if(!L[48][1]){
		for(int i=0;i<86;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit48_1[i][0] ][ unit48_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit48_1[i][2] ][ unit48_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit48_1[i][4] ][ unit48_1[i][5] ] >0);
			L[48][1] = L[48][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit48_1[i][4]==0){
				satisfiable[48][1]=satisfiable[48][1] & ((x[48] ^ 1) | (x[ unit48_1[i][0] ] ^ unit48_1[i][1]) |(x[ unit48_1[i][2] ] ^ unit48_1[i][3]));
			}
		}
	}
	//Check all rules of unit[49][0]
	L[49][0] = LargeX[49][1]>0 ? 1 : 0;
	satisfiable[49][0]=1;
	if(!L[49][0]){
		for(int i=0;i<105;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit49_0[i][0] ][ unit49_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit49_0[i][2] ][ unit49_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit49_0[i][4] ][ unit49_0[i][5] ] >0);
			L[49][0] = L[49][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit49_0[i][4]==0){
				satisfiable[49][0]=satisfiable[49][0] & ((x[49] ^ 0) | (x[ unit49_0[i][0] ] ^ unit49_0[i][1]) |(x[ unit49_0[i][2] ] ^ unit49_0[i][3]));
			}
		}
	}
	//Check all rules of unit[49][1]
	L[49][1] = LargeX[49][0]>0 ? 1 : 0;
	satisfiable[49][1]=1;
	if(!L[49][1]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit49_1[i][0] ][ unit49_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit49_1[i][2] ][ unit49_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit49_1[i][4] ][ unit49_1[i][5] ] >0);
			L[49][1] = L[49][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit49_1[i][4]==0){
				satisfiable[49][1]=satisfiable[49][1] & ((x[49] ^ 1) | (x[ unit49_1[i][0] ] ^ unit49_1[i][1]) |(x[ unit49_1[i][2] ] ^ unit49_1[i][3]));
			}
		}
	}
	//Check all rules of unit[50][0]
	L[50][0] = LargeX[50][1]>0 ? 1 : 0;
	satisfiable[50][0]=1;
	if(!L[50][0]){
		for(int i=0;i<67;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit50_0[i][0] ][ unit50_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit50_0[i][2] ][ unit50_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit50_0[i][4] ][ unit50_0[i][5] ] >0);
			L[50][0] = L[50][0] | (X_contra01 && X_contra23 && X_contra45);
			if(unit50_0[i][4]==0){
				satisfiable[50][0]=satisfiable[50][0] & ((x[50] ^ 0) | (x[ unit50_0[i][0] ] ^ unit50_0[i][1]) |(x[ unit50_0[i][2] ] ^ unit50_0[i][3]));
			}
		}
	}
	//Check all rules of unit[50][1]
	L[50][1] = LargeX[50][0]>0 ? 1 : 0;
	satisfiable[50][1]=1;
	if(!L[50][1]){
		for(int i=0;i<115;i++){
//#pragma HLS PIPELINE
			int X_contra01;
			int X_contra23;
			int X_contra45;
			X_contra01 = ( LargeX[ unit50_1[i][0] ][ unit50_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit50_1[i][2] ][ unit50_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit50_1[i][4] ][ unit50_1[i][5] ] >0);
			L[50][1] = L[50][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit50_1[i][4]==0){
				satisfiable[50][1]=satisfiable[50][1] & ((x[50] ^ 1) | (x[ unit50_1[i][0] ] ^ unit50_1[i][1]) |(x[ unit50_1[i][2] ] ^ unit50_1[i][3]));
			}
		}
	}
}
