#include "amoeba_local_rules.h"
#include "local_rules_4.h"
void update_L(one_bit_t L[N_VARIABLE+1][2], largeX_t LargeX[N_VARIABLE+1][2], one_bit_t x[N_VARIABLE+1], one_bit_t satisfiable[N_VARIABLE+1][2]){
	//Check all rules of unit[1][0]
	L[1][0] = LargeX[1][1]>0 ? 1 : 0;
	satisfiable[1][0]=1; 
	if(!L[1][0]){
		for(int i=0;i<14;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit1_0[i][0] ][ unit1_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit1_0[i][2] ][ unit1_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit1_0[i][4] ][ unit1_0[i][5] ] >0);
			L[1][0] = L[1][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit1_0[i][4]==0){
				//if((X_contra01 & X_contra23)>0) L[1][1]=0;
				satisfiable[1][0]=satisfiable[1][0] & ((x[1] xor 0) | (x[ unit1_0[i][0] ] xor unit1_0[i][1]) |(x[ unit1_0[i][2] ] xor unit1_0[i][3]));
			}
			//if((X_contra01&X_contra23&X_contra45)>0) LargeX[1][0] = -1;
		}
	}
	//Check all rules of unit[1][1]
	L[1][1] = LargeX[1][0]>0 ? 1 : 0;
	satisfiable[1][1]=1; 
	if(!L[1][1]){
		for(int i=0;i<8;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit1_1[i][0] ][ unit1_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit1_1[i][2] ][ unit1_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit1_1[i][4] ][ unit1_1[i][5] ] >0);
			L[1][1] = L[1][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit1_1[i][4]==0){
				//if((X_contra01 & X_contra23)>0) L[1][0]=0;
				satisfiable[1][1]=satisfiable[1][1] & ((x[1] xor 1) | (x[ unit1_1[i][0] ] xor unit1_1[i][1]) |(x[ unit1_1[i][2] ] xor unit1_1[i][3]));
			}
			//if((X_contra01&X_contra23&X_contra45)>0) LargeX[1][1] = -1;
		}
	}
	//Check all rules of unit[2][0]
	L[2][0] = LargeX[2][1]>0 ? 1 : 0;
	satisfiable[2][0]=1; 
	if(!L[2][0]){
		for(int i=0;i<12;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit2_0[i][0] ][ unit2_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit2_0[i][2] ][ unit2_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit2_0[i][4] ][ unit2_0[i][5] ] >0);
			L[2][0] = L[2][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit2_0[i][4]==0){
				//if((X_contra01 & X_contra23)>0) L[2][1]=0;
				satisfiable[2][0]=satisfiable[2][0] & ((x[2] xor 0) | (x[ unit2_0[i][0] ] xor unit2_0[i][1]) |(x[ unit2_0[i][2] ] xor unit2_0[i][3]));
			}
			//if((X_contra01&X_contra23&X_contra45)>0) LargeX[2][0] = -1;
		}
	}
	//Check all rules of unit[2][1]
	L[2][1] = LargeX[2][0]>0 ? 1 : 0;
	satisfiable[2][1]=1; 
	if(!L[2][1]){
		for(int i=0;i<8;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit2_1[i][0] ][ unit2_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit2_1[i][2] ][ unit2_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit2_1[i][4] ][ unit2_1[i][5] ] >0);
			L[2][1] = L[2][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit2_1[i][4]==0){
				//if((X_contra01 & X_contra23)>0) L[2][0]=0;
				satisfiable[2][1]=satisfiable[2][1] & ((x[2] xor 1) | (x[ unit2_1[i][0] ] xor unit2_1[i][1]) |(x[ unit2_1[i][2] ] xor unit2_1[i][3]));
			}
			//if((X_contra01&X_contra23&X_contra45)>0) LargeX[2][1] = -1;
		}
	}
	//Check all rules of unit[3][0]
	L[3][0] = LargeX[3][1]>0 ? 1 : 0;
	satisfiable[3][0]=1; 
	if(!L[3][0]){
		for(int i=0;i<14;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit3_0[i][0] ][ unit3_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit3_0[i][2] ][ unit3_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit3_0[i][4] ][ unit3_0[i][5] ] >0);
			L[3][0] = L[3][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit3_0[i][4]==0){
				//if((X_contra01 & X_contra23)>0) L[3][1]=0;
				satisfiable[3][0]=satisfiable[3][0] & ((x[3] xor 0) | (x[ unit3_0[i][0] ] xor unit3_0[i][1]) |(x[ unit3_0[i][2] ] xor unit3_0[i][3]));
			}
			//if((X_contra01&X_contra23&X_contra45)>0) LargeX[3][0] = -1;
		}
	}
	//Check all rules of unit[3][1]
	L[3][1] = LargeX[3][0]>0 ? 1 : 0;
	satisfiable[3][1]=1; 
	if(!L[3][1]){
		for(int i=0;i<8;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit3_1[i][0] ][ unit3_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit3_1[i][2] ][ unit3_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit3_1[i][4] ][ unit3_1[i][5] ] >0);
			L[3][1] = L[3][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit3_1[i][4]==0){
				//if((X_contra01 & X_contra23)>0) L[3][0]=0;
				satisfiable[3][1]=satisfiable[3][1] & ((x[3] xor 1) | (x[ unit3_1[i][0] ] xor unit3_1[i][1]) |(x[ unit3_1[i][2] ] xor unit3_1[i][3]));
			}
			//if((X_contra01&X_contra23&X_contra45)>0) LargeX[3][1] = -1;
		}
	}
	//Check all rules of unit[4][0]
	L[4][0] = LargeX[4][1]>0 ? 1 : 0;
	satisfiable[4][0]=1; 
	if(!L[4][0]){
		for(int i=0;i<11;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit4_0[i][0] ][ unit4_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit4_0[i][2] ][ unit4_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit4_0[i][4] ][ unit4_0[i][5] ] >0);
			L[4][0] = L[4][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit4_0[i][4]==0){
				//if((X_contra01 & X_contra23)>0) L[4][1]=0;
				satisfiable[4][0]=satisfiable[4][0] & ((x[4] xor 0) | (x[ unit4_0[i][0] ] xor unit4_0[i][1]) |(x[ unit4_0[i][2] ] xor unit4_0[i][3]));
			}
			//if((X_contra01&X_contra23&X_contra45)>0) LargeX[4][0] = -1;
		}
	}
	//Check all rules of unit[4][1]
	L[4][1] = LargeX[4][0]>0 ? 1 : 0;
	satisfiable[4][1]=1; 
	if(!L[4][1]){
		for(int i=0;i<10;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit4_1[i][0] ][ unit4_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit4_1[i][2] ][ unit4_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit4_1[i][4] ][ unit4_1[i][5] ] >0);
			L[4][1] = L[4][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit4_1[i][4]==0){
				//if((X_contra01 & X_contra23)>0) L[4][0]=0;
				satisfiable[4][1]=satisfiable[4][1] & ((x[4] xor 1) | (x[ unit4_1[i][0] ] xor unit4_1[i][1]) |(x[ unit4_1[i][2] ] xor unit4_1[i][3]));
			}
			//if((X_contra01&X_contra23&X_contra45)>0) LargeX[4][1] = -1;
		}
	}
}