<<<<<<< HEAD

=======
<<<<<<< HEAD

=======

>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
#include<stdio.h>
//#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N_VARIABLE 225
#define N_CLAUSE 840 //9
#define N_LITERAL 3
const int MAX_N_STEP = 15000000;
const int EPSILON = 687194767; //687194767; //429496730;//536870912;
#define MAX_CONTRA 150000
<<<<<<< HEAD
=======
<<<<<<< HEAD

int f[N_CLAUSE][N_VARIABLE];
char x[N_VARIABLE+1];
char x_fixed[N_VARIABLE+1];
int inter[3*N_CLAUSE][6];
int size_inter;
int size_contra;
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425

int f[N_CLAUSE][N_VARIABLE];
char x[N_VARIABLE+1];
char x_fixed[N_VARIABLE+1];
int inter[3*N_CLAUSE][6];
int size_inter;
int size_contra;
<<<<<<< HEAD
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
int size_contra_new;
int contra_new[MAX_CONTRA][8];

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
    char filename[128]="benchmarks/flat75-102.cnf";
    //char logfile[128]= "sgen1-sat-100-100-log2.txt";


    char s[N_VARIABLE+100]; //output solution
    int i;

    if (!loadformula(filename)) {
        return 1;
    }
    srand(time(NULL));
    generate_inter();
    size_contra = survey_size_contra();
    int contra[size_contra][8];
    generate_contra(size_contra, contra, contra_new);
    create_local_rules(inter,contra_new);

    //fclose(fp1);
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
=======
<<<<<<< HEAD
                    f[clause_id][j] = atoi(token);      //f[literal][clause_id]
                    if(j==1 && f[clause_id][j]==0){
                        int xi = abs(f[clause_id][0]);
                        int xi_sign = sign_x(f[clause_id][0]);
                        x[xi] = 1-xi_sign;
                        x_fixed[xi]=1;
                        //printf("x[%d] = %d; x_fixed[%d] = %d; satisfiable[%d][0]=1; satisfiable[%d][1]=1;\n", xi, x[xi], xi, x[xi], xi, xi);
                        printf("line %d x_tmp[%d] = %d; x_fixed[%d] = 1;\n", clause_id, xi, x[xi], xi);
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
                    f[clause_id][j] = atoi(token);      //f[literal][clause_id]
                    if(j==1 && f[clause_id][j]==0){
                        int xi = abs(f[clause_id][0]);
                        int xi_sign = sign_x(f[clause_id][0]);
                        x[xi] = 1-xi_sign;
                        x_fixed[xi]=1;
                        //printf("x[%d] = %d; x_fixed[%d] = %d; satisfiable[%d][0]=1; satisfiable[%d][1]=1;\n", xi, x[xi], xi, x[xi], xi, xi);
                        printf("line %d x_tmp[%d] = %d; x_fixed[%d] = 1;\n", clause_id, xi, x[xi], xi);
<<<<<<< HEAD
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
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
int sign_x(int x){
    if(x>=0) return 0;
    else return 1;
}
void generate_inter(){
    int i;
    fp2 = fopen("inter.h", "w+");
    fp3 = fopen("inter_sign.h", "w+");
    fp4 = fopen("f_tmp.txt", "w+");
    //fprintf(fp2, "int interP2[%d][2] = {\n", 3*N_CLAUSE);

    fprintf(fp2,"f_t inter[N_CLAUSE][3]={\n");
<<<<<<< HEAD
=======
<<<<<<< HEAD
    fprintf(fp3,"one_bit_t inter_sign[N_CLAUSE][3]={\n");
    size_inter=0;
    for(i=0; i<N_CLAUSE; i++){
        //-------- generate inter set size 3x
        int interQ, interQ_abs, interP1, interP1_abs, interP2, interP2_abs;
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
    fprintf(fp3,"one_bit_t inter_sign[N_CLAUSE][3]={\n");
    size_inter=0;
    for(i=0; i<N_CLAUSE; i++){
        //-------- generate inter set size 3x
        int interQ, interQ_abs, interP1, interP1_abs, interP2, interP2_abs;
<<<<<<< HEAD
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
        if(f[i][1]==0) {
			//printf("\nClause%d:\t%d\t%d\t%d",i,f[i][0],f[i][1],f[i][2]);
			continue;
		}

        interQ = abs(f[i][0]); interQ_abs = sign_x(f[i][0]);
        interP1= abs(f[i][1]); interP1_abs = sign_x(f[i][1]);
        interP2 = abs(f[i][2]); interP2_abs = sign_x(f[i][2]);

        inter[3*size_inter][0] = interP1; inter[3*size_inter][1] = interP1_abs;
        inter[3*size_inter][2] = interP2; inter[3*size_inter][3] = interP2_abs;
        inter[3*size_inter][4] = interQ; inter[3*size_inter][5] = interQ_abs;

        inter[3*size_inter+1][0] = interQ; inter[3*size_inter+1][1] = interQ_abs;
        inter[3*size_inter+1][2] = interP2; inter[3*size_inter+1][3] = interP2_abs;
        inter[3*size_inter+1][4] = interP1; inter[3*size_inter+1][5] = interP1_abs;

        inter[3*size_inter+2][0] = interQ; inter[3*size_inter+2][1] = interQ_abs;
        inter[3*size_inter+2][2] = interP1; inter[3*size_inter+2][3] = interP1_abs;
        inter[3*size_inter+2][4] = interP2; inter[3*size_inter+2][5] = interP2_abs;
<<<<<<< HEAD

=======
<<<<<<< HEAD

=======

>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
        size_inter++;
        //--------- generate inter set size 1x
        //fprintf(fp2, "%d %d %d %d %d %d\n", inter[3*i][0], inter[3*i][1], inter[3*i][2], inter[3*i][3], inter[3*i][4], inter[3*i][5]);
        if(i==(N_CLAUSE-1)) fprintf(fp2, "%d, %d, %d};", interP1, interP2, interQ);
        else fprintf(fp2, "%d, %d, %d,\n", interP1, interP2, interQ);

        if(i==(N_CLAUSE-1)) fprintf(fp3, "%d, %d, %d};", interP1_abs, interP2_abs, interQ_abs);
        else fprintf(fp3, "%d, %d, %d,\n", interP1_abs, interP2_abs, interQ_abs);

        fprintf(fp4, "%d %d %d %d %d %d\n", interQ, interQ_abs, interP1, interP1_abs, interP2, interP2_abs);
<<<<<<< HEAD
=======
<<<<<<< HEAD
    }
    //print init values
    /*fprintf(fp2, "\none_bit_t Y[N_VARIABLE+1][2]={");
    for(i=0;i<2*(N_VARIABLE+1);i++){
        if(i!=(2*N_VARIABLE+1))fprintf(fp2, "0,");
        else fprintf(fp2,"0};");
    }
    fprintf(fp2, "\none_bit_t L[N_VARIABLE+1][2]={");
    for(i=0;i<2*(N_VARIABLE+1);i++){
        if(i!=(2*N_VARIABLE+1))fprintf(fp2, "0,");
        else fprintf(fp2,"0};");
    }
    fprintf(fp2, "\nlargeX_t LargeX[N_VARIABLE+1][2]={1,");
    for(i=0;i<2*(N_VARIABLE+1)-1;i++){
        if(i!=(2*N_VARIABLE))fprintf(fp2, "0,");
        else fprintf(fp2,"0};");
    }
    fprintf(fp2, "\none_bit_t x[N_VARIABLE+1]={");
    for(i=0;i<=N_VARIABLE;i++){
        if(i!=N_VARIABLE)fprintf(fp2, "0,");
        else fprintf(fp2,"0};");
    }*/
    //fprintf(fp2, "\};");
=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
    }
    //print init values
    /*fprintf(fp2, "\none_bit_t Y[N_VARIABLE+1][2]={");
    for(i=0;i<2*(N_VARIABLE+1);i++){
        if(i!=(2*N_VARIABLE+1))fprintf(fp2, "0,");
        else fprintf(fp2,"0};");
    }
    fprintf(fp2, "\none_bit_t L[N_VARIABLE+1][2]={");
    for(i=0;i<2*(N_VARIABLE+1);i++){
        if(i!=(2*N_VARIABLE+1))fprintf(fp2, "0,");
        else fprintf(fp2,"0};");
    }
    fprintf(fp2, "\nlargeX_t LargeX[N_VARIABLE+1][2]={1,");
    for(i=0;i<2*(N_VARIABLE+1)-1;i++){
        if(i!=(2*N_VARIABLE))fprintf(fp2, "0,");
        else fprintf(fp2,"0};");
    }
    fprintf(fp2, "\none_bit_t x[N_VARIABLE+1]={");
    for(i=0;i<=N_VARIABLE;i++){
        if(i!=N_VARIABLE)fprintf(fp2, "0,");
        else fprintf(fp2,"0};");
    }*/
    //fprintf(fp2, "\};");
<<<<<<< HEAD
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
    printf("size inter = %d\n", size_inter);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
}
int survey_size_contra(){
    //Survey size of contra
    int i,j;
    int size_contra=0;
    for(i=0; i<3*size_inter; i=i+3){
        for(j=i+3; j<3*size_inter; j++){
            if(inter[i][4]==inter[j][4] && inter[i][5]!=inter[j][5]) size_contra++;
            if(inter[i+1][4]==inter[j][4] && inter[i+1][5]!=inter[j][5]) size_contra++;
            if(inter[i+2][4]==inter[j][4] && inter[i+2][5 ]!=inter[j][5]) size_contra++;
        }
    }
    printf("Size contra survey = %d\n", size_contra);
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
        for(j=0; j<3*size_inter; j++){
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
    fprintf(fp2, "f_t contra[%d][4] = {\n", size_contra);
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
<<<<<<< HEAD
=======
<<<<<<< HEAD
    fclose(fp3);
    size_contra_new=size_contra;
}
//create local rules and local modules
void create_local_rules(int inter[3*N_CLAUSE][6], int contra_new[MAX_CONTRA][8]){
    int i, j; //unit index
    int k, l, m, n;
    int count_rules[N_VARIABLE+1][2];
    char s[1000000]; //temporary text
    char s1[100]; //text for 1 line
    fp4 = fopen("local_rules.txt", "w+");
    //write all rules for unit X[1][0]
    for(i=1;i<=N_VARIABLE;i++){
        if(x_fixed[i]==1) {
            printf("x%d fixed",i);
            continue;
        }
        for(j=0;j<=1;j++){
            //initialize connections# of unit[i][j]
            int connections[N_VARIABLE+1][2];
            int connection_count=0;
            for (k=0;k<N_VARIABLE;k++){
                connections[k][0]=0;
                connections[k][1]=0;
            }
            count_rules[i][j]=0;
            strcpy(s,"");
            strcpy(s,"");
            //fprintf(fp4, "int unit%d_%d[][]={\n", i, j);
            //write rules from inter: each line stores inter rule of 3 elements, if [i][j] is seen in the rule, write down its 2 other elements
            for(k=0;k<N_CLAUSE;k++){
                if(inter[3*k][0]==i && inter[3*k][1]==j){
                    //fprintf(fp4, "%d, %d, %d, %d, 0, 0,\n", inter[3*k][2], inter[3*k][3], inter[3*k][4], inter[3*k][5]);
                    sprintf(s1,"%d, %d, %d, %d, 0, 0,\n", inter[3*k][2], inter[3*k][3], inter[3*k][4], inter[3*k][5]);
                    strcat(s,s1);
                    count_rules[i][j]++;
                    //write to connections
                    connections[ inter[3*k][2] ][ inter[3*k][3] ] = 1;
                    connections[ inter[3*k][4] ][ inter[3*k][5] ] = 1;
                }
                if(inter[3*k][2]==i && inter[3*k][3]==j){
                    sprintf(s1, "%d, %d, %d, %d, 0, 0,\n", inter[3*k][0], inter[3*k][1], inter[3*k][4], inter[3*k][5]);
                    strcat(s,s1);
                    count_rules[i][j]++;
                    //write to connections
                    connections[ inter[3*k][0] ][ inter[3*k][1] ] = 1;
                    connections[ inter[3*k][4] ][ inter[3*k][5] ] = 1;
                }
                if(inter[3*k][4]==i && inter[3*k][5]==j){
                    sprintf(s1, "%d, %d, %d, %d, 0, 0,\n", inter[3*k][0], inter[3*k][1], inter[3*k][2], inter[3*k][3]);
                    strcat(s,s1);
                    count_rules[i][j]++;
                    //write to connections
                    connections[ inter[3*k][0] ][ inter[3*k][1] ] = 1;
                    connections[ inter[3*k][2] ][ inter[3*k][3] ] = 1;
                }
            }
            //write rules from contra: each line stores contra rule of up to 4 elements, if [i][j] is seen in the rule, write down its 3 other elements
            for(k=0;k<size_contra;k++){
                for(l=0;l<8;l=l+2){
                    if(contra_new[k][l]==i && contra_new[k][l+1]==j){
                        //int ok=1;
                        for(m=0;m<8;m=m+2){
                            if(m==l) continue;
                            if(contra_new[k][m]==i && contra_new[k][m+1]==j){
                                sprintf(s1, "0, 0, ");
                                strcat(s,s1);
                                continue;
                            }
                            sprintf(s1, "%d, %d, ", contra_new[k][m], contra_new[k][m+1]);
                            strcat(s,s1);
                            //write to connections
                            connections[ contra_new[k][m] ][ contra_new[k][m+1] ] = 1;
                        }
                        sprintf(s1,"\n");
                        strcat(s,s1);
                        count_rules[i][j]++;
                        break;
                    }
                }
                if(k==size_contra-1) {
                        char* p = s;
                        p[strlen(p)-3]=0;
                        sprintf(s1, "};\n");
                        strcat(s,s1);
                }
            }
            //write rules into file
            fprintf(fp4, "int unit%d_%d[%d][6]={\n", i, j,count_rules[i][j]);
            fprintf(fp4,s);
            //Count connections#
            for(k=1;k<=N_VARIABLE;k++){
                connection_count+=connections[k][0] + connections[k][1];
            }
            //printf("unit(%d,%d) %d\n",i,j,connection_count);
            printf("%d\n",connection_count);
        }
    }
    fclose(fp4);

    fp4 = fopen("local_rules_update.cpp", "w+");
    fprintf(fp4,"#include \"amoeba_local_rules.h\"\n");
    fprintf(fp4,"#include \"local_rules_%d.h\"\n",N_VARIABLE);
    fprintf(fp4,"void update_L(two_bit_t L[N_VARIABLE+1][2], largeX_t LargeX[N_VARIABLE+1][2], one_bit_t x[N_VARIABLE+1], one_bit_t satisfiable[N_VARIABLE+1][2]){\n");
    //fprintf(fp4,"\tone_bit_t light_on = 0; //if light_on=1, L[i][j]=1, skip other rules check\n");
    //fprintf(fp4,"\tint i;\n");
/*
    for(i=1;i<=N_VARIABLE;i++){
        for(j=0;j<=1;j++){
            strcpy(s,"");
            sprintf(s1,"\t//Check all rules of unit[%d][%d]\n",i,j); strcat(s,s1);

            sprintf(s1,"\tL[%d][%d] = LargeX[%d][%d]>0 ? 1 : 0;\n",i,j,i,1-j); strcat(s,s1);
            sprintf(s1,"\tsatisfiable[%d][%d]=1; \n",i,j);strcat(s,s1);
            sprintf(s1,"\tif(!L[%d][%d]){\n",i,j); strcat(s,s1); // first if
            sprintf(s1,"\t\tfor(int i=0;i<%d;i++){\n",count_rules[i][j]); strcat(s,s1);
            sprintf(s1,"//#pragma HLS PIPELINE\n"); strcat(s,s1);
            sprintf(s1,"\t\t\tone_bit_t X_contra01;\n"); strcat(s,s1);
            sprintf(s1,"\t\t\tone_bit_t X_contra23;\n"); strcat(s,s1);
            sprintf(s1,"\t\t\tone_bit_t X_contra45;\n"); strcat(s,s1);
            //sprintf(s1,"\t\t\tone_bit_t X_contra;\n"); strcat(s,s1);
            sprintf(s1,"\t\t\tX_contra01 = ( LargeX[ unit%d_%d[i][0] ][ unit%d_%d[i][1] ] >0) ? 1 : 0;\n",i,j,i,j); strcat(s,s1);
            sprintf(s1,"\t\t\tX_contra23 = ( LargeX[ unit%d_%d[i][2] ][ unit%d_%d[i][3] ] >0) ? 1 : 0;\n",i,j,i,j); strcat(s,s1);
            sprintf(s1,"\t\t\tX_contra45 = ( LargeX[ unit%d_%d[i][4] ][ unit%d_%d[i][5] ] >0) ? 1 : 0;\n",i,j,i,j); strcat(s,s1);
            //sprintf(s1,"\t\t\tX_contra = ( LargeX[%d][%d] >0) ? 1 : 0;\n",i,j); strcat(s,s1);
            //sprintf(s1,"\t\t\tone_bit_t X_contra = X_contra01 & X_contra23 & X_contra45;\n"); strcat(s,s1);

            sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] | (X_contra01 & X_contra23 & X_contra45);\n",i,j,i,j); strcat(s,s1); //first implementation - contra
            //sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] & (!(X_contra01 & X_contra23 & X_contra45));\n",i,1-j,i,1-j); strcat(s,s1);

            sprintf(s1,"\t\t\tif(unit%d_%d[i][4]==0){\n",i,j);strcat(s,s1);
            //COLLAPSE
            //sprintf(s1,"\t\t\t\t//if((X_contra01 & X_contra23)>0) L[%d][%d]=0;\n",i,1-j);strcat(s,s1);
            //sprintf(s1,"\t\t\t\tL[%d][%d] = L[%d][%d] & (!(X_contra01 & X_contra23));\n",i,1-j,i,1-j); strcat(s,s1);
            sprintf(s1,"\t\t\t\tsatisfiable[%d][%d]=satisfiable[%d][%d] & ((x[%d] ^ %d) | ",i,j,i,j,i,j);strcat(s,s1);
            sprintf(s1,"(x[ unit%d_%d[i][0] ] ^ unit%d_%d[i][1]) |",i,j,i,j);strcat(s,s1);
            sprintf(s1,"(x[ unit%d_%d[i][2] ] ^ unit%d_%d[i][3]));\n\t\t\t}\n",i,j,i,j);strcat(s,s1);

            //sprintf(s1,"\t\t\tif((X_contra&X_contra01&X_contra23&X_contra45)>0) L[%d][%d] = 2;\n",i,j);strcat(s,s1);
            //sprintf(s1,"\t\t\tL[%d][%d]=(X_contra>0) ? 2 : L[%d][%d];\n",i,j,i,j);strcat(s,s1);

            sprintf(s1,"\t\t}\n"); strcat(s,s1);
            sprintf(s1,"\t}\n"); strcat(s,s1);// first if
            //sprintf(s1,"\tL[%d][%d] = light_on;\n"); strcat(s,s1);
            fprintf(fp4,s);
        }
    }
    fprintf(fp4,"}");
    fclose(fp4);
    printf("created local rules\n");*/

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //version added hypercontra
    for(i=1;i<=N_VARIABLE;i++){
        if(x_fixed[i]==1) continue;
        for(j=0;j<=1;j++){
            strcpy(s,"");
            sprintf(s1,"\t//Check all rules of unit[%d][%d]\n",i,j); strcat(s,s1);

            sprintf(s1,"\tL[%d][%d] = LargeX[%d][%d]>0 ? 1 : 0;\n",i,j,i,1-j); strcat(s,s1);
            sprintf(s1,"\tsatisfiable[%d][%d]=1; \n",i,j);strcat(s,s1);
            //sprintf(s1,"\thypercontra[%d][%d]=0; \n",i,j);strcat(s,s1);
            //sprintf(s1,"\tif(!L[%d][%d]){\n",i,j); strcat(s,s1); // first if
            sprintf(s1,"\tfor(int i=0;i<%d;i++){\n",count_rules[i][j]); strcat(s,s1);
            //sprintf(s1,"//#pragma HLS PIPELINE\n"); strcat(s,s1);
            sprintf(s1,"\t\tone_bit_t X_contra01;\n"); strcat(s,s1);
            sprintf(s1,"\t\tone_bit_t X_contra23;\n"); strcat(s,s1);
            sprintf(s1,"\t\tone_bit_t X_contra45;\n"); strcat(s,s1);
            sprintf(s1,"\t\tone_bit_t X_contra;\n"); strcat(s,s1);
            sprintf(s1,"\t\tX_contra01 = ( LargeX[ unit%d_%d[i][0] ][ unit%d_%d[i][1] ] >0);\n",i,j,i,j); strcat(s,s1);
            sprintf(s1,"\t\tX_contra23 = ( LargeX[ unit%d_%d[i][2] ][ unit%d_%d[i][3] ] >0);\n",i,j,i,j); strcat(s,s1);
            sprintf(s1,"\t\tX_contra45 = ( LargeX[ unit%d_%d[i][4] ][ unit%d_%d[i][5] ] >0);\n",i,j,i,j); strcat(s,s1);
            sprintf(s1,"\t\tX_contra = ( LargeX[%d][%d] >0) & X_contra01 & X_contra23 & X_contra45;\n",i,j); strcat(s,s1);

            //sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] | (X_contra01 & X_contra23 & X_contra45);\n",i,j,i,j); strcat(s,s1); //first implementation - contra
            //sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] & (!(X_contra01 & X_contra23 & X_contra45));\n",i,1-j,i,1-j); strcat(s,s1);

            sprintf(s1,"\t\tif(unit%d_%d[i][4]==0){\n",i,j);strcat(s,s1);
            //COLLAPSE
            sprintf(s1,"\t\t\t\tif((X_contra01 & X_contra23)>0) {L[%d][%d]=0; L[%d][%d]=1;}\n",i,1-j,i,j);strcat(s,s1); //final revise rules printout
            //sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] | (X_contra01 & X_contra23);\n",i,j,i,j); strcat(s,s1);
            //sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] & (!(X_contra01 & X_contra23));\n",i,1-j,i,1-j); strcat(s,s1);
            sprintf(s1,"\t\t\tsatisfiable[%d][%d]=satisfiable[%d][%d] & ((x[%d] ^ %d) | ",i,j,i,j,i,j);strcat(s,s1);
            sprintf(s1,"(x[ unit%d_%d[i][0] ] ^ unit%d_%d[i][1]) |",i,j,i,j);strcat(s,s1);
            sprintf(s1,"(x[ unit%d_%d[i][2] ] ^ unit%d_%d[i][3]));\n\t\t\t}\n",i,j,i,j);strcat(s,s1);

            //sprintf(s1,"\t\t\thypercontra[%d][%d] = hypercontra[%d][%d] | (X_contra&X_contra01&X_contra23&X_contra45);\n",i,j,i,j);strcat(s,s1);
            sprintf(s1,"\t\tif(X_contra>0) L[%d][%d]=2;\n",i,j);strcat(s,s1);

            sprintf(s1,"\t\t}\n"); strcat(s,s1);
            //sprintf(s1,"\t}\n"); strcat(s,s1);// first if

            fprintf(fp4,s);
        }
    }
    fprintf(fp4,"}");
    fclose(fp4);
    printf("created local rules\n");

}


=======
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
    fclose(fp3);
    size_contra_new=size_contra;
}
//create local rules and local modules
void create_local_rules(int inter[3*N_CLAUSE][6], int contra_new[MAX_CONTRA][8]){
    int i, j; //unit index
    int k, l, m, n;
    int count_rules[N_VARIABLE+1][2];
    char s[1000000]; //temporary text
    char s1[100]; //text for 1 line
    fp4 = fopen("local_rules.txt", "w+");
    //write all rules for unit X[1][0]
    for(i=1;i<=N_VARIABLE;i++){
        if(x_fixed[i]==1) {
            printf("x%d fixed",i);
            continue;
        }
        for(j=0;j<=1;j++){
            //initialize connections# of unit[i][j]
            int connections[N_VARIABLE+1][2];
            int connection_count=0;
            for (k=0;k<N_VARIABLE;k++){
                connections[k][0]=0;
                connections[k][1]=0;
            }
            count_rules[i][j]=0;
            strcpy(s,"");
            strcpy(s,"");
            //fprintf(fp4, "int unit%d_%d[][]={\n", i, j);
            //write rules from inter: each line stores inter rule of 3 elements, if [i][j] is seen in the rule, write down its 2 other elements
            for(k=0;k<N_CLAUSE;k++){
                if(inter[3*k][0]==i && inter[3*k][1]==j){
                    //fprintf(fp4, "%d, %d, %d, %d, 0, 0,\n", inter[3*k][2], inter[3*k][3], inter[3*k][4], inter[3*k][5]);
                    sprintf(s1,"%d, %d, %d, %d, 0, 0,\n", inter[3*k][2], inter[3*k][3], inter[3*k][4], inter[3*k][5]);
                    strcat(s,s1);
                    count_rules[i][j]++;
                    //write to connections
                    connections[ inter[3*k][2] ][ inter[3*k][3] ] = 1;
                    connections[ inter[3*k][4] ][ inter[3*k][5] ] = 1;
                }
                if(inter[3*k][2]==i && inter[3*k][3]==j){
                    sprintf(s1, "%d, %d, %d, %d, 0, 0,\n", inter[3*k][0], inter[3*k][1], inter[3*k][4], inter[3*k][5]);
                    strcat(s,s1);
                    count_rules[i][j]++;
                    //write to connections
                    connections[ inter[3*k][0] ][ inter[3*k][1] ] = 1;
                    connections[ inter[3*k][4] ][ inter[3*k][5] ] = 1;
                }
                if(inter[3*k][4]==i && inter[3*k][5]==j){
                    sprintf(s1, "%d, %d, %d, %d, 0, 0,\n", inter[3*k][0], inter[3*k][1], inter[3*k][2], inter[3*k][3]);
                    strcat(s,s1);
                    count_rules[i][j]++;
                    //write to connections
                    connections[ inter[3*k][0] ][ inter[3*k][1] ] = 1;
                    connections[ inter[3*k][2] ][ inter[3*k][3] ] = 1;
                }
            }
            //write rules from contra: each line stores contra rule of up to 4 elements, if [i][j] is seen in the rule, write down its 3 other elements
            for(k=0;k<size_contra;k++){
                for(l=0;l<8;l=l+2){
                    if(contra_new[k][l]==i && contra_new[k][l+1]==j){
                        //int ok=1;
                        for(m=0;m<8;m=m+2){
                            if(m==l) continue;
                            if(contra_new[k][m]==i && contra_new[k][m+1]==j){
                                sprintf(s1, "0, 0, ");
                                strcat(s,s1);
                                continue;
                            }
                            sprintf(s1, "%d, %d, ", contra_new[k][m], contra_new[k][m+1]);
                            strcat(s,s1);
                            //write to connections
                            connections[ contra_new[k][m] ][ contra_new[k][m+1] ] = 1;
                        }
                        sprintf(s1,"\n");
                        strcat(s,s1);
                        count_rules[i][j]++;
                        break;
                    }
                }
                if(k==size_contra-1) {
                        char* p = s;
                        p[strlen(p)-3]=0;
                        sprintf(s1, "};\n");
                        strcat(s,s1);
                }
            }
            //write rules into file
            fprintf(fp4, "int unit%d_%d[%d][6]={\n", i, j,count_rules[i][j]);
            fprintf(fp4,s);
            //Count connections#
            for(k=1;k<=N_VARIABLE;k++){
                connection_count+=connections[k][0] + connections[k][1];
            }
            //printf("unit(%d,%d) %d\n",i,j,connection_count);
            printf("%d\n",connection_count);
        }
    }
    fclose(fp4);

    fp4 = fopen("local_rules_update.cpp", "w+");
    fprintf(fp4,"#include \"amoeba_local_rules.h\"\n");
    fprintf(fp4,"#include \"local_rules_%d.h\"\n",N_VARIABLE);
    fprintf(fp4,"void update_L(two_bit_t L[N_VARIABLE+1][2], largeX_t LargeX[N_VARIABLE+1][2], one_bit_t x[N_VARIABLE+1], one_bit_t satisfiable[N_VARIABLE+1][2]){\n");
    //fprintf(fp4,"\tone_bit_t light_on = 0; //if light_on=1, L[i][j]=1, skip other rules check\n");
    //fprintf(fp4,"\tint i;\n");
/*
    for(i=1;i<=N_VARIABLE;i++){
        for(j=0;j<=1;j++){
            strcpy(s,"");
            sprintf(s1,"\t//Check all rules of unit[%d][%d]\n",i,j); strcat(s,s1);

            sprintf(s1,"\tL[%d][%d] = LargeX[%d][%d]>0 ? 1 : 0;\n",i,j,i,1-j); strcat(s,s1);
            sprintf(s1,"\tsatisfiable[%d][%d]=1; \n",i,j);strcat(s,s1);
            sprintf(s1,"\tif(!L[%d][%d]){\n",i,j); strcat(s,s1); // first if
            sprintf(s1,"\t\tfor(int i=0;i<%d;i++){\n",count_rules[i][j]); strcat(s,s1);
            sprintf(s1,"//#pragma HLS PIPELINE\n"); strcat(s,s1);
            sprintf(s1,"\t\t\tone_bit_t X_contra01;\n"); strcat(s,s1);
            sprintf(s1,"\t\t\tone_bit_t X_contra23;\n"); strcat(s,s1);
            sprintf(s1,"\t\t\tone_bit_t X_contra45;\n"); strcat(s,s1);
            //sprintf(s1,"\t\t\tone_bit_t X_contra;\n"); strcat(s,s1);
            sprintf(s1,"\t\t\tX_contra01 = ( LargeX[ unit%d_%d[i][0] ][ unit%d_%d[i][1] ] >0) ? 1 : 0;\n",i,j,i,j); strcat(s,s1);
            sprintf(s1,"\t\t\tX_contra23 = ( LargeX[ unit%d_%d[i][2] ][ unit%d_%d[i][3] ] >0) ? 1 : 0;\n",i,j,i,j); strcat(s,s1);
            sprintf(s1,"\t\t\tX_contra45 = ( LargeX[ unit%d_%d[i][4] ][ unit%d_%d[i][5] ] >0) ? 1 : 0;\n",i,j,i,j); strcat(s,s1);
            //sprintf(s1,"\t\t\tX_contra = ( LargeX[%d][%d] >0) ? 1 : 0;\n",i,j); strcat(s,s1);
            //sprintf(s1,"\t\t\tone_bit_t X_contra = X_contra01 & X_contra23 & X_contra45;\n"); strcat(s,s1);

            sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] | (X_contra01 & X_contra23 & X_contra45);\n",i,j,i,j); strcat(s,s1); //first implementation - contra
            //sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] & (!(X_contra01 & X_contra23 & X_contra45));\n",i,1-j,i,1-j); strcat(s,s1);

            sprintf(s1,"\t\t\tif(unit%d_%d[i][4]==0){\n",i,j);strcat(s,s1);
            //COLLAPSE
            //sprintf(s1,"\t\t\t\t//if((X_contra01 & X_contra23)>0) L[%d][%d]=0;\n",i,1-j);strcat(s,s1);
            //sprintf(s1,"\t\t\t\tL[%d][%d] = L[%d][%d] & (!(X_contra01 & X_contra23));\n",i,1-j,i,1-j); strcat(s,s1);
            sprintf(s1,"\t\t\t\tsatisfiable[%d][%d]=satisfiable[%d][%d] & ((x[%d] ^ %d) | ",i,j,i,j,i,j);strcat(s,s1);
            sprintf(s1,"(x[ unit%d_%d[i][0] ] ^ unit%d_%d[i][1]) |",i,j,i,j);strcat(s,s1);
            sprintf(s1,"(x[ unit%d_%d[i][2] ] ^ unit%d_%d[i][3]));\n\t\t\t}\n",i,j,i,j);strcat(s,s1);

            //sprintf(s1,"\t\t\tif((X_contra&X_contra01&X_contra23&X_contra45)>0) L[%d][%d] = 2;\n",i,j);strcat(s,s1);
            //sprintf(s1,"\t\t\tL[%d][%d]=(X_contra>0) ? 2 : L[%d][%d];\n",i,j,i,j);strcat(s,s1);

            sprintf(s1,"\t\t}\n"); strcat(s,s1);
            sprintf(s1,"\t}\n"); strcat(s,s1);// first if
            //sprintf(s1,"\tL[%d][%d] = light_on;\n"); strcat(s,s1);
            fprintf(fp4,s);
        }
    }
    fprintf(fp4,"}");
    fclose(fp4);
    printf("created local rules\n");*/

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //version added hypercontra
    for(i=1;i<=N_VARIABLE;i++){
        if(x_fixed[i]==1) continue;
        for(j=0;j<=1;j++){
            strcpy(s,"");
            sprintf(s1,"\t//Check all rules of unit[%d][%d]\n",i,j); strcat(s,s1);

            sprintf(s1,"\tL[%d][%d] = LargeX[%d][%d]>0 ? 1 : 0;\n",i,j,i,1-j); strcat(s,s1);
            sprintf(s1,"\tsatisfiable[%d][%d]=1; \n",i,j);strcat(s,s1);
            //sprintf(s1,"\thypercontra[%d][%d]=0; \n",i,j);strcat(s,s1);
            //sprintf(s1,"\tif(!L[%d][%d]){\n",i,j); strcat(s,s1); // first if
            sprintf(s1,"\tfor(int i=0;i<%d;i++){\n",count_rules[i][j]); strcat(s,s1);
            //sprintf(s1,"//#pragma HLS PIPELINE\n"); strcat(s,s1);
            sprintf(s1,"\t\tone_bit_t X_contra01;\n"); strcat(s,s1);
            sprintf(s1,"\t\tone_bit_t X_contra23;\n"); strcat(s,s1);
            sprintf(s1,"\t\tone_bit_t X_contra45;\n"); strcat(s,s1);
            sprintf(s1,"\t\tone_bit_t X_contra;\n"); strcat(s,s1);
            sprintf(s1,"\t\tX_contra01 = ( LargeX[ unit%d_%d[i][0] ][ unit%d_%d[i][1] ] >0);\n",i,j,i,j); strcat(s,s1);
            sprintf(s1,"\t\tX_contra23 = ( LargeX[ unit%d_%d[i][2] ][ unit%d_%d[i][3] ] >0);\n",i,j,i,j); strcat(s,s1);
            sprintf(s1,"\t\tX_contra45 = ( LargeX[ unit%d_%d[i][4] ][ unit%d_%d[i][5] ] >0);\n",i,j,i,j); strcat(s,s1);
            sprintf(s1,"\t\tX_contra = ( LargeX[%d][%d] >0) & X_contra01 & X_contra23 & X_contra45;\n",i,j); strcat(s,s1);

            //sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] | (X_contra01 & X_contra23 & X_contra45);\n",i,j,i,j); strcat(s,s1); //first implementation - contra
            //sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] & (!(X_contra01 & X_contra23 & X_contra45));\n",i,1-j,i,1-j); strcat(s,s1);

            sprintf(s1,"\t\tif(unit%d_%d[i][4]==0){\n",i,j);strcat(s,s1);
            //COLLAPSE
            sprintf(s1,"\t\t\t\tif((X_contra01 & X_contra23)>0) {L[%d][%d]=0; L[%d][%d]=1;}\n",i,1-j,i,j);strcat(s,s1); //final revise rules printout
            //sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] | (X_contra01 & X_contra23);\n",i,j,i,j); strcat(s,s1);
            //sprintf(s1,"\t\t\tL[%d][%d] = L[%d][%d] & (!(X_contra01 & X_contra23));\n",i,1-j,i,1-j); strcat(s,s1);
            sprintf(s1,"\t\t\tsatisfiable[%d][%d]=satisfiable[%d][%d] & ((x[%d] ^ %d) | ",i,j,i,j,i,j);strcat(s,s1);
            sprintf(s1,"(x[ unit%d_%d[i][0] ] ^ unit%d_%d[i][1]) |",i,j,i,j);strcat(s,s1);
            sprintf(s1,"(x[ unit%d_%d[i][2] ] ^ unit%d_%d[i][3]));\n\t\t\t}\n",i,j,i,j);strcat(s,s1);

            //sprintf(s1,"\t\t\thypercontra[%d][%d] = hypercontra[%d][%d] | (X_contra&X_contra01&X_contra23&X_contra45);\n",i,j,i,j);strcat(s,s1);
            sprintf(s1,"\t\tif(X_contra>0) L[%d][%d]=2;\n",i,j);strcat(s,s1);

            sprintf(s1,"\t\t}\n"); strcat(s,s1);
            //sprintf(s1,"\t}\n"); strcat(s,s1);// first if

            fprintf(fp4,s);
        }
    }
    fprintf(fp4,"}");
    fclose(fp4);
    printf("created local rules\n");

}


<<<<<<< HEAD
=======
>>>>>>> hotfix
>>>>>>> 31afecb2918f4e984f1d28b18a7307f312737425
