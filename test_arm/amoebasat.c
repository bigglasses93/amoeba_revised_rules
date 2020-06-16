#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "f.h"
#include "f_sign.h"
#define N_VARIABLE 225
#define N_CLAUSE 960 //9
#define N_LITERAL 3
const int MAX_N_STEP = 100000;
const int EPSILON = 687194767; //429496730;//536870912;
#define MAX_CONTRA 20000

int LargeX[N_VARIABLE][2];
int Y[N_VARIABLE][2];
int L[N_VARIABLE][2];
int Z[N_VARIABLE][2];
//int f[N_CLAUSE][N_LITERAL];
char x[N_VARIABLE];
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
//int loadformula(char *filename);
void generate_inter();
int survey_size_contra();
void generate_contra(int size_contra, int contra[size_contra][8], int contra_new[MAX_CONTRA][8]);
void update_L_intra();
void update_L_inter(int inter[3*N_CLAUSE][6]);
void update_L_contra(int size_contra, int contra[size_contra][8]);
int amoebasat(char s[N_VARIABLE+100]);

int main() {

    char s[N_VARIABLE+100]; //output solution
    int NStep = 0;
    int NStep_avg = 0;
    int i;


    generate_inter();
    size_contra = survey_size_contra();
    int contra[size_contra][8];
    generate_contra(size_contra, contra, contra_new);
    srand(time(NULL));
    for(i=0;i<1;i++){
        state[0] = rand();
        init();

        printf("\nRun %d: seed = %d",i+1,state[0]);
        NStep=amoebasat(s);
        NStep_avg+=NStep;
    }
    printf("\nAverage #iterations = %d\n", NStep_avg/i);
    for(i=0;i<N_VARIABLE;i++) printf("%d",x[i]);
    return 0;
}
/*int loadformula(char *filename) {
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
}*/
int amoebasat(char s[N_VARIABLE+100]){
    char tmp[N_VARIABLE+100];
    int NStep;
    for(NStep=1;NStep<MAX_N_STEP;NStep++){
        update_L_intra();
        update_L_inter(inter);
        update_L_contra(size_contra, contra_new);

        int i,j;
        update_Z();//printf("\n");
        update_Y();
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
    for(i=0;i<N_VARIABLE;i++){
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
    for(i=0; i<N_VARIABLE; i++){
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
    for(i=0; i<N_VARIABLE; i++){
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
    for(i=0;i<N_VARIABLE;i++){
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
    for(i=0;i<N_VARIABLE;i++){
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
    if(x>0) return 0;
    else return 1;
}
int update_f(){
    int clause_id;
    int f_val = 1;
    for(clause_id=0; clause_id<N_CLAUSE; clause_id++){
        int c1, c2, c3;

        c1 = x[ f[clause_id][0]-1 ] ^ f_sign[clause_id][0];
        c2 = x[ f[clause_id][1]-1 ] ^ f_sign[clause_id][1];
        c3 = x[ f[clause_id][2]-1 ] ^ f_sign[clause_id][2];

        f_val = f_val && (c1 || c2 || c3);
        /*if(clause_id==0){
            printf("%d %d %d f=%d\n",c1,c2,c3,f_val);
        }*/
        if (f_val==0) return f_val;
    }
    if(f_val==1) printf("f=%d",f_val);
    return f_val;
}
void generate_inter(){
    int i;
    for(i=0; i<N_CLAUSE; i++){
        //-------- generate inter set size 3x
        int interQ, interQ_abs, interP1, interP1_abs, interP2, interP2_abs;

        interQ = f[i][0]; interQ_abs = f_sign[i][0];
        interP1= f[i][1]; interP1_abs = f_sign[i][1];
        interP2 = f[i][2]; interP2_abs = f_sign[i][2];

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
}
void update_L_intra(){
    int i,j;
    for(i=0;i<N_VARIABLE;i++){
    	L[i][0] = (LargeX[i][1]>0);
    	L[i][1] = (LargeX[i][0]>0);
    }
}
void update_L_inter(int inter[3*N_CLAUSE][6]){
    int i;
    for(i=0;i<N_CLAUSE;i++){
        int inter1 = (LargeX[ inter[i][2]-1 ][ inter[i][3] ] >0) & (LargeX[ inter[i][0]-1 ][ inter[i][1] ] >0);

        //INTER
        L[ inter[i][4]-1 ][ inter[i][5] ] = L[ inter[i][4]-1 ][ inter[i][5] ] | inter1;
        //COLLAPSE
        L[ inter[i][4]-1 ][ 1-inter[i][5] ] = L[ inter[i][4]-1 ][ 1-inter[i][5] ] & (!inter1);
        //printf("ok %d ", L[ inter[i][0]-1 ][ inter[i][1] ]);*/

        /*int inter1 = LargeX[ f[i][0]-1 ][ f_sign[i][0] ] > 0;
        int inter2 = LargeX[ f[i][1]-1 ][ f_sign[i][1] ] > 0;
        int inter3 = LargeX[ f[i][2]-1 ][ f_sign[i][2] ] > 0;

        L[ f[i][0]-1 ][ f_sign[i][0] ] = inter2 & inter3;
        L[ f[i][1]-1 ][ f_sign[i][1] ] = inter1 & inter3;
        L[ f[i][2]-1 ][ f_sign[i][2] ] = inter1 & inter2;*/
    }
}
void update_L_contra(int size_contra, int contra[size_contra][8]){
    int i, j;
    for(i=0;i<size_contra;i++){
        int contra1;
        contra1 = (LargeX[ contra[i][0]-1 ][ contra[i][1] ]>0) &
                (LargeX[ contra[i][2]-1 ][ contra[i][3] ]>0) &
                (LargeX[ contra[i][4]-1 ][ contra[i][5] ]>0) &
                (LargeX[ contra[i][6]-1 ][ contra[i][7] ]>0);

        //CONTRA - Light on CONTRA units - not good with CONFLICT only
        /*if(contra1){
            L[ contra[i][0]-1 ][ contra[i][1] ] = 1;
            L[ contra[i][2]-1 ][ contra[i][3] ] = 1;
            L[ contra[i][4]-1 ][ contra[i][5] ] = 1;
            L[ contra[i][6]-1 ][ contra[i][7] ] = 1;
        }*/
        //loosen representation of CONTRA - should combine with CONFLICT, not good with hypercontra
        /*L[ contra[i][0]-1 ][ contra[i][1] ] = L[ contra[i][0]-1 ][ contra[i][1] ] |
                ((LargeX[ contra[i][2]-1 ][ contra[i][3] ]>0) &
                (LargeX[ contra[i][4]-1 ][ contra[i][5] ]>0) &
                (LargeX[ contra[i][6]-1 ][ contra[i][7] ]>0));
        L[ contra[i][2]-1 ][ contra[i][3] ] = L[ contra[i][2]-1 ][ contra[i][3] ] |
                ((LargeX[ contra[i][0]-1 ][ contra[i][1] ]>0) &
                (LargeX[ contra[i][4]-1 ][ contra[i][5] ]>0) &
                (LargeX[ contra[i][6]-1 ][ contra[i][7] ]>0));
        L[ contra[i][4]-1 ][ contra[i][5] ] = L[ contra[i][4]-1 ][ contra[i][5] ] |
                ((LargeX[ contra[i][0]-1 ][ contra[i][1] ]>0) &
                (LargeX[ contra[i][2]-1 ][ contra[i][3] ]>0) &
                (LargeX[ contra[i][6]-1 ][ contra[i][7] ]>0));
        L[ contra[i][6]-1 ][ contra[i][7] ] = L[ contra[i][6]-1 ][ contra[i][7] ] |
                ((LargeX[ contra[i][0]-1 ][ contra[i][1] ]>0) &
                (LargeX[ contra[i][2]-1 ][ contra[i][3] ]>0) &
                (LargeX[ contra[i][4]-1 ][ contra[i][5] ]>0));*/

        //CONFLICT - Light off counterparts of CONTRA units
        /*if(contra1){
            L[ contra[i][0]-1 ][ 1-contra[i][1] ] = 0;
            L[ contra[i][2]-1 ][ 1-contra[i][3] ] = 0;
            L[ contra[i][4]-1 ][ 1-contra[i][5] ] = 0;
            L[ contra[i][6]-1 ][ 1-contra[i][7] ] = 0;
        }*/

        //HyperCONTRA - set LargeX of contradicted units directly to -1
        if(contra1){
            LargeX[ contra[i][0]-1 ][ contra[i][1] ] = -1;
            LargeX[ contra[i][2]-1 ][ contra[i][3] ] = -1;
            LargeX[ contra[i][4]-1 ][ contra[i][5] ] = -1;
            LargeX[ contra[i][6]-1 ][ contra[i][7] ] = -1;
        }

        /*if(contra1){
            L[ contra[i][0]-1 ][ contra[i][1] ] = 2;
            L[ contra[i][2]-1 ][ contra[i][3] ] = 2;
            L[ contra[i][4]-1 ][ contra[i][5] ] = 2;
            L[ contra[i][6]-1 ][ contra[i][7] ] = 2;
        }*/
    }
}

