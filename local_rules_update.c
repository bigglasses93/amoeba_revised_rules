#include "amoeba_local_rules.h"
#include "local_rules_100.h"
void update_L(one_bit_t L[N_VARIABLE+1][2], largeX_t LargeX[N_VARIABLE+1][2], one_bit_t x[N_VARIABLE+1], one_bit_t satisfiable[N_VARIABLE+1][2]){
	//Check all rules of unit[1][0]
	L[1][0] = LargeX[1][1]>0 ? 1 : 0;
	satisfiable[1][0]=1; 
	if(!L[1][0]){
		for(int i=0;i<87;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit1_0[i][0] ][ unit1_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit1_0[i][2] ][ unit1_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit1_0[i][4] ][ unit1_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<99;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit1_1[i][0] ][ unit1_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit1_1[i][2] ][ unit1_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit1_1[i][4] ][ unit1_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<30;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit2_0[i][0] ][ unit2_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit2_0[i][2] ][ unit2_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit2_0[i][4] ][ unit2_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<0;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit2_1[i][0] ][ unit2_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit2_1[i][2] ][ unit2_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit2_1[i][4] ][ unit2_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<94;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit3_0[i][0] ][ unit3_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit3_0[i][2] ][ unit3_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit3_0[i][4] ][ unit3_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<54;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit3_1[i][0] ][ unit3_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit3_1[i][2] ][ unit3_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit3_1[i][4] ][ unit3_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<42;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit4_0[i][0] ][ unit4_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit4_0[i][2] ][ unit4_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit4_0[i][4] ][ unit4_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<49;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit4_1[i][0] ][ unit4_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit4_1[i][2] ][ unit4_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit4_1[i][4] ][ unit4_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<43;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit5_0[i][0] ][ unit5_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit5_0[i][2] ][ unit5_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit5_0[i][4] ][ unit5_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<103;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit5_1[i][0] ][ unit5_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit5_1[i][2] ][ unit5_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit5_1[i][4] ][ unit5_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<70;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit6_0[i][0] ][ unit6_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit6_0[i][2] ][ unit6_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit6_0[i][4] ][ unit6_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<83;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit6_1[i][0] ][ unit6_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit6_1[i][2] ][ unit6_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit6_1[i][4] ][ unit6_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<212;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit7_0[i][0] ][ unit7_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit7_0[i][2] ][ unit7_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit7_0[i][4] ][ unit7_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit7_1[i][0] ][ unit7_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit7_1[i][2] ][ unit7_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit7_1[i][4] ][ unit7_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<80;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit8_0[i][0] ][ unit8_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit8_0[i][2] ][ unit8_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit8_0[i][4] ][ unit8_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<83;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit8_1[i][0] ][ unit8_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit8_1[i][2] ][ unit8_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit8_1[i][4] ][ unit8_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<110;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit9_0[i][0] ][ unit9_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit9_0[i][2] ][ unit9_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit9_0[i][4] ][ unit9_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<129;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit9_1[i][0] ][ unit9_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit9_1[i][2] ][ unit9_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit9_1[i][4] ][ unit9_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<80;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit10_0[i][0] ][ unit10_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit10_0[i][2] ][ unit10_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit10_0[i][4] ][ unit10_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<103;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit10_1[i][0] ][ unit10_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit10_1[i][2] ][ unit10_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit10_1[i][4] ][ unit10_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<81;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit11_0[i][0] ][ unit11_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit11_0[i][2] ][ unit11_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit11_0[i][4] ][ unit11_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<75;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit11_1[i][0] ][ unit11_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit11_1[i][2] ][ unit11_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit11_1[i][4] ][ unit11_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<63;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit12_0[i][0] ][ unit12_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit12_0[i][2] ][ unit12_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit12_0[i][4] ][ unit12_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<44;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit12_1[i][0] ][ unit12_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit12_1[i][2] ][ unit12_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit12_1[i][4] ][ unit12_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<79;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit13_0[i][0] ][ unit13_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit13_0[i][2] ][ unit13_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit13_0[i][4] ][ unit13_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<90;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit13_1[i][0] ][ unit13_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit13_1[i][2] ][ unit13_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit13_1[i][4] ][ unit13_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<41;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit14_0[i][0] ][ unit14_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit14_0[i][2] ][ unit14_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit14_0[i][4] ][ unit14_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<159;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit14_1[i][0] ][ unit14_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit14_1[i][2] ][ unit14_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit14_1[i][4] ][ unit14_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<87;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit15_0[i][0] ][ unit15_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit15_0[i][2] ][ unit15_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit15_0[i][4] ][ unit15_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<101;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit15_1[i][0] ][ unit15_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit15_1[i][2] ][ unit15_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit15_1[i][4] ][ unit15_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<59;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit16_0[i][0] ][ unit16_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit16_0[i][2] ][ unit16_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit16_0[i][4] ][ unit16_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<84;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit16_1[i][0] ][ unit16_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit16_1[i][2] ][ unit16_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit16_1[i][4] ][ unit16_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<90;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit17_0[i][0] ][ unit17_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit17_0[i][2] ][ unit17_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit17_0[i][4] ][ unit17_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<67;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit17_1[i][0] ][ unit17_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit17_1[i][2] ][ unit17_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit17_1[i][4] ][ unit17_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<61;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit18_0[i][0] ][ unit18_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit18_0[i][2] ][ unit18_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit18_0[i][4] ][ unit18_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<108;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit18_1[i][0] ][ unit18_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit18_1[i][2] ][ unit18_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit18_1[i][4] ][ unit18_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<69;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit19_0[i][0] ][ unit19_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit19_0[i][2] ][ unit19_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit19_0[i][4] ][ unit19_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<193;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit19_1[i][0] ][ unit19_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit19_1[i][2] ][ unit19_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit19_1[i][4] ][ unit19_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<65;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit20_0[i][0] ][ unit20_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit20_0[i][2] ][ unit20_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit20_0[i][4] ][ unit20_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<53;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit20_1[i][0] ][ unit20_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit20_1[i][2] ][ unit20_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit20_1[i][4] ][ unit20_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<58;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit21_0[i][0] ][ unit21_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit21_0[i][2] ][ unit21_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit21_0[i][4] ][ unit21_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<68;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit21_1[i][0] ][ unit21_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit21_1[i][2] ][ unit21_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit21_1[i][4] ][ unit21_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<102;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit22_0[i][0] ][ unit22_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit22_0[i][2] ][ unit22_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit22_0[i][4] ][ unit22_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<100;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit22_1[i][0] ][ unit22_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit22_1[i][2] ][ unit22_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit22_1[i][4] ][ unit22_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<37;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit23_0[i][0] ][ unit23_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit23_0[i][2] ][ unit23_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit23_0[i][4] ][ unit23_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<63;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit23_1[i][0] ][ unit23_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit23_1[i][2] ][ unit23_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit23_1[i][4] ][ unit23_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit24_0[i][0] ][ unit24_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit24_0[i][2] ][ unit24_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit24_0[i][4] ][ unit24_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<66;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit24_1[i][0] ][ unit24_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit24_1[i][2] ][ unit24_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit24_1[i][4] ][ unit24_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<133;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit25_0[i][0] ][ unit25_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit25_0[i][2] ][ unit25_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit25_0[i][4] ][ unit25_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<78;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit25_1[i][0] ][ unit25_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit25_1[i][2] ][ unit25_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit25_1[i][4] ][ unit25_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<62;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit26_0[i][0] ][ unit26_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit26_0[i][2] ][ unit26_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit26_0[i][4] ][ unit26_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<92;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit26_1[i][0] ][ unit26_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit26_1[i][2] ][ unit26_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit26_1[i][4] ][ unit26_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<107;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit27_0[i][0] ][ unit27_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit27_0[i][2] ][ unit27_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit27_0[i][4] ][ unit27_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<51;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit27_1[i][0] ][ unit27_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit27_1[i][2] ][ unit27_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit27_1[i][4] ][ unit27_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<173;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit28_0[i][0] ][ unit28_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit28_0[i][2] ][ unit28_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit28_0[i][4] ][ unit28_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<74;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit28_1[i][0] ][ unit28_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit28_1[i][2] ][ unit28_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit28_1[i][4] ][ unit28_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<44;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit29_0[i][0] ][ unit29_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit29_0[i][2] ][ unit29_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit29_0[i][4] ][ unit29_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<52;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit29_1[i][0] ][ unit29_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit29_1[i][2] ][ unit29_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit29_1[i][4] ][ unit29_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit30_0[i][0] ][ unit30_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit30_0[i][2] ][ unit30_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit30_0[i][4] ][ unit30_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<110;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit30_1[i][0] ][ unit30_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit30_1[i][2] ][ unit30_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit30_1[i][4] ][ unit30_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<195;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit31_0[i][0] ][ unit31_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit31_0[i][2] ][ unit31_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit31_0[i][4] ][ unit31_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<84;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit31_1[i][0] ][ unit31_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit31_1[i][2] ][ unit31_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit31_1[i][4] ][ unit31_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit32_0[i][0] ][ unit32_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit32_0[i][2] ][ unit32_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit32_0[i][4] ][ unit32_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<59;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit32_1[i][0] ][ unit32_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit32_1[i][2] ][ unit32_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit32_1[i][4] ][ unit32_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<43;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit33_0[i][0] ][ unit33_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit33_0[i][2] ][ unit33_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit33_0[i][4] ][ unit33_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<68;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit33_1[i][0] ][ unit33_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit33_1[i][2] ][ unit33_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit33_1[i][4] ][ unit33_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<70;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit34_0[i][0] ][ unit34_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit34_0[i][2] ][ unit34_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit34_0[i][4] ][ unit34_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<110;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit34_1[i][0] ][ unit34_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit34_1[i][2] ][ unit34_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit34_1[i][4] ][ unit34_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<45;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit35_0[i][0] ][ unit35_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit35_0[i][2] ][ unit35_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit35_0[i][4] ][ unit35_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<114;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit35_1[i][0] ][ unit35_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit35_1[i][2] ][ unit35_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit35_1[i][4] ][ unit35_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<32;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit36_0[i][0] ][ unit36_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit36_0[i][2] ][ unit36_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit36_0[i][4] ][ unit36_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<84;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit36_1[i][0] ][ unit36_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit36_1[i][2] ][ unit36_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit36_1[i][4] ][ unit36_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<151;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit37_0[i][0] ][ unit37_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit37_0[i][2] ][ unit37_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit37_0[i][4] ][ unit37_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<54;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit37_1[i][0] ][ unit37_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit37_1[i][2] ][ unit37_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit37_1[i][4] ][ unit37_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<77;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit38_0[i][0] ][ unit38_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit38_0[i][2] ][ unit38_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit38_0[i][4] ][ unit38_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<144;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit38_1[i][0] ][ unit38_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit38_1[i][2] ][ unit38_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit38_1[i][4] ][ unit38_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<73;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit39_0[i][0] ][ unit39_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit39_0[i][2] ][ unit39_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit39_0[i][4] ][ unit39_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<19;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit39_1[i][0] ][ unit39_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit39_1[i][2] ][ unit39_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit39_1[i][4] ][ unit39_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<111;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit40_0[i][0] ][ unit40_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit40_0[i][2] ][ unit40_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit40_0[i][4] ][ unit40_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<75;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit40_1[i][0] ][ unit40_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit40_1[i][2] ][ unit40_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit40_1[i][4] ][ unit40_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<58;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit41_0[i][0] ][ unit41_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit41_0[i][2] ][ unit41_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit41_0[i][4] ][ unit41_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<92;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit41_1[i][0] ][ unit41_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit41_1[i][2] ][ unit41_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit41_1[i][4] ][ unit41_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<142;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit42_0[i][0] ][ unit42_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit42_0[i][2] ][ unit42_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit42_0[i][4] ][ unit42_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<138;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit42_1[i][0] ][ unit42_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit42_1[i][2] ][ unit42_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit42_1[i][4] ][ unit42_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<58;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit43_0[i][0] ][ unit43_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit43_0[i][2] ][ unit43_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit43_0[i][4] ][ unit43_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<109;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit43_1[i][0] ][ unit43_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit43_1[i][2] ][ unit43_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit43_1[i][4] ][ unit43_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<209;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit44_0[i][0] ][ unit44_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit44_0[i][2] ][ unit44_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit44_0[i][4] ][ unit44_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<98;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit44_1[i][0] ][ unit44_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit44_1[i][2] ][ unit44_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit44_1[i][4] ][ unit44_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<42;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit45_0[i][0] ][ unit45_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit45_0[i][2] ][ unit45_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit45_0[i][4] ][ unit45_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<112;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit45_1[i][0] ][ unit45_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit45_1[i][2] ][ unit45_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit45_1[i][4] ][ unit45_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<175;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit46_0[i][0] ][ unit46_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit46_0[i][2] ][ unit46_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit46_0[i][4] ][ unit46_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<24;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit46_1[i][0] ][ unit46_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit46_1[i][2] ][ unit46_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit46_1[i][4] ][ unit46_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<99;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit47_0[i][0] ][ unit47_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit47_0[i][2] ][ unit47_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit47_0[i][4] ][ unit47_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<35;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit47_1[i][0] ][ unit47_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit47_1[i][2] ][ unit47_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit47_1[i][4] ][ unit47_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit48_0[i][0] ][ unit48_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit48_0[i][2] ][ unit48_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit48_0[i][4] ][ unit48_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<74;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit48_1[i][0] ][ unit48_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit48_1[i][2] ][ unit48_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit48_1[i][4] ][ unit48_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<39;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit49_0[i][0] ][ unit49_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit49_0[i][2] ][ unit49_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit49_0[i][4] ][ unit49_0[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<77;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit49_1[i][0] ][ unit49_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit49_1[i][2] ][ unit49_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit49_1[i][4] ][ unit49_1[i][5] ] >0) ? 1 : 0;
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
		for(int i=0;i<79;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit50_0[i][0] ][ unit50_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit50_0[i][2] ][ unit50_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit50_0[i][4] ][ unit50_0[i][5] ] >0) ? 1 : 0;
			L[50][0] = L[50][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit50_0[i][4]==0){
				satisfiable[50][0]=satisfiable[50][0] & ((x[50] ^ 0) | (x[ unit50_0[i][0] ] ^ unit50_0[i][1]) |(x[ unit50_0[i][2] ] ^ unit50_0[i][3]));
			}
		}
	}
	//Check all rules of unit[50][1]
	L[50][1] = LargeX[50][0]>0 ? 1 : 0;
	satisfiable[50][1]=1; 
	if(!L[50][1]){
		for(int i=0;i<102;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit50_1[i][0] ][ unit50_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit50_1[i][2] ][ unit50_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit50_1[i][4] ][ unit50_1[i][5] ] >0) ? 1 : 0;
			L[50][1] = L[50][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit50_1[i][4]==0){
				satisfiable[50][1]=satisfiable[50][1] & ((x[50] ^ 1) | (x[ unit50_1[i][0] ] ^ unit50_1[i][1]) |(x[ unit50_1[i][2] ] ^ unit50_1[i][3]));
			}
		}
	}
	//Check all rules of unit[51][0]
	L[51][0] = LargeX[51][1]>0 ? 1 : 0;
	satisfiable[51][0]=1; 
	if(!L[51][0]){
		for(int i=0;i<51;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit51_0[i][0] ][ unit51_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit51_0[i][2] ][ unit51_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit51_0[i][4] ][ unit51_0[i][5] ] >0) ? 1 : 0;
			L[51][0] = L[51][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit51_0[i][4]==0){
				satisfiable[51][0]=satisfiable[51][0] & ((x[51] ^ 0) | (x[ unit51_0[i][0] ] ^ unit51_0[i][1]) |(x[ unit51_0[i][2] ] ^ unit51_0[i][3]));
			}
		}
	}
	//Check all rules of unit[51][1]
	L[51][1] = LargeX[51][0]>0 ? 1 : 0;
	satisfiable[51][1]=1; 
	if(!L[51][1]){
		for(int i=0;i<79;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit51_1[i][0] ][ unit51_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit51_1[i][2] ][ unit51_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit51_1[i][4] ][ unit51_1[i][5] ] >0) ? 1 : 0;
			L[51][1] = L[51][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit51_1[i][4]==0){
				satisfiable[51][1]=satisfiable[51][1] & ((x[51] ^ 1) | (x[ unit51_1[i][0] ] ^ unit51_1[i][1]) |(x[ unit51_1[i][2] ] ^ unit51_1[i][3]));
			}
		}
	}
	//Check all rules of unit[52][0]
	L[52][0] = LargeX[52][1]>0 ? 1 : 0;
	satisfiable[52][0]=1; 
	if(!L[52][0]){
		for(int i=0;i<121;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit52_0[i][0] ][ unit52_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit52_0[i][2] ][ unit52_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit52_0[i][4] ][ unit52_0[i][5] ] >0) ? 1 : 0;
			L[52][0] = L[52][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit52_0[i][4]==0){
				satisfiable[52][0]=satisfiable[52][0] & ((x[52] ^ 0) | (x[ unit52_0[i][0] ] ^ unit52_0[i][1]) |(x[ unit52_0[i][2] ] ^ unit52_0[i][3]));
			}
		}
	}
	//Check all rules of unit[52][1]
	L[52][1] = LargeX[52][0]>0 ? 1 : 0;
	satisfiable[52][1]=1; 
	if(!L[52][1]){
		for(int i=0;i<122;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit52_1[i][0] ][ unit52_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit52_1[i][2] ][ unit52_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit52_1[i][4] ][ unit52_1[i][5] ] >0) ? 1 : 0;
			L[52][1] = L[52][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit52_1[i][4]==0){
				satisfiable[52][1]=satisfiable[52][1] & ((x[52] ^ 1) | (x[ unit52_1[i][0] ] ^ unit52_1[i][1]) |(x[ unit52_1[i][2] ] ^ unit52_1[i][3]));
			}
		}
	}
	//Check all rules of unit[53][0]
	L[53][0] = LargeX[53][1]>0 ? 1 : 0;
	satisfiable[53][0]=1; 
	if(!L[53][0]){
		for(int i=0;i<164;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit53_0[i][0] ][ unit53_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit53_0[i][2] ][ unit53_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit53_0[i][4] ][ unit53_0[i][5] ] >0) ? 1 : 0;
			L[53][0] = L[53][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit53_0[i][4]==0){
				satisfiable[53][0]=satisfiable[53][0] & ((x[53] ^ 0) | (x[ unit53_0[i][0] ] ^ unit53_0[i][1]) |(x[ unit53_0[i][2] ] ^ unit53_0[i][3]));
			}
		}
	}
	//Check all rules of unit[53][1]
	L[53][1] = LargeX[53][0]>0 ? 1 : 0;
	satisfiable[53][1]=1; 
	if(!L[53][1]){
		for(int i=0;i<89;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit53_1[i][0] ][ unit53_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit53_1[i][2] ][ unit53_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit53_1[i][4] ][ unit53_1[i][5] ] >0) ? 1 : 0;
			L[53][1] = L[53][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit53_1[i][4]==0){
				satisfiable[53][1]=satisfiable[53][1] & ((x[53] ^ 1) | (x[ unit53_1[i][0] ] ^ unit53_1[i][1]) |(x[ unit53_1[i][2] ] ^ unit53_1[i][3]));
			}
		}
	}
	//Check all rules of unit[54][0]
	L[54][0] = LargeX[54][1]>0 ? 1 : 0;
	satisfiable[54][0]=1; 
	if(!L[54][0]){
		for(int i=0;i<73;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit54_0[i][0] ][ unit54_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit54_0[i][2] ][ unit54_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit54_0[i][4] ][ unit54_0[i][5] ] >0) ? 1 : 0;
			L[54][0] = L[54][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit54_0[i][4]==0){
				satisfiable[54][0]=satisfiable[54][0] & ((x[54] ^ 0) | (x[ unit54_0[i][0] ] ^ unit54_0[i][1]) |(x[ unit54_0[i][2] ] ^ unit54_0[i][3]));
			}
		}
	}
	//Check all rules of unit[54][1]
	L[54][1] = LargeX[54][0]>0 ? 1 : 0;
	satisfiable[54][1]=1; 
	if(!L[54][1]){
		for(int i=0;i<121;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit54_1[i][0] ][ unit54_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit54_1[i][2] ][ unit54_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit54_1[i][4] ][ unit54_1[i][5] ] >0) ? 1 : 0;
			L[54][1] = L[54][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit54_1[i][4]==0){
				satisfiable[54][1]=satisfiable[54][1] & ((x[54] ^ 1) | (x[ unit54_1[i][0] ] ^ unit54_1[i][1]) |(x[ unit54_1[i][2] ] ^ unit54_1[i][3]));
			}
		}
	}
	//Check all rules of unit[55][0]
	L[55][0] = LargeX[55][1]>0 ? 1 : 0;
	satisfiable[55][0]=1; 
	if(!L[55][0]){
		for(int i=0;i<128;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit55_0[i][0] ][ unit55_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit55_0[i][2] ][ unit55_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit55_0[i][4] ][ unit55_0[i][5] ] >0) ? 1 : 0;
			L[55][0] = L[55][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit55_0[i][4]==0){
				satisfiable[55][0]=satisfiable[55][0] & ((x[55] ^ 0) | (x[ unit55_0[i][0] ] ^ unit55_0[i][1]) |(x[ unit55_0[i][2] ] ^ unit55_0[i][3]));
			}
		}
	}
	//Check all rules of unit[55][1]
	L[55][1] = LargeX[55][0]>0 ? 1 : 0;
	satisfiable[55][1]=1; 
	if(!L[55][1]){
		for(int i=0;i<133;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit55_1[i][0] ][ unit55_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit55_1[i][2] ][ unit55_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit55_1[i][4] ][ unit55_1[i][5] ] >0) ? 1 : 0;
			L[55][1] = L[55][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit55_1[i][4]==0){
				satisfiable[55][1]=satisfiable[55][1] & ((x[55] ^ 1) | (x[ unit55_1[i][0] ] ^ unit55_1[i][1]) |(x[ unit55_1[i][2] ] ^ unit55_1[i][3]));
			}
		}
	}
	//Check all rules of unit[56][0]
	L[56][0] = LargeX[56][1]>0 ? 1 : 0;
	satisfiable[56][0]=1; 
	if(!L[56][0]){
		for(int i=0;i<56;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit56_0[i][0] ][ unit56_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit56_0[i][2] ][ unit56_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit56_0[i][4] ][ unit56_0[i][5] ] >0) ? 1 : 0;
			L[56][0] = L[56][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit56_0[i][4]==0){
				satisfiable[56][0]=satisfiable[56][0] & ((x[56] ^ 0) | (x[ unit56_0[i][0] ] ^ unit56_0[i][1]) |(x[ unit56_0[i][2] ] ^ unit56_0[i][3]));
			}
		}
	}
	//Check all rules of unit[56][1]
	L[56][1] = LargeX[56][0]>0 ? 1 : 0;
	satisfiable[56][1]=1; 
	if(!L[56][1]){
		for(int i=0;i<83;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit56_1[i][0] ][ unit56_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit56_1[i][2] ][ unit56_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit56_1[i][4] ][ unit56_1[i][5] ] >0) ? 1 : 0;
			L[56][1] = L[56][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit56_1[i][4]==0){
				satisfiable[56][1]=satisfiable[56][1] & ((x[56] ^ 1) | (x[ unit56_1[i][0] ] ^ unit56_1[i][1]) |(x[ unit56_1[i][2] ] ^ unit56_1[i][3]));
			}
		}
	}
	//Check all rules of unit[57][0]
	L[57][0] = LargeX[57][1]>0 ? 1 : 0;
	satisfiable[57][0]=1; 
	if(!L[57][0]){
		for(int i=0;i<82;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit57_0[i][0] ][ unit57_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit57_0[i][2] ][ unit57_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit57_0[i][4] ][ unit57_0[i][5] ] >0) ? 1 : 0;
			L[57][0] = L[57][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit57_0[i][4]==0){
				satisfiable[57][0]=satisfiable[57][0] & ((x[57] ^ 0) | (x[ unit57_0[i][0] ] ^ unit57_0[i][1]) |(x[ unit57_0[i][2] ] ^ unit57_0[i][3]));
			}
		}
	}
	//Check all rules of unit[57][1]
	L[57][1] = LargeX[57][0]>0 ? 1 : 0;
	satisfiable[57][1]=1; 
	if(!L[57][1]){
		for(int i=0;i<159;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit57_1[i][0] ][ unit57_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit57_1[i][2] ][ unit57_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit57_1[i][4] ][ unit57_1[i][5] ] >0) ? 1 : 0;
			L[57][1] = L[57][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit57_1[i][4]==0){
				satisfiable[57][1]=satisfiable[57][1] & ((x[57] ^ 1) | (x[ unit57_1[i][0] ] ^ unit57_1[i][1]) |(x[ unit57_1[i][2] ] ^ unit57_1[i][3]));
			}
		}
	}
	//Check all rules of unit[58][0]
	L[58][0] = LargeX[58][1]>0 ? 1 : 0;
	satisfiable[58][0]=1; 
	if(!L[58][0]){
		for(int i=0;i<149;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit58_0[i][0] ][ unit58_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit58_0[i][2] ][ unit58_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit58_0[i][4] ][ unit58_0[i][5] ] >0) ? 1 : 0;
			L[58][0] = L[58][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit58_0[i][4]==0){
				satisfiable[58][0]=satisfiable[58][0] & ((x[58] ^ 0) | (x[ unit58_0[i][0] ] ^ unit58_0[i][1]) |(x[ unit58_0[i][2] ] ^ unit58_0[i][3]));
			}
		}
	}
	//Check all rules of unit[58][1]
	L[58][1] = LargeX[58][0]>0 ? 1 : 0;
	satisfiable[58][1]=1; 
	if(!L[58][1]){
		for(int i=0;i<78;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit58_1[i][0] ][ unit58_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit58_1[i][2] ][ unit58_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit58_1[i][4] ][ unit58_1[i][5] ] >0) ? 1 : 0;
			L[58][1] = L[58][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit58_1[i][4]==0){
				satisfiable[58][1]=satisfiable[58][1] & ((x[58] ^ 1) | (x[ unit58_1[i][0] ] ^ unit58_1[i][1]) |(x[ unit58_1[i][2] ] ^ unit58_1[i][3]));
			}
		}
	}
	//Check all rules of unit[59][0]
	L[59][0] = LargeX[59][1]>0 ? 1 : 0;
	satisfiable[59][0]=1; 
	if(!L[59][0]){
		for(int i=0;i<29;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit59_0[i][0] ][ unit59_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit59_0[i][2] ][ unit59_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit59_0[i][4] ][ unit59_0[i][5] ] >0) ? 1 : 0;
			L[59][0] = L[59][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit59_0[i][4]==0){
				satisfiable[59][0]=satisfiable[59][0] & ((x[59] ^ 0) | (x[ unit59_0[i][0] ] ^ unit59_0[i][1]) |(x[ unit59_0[i][2] ] ^ unit59_0[i][3]));
			}
		}
	}
	//Check all rules of unit[59][1]
	L[59][1] = LargeX[59][0]>0 ? 1 : 0;
	satisfiable[59][1]=1; 
	if(!L[59][1]){
		for(int i=0;i<80;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit59_1[i][0] ][ unit59_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit59_1[i][2] ][ unit59_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit59_1[i][4] ][ unit59_1[i][5] ] >0) ? 1 : 0;
			L[59][1] = L[59][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit59_1[i][4]==0){
				satisfiable[59][1]=satisfiable[59][1] & ((x[59] ^ 1) | (x[ unit59_1[i][0] ] ^ unit59_1[i][1]) |(x[ unit59_1[i][2] ] ^ unit59_1[i][3]));
			}
		}
	}
	//Check all rules of unit[60][0]
	L[60][0] = LargeX[60][1]>0 ? 1 : 0;
	satisfiable[60][0]=1; 
	if(!L[60][0]){
		for(int i=0;i<105;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit60_0[i][0] ][ unit60_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit60_0[i][2] ][ unit60_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit60_0[i][4] ][ unit60_0[i][5] ] >0) ? 1 : 0;
			L[60][0] = L[60][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit60_0[i][4]==0){
				satisfiable[60][0]=satisfiable[60][0] & ((x[60] ^ 0) | (x[ unit60_0[i][0] ] ^ unit60_0[i][1]) |(x[ unit60_0[i][2] ] ^ unit60_0[i][3]));
			}
		}
	}
	//Check all rules of unit[60][1]
	L[60][1] = LargeX[60][0]>0 ? 1 : 0;
	satisfiable[60][1]=1; 
	if(!L[60][1]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit60_1[i][0] ][ unit60_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit60_1[i][2] ][ unit60_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit60_1[i][4] ][ unit60_1[i][5] ] >0) ? 1 : 0;
			L[60][1] = L[60][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit60_1[i][4]==0){
				satisfiable[60][1]=satisfiable[60][1] & ((x[60] ^ 1) | (x[ unit60_1[i][0] ] ^ unit60_1[i][1]) |(x[ unit60_1[i][2] ] ^ unit60_1[i][3]));
			}
		}
	}
	//Check all rules of unit[61][0]
	L[61][0] = LargeX[61][1]>0 ? 1 : 0;
	satisfiable[61][0]=1; 
	if(!L[61][0]){
		for(int i=0;i<114;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit61_0[i][0] ][ unit61_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit61_0[i][2] ][ unit61_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit61_0[i][4] ][ unit61_0[i][5] ] >0) ? 1 : 0;
			L[61][0] = L[61][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit61_0[i][4]==0){
				satisfiable[61][0]=satisfiable[61][0] & ((x[61] ^ 0) | (x[ unit61_0[i][0] ] ^ unit61_0[i][1]) |(x[ unit61_0[i][2] ] ^ unit61_0[i][3]));
			}
		}
	}
	//Check all rules of unit[61][1]
	L[61][1] = LargeX[61][0]>0 ? 1 : 0;
	satisfiable[61][1]=1; 
	if(!L[61][1]){
		for(int i=0;i<62;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit61_1[i][0] ][ unit61_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit61_1[i][2] ][ unit61_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit61_1[i][4] ][ unit61_1[i][5] ] >0) ? 1 : 0;
			L[61][1] = L[61][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit61_1[i][4]==0){
				satisfiable[61][1]=satisfiable[61][1] & ((x[61] ^ 1) | (x[ unit61_1[i][0] ] ^ unit61_1[i][1]) |(x[ unit61_1[i][2] ] ^ unit61_1[i][3]));
			}
		}
	}
	//Check all rules of unit[62][0]
	L[62][0] = LargeX[62][1]>0 ? 1 : 0;
	satisfiable[62][0]=1; 
	if(!L[62][0]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit62_0[i][0] ][ unit62_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit62_0[i][2] ][ unit62_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit62_0[i][4] ][ unit62_0[i][5] ] >0) ? 1 : 0;
			L[62][0] = L[62][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit62_0[i][4]==0){
				satisfiable[62][0]=satisfiable[62][0] & ((x[62] ^ 0) | (x[ unit62_0[i][0] ] ^ unit62_0[i][1]) |(x[ unit62_0[i][2] ] ^ unit62_0[i][3]));
			}
		}
	}
	//Check all rules of unit[62][1]
	L[62][1] = LargeX[62][0]>0 ? 1 : 0;
	satisfiable[62][1]=1; 
	if(!L[62][1]){
		for(int i=0;i<150;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit62_1[i][0] ][ unit62_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit62_1[i][2] ][ unit62_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit62_1[i][4] ][ unit62_1[i][5] ] >0) ? 1 : 0;
			L[62][1] = L[62][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit62_1[i][4]==0){
				satisfiable[62][1]=satisfiable[62][1] & ((x[62] ^ 1) | (x[ unit62_1[i][0] ] ^ unit62_1[i][1]) |(x[ unit62_1[i][2] ] ^ unit62_1[i][3]));
			}
		}
	}
	//Check all rules of unit[63][0]
	L[63][0] = LargeX[63][1]>0 ? 1 : 0;
	satisfiable[63][0]=1; 
	if(!L[63][0]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit63_0[i][0] ][ unit63_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit63_0[i][2] ][ unit63_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit63_0[i][4] ][ unit63_0[i][5] ] >0) ? 1 : 0;
			L[63][0] = L[63][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit63_0[i][4]==0){
				satisfiable[63][0]=satisfiable[63][0] & ((x[63] ^ 0) | (x[ unit63_0[i][0] ] ^ unit63_0[i][1]) |(x[ unit63_0[i][2] ] ^ unit63_0[i][3]));
			}
		}
	}
	//Check all rules of unit[63][1]
	L[63][1] = LargeX[63][0]>0 ? 1 : 0;
	satisfiable[63][1]=1; 
	if(!L[63][1]){
		for(int i=0;i<64;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit63_1[i][0] ][ unit63_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit63_1[i][2] ][ unit63_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit63_1[i][4] ][ unit63_1[i][5] ] >0) ? 1 : 0;
			L[63][1] = L[63][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit63_1[i][4]==0){
				satisfiable[63][1]=satisfiable[63][1] & ((x[63] ^ 1) | (x[ unit63_1[i][0] ] ^ unit63_1[i][1]) |(x[ unit63_1[i][2] ] ^ unit63_1[i][3]));
			}
		}
	}
	//Check all rules of unit[64][0]
	L[64][0] = LargeX[64][1]>0 ? 1 : 0;
	satisfiable[64][0]=1; 
	if(!L[64][0]){
		for(int i=0;i<36;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit64_0[i][0] ][ unit64_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit64_0[i][2] ][ unit64_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit64_0[i][4] ][ unit64_0[i][5] ] >0) ? 1 : 0;
			L[64][0] = L[64][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit64_0[i][4]==0){
				satisfiable[64][0]=satisfiable[64][0] & ((x[64] ^ 0) | (x[ unit64_0[i][0] ] ^ unit64_0[i][1]) |(x[ unit64_0[i][2] ] ^ unit64_0[i][3]));
			}
		}
	}
	//Check all rules of unit[64][1]
	L[64][1] = LargeX[64][0]>0 ? 1 : 0;
	satisfiable[64][1]=1; 
	if(!L[64][1]){
		for(int i=0;i<82;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit64_1[i][0] ][ unit64_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit64_1[i][2] ][ unit64_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit64_1[i][4] ][ unit64_1[i][5] ] >0) ? 1 : 0;
			L[64][1] = L[64][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit64_1[i][4]==0){
				satisfiable[64][1]=satisfiable[64][1] & ((x[64] ^ 1) | (x[ unit64_1[i][0] ] ^ unit64_1[i][1]) |(x[ unit64_1[i][2] ] ^ unit64_1[i][3]));
			}
		}
	}
	//Check all rules of unit[65][0]
	L[65][0] = LargeX[65][1]>0 ? 1 : 0;
	satisfiable[65][0]=1; 
	if(!L[65][0]){
		for(int i=0;i<108;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit65_0[i][0] ][ unit65_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit65_0[i][2] ][ unit65_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit65_0[i][4] ][ unit65_0[i][5] ] >0) ? 1 : 0;
			L[65][0] = L[65][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit65_0[i][4]==0){
				satisfiable[65][0]=satisfiable[65][0] & ((x[65] ^ 0) | (x[ unit65_0[i][0] ] ^ unit65_0[i][1]) |(x[ unit65_0[i][2] ] ^ unit65_0[i][3]));
			}
		}
	}
	//Check all rules of unit[65][1]
	L[65][1] = LargeX[65][0]>0 ? 1 : 0;
	satisfiable[65][1]=1; 
	if(!L[65][1]){
		for(int i=0;i<131;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit65_1[i][0] ][ unit65_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit65_1[i][2] ][ unit65_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit65_1[i][4] ][ unit65_1[i][5] ] >0) ? 1 : 0;
			L[65][1] = L[65][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit65_1[i][4]==0){
				satisfiable[65][1]=satisfiable[65][1] & ((x[65] ^ 1) | (x[ unit65_1[i][0] ] ^ unit65_1[i][1]) |(x[ unit65_1[i][2] ] ^ unit65_1[i][3]));
			}
		}
	}
	//Check all rules of unit[66][0]
	L[66][0] = LargeX[66][1]>0 ? 1 : 0;
	satisfiable[66][0]=1; 
	if(!L[66][0]){
		for(int i=0;i<100;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit66_0[i][0] ][ unit66_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit66_0[i][2] ][ unit66_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit66_0[i][4] ][ unit66_0[i][5] ] >0) ? 1 : 0;
			L[66][0] = L[66][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit66_0[i][4]==0){
				satisfiable[66][0]=satisfiable[66][0] & ((x[66] ^ 0) | (x[ unit66_0[i][0] ] ^ unit66_0[i][1]) |(x[ unit66_0[i][2] ] ^ unit66_0[i][3]));
			}
		}
	}
	//Check all rules of unit[66][1]
	L[66][1] = LargeX[66][0]>0 ? 1 : 0;
	satisfiable[66][1]=1; 
	if(!L[66][1]){
		for(int i=0;i<78;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit66_1[i][0] ][ unit66_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit66_1[i][2] ][ unit66_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit66_1[i][4] ][ unit66_1[i][5] ] >0) ? 1 : 0;
			L[66][1] = L[66][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit66_1[i][4]==0){
				satisfiable[66][1]=satisfiable[66][1] & ((x[66] ^ 1) | (x[ unit66_1[i][0] ] ^ unit66_1[i][1]) |(x[ unit66_1[i][2] ] ^ unit66_1[i][3]));
			}
		}
	}
	//Check all rules of unit[67][0]
	L[67][0] = LargeX[67][1]>0 ? 1 : 0;
	satisfiable[67][0]=1; 
	if(!L[67][0]){
		for(int i=0;i<62;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit67_0[i][0] ][ unit67_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit67_0[i][2] ][ unit67_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit67_0[i][4] ][ unit67_0[i][5] ] >0) ? 1 : 0;
			L[67][0] = L[67][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit67_0[i][4]==0){
				satisfiable[67][0]=satisfiable[67][0] & ((x[67] ^ 0) | (x[ unit67_0[i][0] ] ^ unit67_0[i][1]) |(x[ unit67_0[i][2] ] ^ unit67_0[i][3]));
			}
		}
	}
	//Check all rules of unit[67][1]
	L[67][1] = LargeX[67][0]>0 ? 1 : 0;
	satisfiable[67][1]=1; 
	if(!L[67][1]){
		for(int i=0;i<57;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit67_1[i][0] ][ unit67_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit67_1[i][2] ][ unit67_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit67_1[i][4] ][ unit67_1[i][5] ] >0) ? 1 : 0;
			L[67][1] = L[67][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit67_1[i][4]==0){
				satisfiable[67][1]=satisfiable[67][1] & ((x[67] ^ 1) | (x[ unit67_1[i][0] ] ^ unit67_1[i][1]) |(x[ unit67_1[i][2] ] ^ unit67_1[i][3]));
			}
		}
	}
	//Check all rules of unit[68][0]
	L[68][0] = LargeX[68][1]>0 ? 1 : 0;
	satisfiable[68][0]=1; 
	if(!L[68][0]){
		for(int i=0;i<89;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit68_0[i][0] ][ unit68_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit68_0[i][2] ][ unit68_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit68_0[i][4] ][ unit68_0[i][5] ] >0) ? 1 : 0;
			L[68][0] = L[68][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit68_0[i][4]==0){
				satisfiable[68][0]=satisfiable[68][0] & ((x[68] ^ 0) | (x[ unit68_0[i][0] ] ^ unit68_0[i][1]) |(x[ unit68_0[i][2] ] ^ unit68_0[i][3]));
			}
		}
	}
	//Check all rules of unit[68][1]
	L[68][1] = LargeX[68][0]>0 ? 1 : 0;
	satisfiable[68][1]=1; 
	if(!L[68][1]){
		for(int i=0;i<81;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit68_1[i][0] ][ unit68_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit68_1[i][2] ][ unit68_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit68_1[i][4] ][ unit68_1[i][5] ] >0) ? 1 : 0;
			L[68][1] = L[68][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit68_1[i][4]==0){
				satisfiable[68][1]=satisfiable[68][1] & ((x[68] ^ 1) | (x[ unit68_1[i][0] ] ^ unit68_1[i][1]) |(x[ unit68_1[i][2] ] ^ unit68_1[i][3]));
			}
		}
	}
	//Check all rules of unit[69][0]
	L[69][0] = LargeX[69][1]>0 ? 1 : 0;
	satisfiable[69][0]=1; 
	if(!L[69][0]){
		for(int i=0;i<61;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit69_0[i][0] ][ unit69_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit69_0[i][2] ][ unit69_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit69_0[i][4] ][ unit69_0[i][5] ] >0) ? 1 : 0;
			L[69][0] = L[69][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit69_0[i][4]==0){
				satisfiable[69][0]=satisfiable[69][0] & ((x[69] ^ 0) | (x[ unit69_0[i][0] ] ^ unit69_0[i][1]) |(x[ unit69_0[i][2] ] ^ unit69_0[i][3]));
			}
		}
	}
	//Check all rules of unit[69][1]
	L[69][1] = LargeX[69][0]>0 ? 1 : 0;
	satisfiable[69][1]=1; 
	if(!L[69][1]){
		for(int i=0;i<94;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit69_1[i][0] ][ unit69_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit69_1[i][2] ][ unit69_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit69_1[i][4] ][ unit69_1[i][5] ] >0) ? 1 : 0;
			L[69][1] = L[69][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit69_1[i][4]==0){
				satisfiable[69][1]=satisfiable[69][1] & ((x[69] ^ 1) | (x[ unit69_1[i][0] ] ^ unit69_1[i][1]) |(x[ unit69_1[i][2] ] ^ unit69_1[i][3]));
			}
		}
	}
	//Check all rules of unit[70][0]
	L[70][0] = LargeX[70][1]>0 ? 1 : 0;
	satisfiable[70][0]=1; 
	if(!L[70][0]){
		for(int i=0;i<35;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit70_0[i][0] ][ unit70_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit70_0[i][2] ][ unit70_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit70_0[i][4] ][ unit70_0[i][5] ] >0) ? 1 : 0;
			L[70][0] = L[70][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit70_0[i][4]==0){
				satisfiable[70][0]=satisfiable[70][0] & ((x[70] ^ 0) | (x[ unit70_0[i][0] ] ^ unit70_0[i][1]) |(x[ unit70_0[i][2] ] ^ unit70_0[i][3]));
			}
		}
	}
	//Check all rules of unit[70][1]
	L[70][1] = LargeX[70][0]>0 ? 1 : 0;
	satisfiable[70][1]=1; 
	if(!L[70][1]){
		for(int i=0;i<53;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit70_1[i][0] ][ unit70_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit70_1[i][2] ][ unit70_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit70_1[i][4] ][ unit70_1[i][5] ] >0) ? 1 : 0;
			L[70][1] = L[70][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit70_1[i][4]==0){
				satisfiable[70][1]=satisfiable[70][1] & ((x[70] ^ 1) | (x[ unit70_1[i][0] ] ^ unit70_1[i][1]) |(x[ unit70_1[i][2] ] ^ unit70_1[i][3]));
			}
		}
	}
	//Check all rules of unit[71][0]
	L[71][0] = LargeX[71][1]>0 ? 1 : 0;
	satisfiable[71][0]=1; 
	if(!L[71][0]){
		for(int i=0;i<10;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit71_0[i][0] ][ unit71_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit71_0[i][2] ][ unit71_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit71_0[i][4] ][ unit71_0[i][5] ] >0) ? 1 : 0;
			L[71][0] = L[71][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit71_0[i][4]==0){
				satisfiable[71][0]=satisfiable[71][0] & ((x[71] ^ 0) | (x[ unit71_0[i][0] ] ^ unit71_0[i][1]) |(x[ unit71_0[i][2] ] ^ unit71_0[i][3]));
			}
		}
	}
	//Check all rules of unit[71][1]
	L[71][1] = LargeX[71][0]>0 ? 1 : 0;
	satisfiable[71][1]=1; 
	if(!L[71][1]){
		for(int i=0;i<126;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit71_1[i][0] ][ unit71_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit71_1[i][2] ][ unit71_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit71_1[i][4] ][ unit71_1[i][5] ] >0) ? 1 : 0;
			L[71][1] = L[71][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit71_1[i][4]==0){
				satisfiable[71][1]=satisfiable[71][1] & ((x[71] ^ 1) | (x[ unit71_1[i][0] ] ^ unit71_1[i][1]) |(x[ unit71_1[i][2] ] ^ unit71_1[i][3]));
			}
		}
	}
	//Check all rules of unit[72][0]
	L[72][0] = LargeX[72][1]>0 ? 1 : 0;
	satisfiable[72][0]=1; 
	if(!L[72][0]){
		for(int i=0;i<60;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit72_0[i][0] ][ unit72_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit72_0[i][2] ][ unit72_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit72_0[i][4] ][ unit72_0[i][5] ] >0) ? 1 : 0;
			L[72][0] = L[72][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit72_0[i][4]==0){
				satisfiable[72][0]=satisfiable[72][0] & ((x[72] ^ 0) | (x[ unit72_0[i][0] ] ^ unit72_0[i][1]) |(x[ unit72_0[i][2] ] ^ unit72_0[i][3]));
			}
		}
	}
	//Check all rules of unit[72][1]
	L[72][1] = LargeX[72][0]>0 ? 1 : 0;
	satisfiable[72][1]=1; 
	if(!L[72][1]){
		for(int i=0;i<61;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit72_1[i][0] ][ unit72_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit72_1[i][2] ][ unit72_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit72_1[i][4] ][ unit72_1[i][5] ] >0) ? 1 : 0;
			L[72][1] = L[72][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit72_1[i][4]==0){
				satisfiable[72][1]=satisfiable[72][1] & ((x[72] ^ 1) | (x[ unit72_1[i][0] ] ^ unit72_1[i][1]) |(x[ unit72_1[i][2] ] ^ unit72_1[i][3]));
			}
		}
	}
	//Check all rules of unit[73][0]
	L[73][0] = LargeX[73][1]>0 ? 1 : 0;
	satisfiable[73][0]=1; 
	if(!L[73][0]){
		for(int i=0;i<108;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit73_0[i][0] ][ unit73_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit73_0[i][2] ][ unit73_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit73_0[i][4] ][ unit73_0[i][5] ] >0) ? 1 : 0;
			L[73][0] = L[73][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit73_0[i][4]==0){
				satisfiable[73][0]=satisfiable[73][0] & ((x[73] ^ 0) | (x[ unit73_0[i][0] ] ^ unit73_0[i][1]) |(x[ unit73_0[i][2] ] ^ unit73_0[i][3]));
			}
		}
	}
	//Check all rules of unit[73][1]
	L[73][1] = LargeX[73][0]>0 ? 1 : 0;
	satisfiable[73][1]=1; 
	if(!L[73][1]){
		for(int i=0;i<161;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit73_1[i][0] ][ unit73_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit73_1[i][2] ][ unit73_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit73_1[i][4] ][ unit73_1[i][5] ] >0) ? 1 : 0;
			L[73][1] = L[73][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit73_1[i][4]==0){
				satisfiable[73][1]=satisfiable[73][1] & ((x[73] ^ 1) | (x[ unit73_1[i][0] ] ^ unit73_1[i][1]) |(x[ unit73_1[i][2] ] ^ unit73_1[i][3]));
			}
		}
	}
	//Check all rules of unit[74][0]
	L[74][0] = LargeX[74][1]>0 ? 1 : 0;
	satisfiable[74][0]=1; 
	if(!L[74][0]){
		for(int i=0;i<30;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit74_0[i][0] ][ unit74_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit74_0[i][2] ][ unit74_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit74_0[i][4] ][ unit74_0[i][5] ] >0) ? 1 : 0;
			L[74][0] = L[74][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit74_0[i][4]==0){
				satisfiable[74][0]=satisfiable[74][0] & ((x[74] ^ 0) | (x[ unit74_0[i][0] ] ^ unit74_0[i][1]) |(x[ unit74_0[i][2] ] ^ unit74_0[i][3]));
			}
		}
	}
	//Check all rules of unit[74][1]
	L[74][1] = LargeX[74][0]>0 ? 1 : 0;
	satisfiable[74][1]=1; 
	if(!L[74][1]){
		for(int i=0;i<132;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit74_1[i][0] ][ unit74_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit74_1[i][2] ][ unit74_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit74_1[i][4] ][ unit74_1[i][5] ] >0) ? 1 : 0;
			L[74][1] = L[74][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit74_1[i][4]==0){
				satisfiable[74][1]=satisfiable[74][1] & ((x[74] ^ 1) | (x[ unit74_1[i][0] ] ^ unit74_1[i][1]) |(x[ unit74_1[i][2] ] ^ unit74_1[i][3]));
			}
		}
	}
	//Check all rules of unit[75][0]
	L[75][0] = LargeX[75][1]>0 ? 1 : 0;
	satisfiable[75][0]=1; 
	if(!L[75][0]){
		for(int i=0;i<42;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit75_0[i][0] ][ unit75_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit75_0[i][2] ][ unit75_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit75_0[i][4] ][ unit75_0[i][5] ] >0) ? 1 : 0;
			L[75][0] = L[75][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit75_0[i][4]==0){
				satisfiable[75][0]=satisfiable[75][0] & ((x[75] ^ 0) | (x[ unit75_0[i][0] ] ^ unit75_0[i][1]) |(x[ unit75_0[i][2] ] ^ unit75_0[i][3]));
			}
		}
	}
	//Check all rules of unit[75][1]
	L[75][1] = LargeX[75][0]>0 ? 1 : 0;
	satisfiable[75][1]=1; 
	if(!L[75][1]){
		for(int i=0;i<33;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit75_1[i][0] ][ unit75_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit75_1[i][2] ][ unit75_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit75_1[i][4] ][ unit75_1[i][5] ] >0) ? 1 : 0;
			L[75][1] = L[75][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit75_1[i][4]==0){
				satisfiable[75][1]=satisfiable[75][1] & ((x[75] ^ 1) | (x[ unit75_1[i][0] ] ^ unit75_1[i][1]) |(x[ unit75_1[i][2] ] ^ unit75_1[i][3]));
			}
		}
	}
	//Check all rules of unit[76][0]
	L[76][0] = LargeX[76][1]>0 ? 1 : 0;
	satisfiable[76][0]=1; 
	if(!L[76][0]){
		for(int i=0;i<89;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit76_0[i][0] ][ unit76_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit76_0[i][2] ][ unit76_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit76_0[i][4] ][ unit76_0[i][5] ] >0) ? 1 : 0;
			L[76][0] = L[76][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit76_0[i][4]==0){
				satisfiable[76][0]=satisfiable[76][0] & ((x[76] ^ 0) | (x[ unit76_0[i][0] ] ^ unit76_0[i][1]) |(x[ unit76_0[i][2] ] ^ unit76_0[i][3]));
			}
		}
	}
	//Check all rules of unit[76][1]
	L[76][1] = LargeX[76][0]>0 ? 1 : 0;
	satisfiable[76][1]=1; 
	if(!L[76][1]){
		for(int i=0;i<107;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit76_1[i][0] ][ unit76_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit76_1[i][2] ][ unit76_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit76_1[i][4] ][ unit76_1[i][5] ] >0) ? 1 : 0;
			L[76][1] = L[76][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit76_1[i][4]==0){
				satisfiable[76][1]=satisfiable[76][1] & ((x[76] ^ 1) | (x[ unit76_1[i][0] ] ^ unit76_1[i][1]) |(x[ unit76_1[i][2] ] ^ unit76_1[i][3]));
			}
		}
	}
	//Check all rules of unit[77][0]
	L[77][0] = LargeX[77][1]>0 ? 1 : 0;
	satisfiable[77][0]=1; 
	if(!L[77][0]){
		for(int i=0;i<81;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit77_0[i][0] ][ unit77_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit77_0[i][2] ][ unit77_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit77_0[i][4] ][ unit77_0[i][5] ] >0) ? 1 : 0;
			L[77][0] = L[77][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit77_0[i][4]==0){
				satisfiable[77][0]=satisfiable[77][0] & ((x[77] ^ 0) | (x[ unit77_0[i][0] ] ^ unit77_0[i][1]) |(x[ unit77_0[i][2] ] ^ unit77_0[i][3]));
			}
		}
	}
	//Check all rules of unit[77][1]
	L[77][1] = LargeX[77][0]>0 ? 1 : 0;
	satisfiable[77][1]=1; 
	if(!L[77][1]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit77_1[i][0] ][ unit77_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit77_1[i][2] ][ unit77_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit77_1[i][4] ][ unit77_1[i][5] ] >0) ? 1 : 0;
			L[77][1] = L[77][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit77_1[i][4]==0){
				satisfiable[77][1]=satisfiable[77][1] & ((x[77] ^ 1) | (x[ unit77_1[i][0] ] ^ unit77_1[i][1]) |(x[ unit77_1[i][2] ] ^ unit77_1[i][3]));
			}
		}
	}
	//Check all rules of unit[78][0]
	L[78][0] = LargeX[78][1]>0 ? 1 : 0;
	satisfiable[78][0]=1; 
	if(!L[78][0]){
		for(int i=0;i<80;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit78_0[i][0] ][ unit78_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit78_0[i][2] ][ unit78_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit78_0[i][4] ][ unit78_0[i][5] ] >0) ? 1 : 0;
			L[78][0] = L[78][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit78_0[i][4]==0){
				satisfiable[78][0]=satisfiable[78][0] & ((x[78] ^ 0) | (x[ unit78_0[i][0] ] ^ unit78_0[i][1]) |(x[ unit78_0[i][2] ] ^ unit78_0[i][3]));
			}
		}
	}
	//Check all rules of unit[78][1]
	L[78][1] = LargeX[78][0]>0 ? 1 : 0;
	satisfiable[78][1]=1; 
	if(!L[78][1]){
		for(int i=0;i<100;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit78_1[i][0] ][ unit78_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit78_1[i][2] ][ unit78_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit78_1[i][4] ][ unit78_1[i][5] ] >0) ? 1 : 0;
			L[78][1] = L[78][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit78_1[i][4]==0){
				satisfiable[78][1]=satisfiable[78][1] & ((x[78] ^ 1) | (x[ unit78_1[i][0] ] ^ unit78_1[i][1]) |(x[ unit78_1[i][2] ] ^ unit78_1[i][3]));
			}
		}
	}
	//Check all rules of unit[79][0]
	L[79][0] = LargeX[79][1]>0 ? 1 : 0;
	satisfiable[79][0]=1; 
	if(!L[79][0]){
		for(int i=0;i<85;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit79_0[i][0] ][ unit79_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit79_0[i][2] ][ unit79_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit79_0[i][4] ][ unit79_0[i][5] ] >0) ? 1 : 0;
			L[79][0] = L[79][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit79_0[i][4]==0){
				satisfiable[79][0]=satisfiable[79][0] & ((x[79] ^ 0) | (x[ unit79_0[i][0] ] ^ unit79_0[i][1]) |(x[ unit79_0[i][2] ] ^ unit79_0[i][3]));
			}
		}
	}
	//Check all rules of unit[79][1]
	L[79][1] = LargeX[79][0]>0 ? 1 : 0;
	satisfiable[79][1]=1; 
	if(!L[79][1]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit79_1[i][0] ][ unit79_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit79_1[i][2] ][ unit79_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit79_1[i][4] ][ unit79_1[i][5] ] >0) ? 1 : 0;
			L[79][1] = L[79][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit79_1[i][4]==0){
				satisfiable[79][1]=satisfiable[79][1] & ((x[79] ^ 1) | (x[ unit79_1[i][0] ] ^ unit79_1[i][1]) |(x[ unit79_1[i][2] ] ^ unit79_1[i][3]));
			}
		}
	}
	//Check all rules of unit[80][0]
	L[80][0] = LargeX[80][1]>0 ? 1 : 0;
	satisfiable[80][0]=1; 
	if(!L[80][0]){
		for(int i=0;i<118;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit80_0[i][0] ][ unit80_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit80_0[i][2] ][ unit80_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit80_0[i][4] ][ unit80_0[i][5] ] >0) ? 1 : 0;
			L[80][0] = L[80][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit80_0[i][4]==0){
				satisfiable[80][0]=satisfiable[80][0] & ((x[80] ^ 0) | (x[ unit80_0[i][0] ] ^ unit80_0[i][1]) |(x[ unit80_0[i][2] ] ^ unit80_0[i][3]));
			}
		}
	}
	//Check all rules of unit[80][1]
	L[80][1] = LargeX[80][0]>0 ? 1 : 0;
	satisfiable[80][1]=1; 
	if(!L[80][1]){
		for(int i=0;i<118;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit80_1[i][0] ][ unit80_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit80_1[i][2] ][ unit80_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit80_1[i][4] ][ unit80_1[i][5] ] >0) ? 1 : 0;
			L[80][1] = L[80][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit80_1[i][4]==0){
				satisfiable[80][1]=satisfiable[80][1] & ((x[80] ^ 1) | (x[ unit80_1[i][0] ] ^ unit80_1[i][1]) |(x[ unit80_1[i][2] ] ^ unit80_1[i][3]));
			}
		}
	}
	//Check all rules of unit[81][0]
	L[81][0] = LargeX[81][1]>0 ? 1 : 0;
	satisfiable[81][0]=1; 
	if(!L[81][0]){
		for(int i=0;i<87;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit81_0[i][0] ][ unit81_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit81_0[i][2] ][ unit81_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit81_0[i][4] ][ unit81_0[i][5] ] >0) ? 1 : 0;
			L[81][0] = L[81][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit81_0[i][4]==0){
				satisfiable[81][0]=satisfiable[81][0] & ((x[81] ^ 0) | (x[ unit81_0[i][0] ] ^ unit81_0[i][1]) |(x[ unit81_0[i][2] ] ^ unit81_0[i][3]));
			}
		}
	}
	//Check all rules of unit[81][1]
	L[81][1] = LargeX[81][0]>0 ? 1 : 0;
	satisfiable[81][1]=1; 
	if(!L[81][1]){
		for(int i=0;i<114;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit81_1[i][0] ][ unit81_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit81_1[i][2] ][ unit81_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit81_1[i][4] ][ unit81_1[i][5] ] >0) ? 1 : 0;
			L[81][1] = L[81][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit81_1[i][4]==0){
				satisfiable[81][1]=satisfiable[81][1] & ((x[81] ^ 1) | (x[ unit81_1[i][0] ] ^ unit81_1[i][1]) |(x[ unit81_1[i][2] ] ^ unit81_1[i][3]));
			}
		}
	}
	//Check all rules of unit[82][0]
	L[82][0] = LargeX[82][1]>0 ? 1 : 0;
	satisfiable[82][0]=1; 
	if(!L[82][0]){
		for(int i=0;i<95;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit82_0[i][0] ][ unit82_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit82_0[i][2] ][ unit82_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit82_0[i][4] ][ unit82_0[i][5] ] >0) ? 1 : 0;
			L[82][0] = L[82][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit82_0[i][4]==0){
				satisfiable[82][0]=satisfiable[82][0] & ((x[82] ^ 0) | (x[ unit82_0[i][0] ] ^ unit82_0[i][1]) |(x[ unit82_0[i][2] ] ^ unit82_0[i][3]));
			}
		}
	}
	//Check all rules of unit[82][1]
	L[82][1] = LargeX[82][0]>0 ? 1 : 0;
	satisfiable[82][1]=1; 
	if(!L[82][1]){
		for(int i=0;i<48;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit82_1[i][0] ][ unit82_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit82_1[i][2] ][ unit82_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit82_1[i][4] ][ unit82_1[i][5] ] >0) ? 1 : 0;
			L[82][1] = L[82][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit82_1[i][4]==0){
				satisfiable[82][1]=satisfiable[82][1] & ((x[82] ^ 1) | (x[ unit82_1[i][0] ] ^ unit82_1[i][1]) |(x[ unit82_1[i][2] ] ^ unit82_1[i][3]));
			}
		}
	}
	//Check all rules of unit[83][0]
	L[83][0] = LargeX[83][1]>0 ? 1 : 0;
	satisfiable[83][0]=1; 
	if(!L[83][0]){
		for(int i=0;i<216;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit83_0[i][0] ][ unit83_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit83_0[i][2] ][ unit83_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit83_0[i][4] ][ unit83_0[i][5] ] >0) ? 1 : 0;
			L[83][0] = L[83][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit83_0[i][4]==0){
				satisfiable[83][0]=satisfiable[83][0] & ((x[83] ^ 0) | (x[ unit83_0[i][0] ] ^ unit83_0[i][1]) |(x[ unit83_0[i][2] ] ^ unit83_0[i][3]));
			}
		}
	}
	//Check all rules of unit[83][1]
	L[83][1] = LargeX[83][0]>0 ? 1 : 0;
	satisfiable[83][1]=1; 
	if(!L[83][1]){
		for(int i=0;i<52;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit83_1[i][0] ][ unit83_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit83_1[i][2] ][ unit83_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit83_1[i][4] ][ unit83_1[i][5] ] >0) ? 1 : 0;
			L[83][1] = L[83][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit83_1[i][4]==0){
				satisfiable[83][1]=satisfiable[83][1] & ((x[83] ^ 1) | (x[ unit83_1[i][0] ] ^ unit83_1[i][1]) |(x[ unit83_1[i][2] ] ^ unit83_1[i][3]));
			}
		}
	}
	//Check all rules of unit[84][0]
	L[84][0] = LargeX[84][1]>0 ? 1 : 0;
	satisfiable[84][0]=1; 
	if(!L[84][0]){
		for(int i=0;i<111;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit84_0[i][0] ][ unit84_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit84_0[i][2] ][ unit84_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit84_0[i][4] ][ unit84_0[i][5] ] >0) ? 1 : 0;
			L[84][0] = L[84][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit84_0[i][4]==0){
				satisfiable[84][0]=satisfiable[84][0] & ((x[84] ^ 0) | (x[ unit84_0[i][0] ] ^ unit84_0[i][1]) |(x[ unit84_0[i][2] ] ^ unit84_0[i][3]));
			}
		}
	}
	//Check all rules of unit[84][1]
	L[84][1] = LargeX[84][0]>0 ? 1 : 0;
	satisfiable[84][1]=1; 
	if(!L[84][1]){
		for(int i=0;i<91;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit84_1[i][0] ][ unit84_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit84_1[i][2] ][ unit84_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit84_1[i][4] ][ unit84_1[i][5] ] >0) ? 1 : 0;
			L[84][1] = L[84][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit84_1[i][4]==0){
				satisfiable[84][1]=satisfiable[84][1] & ((x[84] ^ 1) | (x[ unit84_1[i][0] ] ^ unit84_1[i][1]) |(x[ unit84_1[i][2] ] ^ unit84_1[i][3]));
			}
		}
	}
	//Check all rules of unit[85][0]
	L[85][0] = LargeX[85][1]>0 ? 1 : 0;
	satisfiable[85][0]=1; 
	if(!L[85][0]){
		for(int i=0;i<108;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit85_0[i][0] ][ unit85_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit85_0[i][2] ][ unit85_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit85_0[i][4] ][ unit85_0[i][5] ] >0) ? 1 : 0;
			L[85][0] = L[85][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit85_0[i][4]==0){
				satisfiable[85][0]=satisfiable[85][0] & ((x[85] ^ 0) | (x[ unit85_0[i][0] ] ^ unit85_0[i][1]) |(x[ unit85_0[i][2] ] ^ unit85_0[i][3]));
			}
		}
	}
	//Check all rules of unit[85][1]
	L[85][1] = LargeX[85][0]>0 ? 1 : 0;
	satisfiable[85][1]=1; 
	if(!L[85][1]){
		for(int i=0;i<124;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit85_1[i][0] ][ unit85_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit85_1[i][2] ][ unit85_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit85_1[i][4] ][ unit85_1[i][5] ] >0) ? 1 : 0;
			L[85][1] = L[85][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit85_1[i][4]==0){
				satisfiable[85][1]=satisfiable[85][1] & ((x[85] ^ 1) | (x[ unit85_1[i][0] ] ^ unit85_1[i][1]) |(x[ unit85_1[i][2] ] ^ unit85_1[i][3]));
			}
		}
	}
	//Check all rules of unit[86][0]
	L[86][0] = LargeX[86][1]>0 ? 1 : 0;
	satisfiable[86][0]=1; 
	if(!L[86][0]){
		for(int i=0;i<118;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit86_0[i][0] ][ unit86_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit86_0[i][2] ][ unit86_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit86_0[i][4] ][ unit86_0[i][5] ] >0) ? 1 : 0;
			L[86][0] = L[86][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit86_0[i][4]==0){
				satisfiable[86][0]=satisfiable[86][0] & ((x[86] ^ 0) | (x[ unit86_0[i][0] ] ^ unit86_0[i][1]) |(x[ unit86_0[i][2] ] ^ unit86_0[i][3]));
			}
		}
	}
	//Check all rules of unit[86][1]
	L[86][1] = LargeX[86][0]>0 ? 1 : 0;
	satisfiable[86][1]=1; 
	if(!L[86][1]){
		for(int i=0;i<84;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit86_1[i][0] ][ unit86_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit86_1[i][2] ][ unit86_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit86_1[i][4] ][ unit86_1[i][5] ] >0) ? 1 : 0;
			L[86][1] = L[86][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit86_1[i][4]==0){
				satisfiable[86][1]=satisfiable[86][1] & ((x[86] ^ 1) | (x[ unit86_1[i][0] ] ^ unit86_1[i][1]) |(x[ unit86_1[i][2] ] ^ unit86_1[i][3]));
			}
		}
	}
	//Check all rules of unit[87][0]
	L[87][0] = LargeX[87][1]>0 ? 1 : 0;
	satisfiable[87][0]=1; 
	if(!L[87][0]){
		for(int i=0;i<149;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit87_0[i][0] ][ unit87_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit87_0[i][2] ][ unit87_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit87_0[i][4] ][ unit87_0[i][5] ] >0) ? 1 : 0;
			L[87][0] = L[87][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit87_0[i][4]==0){
				satisfiable[87][0]=satisfiable[87][0] & ((x[87] ^ 0) | (x[ unit87_0[i][0] ] ^ unit87_0[i][1]) |(x[ unit87_0[i][2] ] ^ unit87_0[i][3]));
			}
		}
	}
	//Check all rules of unit[87][1]
	L[87][1] = LargeX[87][0]>0 ? 1 : 0;
	satisfiable[87][1]=1; 
	if(!L[87][1]){
		for(int i=0;i<138;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit87_1[i][0] ][ unit87_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit87_1[i][2] ][ unit87_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit87_1[i][4] ][ unit87_1[i][5] ] >0) ? 1 : 0;
			L[87][1] = L[87][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit87_1[i][4]==0){
				satisfiable[87][1]=satisfiable[87][1] & ((x[87] ^ 1) | (x[ unit87_1[i][0] ] ^ unit87_1[i][1]) |(x[ unit87_1[i][2] ] ^ unit87_1[i][3]));
			}
		}
	}
	//Check all rules of unit[88][0]
	L[88][0] = LargeX[88][1]>0 ? 1 : 0;
	satisfiable[88][0]=1; 
	if(!L[88][0]){
		for(int i=0;i<49;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit88_0[i][0] ][ unit88_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit88_0[i][2] ][ unit88_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit88_0[i][4] ][ unit88_0[i][5] ] >0) ? 1 : 0;
			L[88][0] = L[88][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit88_0[i][4]==0){
				satisfiable[88][0]=satisfiable[88][0] & ((x[88] ^ 0) | (x[ unit88_0[i][0] ] ^ unit88_0[i][1]) |(x[ unit88_0[i][2] ] ^ unit88_0[i][3]));
			}
		}
	}
	//Check all rules of unit[88][1]
	L[88][1] = LargeX[88][0]>0 ? 1 : 0;
	satisfiable[88][1]=1; 
	if(!L[88][1]){
		for(int i=0;i<53;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit88_1[i][0] ][ unit88_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit88_1[i][2] ][ unit88_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit88_1[i][4] ][ unit88_1[i][5] ] >0) ? 1 : 0;
			L[88][1] = L[88][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit88_1[i][4]==0){
				satisfiable[88][1]=satisfiable[88][1] & ((x[88] ^ 1) | (x[ unit88_1[i][0] ] ^ unit88_1[i][1]) |(x[ unit88_1[i][2] ] ^ unit88_1[i][3]));
			}
		}
	}
	//Check all rules of unit[89][0]
	L[89][0] = LargeX[89][1]>0 ? 1 : 0;
	satisfiable[89][0]=1; 
	if(!L[89][0]){
		for(int i=0;i<81;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit89_0[i][0] ][ unit89_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit89_0[i][2] ][ unit89_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit89_0[i][4] ][ unit89_0[i][5] ] >0) ? 1 : 0;
			L[89][0] = L[89][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit89_0[i][4]==0){
				satisfiable[89][0]=satisfiable[89][0] & ((x[89] ^ 0) | (x[ unit89_0[i][0] ] ^ unit89_0[i][1]) |(x[ unit89_0[i][2] ] ^ unit89_0[i][3]));
			}
		}
	}
	//Check all rules of unit[89][1]
	L[89][1] = LargeX[89][0]>0 ? 1 : 0;
	satisfiable[89][1]=1; 
	if(!L[89][1]){
		for(int i=0;i<78;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit89_1[i][0] ][ unit89_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit89_1[i][2] ][ unit89_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit89_1[i][4] ][ unit89_1[i][5] ] >0) ? 1 : 0;
			L[89][1] = L[89][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit89_1[i][4]==0){
				satisfiable[89][1]=satisfiable[89][1] & ((x[89] ^ 1) | (x[ unit89_1[i][0] ] ^ unit89_1[i][1]) |(x[ unit89_1[i][2] ] ^ unit89_1[i][3]));
			}
		}
	}
	//Check all rules of unit[90][0]
	L[90][0] = LargeX[90][1]>0 ? 1 : 0;
	satisfiable[90][0]=1; 
	if(!L[90][0]){
		for(int i=0;i<75;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit90_0[i][0] ][ unit90_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit90_0[i][2] ][ unit90_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit90_0[i][4] ][ unit90_0[i][5] ] >0) ? 1 : 0;
			L[90][0] = L[90][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit90_0[i][4]==0){
				satisfiable[90][0]=satisfiable[90][0] & ((x[90] ^ 0) | (x[ unit90_0[i][0] ] ^ unit90_0[i][1]) |(x[ unit90_0[i][2] ] ^ unit90_0[i][3]));
			}
		}
	}
	//Check all rules of unit[90][1]
	L[90][1] = LargeX[90][0]>0 ? 1 : 0;
	satisfiable[90][1]=1; 
	if(!L[90][1]){
		for(int i=0;i<133;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit90_1[i][0] ][ unit90_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit90_1[i][2] ][ unit90_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit90_1[i][4] ][ unit90_1[i][5] ] >0) ? 1 : 0;
			L[90][1] = L[90][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit90_1[i][4]==0){
				satisfiable[90][1]=satisfiable[90][1] & ((x[90] ^ 1) | (x[ unit90_1[i][0] ] ^ unit90_1[i][1]) |(x[ unit90_1[i][2] ] ^ unit90_1[i][3]));
			}
		}
	}
	//Check all rules of unit[91][0]
	L[91][0] = LargeX[91][1]>0 ? 1 : 0;
	satisfiable[91][0]=1; 
	if(!L[91][0]){
		for(int i=0;i<61;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit91_0[i][0] ][ unit91_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit91_0[i][2] ][ unit91_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit91_0[i][4] ][ unit91_0[i][5] ] >0) ? 1 : 0;
			L[91][0] = L[91][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit91_0[i][4]==0){
				satisfiable[91][0]=satisfiable[91][0] & ((x[91] ^ 0) | (x[ unit91_0[i][0] ] ^ unit91_0[i][1]) |(x[ unit91_0[i][2] ] ^ unit91_0[i][3]));
			}
		}
	}
	//Check all rules of unit[91][1]
	L[91][1] = LargeX[91][0]>0 ? 1 : 0;
	satisfiable[91][1]=1; 
	if(!L[91][1]){
		for(int i=0;i<23;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit91_1[i][0] ][ unit91_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit91_1[i][2] ][ unit91_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit91_1[i][4] ][ unit91_1[i][5] ] >0) ? 1 : 0;
			L[91][1] = L[91][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit91_1[i][4]==0){
				satisfiable[91][1]=satisfiable[91][1] & ((x[91] ^ 1) | (x[ unit91_1[i][0] ] ^ unit91_1[i][1]) |(x[ unit91_1[i][2] ] ^ unit91_1[i][3]));
			}
		}
	}
	//Check all rules of unit[92][0]
	L[92][0] = LargeX[92][1]>0 ? 1 : 0;
	satisfiable[92][0]=1; 
	if(!L[92][0]){
		for(int i=0;i<103;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit92_0[i][0] ][ unit92_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit92_0[i][2] ][ unit92_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit92_0[i][4] ][ unit92_0[i][5] ] >0) ? 1 : 0;
			L[92][0] = L[92][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit92_0[i][4]==0){
				satisfiable[92][0]=satisfiable[92][0] & ((x[92] ^ 0) | (x[ unit92_0[i][0] ] ^ unit92_0[i][1]) |(x[ unit92_0[i][2] ] ^ unit92_0[i][3]));
			}
		}
	}
	//Check all rules of unit[92][1]
	L[92][1] = LargeX[92][0]>0 ? 1 : 0;
	satisfiable[92][1]=1; 
	if(!L[92][1]){
		for(int i=0;i<70;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit92_1[i][0] ][ unit92_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit92_1[i][2] ][ unit92_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit92_1[i][4] ][ unit92_1[i][5] ] >0) ? 1 : 0;
			L[92][1] = L[92][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit92_1[i][4]==0){
				satisfiable[92][1]=satisfiable[92][1] & ((x[92] ^ 1) | (x[ unit92_1[i][0] ] ^ unit92_1[i][1]) |(x[ unit92_1[i][2] ] ^ unit92_1[i][3]));
			}
		}
	}
	//Check all rules of unit[93][0]
	L[93][0] = LargeX[93][1]>0 ? 1 : 0;
	satisfiable[93][0]=1; 
	if(!L[93][0]){
		for(int i=0;i<77;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit93_0[i][0] ][ unit93_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit93_0[i][2] ][ unit93_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit93_0[i][4] ][ unit93_0[i][5] ] >0) ? 1 : 0;
			L[93][0] = L[93][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit93_0[i][4]==0){
				satisfiable[93][0]=satisfiable[93][0] & ((x[93] ^ 0) | (x[ unit93_0[i][0] ] ^ unit93_0[i][1]) |(x[ unit93_0[i][2] ] ^ unit93_0[i][3]));
			}
		}
	}
	//Check all rules of unit[93][1]
	L[93][1] = LargeX[93][0]>0 ? 1 : 0;
	satisfiable[93][1]=1; 
	if(!L[93][1]){
		for(int i=0;i<81;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit93_1[i][0] ][ unit93_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit93_1[i][2] ][ unit93_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit93_1[i][4] ][ unit93_1[i][5] ] >0) ? 1 : 0;
			L[93][1] = L[93][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit93_1[i][4]==0){
				satisfiable[93][1]=satisfiable[93][1] & ((x[93] ^ 1) | (x[ unit93_1[i][0] ] ^ unit93_1[i][1]) |(x[ unit93_1[i][2] ] ^ unit93_1[i][3]));
			}
		}
	}
	//Check all rules of unit[94][0]
	L[94][0] = LargeX[94][1]>0 ? 1 : 0;
	satisfiable[94][0]=1; 
	if(!L[94][0]){
		for(int i=0;i<78;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit94_0[i][0] ][ unit94_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit94_0[i][2] ][ unit94_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit94_0[i][4] ][ unit94_0[i][5] ] >0) ? 1 : 0;
			L[94][0] = L[94][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit94_0[i][4]==0){
				satisfiable[94][0]=satisfiable[94][0] & ((x[94] ^ 0) | (x[ unit94_0[i][0] ] ^ unit94_0[i][1]) |(x[ unit94_0[i][2] ] ^ unit94_0[i][3]));
			}
		}
	}
	//Check all rules of unit[94][1]
	L[94][1] = LargeX[94][0]>0 ? 1 : 0;
	satisfiable[94][1]=1; 
	if(!L[94][1]){
		for(int i=0;i<70;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit94_1[i][0] ][ unit94_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit94_1[i][2] ][ unit94_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit94_1[i][4] ][ unit94_1[i][5] ] >0) ? 1 : 0;
			L[94][1] = L[94][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit94_1[i][4]==0){
				satisfiable[94][1]=satisfiable[94][1] & ((x[94] ^ 1) | (x[ unit94_1[i][0] ] ^ unit94_1[i][1]) |(x[ unit94_1[i][2] ] ^ unit94_1[i][3]));
			}
		}
	}
	//Check all rules of unit[95][0]
	L[95][0] = LargeX[95][1]>0 ? 1 : 0;
	satisfiable[95][0]=1; 
	if(!L[95][0]){
		for(int i=0;i<116;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit95_0[i][0] ][ unit95_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit95_0[i][2] ][ unit95_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit95_0[i][4] ][ unit95_0[i][5] ] >0) ? 1 : 0;
			L[95][0] = L[95][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit95_0[i][4]==0){
				satisfiable[95][0]=satisfiable[95][0] & ((x[95] ^ 0) | (x[ unit95_0[i][0] ] ^ unit95_0[i][1]) |(x[ unit95_0[i][2] ] ^ unit95_0[i][3]));
			}
		}
	}
	//Check all rules of unit[95][1]
	L[95][1] = LargeX[95][0]>0 ? 1 : 0;
	satisfiable[95][1]=1; 
	if(!L[95][1]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit95_1[i][0] ][ unit95_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit95_1[i][2] ][ unit95_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit95_1[i][4] ][ unit95_1[i][5] ] >0) ? 1 : 0;
			L[95][1] = L[95][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit95_1[i][4]==0){
				satisfiable[95][1]=satisfiable[95][1] & ((x[95] ^ 1) | (x[ unit95_1[i][0] ] ^ unit95_1[i][1]) |(x[ unit95_1[i][2] ] ^ unit95_1[i][3]));
			}
		}
	}
	//Check all rules of unit[96][0]
	L[96][0] = LargeX[96][1]>0 ? 1 : 0;
	satisfiable[96][0]=1; 
	if(!L[96][0]){
		for(int i=0;i<176;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit96_0[i][0] ][ unit96_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit96_0[i][2] ][ unit96_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit96_0[i][4] ][ unit96_0[i][5] ] >0) ? 1 : 0;
			L[96][0] = L[96][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit96_0[i][4]==0){
				satisfiable[96][0]=satisfiable[96][0] & ((x[96] ^ 0) | (x[ unit96_0[i][0] ] ^ unit96_0[i][1]) |(x[ unit96_0[i][2] ] ^ unit96_0[i][3]));
			}
		}
	}
	//Check all rules of unit[96][1]
	L[96][1] = LargeX[96][0]>0 ? 1 : 0;
	satisfiable[96][1]=1; 
	if(!L[96][1]){
		for(int i=0;i<0;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit96_1[i][0] ][ unit96_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit96_1[i][2] ][ unit96_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit96_1[i][4] ][ unit96_1[i][5] ] >0) ? 1 : 0;
			L[96][1] = L[96][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit96_1[i][4]==0){
				satisfiable[96][1]=satisfiable[96][1] & ((x[96] ^ 1) | (x[ unit96_1[i][0] ] ^ unit96_1[i][1]) |(x[ unit96_1[i][2] ] ^ unit96_1[i][3]));
			}
		}
	}
	//Check all rules of unit[97][0]
	L[97][0] = LargeX[97][1]>0 ? 1 : 0;
	satisfiable[97][0]=1; 
	if(!L[97][0]){
		for(int i=0;i<14;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit97_0[i][0] ][ unit97_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit97_0[i][2] ][ unit97_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit97_0[i][4] ][ unit97_0[i][5] ] >0) ? 1 : 0;
			L[97][0] = L[97][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit97_0[i][4]==0){
				satisfiable[97][0]=satisfiable[97][0] & ((x[97] ^ 0) | (x[ unit97_0[i][0] ] ^ unit97_0[i][1]) |(x[ unit97_0[i][2] ] ^ unit97_0[i][3]));
			}
		}
	}
	//Check all rules of unit[97][1]
	L[97][1] = LargeX[97][0]>0 ? 1 : 0;
	satisfiable[97][1]=1; 
	if(!L[97][1]){
		for(int i=0;i<63;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit97_1[i][0] ][ unit97_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit97_1[i][2] ][ unit97_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit97_1[i][4] ][ unit97_1[i][5] ] >0) ? 1 : 0;
			L[97][1] = L[97][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit97_1[i][4]==0){
				satisfiable[97][1]=satisfiable[97][1] & ((x[97] ^ 1) | (x[ unit97_1[i][0] ] ^ unit97_1[i][1]) |(x[ unit97_1[i][2] ] ^ unit97_1[i][3]));
			}
		}
	}
	//Check all rules of unit[98][0]
	L[98][0] = LargeX[98][1]>0 ? 1 : 0;
	satisfiable[98][0]=1; 
	if(!L[98][0]){
		for(int i=0;i<107;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit98_0[i][0] ][ unit98_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit98_0[i][2] ][ unit98_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit98_0[i][4] ][ unit98_0[i][5] ] >0) ? 1 : 0;
			L[98][0] = L[98][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit98_0[i][4]==0){
				satisfiable[98][0]=satisfiable[98][0] & ((x[98] ^ 0) | (x[ unit98_0[i][0] ] ^ unit98_0[i][1]) |(x[ unit98_0[i][2] ] ^ unit98_0[i][3]));
			}
		}
	}
	//Check all rules of unit[98][1]
	L[98][1] = LargeX[98][0]>0 ? 1 : 0;
	satisfiable[98][1]=1; 
	if(!L[98][1]){
		for(int i=0;i<83;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit98_1[i][0] ][ unit98_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit98_1[i][2] ][ unit98_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit98_1[i][4] ][ unit98_1[i][5] ] >0) ? 1 : 0;
			L[98][1] = L[98][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit98_1[i][4]==0){
				satisfiable[98][1]=satisfiable[98][1] & ((x[98] ^ 1) | (x[ unit98_1[i][0] ] ^ unit98_1[i][1]) |(x[ unit98_1[i][2] ] ^ unit98_1[i][3]));
			}
		}
	}
	//Check all rules of unit[99][0]
	L[99][0] = LargeX[99][1]>0 ? 1 : 0;
	satisfiable[99][0]=1; 
	if(!L[99][0]){
		for(int i=0;i<63;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit99_0[i][0] ][ unit99_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit99_0[i][2] ][ unit99_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit99_0[i][4] ][ unit99_0[i][5] ] >0) ? 1 : 0;
			L[99][0] = L[99][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit99_0[i][4]==0){
				satisfiable[99][0]=satisfiable[99][0] & ((x[99] ^ 0) | (x[ unit99_0[i][0] ] ^ unit99_0[i][1]) |(x[ unit99_0[i][2] ] ^ unit99_0[i][3]));
			}
		}
	}
	//Check all rules of unit[99][1]
	L[99][1] = LargeX[99][0]>0 ? 1 : 0;
	satisfiable[99][1]=1; 
	if(!L[99][1]){
		for(int i=0;i<85;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit99_1[i][0] ][ unit99_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit99_1[i][2] ][ unit99_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit99_1[i][4] ][ unit99_1[i][5] ] >0) ? 1 : 0;
			L[99][1] = L[99][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit99_1[i][4]==0){
				satisfiable[99][1]=satisfiable[99][1] & ((x[99] ^ 1) | (x[ unit99_1[i][0] ] ^ unit99_1[i][1]) |(x[ unit99_1[i][2] ] ^ unit99_1[i][3]));
			}
		}
	}
	//Check all rules of unit[100][0]
	L[100][0] = LargeX[100][1]>0 ? 1 : 0;
	satisfiable[100][0]=1; 
	if(!L[100][0]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit100_0[i][0] ][ unit100_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit100_0[i][2] ][ unit100_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit100_0[i][4] ][ unit100_0[i][5] ] >0) ? 1 : 0;
			L[100][0] = L[100][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit100_0[i][4]==0){
				satisfiable[100][0]=satisfiable[100][0] & ((x[100] ^ 0) | (x[ unit100_0[i][0] ] ^ unit100_0[i][1]) |(x[ unit100_0[i][2] ] ^ unit100_0[i][3]));
			}
		}
	}
	//Check all rules of unit[100][1]
	L[100][1] = LargeX[100][0]>0 ? 1 : 0;
	satisfiable[100][1]=1; 
	if(!L[100][1]){
		for(int i=0;i<142;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit100_1[i][0] ][ unit100_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit100_1[i][2] ][ unit100_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit100_1[i][4] ][ unit100_1[i][5] ] >0) ? 1 : 0;
			L[100][1] = L[100][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit100_1[i][4]==0){
				satisfiable[100][1]=satisfiable[100][1] & ((x[100] ^ 1) | (x[ unit100_1[i][0] ] ^ unit100_1[i][1]) |(x[ unit100_1[i][2] ] ^ unit100_1[i][3]));
			}
		}
	}
}