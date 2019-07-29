#include "amoeba_local_rules.h"
#include "local_rules_225.h"
void update_L(one_bit_t L[N_VARIABLE+1][2], largeX_t LargeX[N_VARIABLE+1][2], one_bit_t x[N_VARIABLE+1], one_bit_t satisfiable[N_VARIABLE+1][2]){
	//Check all rules of unit[1][0]
	L[1][0] = LargeX[1][1]>0 ? 1 : 0;
	satisfiable[1][0]=1; 
	if(!L[1][0]){
		for(int i=0;i<118;i++){
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
		for(int i=0;i<101;i++){
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
		for(int i=0;i<124;i++){
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
		for(int i=0;i<115;i++){
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
		for(int i=0;i<80;i++){
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
		for(int i=0;i<66;i++){
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
		for(int i=0;i<61;i++){
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
		for(int i=0;i<82;i++){
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
		for(int i=0;i<67;i++){
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
		for(int i=0;i<34;i++){
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
		for(int i=0;i<63;i++){
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
		for(int i=0;i<42;i++){
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
		for(int i=0;i<62;i++){
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
		for(int i=0;i<85;i++){
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
		for(int i=0;i<70;i++){
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
		for(int i=0;i<79;i++){
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
		for(int i=0;i<104;i++){
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
		for(int i=0;i<117;i++){
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
		for(int i=0;i<104;i++){
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
		for(int i=0;i<163;i++){
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
		for(int i=0;i<155;i++){
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
		for(int i=0;i<12;i++){
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
		for(int i=0;i<30;i++){
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
		for(int i=0;i<107;i++){
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
		for(int i=0;i<75;i++){
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
		for(int i=0;i<113;i++){
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
		for(int i=0;i<76;i++){
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
		for(int i=0;i<42;i++){
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
		for(int i=0;i<54;i++){
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
		for(int i=0;i<70;i++){
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
		for(int i=0;i<66;i++){
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
		for(int i=0;i<58;i++){
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
		for(int i=0;i<47;i++){
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
		for(int i=0;i<123;i++){
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
		for(int i=0;i<113;i++){
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
		for(int i=0;i<78;i++){
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
		for(int i=0;i<180;i++){
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
		for(int i=0;i<54;i++){
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
		for(int i=0;i<138;i++){
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
		for(int i=0;i<30;i++){
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
		for(int i=0;i<171;i++){
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
		for(int i=0;i<73;i++){
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
		for(int i=0;i<101;i++){
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
		for(int i=0;i<79;i++){
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
		for(int i=0;i<124;i++){
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
		for(int i=0;i<83;i++){
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
		for(int i=0;i<136;i++){
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
		for(int i=0;i<84;i++){
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
		for(int i=0;i<55;i++){
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
		for(int i=0;i<153;i++){
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
		for(int i=0;i<108;i++){
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
		for(int i=0;i<18;i++){
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
		for(int i=0;i<69;i++){
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
		for(int i=0;i<80;i++){
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
		for(int i=0;i<47;i++){
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
		for(int i=0;i<107;i++){
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
		for(int i=0;i<103;i++){
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
		for(int i=0;i<111;i++){
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
		for(int i=0;i<66;i++){
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
		for(int i=0;i<72;i++){
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
		for(int i=0;i<35;i++){
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
		for(int i=0;i<119;i++){
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
		for(int i=0;i<23;i++){
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
		for(int i=0;i<45;i++){
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
		for(int i=0;i<63;i++){
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
		for(int i=0;i<72;i++){
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
		for(int i=0;i<76;i++){
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
		for(int i=0;i<89;i++){
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
		for(int i=0;i<57;i++){
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
		for(int i=0;i<112;i++){
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
		for(int i=0;i<42;i++){
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
		for(int i=0;i<116;i++){
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
		for(int i=0;i<78;i++){
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
		for(int i=0;i<157;i++){
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
		for(int i=0;i<63;i++){
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
		for(int i=0;i<94;i++){
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
		for(int i=0;i<67;i++){
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
		for(int i=0;i<120;i++){
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
		for(int i=0;i<87;i++){
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
		for(int i=0;i<70;i++){
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
		for(int i=0;i<69;i++){
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
		for(int i=0;i<71;i++){
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
		for(int i=0;i<15;i++){
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
		for(int i=0;i<70;i++){
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
		for(int i=0;i<92;i++){
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
		for(int i=0;i<74;i++){
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
		for(int i=0;i<74;i++){
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
		for(int i=0;i<100;i++){
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
		for(int i=0;i<83;i++){
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
		for(int i=0;i<63;i++){
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
		for(int i=0;i<40;i++){
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
		for(int i=0;i<41;i++){
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
		for(int i=0;i<62;i++){
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
		for(int i=0;i<138;i++){
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
		for(int i=0;i<129;i++){
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
		for(int i=0;i<77;i++){
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
		for(int i=0;i<54;i++){
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
		for(int i=0;i<87;i++){
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
		for(int i=0;i<110;i++){
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
		for(int i=0;i<66;i++){
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
		for(int i=0;i<86;i++){
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
		for(int i=0;i<120;i++){
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
		for(int i=0;i<99;i++){
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
		for(int i=0;i<45;i++){
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
		for(int i=0;i<87;i++){
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
		for(int i=0;i<85;i++){
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
		for(int i=0;i<18;i++){
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
		for(int i=0;i<90;i++){
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
		for(int i=0;i<50;i++){
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
		for(int i=0;i<143;i++){
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
		for(int i=0;i<22;i++){
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
		for(int i=0;i<106;i++){
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
		for(int i=0;i<89;i++){
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
		for(int i=0;i<119;i++){
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
		for(int i=0;i<51;i++){
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
		for(int i=0;i<77;i++){
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
		for(int i=0;i<60;i++){
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
		for(int i=0;i<21;i++){
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
		for(int i=0;i<102;i++){
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
		for(int i=0;i<106;i++){
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
		for(int i=0;i<0;i++){
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
		for(int i=0;i<109;i++){
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
		for(int i=0;i<32;i++){
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
		for(int i=0;i<52;i++){
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
		for(int i=0;i<69;i++){
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
		for(int i=0;i<55;i++){
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
		for(int i=0;i<100;i++){
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
		for(int i=0;i<72;i++){
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
		for(int i=0;i<61;i++){
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
		for(int i=0;i<38;i++){
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
		for(int i=0;i<122;i++){
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
		for(int i=0;i<75;i++){
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
		for(int i=0;i<106;i++){
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
		for(int i=0;i<93;i++){
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
		for(int i=0;i<112;i++){
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
		for(int i=0;i<96;i++){
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
		for(int i=0;i<45;i++){
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
		for(int i=0;i<160;i++){
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
		for(int i=0;i<107;i++){
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
		for(int i=0;i<42;i++){
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
		for(int i=0;i<41;i++){
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
		for(int i=0;i<63;i++){
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
		for(int i=0;i<91;i++){
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
		for(int i=0;i<136;i++){
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
		for(int i=0;i<70;i++){
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
		for(int i=0;i<100;i++){
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
		for(int i=0;i<156;i++){
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
		for(int i=0;i<79;i++){
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
		for(int i=0;i<93;i++){
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
		for(int i=0;i<81;i++){
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
		for(int i=0;i<56;i++){
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
		for(int i=0;i<153;i++){
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
		for(int i=0;i<92;i++){
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
		for(int i=0;i<48;i++){
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
		for(int i=0;i<40;i++){
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
		for(int i=0;i<112;i++){
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
		for(int i=0;i<118;i++){
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
		for(int i=0;i<37;i++){
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
		for(int i=0;i<129;i++){
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
		for(int i=0;i<100;i++){
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
		for(int i=0;i<95;i++){
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
		for(int i=0;i<138;i++){
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
		for(int i=0;i<70;i++){
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
		for(int i=0;i<75;i++){
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
		for(int i=0;i<77;i++){
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
		for(int i=0;i<81;i++){
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
		for(int i=0;i<71;i++){
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
		for(int i=0;i<82;i++){
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
		for(int i=0;i<85;i++){
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
		for(int i=0;i<37;i++){
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
		for(int i=0;i<51;i++){
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
		for(int i=0;i<78;i++){
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
		for(int i=0;i<68;i++){
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
		for(int i=0;i<93;i++){
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
		for(int i=0;i<53;i++){
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
		for(int i=0;i<67;i++){
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
		for(int i=0;i<109;i++){
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
		for(int i=0;i<84;i++){
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
		for(int i=0;i<65;i++){
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
		for(int i=0;i<81;i++){
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
		for(int i=0;i<110;i++){
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
		for(int i=0;i<137;i++){
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
		for(int i=0;i<151;i++){
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
		for(int i=0;i<18;i++){
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
		for(int i=0;i<63;i++){
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
		for(int i=0;i<65;i++){
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
		for(int i=0;i<91;i++){
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
		for(int i=0;i<33;i++){
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
		for(int i=0;i<106;i++){
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
		for(int i=0;i<113;i++){
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
		for(int i=0;i<118;i++){
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
		for(int i=0;i<70;i++){
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
		for(int i=0;i<170;i++){
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
		for(int i=0;i<84;i++){
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
		for(int i=0;i<81;i++){
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
		for(int i=0;i<108;i++){
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
		for(int i=0;i<145;i++){
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
		for(int i=0;i<55;i++){
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
		for(int i=0;i<85;i++){
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
		for(int i=0;i<88;i++){
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
	//Check all rules of unit[101][0]
	L[101][0] = LargeX[101][1]>0 ? 1 : 0;
	satisfiable[101][0]=1; 
	if(!L[101][0]){
		for(int i=0;i<138;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit101_0[i][0] ][ unit101_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit101_0[i][2] ][ unit101_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit101_0[i][4] ][ unit101_0[i][5] ] >0) ? 1 : 0;
			L[101][0] = L[101][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit101_0[i][4]==0){
				satisfiable[101][0]=satisfiable[101][0] & ((x[101] ^ 0) | (x[ unit101_0[i][0] ] ^ unit101_0[i][1]) |(x[ unit101_0[i][2] ] ^ unit101_0[i][3]));
			}
		}
	}
	//Check all rules of unit[101][1]
	L[101][1] = LargeX[101][0]>0 ? 1 : 0;
	satisfiable[101][1]=1; 
	if(!L[101][1]){
		for(int i=0;i<58;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit101_1[i][0] ][ unit101_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit101_1[i][2] ][ unit101_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit101_1[i][4] ][ unit101_1[i][5] ] >0) ? 1 : 0;
			L[101][1] = L[101][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit101_1[i][4]==0){
				satisfiable[101][1]=satisfiable[101][1] & ((x[101] ^ 1) | (x[ unit101_1[i][0] ] ^ unit101_1[i][1]) |(x[ unit101_1[i][2] ] ^ unit101_1[i][3]));
			}
		}
	}
	//Check all rules of unit[102][0]
	L[102][0] = LargeX[102][1]>0 ? 1 : 0;
	satisfiable[102][0]=1; 
	if(!L[102][0]){
		for(int i=0;i<82;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit102_0[i][0] ][ unit102_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit102_0[i][2] ][ unit102_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit102_0[i][4] ][ unit102_0[i][5] ] >0) ? 1 : 0;
			L[102][0] = L[102][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit102_0[i][4]==0){
				satisfiable[102][0]=satisfiable[102][0] & ((x[102] ^ 0) | (x[ unit102_0[i][0] ] ^ unit102_0[i][1]) |(x[ unit102_0[i][2] ] ^ unit102_0[i][3]));
			}
		}
	}
	//Check all rules of unit[102][1]
	L[102][1] = LargeX[102][0]>0 ? 1 : 0;
	satisfiable[102][1]=1; 
	if(!L[102][1]){
		for(int i=0;i<0;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit102_1[i][0] ][ unit102_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit102_1[i][2] ][ unit102_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit102_1[i][4] ][ unit102_1[i][5] ] >0) ? 1 : 0;
			L[102][1] = L[102][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit102_1[i][4]==0){
				satisfiable[102][1]=satisfiable[102][1] & ((x[102] ^ 1) | (x[ unit102_1[i][0] ] ^ unit102_1[i][1]) |(x[ unit102_1[i][2] ] ^ unit102_1[i][3]));
			}
		}
	}
	//Check all rules of unit[103][0]
	L[103][0] = LargeX[103][1]>0 ? 1 : 0;
	satisfiable[103][0]=1; 
	if(!L[103][0]){
		for(int i=0;i<119;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit103_0[i][0] ][ unit103_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit103_0[i][2] ][ unit103_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit103_0[i][4] ][ unit103_0[i][5] ] >0) ? 1 : 0;
			L[103][0] = L[103][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit103_0[i][4]==0){
				satisfiable[103][0]=satisfiable[103][0] & ((x[103] ^ 0) | (x[ unit103_0[i][0] ] ^ unit103_0[i][1]) |(x[ unit103_0[i][2] ] ^ unit103_0[i][3]));
			}
		}
	}
	//Check all rules of unit[103][1]
	L[103][1] = LargeX[103][0]>0 ? 1 : 0;
	satisfiable[103][1]=1; 
	if(!L[103][1]){
		for(int i=0;i<50;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit103_1[i][0] ][ unit103_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit103_1[i][2] ][ unit103_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit103_1[i][4] ][ unit103_1[i][5] ] >0) ? 1 : 0;
			L[103][1] = L[103][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit103_1[i][4]==0){
				satisfiable[103][1]=satisfiable[103][1] & ((x[103] ^ 1) | (x[ unit103_1[i][0] ] ^ unit103_1[i][1]) |(x[ unit103_1[i][2] ] ^ unit103_1[i][3]));
			}
		}
	}
	//Check all rules of unit[104][0]
	L[104][0] = LargeX[104][1]>0 ? 1 : 0;
	satisfiable[104][0]=1; 
	if(!L[104][0]){
		for(int i=0;i<126;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit104_0[i][0] ][ unit104_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit104_0[i][2] ][ unit104_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit104_0[i][4] ][ unit104_0[i][5] ] >0) ? 1 : 0;
			L[104][0] = L[104][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit104_0[i][4]==0){
				satisfiable[104][0]=satisfiable[104][0] & ((x[104] ^ 0) | (x[ unit104_0[i][0] ] ^ unit104_0[i][1]) |(x[ unit104_0[i][2] ] ^ unit104_0[i][3]));
			}
		}
	}
	//Check all rules of unit[104][1]
	L[104][1] = LargeX[104][0]>0 ? 1 : 0;
	satisfiable[104][1]=1; 
	if(!L[104][1]){
		for(int i=0;i<92;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit104_1[i][0] ][ unit104_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit104_1[i][2] ][ unit104_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit104_1[i][4] ][ unit104_1[i][5] ] >0) ? 1 : 0;
			L[104][1] = L[104][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit104_1[i][4]==0){
				satisfiable[104][1]=satisfiable[104][1] & ((x[104] ^ 1) | (x[ unit104_1[i][0] ] ^ unit104_1[i][1]) |(x[ unit104_1[i][2] ] ^ unit104_1[i][3]));
			}
		}
	}
	//Check all rules of unit[105][0]
	L[105][0] = LargeX[105][1]>0 ? 1 : 0;
	satisfiable[105][0]=1; 
	if(!L[105][0]){
		for(int i=0;i<49;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit105_0[i][0] ][ unit105_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit105_0[i][2] ][ unit105_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit105_0[i][4] ][ unit105_0[i][5] ] >0) ? 1 : 0;
			L[105][0] = L[105][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit105_0[i][4]==0){
				satisfiable[105][0]=satisfiable[105][0] & ((x[105] ^ 0) | (x[ unit105_0[i][0] ] ^ unit105_0[i][1]) |(x[ unit105_0[i][2] ] ^ unit105_0[i][3]));
			}
		}
	}
	//Check all rules of unit[105][1]
	L[105][1] = LargeX[105][0]>0 ? 1 : 0;
	satisfiable[105][1]=1; 
	if(!L[105][1]){
		for(int i=0;i<72;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit105_1[i][0] ][ unit105_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit105_1[i][2] ][ unit105_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit105_1[i][4] ][ unit105_1[i][5] ] >0) ? 1 : 0;
			L[105][1] = L[105][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit105_1[i][4]==0){
				satisfiable[105][1]=satisfiable[105][1] & ((x[105] ^ 1) | (x[ unit105_1[i][0] ] ^ unit105_1[i][1]) |(x[ unit105_1[i][2] ] ^ unit105_1[i][3]));
			}
		}
	}
	//Check all rules of unit[106][0]
	L[106][0] = LargeX[106][1]>0 ? 1 : 0;
	satisfiable[106][0]=1; 
	if(!L[106][0]){
		for(int i=0;i<132;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit106_0[i][0] ][ unit106_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit106_0[i][2] ][ unit106_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit106_0[i][4] ][ unit106_0[i][5] ] >0) ? 1 : 0;
			L[106][0] = L[106][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit106_0[i][4]==0){
				satisfiable[106][0]=satisfiable[106][0] & ((x[106] ^ 0) | (x[ unit106_0[i][0] ] ^ unit106_0[i][1]) |(x[ unit106_0[i][2] ] ^ unit106_0[i][3]));
			}
		}
	}
	//Check all rules of unit[106][1]
	L[106][1] = LargeX[106][0]>0 ? 1 : 0;
	satisfiable[106][1]=1; 
	if(!L[106][1]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit106_1[i][0] ][ unit106_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit106_1[i][2] ][ unit106_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit106_1[i][4] ][ unit106_1[i][5] ] >0) ? 1 : 0;
			L[106][1] = L[106][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit106_1[i][4]==0){
				satisfiable[106][1]=satisfiable[106][1] & ((x[106] ^ 1) | (x[ unit106_1[i][0] ] ^ unit106_1[i][1]) |(x[ unit106_1[i][2] ] ^ unit106_1[i][3]));
			}
		}
	}
	//Check all rules of unit[107][0]
	L[107][0] = LargeX[107][1]>0 ? 1 : 0;
	satisfiable[107][0]=1; 
	if(!L[107][0]){
		for(int i=0;i<124;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit107_0[i][0] ][ unit107_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit107_0[i][2] ][ unit107_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit107_0[i][4] ][ unit107_0[i][5] ] >0) ? 1 : 0;
			L[107][0] = L[107][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit107_0[i][4]==0){
				satisfiable[107][0]=satisfiable[107][0] & ((x[107] ^ 0) | (x[ unit107_0[i][0] ] ^ unit107_0[i][1]) |(x[ unit107_0[i][2] ] ^ unit107_0[i][3]));
			}
		}
	}
	//Check all rules of unit[107][1]
	L[107][1] = LargeX[107][0]>0 ? 1 : 0;
	satisfiable[107][1]=1; 
	if(!L[107][1]){
		for(int i=0;i<104;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit107_1[i][0] ][ unit107_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit107_1[i][2] ][ unit107_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit107_1[i][4] ][ unit107_1[i][5] ] >0) ? 1 : 0;
			L[107][1] = L[107][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit107_1[i][4]==0){
				satisfiable[107][1]=satisfiable[107][1] & ((x[107] ^ 1) | (x[ unit107_1[i][0] ] ^ unit107_1[i][1]) |(x[ unit107_1[i][2] ] ^ unit107_1[i][3]));
			}
		}
	}
	//Check all rules of unit[108][0]
	L[108][0] = LargeX[108][1]>0 ? 1 : 0;
	satisfiable[108][0]=1; 
	if(!L[108][0]){
		for(int i=0;i<75;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit108_0[i][0] ][ unit108_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit108_0[i][2] ][ unit108_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit108_0[i][4] ][ unit108_0[i][5] ] >0) ? 1 : 0;
			L[108][0] = L[108][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit108_0[i][4]==0){
				satisfiable[108][0]=satisfiable[108][0] & ((x[108] ^ 0) | (x[ unit108_0[i][0] ] ^ unit108_0[i][1]) |(x[ unit108_0[i][2] ] ^ unit108_0[i][3]));
			}
		}
	}
	//Check all rules of unit[108][1]
	L[108][1] = LargeX[108][0]>0 ? 1 : 0;
	satisfiable[108][1]=1; 
	if(!L[108][1]){
		for(int i=0;i<118;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit108_1[i][0] ][ unit108_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit108_1[i][2] ][ unit108_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit108_1[i][4] ][ unit108_1[i][5] ] >0) ? 1 : 0;
			L[108][1] = L[108][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit108_1[i][4]==0){
				satisfiable[108][1]=satisfiable[108][1] & ((x[108] ^ 1) | (x[ unit108_1[i][0] ] ^ unit108_1[i][1]) |(x[ unit108_1[i][2] ] ^ unit108_1[i][3]));
			}
		}
	}
	//Check all rules of unit[109][0]
	L[109][0] = LargeX[109][1]>0 ? 1 : 0;
	satisfiable[109][0]=1; 
	if(!L[109][0]){
		for(int i=0;i<82;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit109_0[i][0] ][ unit109_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit109_0[i][2] ][ unit109_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit109_0[i][4] ][ unit109_0[i][5] ] >0) ? 1 : 0;
			L[109][0] = L[109][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit109_0[i][4]==0){
				satisfiable[109][0]=satisfiable[109][0] & ((x[109] ^ 0) | (x[ unit109_0[i][0] ] ^ unit109_0[i][1]) |(x[ unit109_0[i][2] ] ^ unit109_0[i][3]));
			}
		}
	}
	//Check all rules of unit[109][1]
	L[109][1] = LargeX[109][0]>0 ? 1 : 0;
	satisfiable[109][1]=1; 
	if(!L[109][1]){
		for(int i=0;i<148;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit109_1[i][0] ][ unit109_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit109_1[i][2] ][ unit109_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit109_1[i][4] ][ unit109_1[i][5] ] >0) ? 1 : 0;
			L[109][1] = L[109][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit109_1[i][4]==0){
				satisfiable[109][1]=satisfiable[109][1] & ((x[109] ^ 1) | (x[ unit109_1[i][0] ] ^ unit109_1[i][1]) |(x[ unit109_1[i][2] ] ^ unit109_1[i][3]));
			}
		}
	}
	//Check all rules of unit[110][0]
	L[110][0] = LargeX[110][1]>0 ? 1 : 0;
	satisfiable[110][0]=1; 
	if(!L[110][0]){
		for(int i=0;i<129;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit110_0[i][0] ][ unit110_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit110_0[i][2] ][ unit110_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit110_0[i][4] ][ unit110_0[i][5] ] >0) ? 1 : 0;
			L[110][0] = L[110][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit110_0[i][4]==0){
				satisfiable[110][0]=satisfiable[110][0] & ((x[110] ^ 0) | (x[ unit110_0[i][0] ] ^ unit110_0[i][1]) |(x[ unit110_0[i][2] ] ^ unit110_0[i][3]));
			}
		}
	}
	//Check all rules of unit[110][1]
	L[110][1] = LargeX[110][0]>0 ? 1 : 0;
	satisfiable[110][1]=1; 
	if(!L[110][1]){
		for(int i=0;i<97;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit110_1[i][0] ][ unit110_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit110_1[i][2] ][ unit110_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit110_1[i][4] ][ unit110_1[i][5] ] >0) ? 1 : 0;
			L[110][1] = L[110][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit110_1[i][4]==0){
				satisfiable[110][1]=satisfiable[110][1] & ((x[110] ^ 1) | (x[ unit110_1[i][0] ] ^ unit110_1[i][1]) |(x[ unit110_1[i][2] ] ^ unit110_1[i][3]));
			}
		}
	}
	//Check all rules of unit[111][0]
	L[111][0] = LargeX[111][1]>0 ? 1 : 0;
	satisfiable[111][0]=1; 
	if(!L[111][0]){
		for(int i=0;i<74;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit111_0[i][0] ][ unit111_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit111_0[i][2] ][ unit111_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit111_0[i][4] ][ unit111_0[i][5] ] >0) ? 1 : 0;
			L[111][0] = L[111][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit111_0[i][4]==0){
				satisfiable[111][0]=satisfiable[111][0] & ((x[111] ^ 0) | (x[ unit111_0[i][0] ] ^ unit111_0[i][1]) |(x[ unit111_0[i][2] ] ^ unit111_0[i][3]));
			}
		}
	}
	//Check all rules of unit[111][1]
	L[111][1] = LargeX[111][0]>0 ? 1 : 0;
	satisfiable[111][1]=1; 
	if(!L[111][1]){
		for(int i=0;i<123;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit111_1[i][0] ][ unit111_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit111_1[i][2] ][ unit111_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit111_1[i][4] ][ unit111_1[i][5] ] >0) ? 1 : 0;
			L[111][1] = L[111][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit111_1[i][4]==0){
				satisfiable[111][1]=satisfiable[111][1] & ((x[111] ^ 1) | (x[ unit111_1[i][0] ] ^ unit111_1[i][1]) |(x[ unit111_1[i][2] ] ^ unit111_1[i][3]));
			}
		}
	}
	//Check all rules of unit[112][0]
	L[112][0] = LargeX[112][1]>0 ? 1 : 0;
	satisfiable[112][0]=1; 
	if(!L[112][0]){
		for(int i=0;i<81;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit112_0[i][0] ][ unit112_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit112_0[i][2] ][ unit112_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit112_0[i][4] ][ unit112_0[i][5] ] >0) ? 1 : 0;
			L[112][0] = L[112][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit112_0[i][4]==0){
				satisfiable[112][0]=satisfiable[112][0] & ((x[112] ^ 0) | (x[ unit112_0[i][0] ] ^ unit112_0[i][1]) |(x[ unit112_0[i][2] ] ^ unit112_0[i][3]));
			}
		}
	}
	//Check all rules of unit[112][1]
	L[112][1] = LargeX[112][0]>0 ? 1 : 0;
	satisfiable[112][1]=1; 
	if(!L[112][1]){
		for(int i=0;i<135;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit112_1[i][0] ][ unit112_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit112_1[i][2] ][ unit112_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit112_1[i][4] ][ unit112_1[i][5] ] >0) ? 1 : 0;
			L[112][1] = L[112][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit112_1[i][4]==0){
				satisfiable[112][1]=satisfiable[112][1] & ((x[112] ^ 1) | (x[ unit112_1[i][0] ] ^ unit112_1[i][1]) |(x[ unit112_1[i][2] ] ^ unit112_1[i][3]));
			}
		}
	}
	//Check all rules of unit[113][0]
	L[113][0] = LargeX[113][1]>0 ? 1 : 0;
	satisfiable[113][0]=1; 
	if(!L[113][0]){
		for(int i=0;i<68;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit113_0[i][0] ][ unit113_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit113_0[i][2] ][ unit113_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit113_0[i][4] ][ unit113_0[i][5] ] >0) ? 1 : 0;
			L[113][0] = L[113][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit113_0[i][4]==0){
				satisfiable[113][0]=satisfiable[113][0] & ((x[113] ^ 0) | (x[ unit113_0[i][0] ] ^ unit113_0[i][1]) |(x[ unit113_0[i][2] ] ^ unit113_0[i][3]));
			}
		}
	}
	//Check all rules of unit[113][1]
	L[113][1] = LargeX[113][0]>0 ? 1 : 0;
	satisfiable[113][1]=1; 
	if(!L[113][1]){
		for(int i=0;i<78;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit113_1[i][0] ][ unit113_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit113_1[i][2] ][ unit113_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit113_1[i][4] ][ unit113_1[i][5] ] >0) ? 1 : 0;
			L[113][1] = L[113][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit113_1[i][4]==0){
				satisfiable[113][1]=satisfiable[113][1] & ((x[113] ^ 1) | (x[ unit113_1[i][0] ] ^ unit113_1[i][1]) |(x[ unit113_1[i][2] ] ^ unit113_1[i][3]));
			}
		}
	}
	//Check all rules of unit[114][0]
	L[114][0] = LargeX[114][1]>0 ? 1 : 0;
	satisfiable[114][0]=1; 
	if(!L[114][0]){
		for(int i=0;i<73;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit114_0[i][0] ][ unit114_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit114_0[i][2] ][ unit114_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit114_0[i][4] ][ unit114_0[i][5] ] >0) ? 1 : 0;
			L[114][0] = L[114][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit114_0[i][4]==0){
				satisfiable[114][0]=satisfiable[114][0] & ((x[114] ^ 0) | (x[ unit114_0[i][0] ] ^ unit114_0[i][1]) |(x[ unit114_0[i][2] ] ^ unit114_0[i][3]));
			}
		}
	}
	//Check all rules of unit[114][1]
	L[114][1] = LargeX[114][0]>0 ? 1 : 0;
	satisfiable[114][1]=1; 
	if(!L[114][1]){
		for(int i=0;i<29;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit114_1[i][0] ][ unit114_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit114_1[i][2] ][ unit114_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit114_1[i][4] ][ unit114_1[i][5] ] >0) ? 1 : 0;
			L[114][1] = L[114][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit114_1[i][4]==0){
				satisfiable[114][1]=satisfiable[114][1] & ((x[114] ^ 1) | (x[ unit114_1[i][0] ] ^ unit114_1[i][1]) |(x[ unit114_1[i][2] ] ^ unit114_1[i][3]));
			}
		}
	}
	//Check all rules of unit[115][0]
	L[115][0] = LargeX[115][1]>0 ? 1 : 0;
	satisfiable[115][0]=1; 
	if(!L[115][0]){
		for(int i=0;i<115;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit115_0[i][0] ][ unit115_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit115_0[i][2] ][ unit115_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit115_0[i][4] ][ unit115_0[i][5] ] >0) ? 1 : 0;
			L[115][0] = L[115][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit115_0[i][4]==0){
				satisfiable[115][0]=satisfiable[115][0] & ((x[115] ^ 0) | (x[ unit115_0[i][0] ] ^ unit115_0[i][1]) |(x[ unit115_0[i][2] ] ^ unit115_0[i][3]));
			}
		}
	}
	//Check all rules of unit[115][1]
	L[115][1] = LargeX[115][0]>0 ? 1 : 0;
	satisfiable[115][1]=1; 
	if(!L[115][1]){
		for(int i=0;i<39;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit115_1[i][0] ][ unit115_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit115_1[i][2] ][ unit115_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit115_1[i][4] ][ unit115_1[i][5] ] >0) ? 1 : 0;
			L[115][1] = L[115][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit115_1[i][4]==0){
				satisfiable[115][1]=satisfiable[115][1] & ((x[115] ^ 1) | (x[ unit115_1[i][0] ] ^ unit115_1[i][1]) |(x[ unit115_1[i][2] ] ^ unit115_1[i][3]));
			}
		}
	}
	//Check all rules of unit[116][0]
	L[116][0] = LargeX[116][1]>0 ? 1 : 0;
	satisfiable[116][0]=1; 
	if(!L[116][0]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit116_0[i][0] ][ unit116_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit116_0[i][2] ][ unit116_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit116_0[i][4] ][ unit116_0[i][5] ] >0) ? 1 : 0;
			L[116][0] = L[116][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit116_0[i][4]==0){
				satisfiable[116][0]=satisfiable[116][0] & ((x[116] ^ 0) | (x[ unit116_0[i][0] ] ^ unit116_0[i][1]) |(x[ unit116_0[i][2] ] ^ unit116_0[i][3]));
			}
		}
	}
	//Check all rules of unit[116][1]
	L[116][1] = LargeX[116][0]>0 ? 1 : 0;
	satisfiable[116][1]=1; 
	if(!L[116][1]){
		for(int i=0;i<80;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit116_1[i][0] ][ unit116_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit116_1[i][2] ][ unit116_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit116_1[i][4] ][ unit116_1[i][5] ] >0) ? 1 : 0;
			L[116][1] = L[116][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit116_1[i][4]==0){
				satisfiable[116][1]=satisfiable[116][1] & ((x[116] ^ 1) | (x[ unit116_1[i][0] ] ^ unit116_1[i][1]) |(x[ unit116_1[i][2] ] ^ unit116_1[i][3]));
			}
		}
	}
	//Check all rules of unit[117][0]
	L[117][0] = LargeX[117][1]>0 ? 1 : 0;
	satisfiable[117][0]=1; 
	if(!L[117][0]){
		for(int i=0;i<49;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit117_0[i][0] ][ unit117_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit117_0[i][2] ][ unit117_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit117_0[i][4] ][ unit117_0[i][5] ] >0) ? 1 : 0;
			L[117][0] = L[117][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit117_0[i][4]==0){
				satisfiable[117][0]=satisfiable[117][0] & ((x[117] ^ 0) | (x[ unit117_0[i][0] ] ^ unit117_0[i][1]) |(x[ unit117_0[i][2] ] ^ unit117_0[i][3]));
			}
		}
	}
	//Check all rules of unit[117][1]
	L[117][1] = LargeX[117][0]>0 ? 1 : 0;
	satisfiable[117][1]=1; 
	if(!L[117][1]){
		for(int i=0;i<132;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit117_1[i][0] ][ unit117_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit117_1[i][2] ][ unit117_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit117_1[i][4] ][ unit117_1[i][5] ] >0) ? 1 : 0;
			L[117][1] = L[117][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit117_1[i][4]==0){
				satisfiable[117][1]=satisfiable[117][1] & ((x[117] ^ 1) | (x[ unit117_1[i][0] ] ^ unit117_1[i][1]) |(x[ unit117_1[i][2] ] ^ unit117_1[i][3]));
			}
		}
	}
	//Check all rules of unit[118][0]
	L[118][0] = LargeX[118][1]>0 ? 1 : 0;
	satisfiable[118][0]=1; 
	if(!L[118][0]){
		for(int i=0;i<103;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit118_0[i][0] ][ unit118_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit118_0[i][2] ][ unit118_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit118_0[i][4] ][ unit118_0[i][5] ] >0) ? 1 : 0;
			L[118][0] = L[118][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit118_0[i][4]==0){
				satisfiable[118][0]=satisfiable[118][0] & ((x[118] ^ 0) | (x[ unit118_0[i][0] ] ^ unit118_0[i][1]) |(x[ unit118_0[i][2] ] ^ unit118_0[i][3]));
			}
		}
	}
	//Check all rules of unit[118][1]
	L[118][1] = LargeX[118][0]>0 ? 1 : 0;
	satisfiable[118][1]=1; 
	if(!L[118][1]){
		for(int i=0;i<14;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit118_1[i][0] ][ unit118_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit118_1[i][2] ][ unit118_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit118_1[i][4] ][ unit118_1[i][5] ] >0) ? 1 : 0;
			L[118][1] = L[118][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit118_1[i][4]==0){
				satisfiable[118][1]=satisfiable[118][1] & ((x[118] ^ 1) | (x[ unit118_1[i][0] ] ^ unit118_1[i][1]) |(x[ unit118_1[i][2] ] ^ unit118_1[i][3]));
			}
		}
	}
	//Check all rules of unit[119][0]
	L[119][0] = LargeX[119][1]>0 ? 1 : 0;
	satisfiable[119][0]=1; 
	if(!L[119][0]){
		for(int i=0;i<128;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit119_0[i][0] ][ unit119_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit119_0[i][2] ][ unit119_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit119_0[i][4] ][ unit119_0[i][5] ] >0) ? 1 : 0;
			L[119][0] = L[119][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit119_0[i][4]==0){
				satisfiable[119][0]=satisfiable[119][0] & ((x[119] ^ 0) | (x[ unit119_0[i][0] ] ^ unit119_0[i][1]) |(x[ unit119_0[i][2] ] ^ unit119_0[i][3]));
			}
		}
	}
	//Check all rules of unit[119][1]
	L[119][1] = LargeX[119][0]>0 ? 1 : 0;
	satisfiable[119][1]=1; 
	if(!L[119][1]){
		for(int i=0;i<69;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit119_1[i][0] ][ unit119_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit119_1[i][2] ][ unit119_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit119_1[i][4] ][ unit119_1[i][5] ] >0) ? 1 : 0;
			L[119][1] = L[119][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit119_1[i][4]==0){
				satisfiable[119][1]=satisfiable[119][1] & ((x[119] ^ 1) | (x[ unit119_1[i][0] ] ^ unit119_1[i][1]) |(x[ unit119_1[i][2] ] ^ unit119_1[i][3]));
			}
		}
	}
	//Check all rules of unit[120][0]
	L[120][0] = LargeX[120][1]>0 ? 1 : 0;
	satisfiable[120][0]=1; 
	if(!L[120][0]){
		for(int i=0;i<61;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit120_0[i][0] ][ unit120_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit120_0[i][2] ][ unit120_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit120_0[i][4] ][ unit120_0[i][5] ] >0) ? 1 : 0;
			L[120][0] = L[120][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit120_0[i][4]==0){
				satisfiable[120][0]=satisfiable[120][0] & ((x[120] ^ 0) | (x[ unit120_0[i][0] ] ^ unit120_0[i][1]) |(x[ unit120_0[i][2] ] ^ unit120_0[i][3]));
			}
		}
	}
	//Check all rules of unit[120][1]
	L[120][1] = LargeX[120][0]>0 ? 1 : 0;
	satisfiable[120][1]=1; 
	if(!L[120][1]){
		for(int i=0;i<83;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit120_1[i][0] ][ unit120_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit120_1[i][2] ][ unit120_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit120_1[i][4] ][ unit120_1[i][5] ] >0) ? 1 : 0;
			L[120][1] = L[120][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit120_1[i][4]==0){
				satisfiable[120][1]=satisfiable[120][1] & ((x[120] ^ 1) | (x[ unit120_1[i][0] ] ^ unit120_1[i][1]) |(x[ unit120_1[i][2] ] ^ unit120_1[i][3]));
			}
		}
	}
	//Check all rules of unit[121][0]
	L[121][0] = LargeX[121][1]>0 ? 1 : 0;
	satisfiable[121][0]=1; 
	if(!L[121][0]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit121_0[i][0] ][ unit121_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit121_0[i][2] ][ unit121_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit121_0[i][4] ][ unit121_0[i][5] ] >0) ? 1 : 0;
			L[121][0] = L[121][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit121_0[i][4]==0){
				satisfiable[121][0]=satisfiable[121][0] & ((x[121] ^ 0) | (x[ unit121_0[i][0] ] ^ unit121_0[i][1]) |(x[ unit121_0[i][2] ] ^ unit121_0[i][3]));
			}
		}
	}
	//Check all rules of unit[121][1]
	L[121][1] = LargeX[121][0]>0 ? 1 : 0;
	satisfiable[121][1]=1; 
	if(!L[121][1]){
		for(int i=0;i<92;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit121_1[i][0] ][ unit121_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit121_1[i][2] ][ unit121_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit121_1[i][4] ][ unit121_1[i][5] ] >0) ? 1 : 0;
			L[121][1] = L[121][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit121_1[i][4]==0){
				satisfiable[121][1]=satisfiable[121][1] & ((x[121] ^ 1) | (x[ unit121_1[i][0] ] ^ unit121_1[i][1]) |(x[ unit121_1[i][2] ] ^ unit121_1[i][3]));
			}
		}
	}
	//Check all rules of unit[122][0]
	L[122][0] = LargeX[122][1]>0 ? 1 : 0;
	satisfiable[122][0]=1; 
	if(!L[122][0]){
		for(int i=0;i<102;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit122_0[i][0] ][ unit122_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit122_0[i][2] ][ unit122_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit122_0[i][4] ][ unit122_0[i][5] ] >0) ? 1 : 0;
			L[122][0] = L[122][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit122_0[i][4]==0){
				satisfiable[122][0]=satisfiable[122][0] & ((x[122] ^ 0) | (x[ unit122_0[i][0] ] ^ unit122_0[i][1]) |(x[ unit122_0[i][2] ] ^ unit122_0[i][3]));
			}
		}
	}
	//Check all rules of unit[122][1]
	L[122][1] = LargeX[122][0]>0 ? 1 : 0;
	satisfiable[122][1]=1; 
	if(!L[122][1]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit122_1[i][0] ][ unit122_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit122_1[i][2] ][ unit122_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit122_1[i][4] ][ unit122_1[i][5] ] >0) ? 1 : 0;
			L[122][1] = L[122][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit122_1[i][4]==0){
				satisfiable[122][1]=satisfiable[122][1] & ((x[122] ^ 1) | (x[ unit122_1[i][0] ] ^ unit122_1[i][1]) |(x[ unit122_1[i][2] ] ^ unit122_1[i][3]));
			}
		}
	}
	//Check all rules of unit[123][0]
	L[123][0] = LargeX[123][1]>0 ? 1 : 0;
	satisfiable[123][0]=1; 
	if(!L[123][0]){
		for(int i=0;i<112;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit123_0[i][0] ][ unit123_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit123_0[i][2] ][ unit123_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit123_0[i][4] ][ unit123_0[i][5] ] >0) ? 1 : 0;
			L[123][0] = L[123][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit123_0[i][4]==0){
				satisfiable[123][0]=satisfiable[123][0] & ((x[123] ^ 0) | (x[ unit123_0[i][0] ] ^ unit123_0[i][1]) |(x[ unit123_0[i][2] ] ^ unit123_0[i][3]));
			}
		}
	}
	//Check all rules of unit[123][1]
	L[123][1] = LargeX[123][0]>0 ? 1 : 0;
	satisfiable[123][1]=1; 
	if(!L[123][1]){
		for(int i=0;i<109;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit123_1[i][0] ][ unit123_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit123_1[i][2] ][ unit123_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit123_1[i][4] ][ unit123_1[i][5] ] >0) ? 1 : 0;
			L[123][1] = L[123][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit123_1[i][4]==0){
				satisfiable[123][1]=satisfiable[123][1] & ((x[123] ^ 1) | (x[ unit123_1[i][0] ] ^ unit123_1[i][1]) |(x[ unit123_1[i][2] ] ^ unit123_1[i][3]));
			}
		}
	}
	//Check all rules of unit[124][0]
	L[124][0] = LargeX[124][1]>0 ? 1 : 0;
	satisfiable[124][0]=1; 
	if(!L[124][0]){
		for(int i=0;i<60;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit124_0[i][0] ][ unit124_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit124_0[i][2] ][ unit124_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit124_0[i][4] ][ unit124_0[i][5] ] >0) ? 1 : 0;
			L[124][0] = L[124][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit124_0[i][4]==0){
				satisfiable[124][0]=satisfiable[124][0] & ((x[124] ^ 0) | (x[ unit124_0[i][0] ] ^ unit124_0[i][1]) |(x[ unit124_0[i][2] ] ^ unit124_0[i][3]));
			}
		}
	}
	//Check all rules of unit[124][1]
	L[124][1] = LargeX[124][0]>0 ? 1 : 0;
	satisfiable[124][1]=1; 
	if(!L[124][1]){
		for(int i=0;i<94;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit124_1[i][0] ][ unit124_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit124_1[i][2] ][ unit124_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit124_1[i][4] ][ unit124_1[i][5] ] >0) ? 1 : 0;
			L[124][1] = L[124][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit124_1[i][4]==0){
				satisfiable[124][1]=satisfiable[124][1] & ((x[124] ^ 1) | (x[ unit124_1[i][0] ] ^ unit124_1[i][1]) |(x[ unit124_1[i][2] ] ^ unit124_1[i][3]));
			}
		}
	}
	//Check all rules of unit[125][0]
	L[125][0] = LargeX[125][1]>0 ? 1 : 0;
	satisfiable[125][0]=1; 
	if(!L[125][0]){
		for(int i=0;i<38;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit125_0[i][0] ][ unit125_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit125_0[i][2] ][ unit125_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit125_0[i][4] ][ unit125_0[i][5] ] >0) ? 1 : 0;
			L[125][0] = L[125][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit125_0[i][4]==0){
				satisfiable[125][0]=satisfiable[125][0] & ((x[125] ^ 0) | (x[ unit125_0[i][0] ] ^ unit125_0[i][1]) |(x[ unit125_0[i][2] ] ^ unit125_0[i][3]));
			}
		}
	}
	//Check all rules of unit[125][1]
	L[125][1] = LargeX[125][0]>0 ? 1 : 0;
	satisfiable[125][1]=1; 
	if(!L[125][1]){
		for(int i=0;i<108;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit125_1[i][0] ][ unit125_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit125_1[i][2] ][ unit125_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit125_1[i][4] ][ unit125_1[i][5] ] >0) ? 1 : 0;
			L[125][1] = L[125][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit125_1[i][4]==0){
				satisfiable[125][1]=satisfiable[125][1] & ((x[125] ^ 1) | (x[ unit125_1[i][0] ] ^ unit125_1[i][1]) |(x[ unit125_1[i][2] ] ^ unit125_1[i][3]));
			}
		}
	}
	//Check all rules of unit[126][0]
	L[126][0] = LargeX[126][1]>0 ? 1 : 0;
	satisfiable[126][0]=1; 
	if(!L[126][0]){
		for(int i=0;i<157;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit126_0[i][0] ][ unit126_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit126_0[i][2] ][ unit126_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit126_0[i][4] ][ unit126_0[i][5] ] >0) ? 1 : 0;
			L[126][0] = L[126][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit126_0[i][4]==0){
				satisfiable[126][0]=satisfiable[126][0] & ((x[126] ^ 0) | (x[ unit126_0[i][0] ] ^ unit126_0[i][1]) |(x[ unit126_0[i][2] ] ^ unit126_0[i][3]));
			}
		}
	}
	//Check all rules of unit[126][1]
	L[126][1] = LargeX[126][0]>0 ? 1 : 0;
	satisfiable[126][1]=1; 
	if(!L[126][1]){
		for(int i=0;i<48;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit126_1[i][0] ][ unit126_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit126_1[i][2] ][ unit126_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit126_1[i][4] ][ unit126_1[i][5] ] >0) ? 1 : 0;
			L[126][1] = L[126][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit126_1[i][4]==0){
				satisfiable[126][1]=satisfiable[126][1] & ((x[126] ^ 1) | (x[ unit126_1[i][0] ] ^ unit126_1[i][1]) |(x[ unit126_1[i][2] ] ^ unit126_1[i][3]));
			}
		}
	}
	//Check all rules of unit[127][0]
	L[127][0] = LargeX[127][1]>0 ? 1 : 0;
	satisfiable[127][0]=1; 
	if(!L[127][0]){
		for(int i=0;i<104;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit127_0[i][0] ][ unit127_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit127_0[i][2] ][ unit127_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit127_0[i][4] ][ unit127_0[i][5] ] >0) ? 1 : 0;
			L[127][0] = L[127][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit127_0[i][4]==0){
				satisfiable[127][0]=satisfiable[127][0] & ((x[127] ^ 0) | (x[ unit127_0[i][0] ] ^ unit127_0[i][1]) |(x[ unit127_0[i][2] ] ^ unit127_0[i][3]));
			}
		}
	}
	//Check all rules of unit[127][1]
	L[127][1] = LargeX[127][0]>0 ? 1 : 0;
	satisfiable[127][1]=1; 
	if(!L[127][1]){
		for(int i=0;i<132;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit127_1[i][0] ][ unit127_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit127_1[i][2] ][ unit127_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit127_1[i][4] ][ unit127_1[i][5] ] >0) ? 1 : 0;
			L[127][1] = L[127][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit127_1[i][4]==0){
				satisfiable[127][1]=satisfiable[127][1] & ((x[127] ^ 1) | (x[ unit127_1[i][0] ] ^ unit127_1[i][1]) |(x[ unit127_1[i][2] ] ^ unit127_1[i][3]));
			}
		}
	}
	//Check all rules of unit[128][0]
	L[128][0] = LargeX[128][1]>0 ? 1 : 0;
	satisfiable[128][0]=1; 
	if(!L[128][0]){
		for(int i=0;i<104;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit128_0[i][0] ][ unit128_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit128_0[i][2] ][ unit128_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit128_0[i][4] ][ unit128_0[i][5] ] >0) ? 1 : 0;
			L[128][0] = L[128][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit128_0[i][4]==0){
				satisfiable[128][0]=satisfiable[128][0] & ((x[128] ^ 0) | (x[ unit128_0[i][0] ] ^ unit128_0[i][1]) |(x[ unit128_0[i][2] ] ^ unit128_0[i][3]));
			}
		}
	}
	//Check all rules of unit[128][1]
	L[128][1] = LargeX[128][0]>0 ? 1 : 0;
	satisfiable[128][1]=1; 
	if(!L[128][1]){
		for(int i=0;i<111;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit128_1[i][0] ][ unit128_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit128_1[i][2] ][ unit128_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit128_1[i][4] ][ unit128_1[i][5] ] >0) ? 1 : 0;
			L[128][1] = L[128][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit128_1[i][4]==0){
				satisfiable[128][1]=satisfiable[128][1] & ((x[128] ^ 1) | (x[ unit128_1[i][0] ] ^ unit128_1[i][1]) |(x[ unit128_1[i][2] ] ^ unit128_1[i][3]));
			}
		}
	}
	//Check all rules of unit[129][0]
	L[129][0] = LargeX[129][1]>0 ? 1 : 0;
	satisfiable[129][0]=1; 
	if(!L[129][0]){
		for(int i=0;i<70;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit129_0[i][0] ][ unit129_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit129_0[i][2] ][ unit129_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit129_0[i][4] ][ unit129_0[i][5] ] >0) ? 1 : 0;
			L[129][0] = L[129][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit129_0[i][4]==0){
				satisfiable[129][0]=satisfiable[129][0] & ((x[129] ^ 0) | (x[ unit129_0[i][0] ] ^ unit129_0[i][1]) |(x[ unit129_0[i][2] ] ^ unit129_0[i][3]));
			}
		}
	}
	//Check all rules of unit[129][1]
	L[129][1] = LargeX[129][0]>0 ? 1 : 0;
	satisfiable[129][1]=1; 
	if(!L[129][1]){
		for(int i=0;i<56;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit129_1[i][0] ][ unit129_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit129_1[i][2] ][ unit129_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit129_1[i][4] ][ unit129_1[i][5] ] >0) ? 1 : 0;
			L[129][1] = L[129][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit129_1[i][4]==0){
				satisfiable[129][1]=satisfiable[129][1] & ((x[129] ^ 1) | (x[ unit129_1[i][0] ] ^ unit129_1[i][1]) |(x[ unit129_1[i][2] ] ^ unit129_1[i][3]));
			}
		}
	}
	//Check all rules of unit[130][0]
	L[130][0] = LargeX[130][1]>0 ? 1 : 0;
	satisfiable[130][0]=1; 
	if(!L[130][0]){
		for(int i=0;i<77;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit130_0[i][0] ][ unit130_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit130_0[i][2] ][ unit130_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit130_0[i][4] ][ unit130_0[i][5] ] >0) ? 1 : 0;
			L[130][0] = L[130][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit130_0[i][4]==0){
				satisfiable[130][0]=satisfiable[130][0] & ((x[130] ^ 0) | (x[ unit130_0[i][0] ] ^ unit130_0[i][1]) |(x[ unit130_0[i][2] ] ^ unit130_0[i][3]));
			}
		}
	}
	//Check all rules of unit[130][1]
	L[130][1] = LargeX[130][0]>0 ? 1 : 0;
	satisfiable[130][1]=1; 
	if(!L[130][1]){
		for(int i=0;i<102;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit130_1[i][0] ][ unit130_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit130_1[i][2] ][ unit130_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit130_1[i][4] ][ unit130_1[i][5] ] >0) ? 1 : 0;
			L[130][1] = L[130][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit130_1[i][4]==0){
				satisfiable[130][1]=satisfiable[130][1] & ((x[130] ^ 1) | (x[ unit130_1[i][0] ] ^ unit130_1[i][1]) |(x[ unit130_1[i][2] ] ^ unit130_1[i][3]));
			}
		}
	}
	//Check all rules of unit[131][0]
	L[131][0] = LargeX[131][1]>0 ? 1 : 0;
	satisfiable[131][0]=1; 
	if(!L[131][0]){
		for(int i=0;i<72;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit131_0[i][0] ][ unit131_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit131_0[i][2] ][ unit131_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit131_0[i][4] ][ unit131_0[i][5] ] >0) ? 1 : 0;
			L[131][0] = L[131][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit131_0[i][4]==0){
				satisfiable[131][0]=satisfiable[131][0] & ((x[131] ^ 0) | (x[ unit131_0[i][0] ] ^ unit131_0[i][1]) |(x[ unit131_0[i][2] ] ^ unit131_0[i][3]));
			}
		}
	}
	//Check all rules of unit[131][1]
	L[131][1] = LargeX[131][0]>0 ? 1 : 0;
	satisfiable[131][1]=1; 
	if(!L[131][1]){
		for(int i=0;i<83;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit131_1[i][0] ][ unit131_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit131_1[i][2] ][ unit131_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit131_1[i][4] ][ unit131_1[i][5] ] >0) ? 1 : 0;
			L[131][1] = L[131][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit131_1[i][4]==0){
				satisfiable[131][1]=satisfiable[131][1] & ((x[131] ^ 1) | (x[ unit131_1[i][0] ] ^ unit131_1[i][1]) |(x[ unit131_1[i][2] ] ^ unit131_1[i][3]));
			}
		}
	}
	//Check all rules of unit[132][0]
	L[132][0] = LargeX[132][1]>0 ? 1 : 0;
	satisfiable[132][0]=1; 
	if(!L[132][0]){
		for(int i=0;i<101;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit132_0[i][0] ][ unit132_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit132_0[i][2] ][ unit132_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit132_0[i][4] ][ unit132_0[i][5] ] >0) ? 1 : 0;
			L[132][0] = L[132][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit132_0[i][4]==0){
				satisfiable[132][0]=satisfiable[132][0] & ((x[132] ^ 0) | (x[ unit132_0[i][0] ] ^ unit132_0[i][1]) |(x[ unit132_0[i][2] ] ^ unit132_0[i][3]));
			}
		}
	}
	//Check all rules of unit[132][1]
	L[132][1] = LargeX[132][0]>0 ? 1 : 0;
	satisfiable[132][1]=1; 
	if(!L[132][1]){
		for(int i=0;i<86;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit132_1[i][0] ][ unit132_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit132_1[i][2] ][ unit132_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit132_1[i][4] ][ unit132_1[i][5] ] >0) ? 1 : 0;
			L[132][1] = L[132][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit132_1[i][4]==0){
				satisfiable[132][1]=satisfiable[132][1] & ((x[132] ^ 1) | (x[ unit132_1[i][0] ] ^ unit132_1[i][1]) |(x[ unit132_1[i][2] ] ^ unit132_1[i][3]));
			}
		}
	}
	//Check all rules of unit[133][0]
	L[133][0] = LargeX[133][1]>0 ? 1 : 0;
	satisfiable[133][0]=1; 
	if(!L[133][0]){
		for(int i=0;i<65;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit133_0[i][0] ][ unit133_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit133_0[i][2] ][ unit133_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit133_0[i][4] ][ unit133_0[i][5] ] >0) ? 1 : 0;
			L[133][0] = L[133][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit133_0[i][4]==0){
				satisfiable[133][0]=satisfiable[133][0] & ((x[133] ^ 0) | (x[ unit133_0[i][0] ] ^ unit133_0[i][1]) |(x[ unit133_0[i][2] ] ^ unit133_0[i][3]));
			}
		}
	}
	//Check all rules of unit[133][1]
	L[133][1] = LargeX[133][0]>0 ? 1 : 0;
	satisfiable[133][1]=1; 
	if(!L[133][1]){
		for(int i=0;i<141;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit133_1[i][0] ][ unit133_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit133_1[i][2] ][ unit133_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit133_1[i][4] ][ unit133_1[i][5] ] >0) ? 1 : 0;
			L[133][1] = L[133][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit133_1[i][4]==0){
				satisfiable[133][1]=satisfiable[133][1] & ((x[133] ^ 1) | (x[ unit133_1[i][0] ] ^ unit133_1[i][1]) |(x[ unit133_1[i][2] ] ^ unit133_1[i][3]));
			}
		}
	}
	//Check all rules of unit[134][0]
	L[134][0] = LargeX[134][1]>0 ? 1 : 0;
	satisfiable[134][0]=1; 
	if(!L[134][0]){
		for(int i=0;i<104;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit134_0[i][0] ][ unit134_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit134_0[i][2] ][ unit134_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit134_0[i][4] ][ unit134_0[i][5] ] >0) ? 1 : 0;
			L[134][0] = L[134][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit134_0[i][4]==0){
				satisfiable[134][0]=satisfiable[134][0] & ((x[134] ^ 0) | (x[ unit134_0[i][0] ] ^ unit134_0[i][1]) |(x[ unit134_0[i][2] ] ^ unit134_0[i][3]));
			}
		}
	}
	//Check all rules of unit[134][1]
	L[134][1] = LargeX[134][0]>0 ? 1 : 0;
	satisfiable[134][1]=1; 
	if(!L[134][1]){
		for(int i=0;i<28;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit134_1[i][0] ][ unit134_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit134_1[i][2] ][ unit134_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit134_1[i][4] ][ unit134_1[i][5] ] >0) ? 1 : 0;
			L[134][1] = L[134][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit134_1[i][4]==0){
				satisfiable[134][1]=satisfiable[134][1] & ((x[134] ^ 1) | (x[ unit134_1[i][0] ] ^ unit134_1[i][1]) |(x[ unit134_1[i][2] ] ^ unit134_1[i][3]));
			}
		}
	}
	//Check all rules of unit[135][0]
	L[135][0] = LargeX[135][1]>0 ? 1 : 0;
	satisfiable[135][0]=1; 
	if(!L[135][0]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit135_0[i][0] ][ unit135_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit135_0[i][2] ][ unit135_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit135_0[i][4] ][ unit135_0[i][5] ] >0) ? 1 : 0;
			L[135][0] = L[135][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit135_0[i][4]==0){
				satisfiable[135][0]=satisfiable[135][0] & ((x[135] ^ 0) | (x[ unit135_0[i][0] ] ^ unit135_0[i][1]) |(x[ unit135_0[i][2] ] ^ unit135_0[i][3]));
			}
		}
	}
	//Check all rules of unit[135][1]
	L[135][1] = LargeX[135][0]>0 ? 1 : 0;
	satisfiable[135][1]=1; 
	if(!L[135][1]){
		for(int i=0;i<66;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit135_1[i][0] ][ unit135_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit135_1[i][2] ][ unit135_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit135_1[i][4] ][ unit135_1[i][5] ] >0) ? 1 : 0;
			L[135][1] = L[135][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit135_1[i][4]==0){
				satisfiable[135][1]=satisfiable[135][1] & ((x[135] ^ 1) | (x[ unit135_1[i][0] ] ^ unit135_1[i][1]) |(x[ unit135_1[i][2] ] ^ unit135_1[i][3]));
			}
		}
	}
	//Check all rules of unit[136][0]
	L[136][0] = LargeX[136][1]>0 ? 1 : 0;
	satisfiable[136][0]=1; 
	if(!L[136][0]){
		for(int i=0;i<0;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit136_0[i][0] ][ unit136_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit136_0[i][2] ][ unit136_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit136_0[i][4] ][ unit136_0[i][5] ] >0) ? 1 : 0;
			L[136][0] = L[136][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit136_0[i][4]==0){
				satisfiable[136][0]=satisfiable[136][0] & ((x[136] ^ 0) | (x[ unit136_0[i][0] ] ^ unit136_0[i][1]) |(x[ unit136_0[i][2] ] ^ unit136_0[i][3]));
			}
		}
	}
	//Check all rules of unit[136][1]
	L[136][1] = LargeX[136][0]>0 ? 1 : 0;
	satisfiable[136][1]=1; 
	if(!L[136][1]){
		for(int i=0;i<72;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit136_1[i][0] ][ unit136_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit136_1[i][2] ][ unit136_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit136_1[i][4] ][ unit136_1[i][5] ] >0) ? 1 : 0;
			L[136][1] = L[136][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit136_1[i][4]==0){
				satisfiable[136][1]=satisfiable[136][1] & ((x[136] ^ 1) | (x[ unit136_1[i][0] ] ^ unit136_1[i][1]) |(x[ unit136_1[i][2] ] ^ unit136_1[i][3]));
			}
		}
	}
	//Check all rules of unit[137][0]
	L[137][0] = LargeX[137][1]>0 ? 1 : 0;
	satisfiable[137][0]=1; 
	if(!L[137][0]){
		for(int i=0;i<22;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit137_0[i][0] ][ unit137_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit137_0[i][2] ][ unit137_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit137_0[i][4] ][ unit137_0[i][5] ] >0) ? 1 : 0;
			L[137][0] = L[137][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit137_0[i][4]==0){
				satisfiable[137][0]=satisfiable[137][0] & ((x[137] ^ 0) | (x[ unit137_0[i][0] ] ^ unit137_0[i][1]) |(x[ unit137_0[i][2] ] ^ unit137_0[i][3]));
			}
		}
	}
	//Check all rules of unit[137][1]
	L[137][1] = LargeX[137][0]>0 ? 1 : 0;
	satisfiable[137][1]=1; 
	if(!L[137][1]){
		for(int i=0;i<28;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit137_1[i][0] ][ unit137_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit137_1[i][2] ][ unit137_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit137_1[i][4] ][ unit137_1[i][5] ] >0) ? 1 : 0;
			L[137][1] = L[137][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit137_1[i][4]==0){
				satisfiable[137][1]=satisfiable[137][1] & ((x[137] ^ 1) | (x[ unit137_1[i][0] ] ^ unit137_1[i][1]) |(x[ unit137_1[i][2] ] ^ unit137_1[i][3]));
			}
		}
	}
	//Check all rules of unit[138][0]
	L[138][0] = LargeX[138][1]>0 ? 1 : 0;
	satisfiable[138][0]=1; 
	if(!L[138][0]){
		for(int i=0;i<155;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit138_0[i][0] ][ unit138_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit138_0[i][2] ][ unit138_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit138_0[i][4] ][ unit138_0[i][5] ] >0) ? 1 : 0;
			L[138][0] = L[138][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit138_0[i][4]==0){
				satisfiable[138][0]=satisfiable[138][0] & ((x[138] ^ 0) | (x[ unit138_0[i][0] ] ^ unit138_0[i][1]) |(x[ unit138_0[i][2] ] ^ unit138_0[i][3]));
			}
		}
	}
	//Check all rules of unit[138][1]
	L[138][1] = LargeX[138][0]>0 ? 1 : 0;
	satisfiable[138][1]=1; 
	if(!L[138][1]){
		for(int i=0;i<8;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit138_1[i][0] ][ unit138_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit138_1[i][2] ][ unit138_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit138_1[i][4] ][ unit138_1[i][5] ] >0) ? 1 : 0;
			L[138][1] = L[138][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit138_1[i][4]==0){
				satisfiable[138][1]=satisfiable[138][1] & ((x[138] ^ 1) | (x[ unit138_1[i][0] ] ^ unit138_1[i][1]) |(x[ unit138_1[i][2] ] ^ unit138_1[i][3]));
			}
		}
	}
	//Check all rules of unit[139][0]
	L[139][0] = LargeX[139][1]>0 ? 1 : 0;
	satisfiable[139][0]=1; 
	if(!L[139][0]){
		for(int i=0;i<39;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit139_0[i][0] ][ unit139_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit139_0[i][2] ][ unit139_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit139_0[i][4] ][ unit139_0[i][5] ] >0) ? 1 : 0;
			L[139][0] = L[139][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit139_0[i][4]==0){
				satisfiable[139][0]=satisfiable[139][0] & ((x[139] ^ 0) | (x[ unit139_0[i][0] ] ^ unit139_0[i][1]) |(x[ unit139_0[i][2] ] ^ unit139_0[i][3]));
			}
		}
	}
	//Check all rules of unit[139][1]
	L[139][1] = LargeX[139][0]>0 ? 1 : 0;
	satisfiable[139][1]=1; 
	if(!L[139][1]){
		for(int i=0;i<42;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit139_1[i][0] ][ unit139_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit139_1[i][2] ][ unit139_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit139_1[i][4] ][ unit139_1[i][5] ] >0) ? 1 : 0;
			L[139][1] = L[139][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit139_1[i][4]==0){
				satisfiable[139][1]=satisfiable[139][1] & ((x[139] ^ 1) | (x[ unit139_1[i][0] ] ^ unit139_1[i][1]) |(x[ unit139_1[i][2] ] ^ unit139_1[i][3]));
			}
		}
	}
	//Check all rules of unit[140][0]
	L[140][0] = LargeX[140][1]>0 ? 1 : 0;
	satisfiable[140][0]=1; 
	if(!L[140][0]){
		for(int i=0;i<75;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit140_0[i][0] ][ unit140_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit140_0[i][2] ][ unit140_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit140_0[i][4] ][ unit140_0[i][5] ] >0) ? 1 : 0;
			L[140][0] = L[140][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit140_0[i][4]==0){
				satisfiable[140][0]=satisfiable[140][0] & ((x[140] ^ 0) | (x[ unit140_0[i][0] ] ^ unit140_0[i][1]) |(x[ unit140_0[i][2] ] ^ unit140_0[i][3]));
			}
		}
	}
	//Check all rules of unit[140][1]
	L[140][1] = LargeX[140][0]>0 ? 1 : 0;
	satisfiable[140][1]=1; 
	if(!L[140][1]){
		for(int i=0;i<105;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit140_1[i][0] ][ unit140_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit140_1[i][2] ][ unit140_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit140_1[i][4] ][ unit140_1[i][5] ] >0) ? 1 : 0;
			L[140][1] = L[140][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit140_1[i][4]==0){
				satisfiable[140][1]=satisfiable[140][1] & ((x[140] ^ 1) | (x[ unit140_1[i][0] ] ^ unit140_1[i][1]) |(x[ unit140_1[i][2] ] ^ unit140_1[i][3]));
			}
		}
	}
	//Check all rules of unit[141][0]
	L[141][0] = LargeX[141][1]>0 ? 1 : 0;
	satisfiable[141][0]=1; 
	if(!L[141][0]){
		for(int i=0;i<141;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit141_0[i][0] ][ unit141_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit141_0[i][2] ][ unit141_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit141_0[i][4] ][ unit141_0[i][5] ] >0) ? 1 : 0;
			L[141][0] = L[141][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit141_0[i][4]==0){
				satisfiable[141][0]=satisfiable[141][0] & ((x[141] ^ 0) | (x[ unit141_0[i][0] ] ^ unit141_0[i][1]) |(x[ unit141_0[i][2] ] ^ unit141_0[i][3]));
			}
		}
	}
	//Check all rules of unit[141][1]
	L[141][1] = LargeX[141][0]>0 ? 1 : 0;
	satisfiable[141][1]=1; 
	if(!L[141][1]){
		for(int i=0;i<52;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit141_1[i][0] ][ unit141_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit141_1[i][2] ][ unit141_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit141_1[i][4] ][ unit141_1[i][5] ] >0) ? 1 : 0;
			L[141][1] = L[141][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit141_1[i][4]==0){
				satisfiable[141][1]=satisfiable[141][1] & ((x[141] ^ 1) | (x[ unit141_1[i][0] ] ^ unit141_1[i][1]) |(x[ unit141_1[i][2] ] ^ unit141_1[i][3]));
			}
		}
	}
	//Check all rules of unit[142][0]
	L[142][0] = LargeX[142][1]>0 ? 1 : 0;
	satisfiable[142][0]=1; 
	if(!L[142][0]){
		for(int i=0;i<52;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit142_0[i][0] ][ unit142_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit142_0[i][2] ][ unit142_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit142_0[i][4] ][ unit142_0[i][5] ] >0) ? 1 : 0;
			L[142][0] = L[142][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit142_0[i][4]==0){
				satisfiable[142][0]=satisfiable[142][0] & ((x[142] ^ 0) | (x[ unit142_0[i][0] ] ^ unit142_0[i][1]) |(x[ unit142_0[i][2] ] ^ unit142_0[i][3]));
			}
		}
	}
	//Check all rules of unit[142][1]
	L[142][1] = LargeX[142][0]>0 ? 1 : 0;
	satisfiable[142][1]=1; 
	if(!L[142][1]){
		for(int i=0;i<74;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit142_1[i][0] ][ unit142_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit142_1[i][2] ][ unit142_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit142_1[i][4] ][ unit142_1[i][5] ] >0) ? 1 : 0;
			L[142][1] = L[142][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit142_1[i][4]==0){
				satisfiable[142][1]=satisfiable[142][1] & ((x[142] ^ 1) | (x[ unit142_1[i][0] ] ^ unit142_1[i][1]) |(x[ unit142_1[i][2] ] ^ unit142_1[i][3]));
			}
		}
	}
	//Check all rules of unit[143][0]
	L[143][0] = LargeX[143][1]>0 ? 1 : 0;
	satisfiable[143][0]=1; 
	if(!L[143][0]){
		for(int i=0;i<128;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit143_0[i][0] ][ unit143_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit143_0[i][2] ][ unit143_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit143_0[i][4] ][ unit143_0[i][5] ] >0) ? 1 : 0;
			L[143][0] = L[143][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit143_0[i][4]==0){
				satisfiable[143][0]=satisfiable[143][0] & ((x[143] ^ 0) | (x[ unit143_0[i][0] ] ^ unit143_0[i][1]) |(x[ unit143_0[i][2] ] ^ unit143_0[i][3]));
			}
		}
	}
	//Check all rules of unit[143][1]
	L[143][1] = LargeX[143][0]>0 ? 1 : 0;
	satisfiable[143][1]=1; 
	if(!L[143][1]){
		for(int i=0;i<78;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit143_1[i][0] ][ unit143_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit143_1[i][2] ][ unit143_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit143_1[i][4] ][ unit143_1[i][5] ] >0) ? 1 : 0;
			L[143][1] = L[143][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit143_1[i][4]==0){
				satisfiable[143][1]=satisfiable[143][1] & ((x[143] ^ 1) | (x[ unit143_1[i][0] ] ^ unit143_1[i][1]) |(x[ unit143_1[i][2] ] ^ unit143_1[i][3]));
			}
		}
	}
	//Check all rules of unit[144][0]
	L[144][0] = LargeX[144][1]>0 ? 1 : 0;
	satisfiable[144][0]=1; 
	if(!L[144][0]){
		for(int i=0;i<138;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit144_0[i][0] ][ unit144_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit144_0[i][2] ][ unit144_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit144_0[i][4] ][ unit144_0[i][5] ] >0) ? 1 : 0;
			L[144][0] = L[144][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit144_0[i][4]==0){
				satisfiable[144][0]=satisfiable[144][0] & ((x[144] ^ 0) | (x[ unit144_0[i][0] ] ^ unit144_0[i][1]) |(x[ unit144_0[i][2] ] ^ unit144_0[i][3]));
			}
		}
	}
	//Check all rules of unit[144][1]
	L[144][1] = LargeX[144][0]>0 ? 1 : 0;
	satisfiable[144][1]=1; 
	if(!L[144][1]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit144_1[i][0] ][ unit144_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit144_1[i][2] ][ unit144_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit144_1[i][4] ][ unit144_1[i][5] ] >0) ? 1 : 0;
			L[144][1] = L[144][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit144_1[i][4]==0){
				satisfiable[144][1]=satisfiable[144][1] & ((x[144] ^ 1) | (x[ unit144_1[i][0] ] ^ unit144_1[i][1]) |(x[ unit144_1[i][2] ] ^ unit144_1[i][3]));
			}
		}
	}
	//Check all rules of unit[145][0]
	L[145][0] = LargeX[145][1]>0 ? 1 : 0;
	satisfiable[145][0]=1; 
	if(!L[145][0]){
		for(int i=0;i<112;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit145_0[i][0] ][ unit145_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit145_0[i][2] ][ unit145_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit145_0[i][4] ][ unit145_0[i][5] ] >0) ? 1 : 0;
			L[145][0] = L[145][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit145_0[i][4]==0){
				satisfiable[145][0]=satisfiable[145][0] & ((x[145] ^ 0) | (x[ unit145_0[i][0] ] ^ unit145_0[i][1]) |(x[ unit145_0[i][2] ] ^ unit145_0[i][3]));
			}
		}
	}
	//Check all rules of unit[145][1]
	L[145][1] = LargeX[145][0]>0 ? 1 : 0;
	satisfiable[145][1]=1; 
	if(!L[145][1]){
		for(int i=0;i<41;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit145_1[i][0] ][ unit145_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit145_1[i][2] ][ unit145_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit145_1[i][4] ][ unit145_1[i][5] ] >0) ? 1 : 0;
			L[145][1] = L[145][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit145_1[i][4]==0){
				satisfiable[145][1]=satisfiable[145][1] & ((x[145] ^ 1) | (x[ unit145_1[i][0] ] ^ unit145_1[i][1]) |(x[ unit145_1[i][2] ] ^ unit145_1[i][3]));
			}
		}
	}
	//Check all rules of unit[146][0]
	L[146][0] = LargeX[146][1]>0 ? 1 : 0;
	satisfiable[146][0]=1; 
	if(!L[146][0]){
		for(int i=0;i<66;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit146_0[i][0] ][ unit146_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit146_0[i][2] ][ unit146_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit146_0[i][4] ][ unit146_0[i][5] ] >0) ? 1 : 0;
			L[146][0] = L[146][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit146_0[i][4]==0){
				satisfiable[146][0]=satisfiable[146][0] & ((x[146] ^ 0) | (x[ unit146_0[i][0] ] ^ unit146_0[i][1]) |(x[ unit146_0[i][2] ] ^ unit146_0[i][3]));
			}
		}
	}
	//Check all rules of unit[146][1]
	L[146][1] = LargeX[146][0]>0 ? 1 : 0;
	satisfiable[146][1]=1; 
	if(!L[146][1]){
		for(int i=0;i<144;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit146_1[i][0] ][ unit146_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit146_1[i][2] ][ unit146_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit146_1[i][4] ][ unit146_1[i][5] ] >0) ? 1 : 0;
			L[146][1] = L[146][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit146_1[i][4]==0){
				satisfiable[146][1]=satisfiable[146][1] & ((x[146] ^ 1) | (x[ unit146_1[i][0] ] ^ unit146_1[i][1]) |(x[ unit146_1[i][2] ] ^ unit146_1[i][3]));
			}
		}
	}
	//Check all rules of unit[147][0]
	L[147][0] = LargeX[147][1]>0 ? 1 : 0;
	satisfiable[147][0]=1; 
	if(!L[147][0]){
		for(int i=0;i<68;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit147_0[i][0] ][ unit147_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit147_0[i][2] ][ unit147_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit147_0[i][4] ][ unit147_0[i][5] ] >0) ? 1 : 0;
			L[147][0] = L[147][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit147_0[i][4]==0){
				satisfiable[147][0]=satisfiable[147][0] & ((x[147] ^ 0) | (x[ unit147_0[i][0] ] ^ unit147_0[i][1]) |(x[ unit147_0[i][2] ] ^ unit147_0[i][3]));
			}
		}
	}
	//Check all rules of unit[147][1]
	L[147][1] = LargeX[147][0]>0 ? 1 : 0;
	satisfiable[147][1]=1; 
	if(!L[147][1]){
		for(int i=0;i<35;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit147_1[i][0] ][ unit147_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit147_1[i][2] ][ unit147_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit147_1[i][4] ][ unit147_1[i][5] ] >0) ? 1 : 0;
			L[147][1] = L[147][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit147_1[i][4]==0){
				satisfiable[147][1]=satisfiable[147][1] & ((x[147] ^ 1) | (x[ unit147_1[i][0] ] ^ unit147_1[i][1]) |(x[ unit147_1[i][2] ] ^ unit147_1[i][3]));
			}
		}
	}
	//Check all rules of unit[148][0]
	L[148][0] = LargeX[148][1]>0 ? 1 : 0;
	satisfiable[148][0]=1; 
	if(!L[148][0]){
		for(int i=0;i<106;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit148_0[i][0] ][ unit148_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit148_0[i][2] ][ unit148_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit148_0[i][4] ][ unit148_0[i][5] ] >0) ? 1 : 0;
			L[148][0] = L[148][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit148_0[i][4]==0){
				satisfiable[148][0]=satisfiable[148][0] & ((x[148] ^ 0) | (x[ unit148_0[i][0] ] ^ unit148_0[i][1]) |(x[ unit148_0[i][2] ] ^ unit148_0[i][3]));
			}
		}
	}
	//Check all rules of unit[148][1]
	L[148][1] = LargeX[148][0]>0 ? 1 : 0;
	satisfiable[148][1]=1; 
	if(!L[148][1]){
		for(int i=0;i<94;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit148_1[i][0] ][ unit148_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit148_1[i][2] ][ unit148_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit148_1[i][4] ][ unit148_1[i][5] ] >0) ? 1 : 0;
			L[148][1] = L[148][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit148_1[i][4]==0){
				satisfiable[148][1]=satisfiable[148][1] & ((x[148] ^ 1) | (x[ unit148_1[i][0] ] ^ unit148_1[i][1]) |(x[ unit148_1[i][2] ] ^ unit148_1[i][3]));
			}
		}
	}
	//Check all rules of unit[149][0]
	L[149][0] = LargeX[149][1]>0 ? 1 : 0;
	satisfiable[149][0]=1; 
	if(!L[149][0]){
		for(int i=0;i<119;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit149_0[i][0] ][ unit149_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit149_0[i][2] ][ unit149_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit149_0[i][4] ][ unit149_0[i][5] ] >0) ? 1 : 0;
			L[149][0] = L[149][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit149_0[i][4]==0){
				satisfiable[149][0]=satisfiable[149][0] & ((x[149] ^ 0) | (x[ unit149_0[i][0] ] ^ unit149_0[i][1]) |(x[ unit149_0[i][2] ] ^ unit149_0[i][3]));
			}
		}
	}
	//Check all rules of unit[149][1]
	L[149][1] = LargeX[149][0]>0 ? 1 : 0;
	satisfiable[149][1]=1; 
	if(!L[149][1]){
		for(int i=0;i<20;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit149_1[i][0] ][ unit149_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit149_1[i][2] ][ unit149_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit149_1[i][4] ][ unit149_1[i][5] ] >0) ? 1 : 0;
			L[149][1] = L[149][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit149_1[i][4]==0){
				satisfiable[149][1]=satisfiable[149][1] & ((x[149] ^ 1) | (x[ unit149_1[i][0] ] ^ unit149_1[i][1]) |(x[ unit149_1[i][2] ] ^ unit149_1[i][3]));
			}
		}
	}
	//Check all rules of unit[150][0]
	L[150][0] = LargeX[150][1]>0 ? 1 : 0;
	satisfiable[150][0]=1; 
	if(!L[150][0]){
		for(int i=0;i<160;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit150_0[i][0] ][ unit150_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit150_0[i][2] ][ unit150_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit150_0[i][4] ][ unit150_0[i][5] ] >0) ? 1 : 0;
			L[150][0] = L[150][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit150_0[i][4]==0){
				satisfiable[150][0]=satisfiable[150][0] & ((x[150] ^ 0) | (x[ unit150_0[i][0] ] ^ unit150_0[i][1]) |(x[ unit150_0[i][2] ] ^ unit150_0[i][3]));
			}
		}
	}
	//Check all rules of unit[150][1]
	L[150][1] = LargeX[150][0]>0 ? 1 : 0;
	satisfiable[150][1]=1; 
	if(!L[150][1]){
		for(int i=0;i<73;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit150_1[i][0] ][ unit150_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit150_1[i][2] ][ unit150_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit150_1[i][4] ][ unit150_1[i][5] ] >0) ? 1 : 0;
			L[150][1] = L[150][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit150_1[i][4]==0){
				satisfiable[150][1]=satisfiable[150][1] & ((x[150] ^ 1) | (x[ unit150_1[i][0] ] ^ unit150_1[i][1]) |(x[ unit150_1[i][2] ] ^ unit150_1[i][3]));
			}
		}
	}
	//Check all rules of unit[151][0]
	L[151][0] = LargeX[151][1]>0 ? 1 : 0;
	satisfiable[151][0]=1; 
	if(!L[151][0]){
		for(int i=0;i<150;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit151_0[i][0] ][ unit151_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit151_0[i][2] ][ unit151_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit151_0[i][4] ][ unit151_0[i][5] ] >0) ? 1 : 0;
			L[151][0] = L[151][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit151_0[i][4]==0){
				satisfiable[151][0]=satisfiable[151][0] & ((x[151] ^ 0) | (x[ unit151_0[i][0] ] ^ unit151_0[i][1]) |(x[ unit151_0[i][2] ] ^ unit151_0[i][3]));
			}
		}
	}
	//Check all rules of unit[151][1]
	L[151][1] = LargeX[151][0]>0 ? 1 : 0;
	satisfiable[151][1]=1; 
	if(!L[151][1]){
		for(int i=0;i<140;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit151_1[i][0] ][ unit151_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit151_1[i][2] ][ unit151_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit151_1[i][4] ][ unit151_1[i][5] ] >0) ? 1 : 0;
			L[151][1] = L[151][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit151_1[i][4]==0){
				satisfiable[151][1]=satisfiable[151][1] & ((x[151] ^ 1) | (x[ unit151_1[i][0] ] ^ unit151_1[i][1]) |(x[ unit151_1[i][2] ] ^ unit151_1[i][3]));
			}
		}
	}
	//Check all rules of unit[152][0]
	L[152][0] = LargeX[152][1]>0 ? 1 : 0;
	satisfiable[152][0]=1; 
	if(!L[152][0]){
		for(int i=0;i<73;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit152_0[i][0] ][ unit152_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit152_0[i][2] ][ unit152_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit152_0[i][4] ][ unit152_0[i][5] ] >0) ? 1 : 0;
			L[152][0] = L[152][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit152_0[i][4]==0){
				satisfiable[152][0]=satisfiable[152][0] & ((x[152] ^ 0) | (x[ unit152_0[i][0] ] ^ unit152_0[i][1]) |(x[ unit152_0[i][2] ] ^ unit152_0[i][3]));
			}
		}
	}
	//Check all rules of unit[152][1]
	L[152][1] = LargeX[152][0]>0 ? 1 : 0;
	satisfiable[152][1]=1; 
	if(!L[152][1]){
		for(int i=0;i<70;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit152_1[i][0] ][ unit152_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit152_1[i][2] ][ unit152_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit152_1[i][4] ][ unit152_1[i][5] ] >0) ? 1 : 0;
			L[152][1] = L[152][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit152_1[i][4]==0){
				satisfiable[152][1]=satisfiable[152][1] & ((x[152] ^ 1) | (x[ unit152_1[i][0] ] ^ unit152_1[i][1]) |(x[ unit152_1[i][2] ] ^ unit152_1[i][3]));
			}
		}
	}
	//Check all rules of unit[153][0]
	L[153][0] = LargeX[153][1]>0 ? 1 : 0;
	satisfiable[153][0]=1; 
	if(!L[153][0]){
		for(int i=0;i<72;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit153_0[i][0] ][ unit153_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit153_0[i][2] ][ unit153_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit153_0[i][4] ][ unit153_0[i][5] ] >0) ? 1 : 0;
			L[153][0] = L[153][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit153_0[i][4]==0){
				satisfiable[153][0]=satisfiable[153][0] & ((x[153] ^ 0) | (x[ unit153_0[i][0] ] ^ unit153_0[i][1]) |(x[ unit153_0[i][2] ] ^ unit153_0[i][3]));
			}
		}
	}
	//Check all rules of unit[153][1]
	L[153][1] = LargeX[153][0]>0 ? 1 : 0;
	satisfiable[153][1]=1; 
	if(!L[153][1]){
		for(int i=0;i<77;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit153_1[i][0] ][ unit153_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit153_1[i][2] ][ unit153_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit153_1[i][4] ][ unit153_1[i][5] ] >0) ? 1 : 0;
			L[153][1] = L[153][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit153_1[i][4]==0){
				satisfiable[153][1]=satisfiable[153][1] & ((x[153] ^ 1) | (x[ unit153_1[i][0] ] ^ unit153_1[i][1]) |(x[ unit153_1[i][2] ] ^ unit153_1[i][3]));
			}
		}
	}
	//Check all rules of unit[154][0]
	L[154][0] = LargeX[154][1]>0 ? 1 : 0;
	satisfiable[154][0]=1; 
	if(!L[154][0]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit154_0[i][0] ][ unit154_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit154_0[i][2] ][ unit154_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit154_0[i][4] ][ unit154_0[i][5] ] >0) ? 1 : 0;
			L[154][0] = L[154][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit154_0[i][4]==0){
				satisfiable[154][0]=satisfiable[154][0] & ((x[154] ^ 0) | (x[ unit154_0[i][0] ] ^ unit154_0[i][1]) |(x[ unit154_0[i][2] ] ^ unit154_0[i][3]));
			}
		}
	}
	//Check all rules of unit[154][1]
	L[154][1] = LargeX[154][0]>0 ? 1 : 0;
	satisfiable[154][1]=1; 
	if(!L[154][1]){
		for(int i=0;i<28;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit154_1[i][0] ][ unit154_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit154_1[i][2] ][ unit154_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit154_1[i][4] ][ unit154_1[i][5] ] >0) ? 1 : 0;
			L[154][1] = L[154][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit154_1[i][4]==0){
				satisfiable[154][1]=satisfiable[154][1] & ((x[154] ^ 1) | (x[ unit154_1[i][0] ] ^ unit154_1[i][1]) |(x[ unit154_1[i][2] ] ^ unit154_1[i][3]));
			}
		}
	}
	//Check all rules of unit[155][0]
	L[155][0] = LargeX[155][1]>0 ? 1 : 0;
	satisfiable[155][0]=1; 
	if(!L[155][0]){
		for(int i=0;i<103;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit155_0[i][0] ][ unit155_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit155_0[i][2] ][ unit155_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit155_0[i][4] ][ unit155_0[i][5] ] >0) ? 1 : 0;
			L[155][0] = L[155][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit155_0[i][4]==0){
				satisfiable[155][0]=satisfiable[155][0] & ((x[155] ^ 0) | (x[ unit155_0[i][0] ] ^ unit155_0[i][1]) |(x[ unit155_0[i][2] ] ^ unit155_0[i][3]));
			}
		}
	}
	//Check all rules of unit[155][1]
	L[155][1] = LargeX[155][0]>0 ? 1 : 0;
	satisfiable[155][1]=1; 
	if(!L[155][1]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit155_1[i][0] ][ unit155_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit155_1[i][2] ][ unit155_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit155_1[i][4] ][ unit155_1[i][5] ] >0) ? 1 : 0;
			L[155][1] = L[155][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit155_1[i][4]==0){
				satisfiable[155][1]=satisfiable[155][1] & ((x[155] ^ 1) | (x[ unit155_1[i][0] ] ^ unit155_1[i][1]) |(x[ unit155_1[i][2] ] ^ unit155_1[i][3]));
			}
		}
	}
	//Check all rules of unit[156][0]
	L[156][0] = LargeX[156][1]>0 ? 1 : 0;
	satisfiable[156][0]=1; 
	if(!L[156][0]){
		for(int i=0;i<116;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit156_0[i][0] ][ unit156_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit156_0[i][2] ][ unit156_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit156_0[i][4] ][ unit156_0[i][5] ] >0) ? 1 : 0;
			L[156][0] = L[156][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit156_0[i][4]==0){
				satisfiable[156][0]=satisfiable[156][0] & ((x[156] ^ 0) | (x[ unit156_0[i][0] ] ^ unit156_0[i][1]) |(x[ unit156_0[i][2] ] ^ unit156_0[i][3]));
			}
		}
	}
	//Check all rules of unit[156][1]
	L[156][1] = LargeX[156][0]>0 ? 1 : 0;
	satisfiable[156][1]=1; 
	if(!L[156][1]){
		for(int i=0;i<102;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit156_1[i][0] ][ unit156_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit156_1[i][2] ][ unit156_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit156_1[i][4] ][ unit156_1[i][5] ] >0) ? 1 : 0;
			L[156][1] = L[156][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit156_1[i][4]==0){
				satisfiable[156][1]=satisfiable[156][1] & ((x[156] ^ 1) | (x[ unit156_1[i][0] ] ^ unit156_1[i][1]) |(x[ unit156_1[i][2] ] ^ unit156_1[i][3]));
			}
		}
	}
	//Check all rules of unit[157][0]
	L[157][0] = LargeX[157][1]>0 ? 1 : 0;
	satisfiable[157][0]=1; 
	if(!L[157][0]){
		for(int i=0;i<57;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit157_0[i][0] ][ unit157_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit157_0[i][2] ][ unit157_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit157_0[i][4] ][ unit157_0[i][5] ] >0) ? 1 : 0;
			L[157][0] = L[157][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit157_0[i][4]==0){
				satisfiable[157][0]=satisfiable[157][0] & ((x[157] ^ 0) | (x[ unit157_0[i][0] ] ^ unit157_0[i][1]) |(x[ unit157_0[i][2] ] ^ unit157_0[i][3]));
			}
		}
	}
	//Check all rules of unit[157][1]
	L[157][1] = LargeX[157][0]>0 ? 1 : 0;
	satisfiable[157][1]=1; 
	if(!L[157][1]){
		for(int i=0;i<47;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit157_1[i][0] ][ unit157_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit157_1[i][2] ][ unit157_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit157_1[i][4] ][ unit157_1[i][5] ] >0) ? 1 : 0;
			L[157][1] = L[157][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit157_1[i][4]==0){
				satisfiable[157][1]=satisfiable[157][1] & ((x[157] ^ 1) | (x[ unit157_1[i][0] ] ^ unit157_1[i][1]) |(x[ unit157_1[i][2] ] ^ unit157_1[i][3]));
			}
		}
	}
	//Check all rules of unit[158][0]
	L[158][0] = LargeX[158][1]>0 ? 1 : 0;
	satisfiable[158][0]=1; 
	if(!L[158][0]){
		for(int i=0;i<46;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit158_0[i][0] ][ unit158_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit158_0[i][2] ][ unit158_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit158_0[i][4] ][ unit158_0[i][5] ] >0) ? 1 : 0;
			L[158][0] = L[158][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit158_0[i][4]==0){
				satisfiable[158][0]=satisfiable[158][0] & ((x[158] ^ 0) | (x[ unit158_0[i][0] ] ^ unit158_0[i][1]) |(x[ unit158_0[i][2] ] ^ unit158_0[i][3]));
			}
		}
	}
	//Check all rules of unit[158][1]
	L[158][1] = LargeX[158][0]>0 ? 1 : 0;
	satisfiable[158][1]=1; 
	if(!L[158][1]){
		for(int i=0;i<143;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit158_1[i][0] ][ unit158_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit158_1[i][2] ][ unit158_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit158_1[i][4] ][ unit158_1[i][5] ] >0) ? 1 : 0;
			L[158][1] = L[158][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit158_1[i][4]==0){
				satisfiable[158][1]=satisfiable[158][1] & ((x[158] ^ 1) | (x[ unit158_1[i][0] ] ^ unit158_1[i][1]) |(x[ unit158_1[i][2] ] ^ unit158_1[i][3]));
			}
		}
	}
	//Check all rules of unit[159][0]
	L[159][0] = LargeX[159][1]>0 ? 1 : 0;
	satisfiable[159][0]=1; 
	if(!L[159][0]){
		for(int i=0;i<117;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit159_0[i][0] ][ unit159_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit159_0[i][2] ][ unit159_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit159_0[i][4] ][ unit159_0[i][5] ] >0) ? 1 : 0;
			L[159][0] = L[159][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit159_0[i][4]==0){
				satisfiable[159][0]=satisfiable[159][0] & ((x[159] ^ 0) | (x[ unit159_0[i][0] ] ^ unit159_0[i][1]) |(x[ unit159_0[i][2] ] ^ unit159_0[i][3]));
			}
		}
	}
	//Check all rules of unit[159][1]
	L[159][1] = LargeX[159][0]>0 ? 1 : 0;
	satisfiable[159][1]=1; 
	if(!L[159][1]){
		for(int i=0;i<74;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit159_1[i][0] ][ unit159_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit159_1[i][2] ][ unit159_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit159_1[i][4] ][ unit159_1[i][5] ] >0) ? 1 : 0;
			L[159][1] = L[159][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit159_1[i][4]==0){
				satisfiable[159][1]=satisfiable[159][1] & ((x[159] ^ 1) | (x[ unit159_1[i][0] ] ^ unit159_1[i][1]) |(x[ unit159_1[i][2] ] ^ unit159_1[i][3]));
			}
		}
	}
	//Check all rules of unit[160][0]
	L[160][0] = LargeX[160][1]>0 ? 1 : 0;
	satisfiable[160][0]=1; 
	if(!L[160][0]){
		for(int i=0;i<104;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit160_0[i][0] ][ unit160_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit160_0[i][2] ][ unit160_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit160_0[i][4] ][ unit160_0[i][5] ] >0) ? 1 : 0;
			L[160][0] = L[160][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit160_0[i][4]==0){
				satisfiable[160][0]=satisfiable[160][0] & ((x[160] ^ 0) | (x[ unit160_0[i][0] ] ^ unit160_0[i][1]) |(x[ unit160_0[i][2] ] ^ unit160_0[i][3]));
			}
		}
	}
	//Check all rules of unit[160][1]
	L[160][1] = LargeX[160][0]>0 ? 1 : 0;
	satisfiable[160][1]=1; 
	if(!L[160][1]){
		for(int i=0;i<158;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit160_1[i][0] ][ unit160_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit160_1[i][2] ][ unit160_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit160_1[i][4] ][ unit160_1[i][5] ] >0) ? 1 : 0;
			L[160][1] = L[160][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit160_1[i][4]==0){
				satisfiable[160][1]=satisfiable[160][1] & ((x[160] ^ 1) | (x[ unit160_1[i][0] ] ^ unit160_1[i][1]) |(x[ unit160_1[i][2] ] ^ unit160_1[i][3]));
			}
		}
	}
	//Check all rules of unit[161][0]
	L[161][0] = LargeX[161][1]>0 ? 1 : 0;
	satisfiable[161][0]=1; 
	if(!L[161][0]){
		for(int i=0;i<62;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit161_0[i][0] ][ unit161_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit161_0[i][2] ][ unit161_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit161_0[i][4] ][ unit161_0[i][5] ] >0) ? 1 : 0;
			L[161][0] = L[161][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit161_0[i][4]==0){
				satisfiable[161][0]=satisfiable[161][0] & ((x[161] ^ 0) | (x[ unit161_0[i][0] ] ^ unit161_0[i][1]) |(x[ unit161_0[i][2] ] ^ unit161_0[i][3]));
			}
		}
	}
	//Check all rules of unit[161][1]
	L[161][1] = LargeX[161][0]>0 ? 1 : 0;
	satisfiable[161][1]=1; 
	if(!L[161][1]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit161_1[i][0] ][ unit161_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit161_1[i][2] ][ unit161_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit161_1[i][4] ][ unit161_1[i][5] ] >0) ? 1 : 0;
			L[161][1] = L[161][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit161_1[i][4]==0){
				satisfiable[161][1]=satisfiable[161][1] & ((x[161] ^ 1) | (x[ unit161_1[i][0] ] ^ unit161_1[i][1]) |(x[ unit161_1[i][2] ] ^ unit161_1[i][3]));
			}
		}
	}
	//Check all rules of unit[162][0]
	L[162][0] = LargeX[162][1]>0 ? 1 : 0;
	satisfiable[162][0]=1; 
	if(!L[162][0]){
		for(int i=0;i<165;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit162_0[i][0] ][ unit162_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit162_0[i][2] ][ unit162_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit162_0[i][4] ][ unit162_0[i][5] ] >0) ? 1 : 0;
			L[162][0] = L[162][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit162_0[i][4]==0){
				satisfiable[162][0]=satisfiable[162][0] & ((x[162] ^ 0) | (x[ unit162_0[i][0] ] ^ unit162_0[i][1]) |(x[ unit162_0[i][2] ] ^ unit162_0[i][3]));
			}
		}
	}
	//Check all rules of unit[162][1]
	L[162][1] = LargeX[162][0]>0 ? 1 : 0;
	satisfiable[162][1]=1; 
	if(!L[162][1]){
		for(int i=0;i<59;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit162_1[i][0] ][ unit162_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit162_1[i][2] ][ unit162_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit162_1[i][4] ][ unit162_1[i][5] ] >0) ? 1 : 0;
			L[162][1] = L[162][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit162_1[i][4]==0){
				satisfiable[162][1]=satisfiable[162][1] & ((x[162] ^ 1) | (x[ unit162_1[i][0] ] ^ unit162_1[i][1]) |(x[ unit162_1[i][2] ] ^ unit162_1[i][3]));
			}
		}
	}
	//Check all rules of unit[163][0]
	L[163][0] = LargeX[163][1]>0 ? 1 : 0;
	satisfiable[163][0]=1; 
	if(!L[163][0]){
		for(int i=0;i<15;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit163_0[i][0] ][ unit163_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit163_0[i][2] ][ unit163_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit163_0[i][4] ][ unit163_0[i][5] ] >0) ? 1 : 0;
			L[163][0] = L[163][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit163_0[i][4]==0){
				satisfiable[163][0]=satisfiable[163][0] & ((x[163] ^ 0) | (x[ unit163_0[i][0] ] ^ unit163_0[i][1]) |(x[ unit163_0[i][2] ] ^ unit163_0[i][3]));
			}
		}
	}
	//Check all rules of unit[163][1]
	L[163][1] = LargeX[163][0]>0 ? 1 : 0;
	satisfiable[163][1]=1; 
	if(!L[163][1]){
		for(int i=0;i<80;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit163_1[i][0] ][ unit163_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit163_1[i][2] ][ unit163_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit163_1[i][4] ][ unit163_1[i][5] ] >0) ? 1 : 0;
			L[163][1] = L[163][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit163_1[i][4]==0){
				satisfiable[163][1]=satisfiable[163][1] & ((x[163] ^ 1) | (x[ unit163_1[i][0] ] ^ unit163_1[i][1]) |(x[ unit163_1[i][2] ] ^ unit163_1[i][3]));
			}
		}
	}
	//Check all rules of unit[164][0]
	L[164][0] = LargeX[164][1]>0 ? 1 : 0;
	satisfiable[164][0]=1; 
	if(!L[164][0]){
		for(int i=0;i<134;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit164_0[i][0] ][ unit164_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit164_0[i][2] ][ unit164_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit164_0[i][4] ][ unit164_0[i][5] ] >0) ? 1 : 0;
			L[164][0] = L[164][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit164_0[i][4]==0){
				satisfiable[164][0]=satisfiable[164][0] & ((x[164] ^ 0) | (x[ unit164_0[i][0] ] ^ unit164_0[i][1]) |(x[ unit164_0[i][2] ] ^ unit164_0[i][3]));
			}
		}
	}
	//Check all rules of unit[164][1]
	L[164][1] = LargeX[164][0]>0 ? 1 : 0;
	satisfiable[164][1]=1; 
	if(!L[164][1]){
		for(int i=0;i<70;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit164_1[i][0] ][ unit164_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit164_1[i][2] ][ unit164_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit164_1[i][4] ][ unit164_1[i][5] ] >0) ? 1 : 0;
			L[164][1] = L[164][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit164_1[i][4]==0){
				satisfiable[164][1]=satisfiable[164][1] & ((x[164] ^ 1) | (x[ unit164_1[i][0] ] ^ unit164_1[i][1]) |(x[ unit164_1[i][2] ] ^ unit164_1[i][3]));
			}
		}
	}
	//Check all rules of unit[165][0]
	L[165][0] = LargeX[165][1]>0 ? 1 : 0;
	satisfiable[165][0]=1; 
	if(!L[165][0]){
		for(int i=0;i<81;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit165_0[i][0] ][ unit165_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit165_0[i][2] ][ unit165_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit165_0[i][4] ][ unit165_0[i][5] ] >0) ? 1 : 0;
			L[165][0] = L[165][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit165_0[i][4]==0){
				satisfiable[165][0]=satisfiable[165][0] & ((x[165] ^ 0) | (x[ unit165_0[i][0] ] ^ unit165_0[i][1]) |(x[ unit165_0[i][2] ] ^ unit165_0[i][3]));
			}
		}
	}
	//Check all rules of unit[165][1]
	L[165][1] = LargeX[165][0]>0 ? 1 : 0;
	satisfiable[165][1]=1; 
	if(!L[165][1]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit165_1[i][0] ][ unit165_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit165_1[i][2] ][ unit165_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit165_1[i][4] ][ unit165_1[i][5] ] >0) ? 1 : 0;
			L[165][1] = L[165][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit165_1[i][4]==0){
				satisfiable[165][1]=satisfiable[165][1] & ((x[165] ^ 1) | (x[ unit165_1[i][0] ] ^ unit165_1[i][1]) |(x[ unit165_1[i][2] ] ^ unit165_1[i][3]));
			}
		}
	}
	//Check all rules of unit[166][0]
	L[166][0] = LargeX[166][1]>0 ? 1 : 0;
	satisfiable[166][0]=1; 
	if(!L[166][0]){
		for(int i=0;i<51;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit166_0[i][0] ][ unit166_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit166_0[i][2] ][ unit166_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit166_0[i][4] ][ unit166_0[i][5] ] >0) ? 1 : 0;
			L[166][0] = L[166][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit166_0[i][4]==0){
				satisfiable[166][0]=satisfiable[166][0] & ((x[166] ^ 0) | (x[ unit166_0[i][0] ] ^ unit166_0[i][1]) |(x[ unit166_0[i][2] ] ^ unit166_0[i][3]));
			}
		}
	}
	//Check all rules of unit[166][1]
	L[166][1] = LargeX[166][0]>0 ? 1 : 0;
	satisfiable[166][1]=1; 
	if(!L[166][1]){
		for(int i=0;i<77;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit166_1[i][0] ][ unit166_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit166_1[i][2] ][ unit166_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit166_1[i][4] ][ unit166_1[i][5] ] >0) ? 1 : 0;
			L[166][1] = L[166][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit166_1[i][4]==0){
				satisfiable[166][1]=satisfiable[166][1] & ((x[166] ^ 1) | (x[ unit166_1[i][0] ] ^ unit166_1[i][1]) |(x[ unit166_1[i][2] ] ^ unit166_1[i][3]));
			}
		}
	}
	//Check all rules of unit[167][0]
	L[167][0] = LargeX[167][1]>0 ? 1 : 0;
	satisfiable[167][0]=1; 
	if(!L[167][0]){
		for(int i=0;i<39;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit167_0[i][0] ][ unit167_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit167_0[i][2] ][ unit167_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit167_0[i][4] ][ unit167_0[i][5] ] >0) ? 1 : 0;
			L[167][0] = L[167][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit167_0[i][4]==0){
				satisfiable[167][0]=satisfiable[167][0] & ((x[167] ^ 0) | (x[ unit167_0[i][0] ] ^ unit167_0[i][1]) |(x[ unit167_0[i][2] ] ^ unit167_0[i][3]));
			}
		}
	}
	//Check all rules of unit[167][1]
	L[167][1] = LargeX[167][0]>0 ? 1 : 0;
	satisfiable[167][1]=1; 
	if(!L[167][1]){
		for(int i=0;i<138;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit167_1[i][0] ][ unit167_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit167_1[i][2] ][ unit167_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit167_1[i][4] ][ unit167_1[i][5] ] >0) ? 1 : 0;
			L[167][1] = L[167][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit167_1[i][4]==0){
				satisfiable[167][1]=satisfiable[167][1] & ((x[167] ^ 1) | (x[ unit167_1[i][0] ] ^ unit167_1[i][1]) |(x[ unit167_1[i][2] ] ^ unit167_1[i][3]));
			}
		}
	}
	//Check all rules of unit[168][0]
	L[168][0] = LargeX[168][1]>0 ? 1 : 0;
	satisfiable[168][0]=1; 
	if(!L[168][0]){
		for(int i=0;i<76;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit168_0[i][0] ][ unit168_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit168_0[i][2] ][ unit168_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit168_0[i][4] ][ unit168_0[i][5] ] >0) ? 1 : 0;
			L[168][0] = L[168][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit168_0[i][4]==0){
				satisfiable[168][0]=satisfiable[168][0] & ((x[168] ^ 0) | (x[ unit168_0[i][0] ] ^ unit168_0[i][1]) |(x[ unit168_0[i][2] ] ^ unit168_0[i][3]));
			}
		}
	}
	//Check all rules of unit[168][1]
	L[168][1] = LargeX[168][0]>0 ? 1 : 0;
	satisfiable[168][1]=1; 
	if(!L[168][1]){
		for(int i=0;i<31;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit168_1[i][0] ][ unit168_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit168_1[i][2] ][ unit168_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit168_1[i][4] ][ unit168_1[i][5] ] >0) ? 1 : 0;
			L[168][1] = L[168][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit168_1[i][4]==0){
				satisfiable[168][1]=satisfiable[168][1] & ((x[168] ^ 1) | (x[ unit168_1[i][0] ] ^ unit168_1[i][1]) |(x[ unit168_1[i][2] ] ^ unit168_1[i][3]));
			}
		}
	}
	//Check all rules of unit[169][0]
	L[169][0] = LargeX[169][1]>0 ? 1 : 0;
	satisfiable[169][0]=1; 
	if(!L[169][0]){
		for(int i=0;i<136;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit169_0[i][0] ][ unit169_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit169_0[i][2] ][ unit169_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit169_0[i][4] ][ unit169_0[i][5] ] >0) ? 1 : 0;
			L[169][0] = L[169][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit169_0[i][4]==0){
				satisfiable[169][0]=satisfiable[169][0] & ((x[169] ^ 0) | (x[ unit169_0[i][0] ] ^ unit169_0[i][1]) |(x[ unit169_0[i][2] ] ^ unit169_0[i][3]));
			}
		}
	}
	//Check all rules of unit[169][1]
	L[169][1] = LargeX[169][0]>0 ? 1 : 0;
	satisfiable[169][1]=1; 
	if(!L[169][1]){
		for(int i=0;i<163;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit169_1[i][0] ][ unit169_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit169_1[i][2] ][ unit169_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit169_1[i][4] ][ unit169_1[i][5] ] >0) ? 1 : 0;
			L[169][1] = L[169][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit169_1[i][4]==0){
				satisfiable[169][1]=satisfiable[169][1] & ((x[169] ^ 1) | (x[ unit169_1[i][0] ] ^ unit169_1[i][1]) |(x[ unit169_1[i][2] ] ^ unit169_1[i][3]));
			}
		}
	}
	//Check all rules of unit[170][0]
	L[170][0] = LargeX[170][1]>0 ? 1 : 0;
	satisfiable[170][0]=1; 
	if(!L[170][0]){
		for(int i=0;i<123;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit170_0[i][0] ][ unit170_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit170_0[i][2] ][ unit170_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit170_0[i][4] ][ unit170_0[i][5] ] >0) ? 1 : 0;
			L[170][0] = L[170][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit170_0[i][4]==0){
				satisfiable[170][0]=satisfiable[170][0] & ((x[170] ^ 0) | (x[ unit170_0[i][0] ] ^ unit170_0[i][1]) |(x[ unit170_0[i][2] ] ^ unit170_0[i][3]));
			}
		}
	}
	//Check all rules of unit[170][1]
	L[170][1] = LargeX[170][0]>0 ? 1 : 0;
	satisfiable[170][1]=1; 
	if(!L[170][1]){
		for(int i=0;i<116;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit170_1[i][0] ][ unit170_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit170_1[i][2] ][ unit170_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit170_1[i][4] ][ unit170_1[i][5] ] >0) ? 1 : 0;
			L[170][1] = L[170][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit170_1[i][4]==0){
				satisfiable[170][1]=satisfiable[170][1] & ((x[170] ^ 1) | (x[ unit170_1[i][0] ] ^ unit170_1[i][1]) |(x[ unit170_1[i][2] ] ^ unit170_1[i][3]));
			}
		}
	}
	//Check all rules of unit[171][0]
	L[171][0] = LargeX[171][1]>0 ? 1 : 0;
	satisfiable[171][0]=1; 
	if(!L[171][0]){
		for(int i=0;i<105;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit171_0[i][0] ][ unit171_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit171_0[i][2] ][ unit171_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit171_0[i][4] ][ unit171_0[i][5] ] >0) ? 1 : 0;
			L[171][0] = L[171][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit171_0[i][4]==0){
				satisfiable[171][0]=satisfiable[171][0] & ((x[171] ^ 0) | (x[ unit171_0[i][0] ] ^ unit171_0[i][1]) |(x[ unit171_0[i][2] ] ^ unit171_0[i][3]));
			}
		}
	}
	//Check all rules of unit[171][1]
	L[171][1] = LargeX[171][0]>0 ? 1 : 0;
	satisfiable[171][1]=1; 
	if(!L[171][1]){
		for(int i=0;i<47;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit171_1[i][0] ][ unit171_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit171_1[i][2] ][ unit171_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit171_1[i][4] ][ unit171_1[i][5] ] >0) ? 1 : 0;
			L[171][1] = L[171][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit171_1[i][4]==0){
				satisfiable[171][1]=satisfiable[171][1] & ((x[171] ^ 1) | (x[ unit171_1[i][0] ] ^ unit171_1[i][1]) |(x[ unit171_1[i][2] ] ^ unit171_1[i][3]));
			}
		}
	}
	//Check all rules of unit[172][0]
	L[172][0] = LargeX[172][1]>0 ? 1 : 0;
	satisfiable[172][0]=1; 
	if(!L[172][0]){
		for(int i=0;i<104;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit172_0[i][0] ][ unit172_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit172_0[i][2] ][ unit172_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit172_0[i][4] ][ unit172_0[i][5] ] >0) ? 1 : 0;
			L[172][0] = L[172][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit172_0[i][4]==0){
				satisfiable[172][0]=satisfiable[172][0] & ((x[172] ^ 0) | (x[ unit172_0[i][0] ] ^ unit172_0[i][1]) |(x[ unit172_0[i][2] ] ^ unit172_0[i][3]));
			}
		}
	}
	//Check all rules of unit[172][1]
	L[172][1] = LargeX[172][0]>0 ? 1 : 0;
	satisfiable[172][1]=1; 
	if(!L[172][1]){
		for(int i=0;i<82;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit172_1[i][0] ][ unit172_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit172_1[i][2] ][ unit172_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit172_1[i][4] ][ unit172_1[i][5] ] >0) ? 1 : 0;
			L[172][1] = L[172][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit172_1[i][4]==0){
				satisfiable[172][1]=satisfiable[172][1] & ((x[172] ^ 1) | (x[ unit172_1[i][0] ] ^ unit172_1[i][1]) |(x[ unit172_1[i][2] ] ^ unit172_1[i][3]));
			}
		}
	}
	//Check all rules of unit[173][0]
	L[173][0] = LargeX[173][1]>0 ? 1 : 0;
	satisfiable[173][0]=1; 
	if(!L[173][0]){
		for(int i=0;i<139;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit173_0[i][0] ][ unit173_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit173_0[i][2] ][ unit173_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit173_0[i][4] ][ unit173_0[i][5] ] >0) ? 1 : 0;
			L[173][0] = L[173][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit173_0[i][4]==0){
				satisfiable[173][0]=satisfiable[173][0] & ((x[173] ^ 0) | (x[ unit173_0[i][0] ] ^ unit173_0[i][1]) |(x[ unit173_0[i][2] ] ^ unit173_0[i][3]));
			}
		}
	}
	//Check all rules of unit[173][1]
	L[173][1] = LargeX[173][0]>0 ? 1 : 0;
	satisfiable[173][1]=1; 
	if(!L[173][1]){
		for(int i=0;i<42;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit173_1[i][0] ][ unit173_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit173_1[i][2] ][ unit173_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit173_1[i][4] ][ unit173_1[i][5] ] >0) ? 1 : 0;
			L[173][1] = L[173][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit173_1[i][4]==0){
				satisfiable[173][1]=satisfiable[173][1] & ((x[173] ^ 1) | (x[ unit173_1[i][0] ] ^ unit173_1[i][1]) |(x[ unit173_1[i][2] ] ^ unit173_1[i][3]));
			}
		}
	}
	//Check all rules of unit[174][0]
	L[174][0] = LargeX[174][1]>0 ? 1 : 0;
	satisfiable[174][0]=1; 
	if(!L[174][0]){
		for(int i=0;i<140;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit174_0[i][0] ][ unit174_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit174_0[i][2] ][ unit174_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit174_0[i][4] ][ unit174_0[i][5] ] >0) ? 1 : 0;
			L[174][0] = L[174][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit174_0[i][4]==0){
				satisfiable[174][0]=satisfiable[174][0] & ((x[174] ^ 0) | (x[ unit174_0[i][0] ] ^ unit174_0[i][1]) |(x[ unit174_0[i][2] ] ^ unit174_0[i][3]));
			}
		}
	}
	//Check all rules of unit[174][1]
	L[174][1] = LargeX[174][0]>0 ? 1 : 0;
	satisfiable[174][1]=1; 
	if(!L[174][1]){
		for(int i=0;i<89;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit174_1[i][0] ][ unit174_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit174_1[i][2] ][ unit174_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit174_1[i][4] ][ unit174_1[i][5] ] >0) ? 1 : 0;
			L[174][1] = L[174][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit174_1[i][4]==0){
				satisfiable[174][1]=satisfiable[174][1] & ((x[174] ^ 1) | (x[ unit174_1[i][0] ] ^ unit174_1[i][1]) |(x[ unit174_1[i][2] ] ^ unit174_1[i][3]));
			}
		}
	}
	//Check all rules of unit[175][0]
	L[175][0] = LargeX[175][1]>0 ? 1 : 0;
	satisfiable[175][0]=1; 
	if(!L[175][0]){
		for(int i=0;i<34;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit175_0[i][0] ][ unit175_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit175_0[i][2] ][ unit175_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit175_0[i][4] ][ unit175_0[i][5] ] >0) ? 1 : 0;
			L[175][0] = L[175][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit175_0[i][4]==0){
				satisfiable[175][0]=satisfiable[175][0] & ((x[175] ^ 0) | (x[ unit175_0[i][0] ] ^ unit175_0[i][1]) |(x[ unit175_0[i][2] ] ^ unit175_0[i][3]));
			}
		}
	}
	//Check all rules of unit[175][1]
	L[175][1] = LargeX[175][0]>0 ? 1 : 0;
	satisfiable[175][1]=1; 
	if(!L[175][1]){
		for(int i=0;i<131;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit175_1[i][0] ][ unit175_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit175_1[i][2] ][ unit175_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit175_1[i][4] ][ unit175_1[i][5] ] >0) ? 1 : 0;
			L[175][1] = L[175][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit175_1[i][4]==0){
				satisfiable[175][1]=satisfiable[175][1] & ((x[175] ^ 1) | (x[ unit175_1[i][0] ] ^ unit175_1[i][1]) |(x[ unit175_1[i][2] ] ^ unit175_1[i][3]));
			}
		}
	}
	//Check all rules of unit[176][0]
	L[176][0] = LargeX[176][1]>0 ? 1 : 0;
	satisfiable[176][0]=1; 
	if(!L[176][0]){
		for(int i=0;i<98;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit176_0[i][0] ][ unit176_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit176_0[i][2] ][ unit176_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit176_0[i][4] ][ unit176_0[i][5] ] >0) ? 1 : 0;
			L[176][0] = L[176][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit176_0[i][4]==0){
				satisfiable[176][0]=satisfiable[176][0] & ((x[176] ^ 0) | (x[ unit176_0[i][0] ] ^ unit176_0[i][1]) |(x[ unit176_0[i][2] ] ^ unit176_0[i][3]));
			}
		}
	}
	//Check all rules of unit[176][1]
	L[176][1] = LargeX[176][0]>0 ? 1 : 0;
	satisfiable[176][1]=1; 
	if(!L[176][1]){
		for(int i=0;i<115;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit176_1[i][0] ][ unit176_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit176_1[i][2] ][ unit176_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit176_1[i][4] ][ unit176_1[i][5] ] >0) ? 1 : 0;
			L[176][1] = L[176][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit176_1[i][4]==0){
				satisfiable[176][1]=satisfiable[176][1] & ((x[176] ^ 1) | (x[ unit176_1[i][0] ] ^ unit176_1[i][1]) |(x[ unit176_1[i][2] ] ^ unit176_1[i][3]));
			}
		}
	}
	//Check all rules of unit[177][0]
	L[177][0] = LargeX[177][1]>0 ? 1 : 0;
	satisfiable[177][0]=1; 
	if(!L[177][0]){
		for(int i=0;i<75;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit177_0[i][0] ][ unit177_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit177_0[i][2] ][ unit177_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit177_0[i][4] ][ unit177_0[i][5] ] >0) ? 1 : 0;
			L[177][0] = L[177][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit177_0[i][4]==0){
				satisfiable[177][0]=satisfiable[177][0] & ((x[177] ^ 0) | (x[ unit177_0[i][0] ] ^ unit177_0[i][1]) |(x[ unit177_0[i][2] ] ^ unit177_0[i][3]));
			}
		}
	}
	//Check all rules of unit[177][1]
	L[177][1] = LargeX[177][0]>0 ? 1 : 0;
	satisfiable[177][1]=1; 
	if(!L[177][1]){
		for(int i=0;i<90;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit177_1[i][0] ][ unit177_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit177_1[i][2] ][ unit177_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit177_1[i][4] ][ unit177_1[i][5] ] >0) ? 1 : 0;
			L[177][1] = L[177][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit177_1[i][4]==0){
				satisfiable[177][1]=satisfiable[177][1] & ((x[177] ^ 1) | (x[ unit177_1[i][0] ] ^ unit177_1[i][1]) |(x[ unit177_1[i][2] ] ^ unit177_1[i][3]));
			}
		}
	}
	//Check all rules of unit[178][0]
	L[178][0] = LargeX[178][1]>0 ? 1 : 0;
	satisfiable[178][0]=1; 
	if(!L[178][0]){
		for(int i=0;i<79;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit178_0[i][0] ][ unit178_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit178_0[i][2] ][ unit178_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit178_0[i][4] ][ unit178_0[i][5] ] >0) ? 1 : 0;
			L[178][0] = L[178][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit178_0[i][4]==0){
				satisfiable[178][0]=satisfiable[178][0] & ((x[178] ^ 0) | (x[ unit178_0[i][0] ] ^ unit178_0[i][1]) |(x[ unit178_0[i][2] ] ^ unit178_0[i][3]));
			}
		}
	}
	//Check all rules of unit[178][1]
	L[178][1] = LargeX[178][0]>0 ? 1 : 0;
	satisfiable[178][1]=1; 
	if(!L[178][1]){
		for(int i=0;i<95;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit178_1[i][0] ][ unit178_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit178_1[i][2] ][ unit178_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit178_1[i][4] ][ unit178_1[i][5] ] >0) ? 1 : 0;
			L[178][1] = L[178][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit178_1[i][4]==0){
				satisfiable[178][1]=satisfiable[178][1] & ((x[178] ^ 1) | (x[ unit178_1[i][0] ] ^ unit178_1[i][1]) |(x[ unit178_1[i][2] ] ^ unit178_1[i][3]));
			}
		}
	}
	//Check all rules of unit[179][0]
	L[179][0] = LargeX[179][1]>0 ? 1 : 0;
	satisfiable[179][0]=1; 
	if(!L[179][0]){
		for(int i=0;i<133;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit179_0[i][0] ][ unit179_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit179_0[i][2] ][ unit179_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit179_0[i][4] ][ unit179_0[i][5] ] >0) ? 1 : 0;
			L[179][0] = L[179][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit179_0[i][4]==0){
				satisfiable[179][0]=satisfiable[179][0] & ((x[179] ^ 0) | (x[ unit179_0[i][0] ] ^ unit179_0[i][1]) |(x[ unit179_0[i][2] ] ^ unit179_0[i][3]));
			}
		}
	}
	//Check all rules of unit[179][1]
	L[179][1] = LargeX[179][0]>0 ? 1 : 0;
	satisfiable[179][1]=1; 
	if(!L[179][1]){
		for(int i=0;i<97;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit179_1[i][0] ][ unit179_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit179_1[i][2] ][ unit179_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit179_1[i][4] ][ unit179_1[i][5] ] >0) ? 1 : 0;
			L[179][1] = L[179][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit179_1[i][4]==0){
				satisfiable[179][1]=satisfiable[179][1] & ((x[179] ^ 1) | (x[ unit179_1[i][0] ] ^ unit179_1[i][1]) |(x[ unit179_1[i][2] ] ^ unit179_1[i][3]));
			}
		}
	}
	//Check all rules of unit[180][0]
	L[180][0] = LargeX[180][1]>0 ? 1 : 0;
	satisfiable[180][0]=1; 
	if(!L[180][0]){
		for(int i=0;i<115;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit180_0[i][0] ][ unit180_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit180_0[i][2] ][ unit180_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit180_0[i][4] ][ unit180_0[i][5] ] >0) ? 1 : 0;
			L[180][0] = L[180][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit180_0[i][4]==0){
				satisfiable[180][0]=satisfiable[180][0] & ((x[180] ^ 0) | (x[ unit180_0[i][0] ] ^ unit180_0[i][1]) |(x[ unit180_0[i][2] ] ^ unit180_0[i][3]));
			}
		}
	}
	//Check all rules of unit[180][1]
	L[180][1] = LargeX[180][0]>0 ? 1 : 0;
	satisfiable[180][1]=1; 
	if(!L[180][1]){
		for(int i=0;i<136;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit180_1[i][0] ][ unit180_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit180_1[i][2] ][ unit180_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit180_1[i][4] ][ unit180_1[i][5] ] >0) ? 1 : 0;
			L[180][1] = L[180][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit180_1[i][4]==0){
				satisfiable[180][1]=satisfiable[180][1] & ((x[180] ^ 1) | (x[ unit180_1[i][0] ] ^ unit180_1[i][1]) |(x[ unit180_1[i][2] ] ^ unit180_1[i][3]));
			}
		}
	}
	//Check all rules of unit[181][0]
	L[181][0] = LargeX[181][1]>0 ? 1 : 0;
	satisfiable[181][0]=1; 
	if(!L[181][0]){
		for(int i=0;i<178;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit181_0[i][0] ][ unit181_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit181_0[i][2] ][ unit181_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit181_0[i][4] ][ unit181_0[i][5] ] >0) ? 1 : 0;
			L[181][0] = L[181][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit181_0[i][4]==0){
				satisfiable[181][0]=satisfiable[181][0] & ((x[181] ^ 0) | (x[ unit181_0[i][0] ] ^ unit181_0[i][1]) |(x[ unit181_0[i][2] ] ^ unit181_0[i][3]));
			}
		}
	}
	//Check all rules of unit[181][1]
	L[181][1] = LargeX[181][0]>0 ? 1 : 0;
	satisfiable[181][1]=1; 
	if(!L[181][1]){
		for(int i=0;i<12;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit181_1[i][0] ][ unit181_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit181_1[i][2] ][ unit181_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit181_1[i][4] ][ unit181_1[i][5] ] >0) ? 1 : 0;
			L[181][1] = L[181][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit181_1[i][4]==0){
				satisfiable[181][1]=satisfiable[181][1] & ((x[181] ^ 1) | (x[ unit181_1[i][0] ] ^ unit181_1[i][1]) |(x[ unit181_1[i][2] ] ^ unit181_1[i][3]));
			}
		}
	}
	//Check all rules of unit[182][0]
	L[182][0] = LargeX[182][1]>0 ? 1 : 0;
	satisfiable[182][0]=1; 
	if(!L[182][0]){
		for(int i=0;i<69;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit182_0[i][0] ][ unit182_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit182_0[i][2] ][ unit182_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit182_0[i][4] ][ unit182_0[i][5] ] >0) ? 1 : 0;
			L[182][0] = L[182][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit182_0[i][4]==0){
				satisfiable[182][0]=satisfiable[182][0] & ((x[182] ^ 0) | (x[ unit182_0[i][0] ] ^ unit182_0[i][1]) |(x[ unit182_0[i][2] ] ^ unit182_0[i][3]));
			}
		}
	}
	//Check all rules of unit[182][1]
	L[182][1] = LargeX[182][0]>0 ? 1 : 0;
	satisfiable[182][1]=1; 
	if(!L[182][1]){
		for(int i=0;i<84;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit182_1[i][0] ][ unit182_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit182_1[i][2] ][ unit182_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit182_1[i][4] ][ unit182_1[i][5] ] >0) ? 1 : 0;
			L[182][1] = L[182][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit182_1[i][4]==0){
				satisfiable[182][1]=satisfiable[182][1] & ((x[182] ^ 1) | (x[ unit182_1[i][0] ] ^ unit182_1[i][1]) |(x[ unit182_1[i][2] ] ^ unit182_1[i][3]));
			}
		}
	}
	//Check all rules of unit[183][0]
	L[183][0] = LargeX[183][1]>0 ? 1 : 0;
	satisfiable[183][0]=1; 
	if(!L[183][0]){
		for(int i=0;i<69;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit183_0[i][0] ][ unit183_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit183_0[i][2] ][ unit183_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit183_0[i][4] ][ unit183_0[i][5] ] >0) ? 1 : 0;
			L[183][0] = L[183][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit183_0[i][4]==0){
				satisfiable[183][0]=satisfiable[183][0] & ((x[183] ^ 0) | (x[ unit183_0[i][0] ] ^ unit183_0[i][1]) |(x[ unit183_0[i][2] ] ^ unit183_0[i][3]));
			}
		}
	}
	//Check all rules of unit[183][1]
	L[183][1] = LargeX[183][0]>0 ? 1 : 0;
	satisfiable[183][1]=1; 
	if(!L[183][1]){
		for(int i=0;i<100;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit183_1[i][0] ][ unit183_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit183_1[i][2] ][ unit183_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit183_1[i][4] ][ unit183_1[i][5] ] >0) ? 1 : 0;
			L[183][1] = L[183][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit183_1[i][4]==0){
				satisfiable[183][1]=satisfiable[183][1] & ((x[183] ^ 1) | (x[ unit183_1[i][0] ] ^ unit183_1[i][1]) |(x[ unit183_1[i][2] ] ^ unit183_1[i][3]));
			}
		}
	}
	//Check all rules of unit[184][0]
	L[184][0] = LargeX[184][1]>0 ? 1 : 0;
	satisfiable[184][0]=1; 
	if(!L[184][0]){
		for(int i=0;i<103;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit184_0[i][0] ][ unit184_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit184_0[i][2] ][ unit184_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit184_0[i][4] ][ unit184_0[i][5] ] >0) ? 1 : 0;
			L[184][0] = L[184][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit184_0[i][4]==0){
				satisfiable[184][0]=satisfiable[184][0] & ((x[184] ^ 0) | (x[ unit184_0[i][0] ] ^ unit184_0[i][1]) |(x[ unit184_0[i][2] ] ^ unit184_0[i][3]));
			}
		}
	}
	//Check all rules of unit[184][1]
	L[184][1] = LargeX[184][0]>0 ? 1 : 0;
	satisfiable[184][1]=1; 
	if(!L[184][1]){
		for(int i=0;i<49;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit184_1[i][0] ][ unit184_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit184_1[i][2] ][ unit184_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit184_1[i][4] ][ unit184_1[i][5] ] >0) ? 1 : 0;
			L[184][1] = L[184][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit184_1[i][4]==0){
				satisfiable[184][1]=satisfiable[184][1] & ((x[184] ^ 1) | (x[ unit184_1[i][0] ] ^ unit184_1[i][1]) |(x[ unit184_1[i][2] ] ^ unit184_1[i][3]));
			}
		}
	}
	//Check all rules of unit[185][0]
	L[185][0] = LargeX[185][1]>0 ? 1 : 0;
	satisfiable[185][0]=1; 
	if(!L[185][0]){
		for(int i=0;i<165;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit185_0[i][0] ][ unit185_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit185_0[i][2] ][ unit185_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit185_0[i][4] ][ unit185_0[i][5] ] >0) ? 1 : 0;
			L[185][0] = L[185][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit185_0[i][4]==0){
				satisfiable[185][0]=satisfiable[185][0] & ((x[185] ^ 0) | (x[ unit185_0[i][0] ] ^ unit185_0[i][1]) |(x[ unit185_0[i][2] ] ^ unit185_0[i][3]));
			}
		}
	}
	//Check all rules of unit[185][1]
	L[185][1] = LargeX[185][0]>0 ? 1 : 0;
	satisfiable[185][1]=1; 
	if(!L[185][1]){
		for(int i=0;i<139;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit185_1[i][0] ][ unit185_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit185_1[i][2] ][ unit185_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit185_1[i][4] ][ unit185_1[i][5] ] >0) ? 1 : 0;
			L[185][1] = L[185][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit185_1[i][4]==0){
				satisfiable[185][1]=satisfiable[185][1] & ((x[185] ^ 1) | (x[ unit185_1[i][0] ] ^ unit185_1[i][1]) |(x[ unit185_1[i][2] ] ^ unit185_1[i][3]));
			}
		}
	}
	//Check all rules of unit[186][0]
	L[186][0] = LargeX[186][1]>0 ? 1 : 0;
	satisfiable[186][0]=1; 
	if(!L[186][0]){
		for(int i=0;i<91;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit186_0[i][0] ][ unit186_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit186_0[i][2] ][ unit186_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit186_0[i][4] ][ unit186_0[i][5] ] >0) ? 1 : 0;
			L[186][0] = L[186][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit186_0[i][4]==0){
				satisfiable[186][0]=satisfiable[186][0] & ((x[186] ^ 0) | (x[ unit186_0[i][0] ] ^ unit186_0[i][1]) |(x[ unit186_0[i][2] ] ^ unit186_0[i][3]));
			}
		}
	}
	//Check all rules of unit[186][1]
	L[186][1] = LargeX[186][0]>0 ? 1 : 0;
	satisfiable[186][1]=1; 
	if(!L[186][1]){
		for(int i=0;i<59;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit186_1[i][0] ][ unit186_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit186_1[i][2] ][ unit186_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit186_1[i][4] ][ unit186_1[i][5] ] >0) ? 1 : 0;
			L[186][1] = L[186][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit186_1[i][4]==0){
				satisfiable[186][1]=satisfiable[186][1] & ((x[186] ^ 1) | (x[ unit186_1[i][0] ] ^ unit186_1[i][1]) |(x[ unit186_1[i][2] ] ^ unit186_1[i][3]));
			}
		}
	}
	//Check all rules of unit[187][0]
	L[187][0] = LargeX[187][1]>0 ? 1 : 0;
	satisfiable[187][0]=1; 
	if(!L[187][0]){
		for(int i=0;i<80;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit187_0[i][0] ][ unit187_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit187_0[i][2] ][ unit187_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit187_0[i][4] ][ unit187_0[i][5] ] >0) ? 1 : 0;
			L[187][0] = L[187][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit187_0[i][4]==0){
				satisfiable[187][0]=satisfiable[187][0] & ((x[187] ^ 0) | (x[ unit187_0[i][0] ] ^ unit187_0[i][1]) |(x[ unit187_0[i][2] ] ^ unit187_0[i][3]));
			}
		}
	}
	//Check all rules of unit[187][1]
	L[187][1] = LargeX[187][0]>0 ? 1 : 0;
	satisfiable[187][1]=1; 
	if(!L[187][1]){
		for(int i=0;i<30;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit187_1[i][0] ][ unit187_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit187_1[i][2] ][ unit187_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit187_1[i][4] ][ unit187_1[i][5] ] >0) ? 1 : 0;
			L[187][1] = L[187][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit187_1[i][4]==0){
				satisfiable[187][1]=satisfiable[187][1] & ((x[187] ^ 1) | (x[ unit187_1[i][0] ] ^ unit187_1[i][1]) |(x[ unit187_1[i][2] ] ^ unit187_1[i][3]));
			}
		}
	}
	//Check all rules of unit[188][0]
	L[188][0] = LargeX[188][1]>0 ? 1 : 0;
	satisfiable[188][0]=1; 
	if(!L[188][0]){
		for(int i=0;i<85;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit188_0[i][0] ][ unit188_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit188_0[i][2] ][ unit188_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit188_0[i][4] ][ unit188_0[i][5] ] >0) ? 1 : 0;
			L[188][0] = L[188][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit188_0[i][4]==0){
				satisfiable[188][0]=satisfiable[188][0] & ((x[188] ^ 0) | (x[ unit188_0[i][0] ] ^ unit188_0[i][1]) |(x[ unit188_0[i][2] ] ^ unit188_0[i][3]));
			}
		}
	}
	//Check all rules of unit[188][1]
	L[188][1] = LargeX[188][0]>0 ? 1 : 0;
	satisfiable[188][1]=1; 
	if(!L[188][1]){
		for(int i=0;i<170;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit188_1[i][0] ][ unit188_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit188_1[i][2] ][ unit188_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit188_1[i][4] ][ unit188_1[i][5] ] >0) ? 1 : 0;
			L[188][1] = L[188][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit188_1[i][4]==0){
				satisfiable[188][1]=satisfiable[188][1] & ((x[188] ^ 1) | (x[ unit188_1[i][0] ] ^ unit188_1[i][1]) |(x[ unit188_1[i][2] ] ^ unit188_1[i][3]));
			}
		}
	}
	//Check all rules of unit[189][0]
	L[189][0] = LargeX[189][1]>0 ? 1 : 0;
	satisfiable[189][0]=1; 
	if(!L[189][0]){
		for(int i=0;i<61;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit189_0[i][0] ][ unit189_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit189_0[i][2] ][ unit189_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit189_0[i][4] ][ unit189_0[i][5] ] >0) ? 1 : 0;
			L[189][0] = L[189][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit189_0[i][4]==0){
				satisfiable[189][0]=satisfiable[189][0] & ((x[189] ^ 0) | (x[ unit189_0[i][0] ] ^ unit189_0[i][1]) |(x[ unit189_0[i][2] ] ^ unit189_0[i][3]));
			}
		}
	}
	//Check all rules of unit[189][1]
	L[189][1] = LargeX[189][0]>0 ? 1 : 0;
	satisfiable[189][1]=1; 
	if(!L[189][1]){
		for(int i=0;i<136;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit189_1[i][0] ][ unit189_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit189_1[i][2] ][ unit189_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit189_1[i][4] ][ unit189_1[i][5] ] >0) ? 1 : 0;
			L[189][1] = L[189][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit189_1[i][4]==0){
				satisfiable[189][1]=satisfiable[189][1] & ((x[189] ^ 1) | (x[ unit189_1[i][0] ] ^ unit189_1[i][1]) |(x[ unit189_1[i][2] ] ^ unit189_1[i][3]));
			}
		}
	}
	//Check all rules of unit[190][0]
	L[190][0] = LargeX[190][1]>0 ? 1 : 0;
	satisfiable[190][0]=1; 
	if(!L[190][0]){
		for(int i=0;i<87;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit190_0[i][0] ][ unit190_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit190_0[i][2] ][ unit190_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit190_0[i][4] ][ unit190_0[i][5] ] >0) ? 1 : 0;
			L[190][0] = L[190][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit190_0[i][4]==0){
				satisfiable[190][0]=satisfiable[190][0] & ((x[190] ^ 0) | (x[ unit190_0[i][0] ] ^ unit190_0[i][1]) |(x[ unit190_0[i][2] ] ^ unit190_0[i][3]));
			}
		}
	}
	//Check all rules of unit[190][1]
	L[190][1] = LargeX[190][0]>0 ? 1 : 0;
	satisfiable[190][1]=1; 
	if(!L[190][1]){
		for(int i=0;i<67;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit190_1[i][0] ][ unit190_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit190_1[i][2] ][ unit190_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit190_1[i][4] ][ unit190_1[i][5] ] >0) ? 1 : 0;
			L[190][1] = L[190][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit190_1[i][4]==0){
				satisfiable[190][1]=satisfiable[190][1] & ((x[190] ^ 1) | (x[ unit190_1[i][0] ] ^ unit190_1[i][1]) |(x[ unit190_1[i][2] ] ^ unit190_1[i][3]));
			}
		}
	}
	//Check all rules of unit[191][0]
	L[191][0] = LargeX[191][1]>0 ? 1 : 0;
	satisfiable[191][0]=1; 
	if(!L[191][0]){
		for(int i=0;i<117;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit191_0[i][0] ][ unit191_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit191_0[i][2] ][ unit191_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit191_0[i][4] ][ unit191_0[i][5] ] >0) ? 1 : 0;
			L[191][0] = L[191][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit191_0[i][4]==0){
				satisfiable[191][0]=satisfiable[191][0] & ((x[191] ^ 0) | (x[ unit191_0[i][0] ] ^ unit191_0[i][1]) |(x[ unit191_0[i][2] ] ^ unit191_0[i][3]));
			}
		}
	}
	//Check all rules of unit[191][1]
	L[191][1] = LargeX[191][0]>0 ? 1 : 0;
	satisfiable[191][1]=1; 
	if(!L[191][1]){
		for(int i=0;i<122;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit191_1[i][0] ][ unit191_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit191_1[i][2] ][ unit191_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit191_1[i][4] ][ unit191_1[i][5] ] >0) ? 1 : 0;
			L[191][1] = L[191][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit191_1[i][4]==0){
				satisfiable[191][1]=satisfiable[191][1] & ((x[191] ^ 1) | (x[ unit191_1[i][0] ] ^ unit191_1[i][1]) |(x[ unit191_1[i][2] ] ^ unit191_1[i][3]));
			}
		}
	}
	//Check all rules of unit[192][0]
	L[192][0] = LargeX[192][1]>0 ? 1 : 0;
	satisfiable[192][0]=1; 
	if(!L[192][0]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit192_0[i][0] ][ unit192_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit192_0[i][2] ][ unit192_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit192_0[i][4] ][ unit192_0[i][5] ] >0) ? 1 : 0;
			L[192][0] = L[192][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit192_0[i][4]==0){
				satisfiable[192][0]=satisfiable[192][0] & ((x[192] ^ 0) | (x[ unit192_0[i][0] ] ^ unit192_0[i][1]) |(x[ unit192_0[i][2] ] ^ unit192_0[i][3]));
			}
		}
	}
	//Check all rules of unit[192][1]
	L[192][1] = LargeX[192][0]>0 ? 1 : 0;
	satisfiable[192][1]=1; 
	if(!L[192][1]){
		for(int i=0;i<111;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit192_1[i][0] ][ unit192_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit192_1[i][2] ][ unit192_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit192_1[i][4] ][ unit192_1[i][5] ] >0) ? 1 : 0;
			L[192][1] = L[192][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit192_1[i][4]==0){
				satisfiable[192][1]=satisfiable[192][1] & ((x[192] ^ 1) | (x[ unit192_1[i][0] ] ^ unit192_1[i][1]) |(x[ unit192_1[i][2] ] ^ unit192_1[i][3]));
			}
		}
	}
	//Check all rules of unit[193][0]
	L[193][0] = LargeX[193][1]>0 ? 1 : 0;
	satisfiable[193][0]=1; 
	if(!L[193][0]){
		for(int i=0;i<85;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit193_0[i][0] ][ unit193_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit193_0[i][2] ][ unit193_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit193_0[i][4] ][ unit193_0[i][5] ] >0) ? 1 : 0;
			L[193][0] = L[193][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit193_0[i][4]==0){
				satisfiable[193][0]=satisfiable[193][0] & ((x[193] ^ 0) | (x[ unit193_0[i][0] ] ^ unit193_0[i][1]) |(x[ unit193_0[i][2] ] ^ unit193_0[i][3]));
			}
		}
	}
	//Check all rules of unit[193][1]
	L[193][1] = LargeX[193][0]>0 ? 1 : 0;
	satisfiable[193][1]=1; 
	if(!L[193][1]){
		for(int i=0;i<64;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit193_1[i][0] ][ unit193_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit193_1[i][2] ][ unit193_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit193_1[i][4] ][ unit193_1[i][5] ] >0) ? 1 : 0;
			L[193][1] = L[193][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit193_1[i][4]==0){
				satisfiable[193][1]=satisfiable[193][1] & ((x[193] ^ 1) | (x[ unit193_1[i][0] ] ^ unit193_1[i][1]) |(x[ unit193_1[i][2] ] ^ unit193_1[i][3]));
			}
		}
	}
	//Check all rules of unit[194][0]
	L[194][0] = LargeX[194][1]>0 ? 1 : 0;
	satisfiable[194][0]=1; 
	if(!L[194][0]){
		for(int i=0;i<24;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit194_0[i][0] ][ unit194_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit194_0[i][2] ][ unit194_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit194_0[i][4] ][ unit194_0[i][5] ] >0) ? 1 : 0;
			L[194][0] = L[194][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit194_0[i][4]==0){
				satisfiable[194][0]=satisfiable[194][0] & ((x[194] ^ 0) | (x[ unit194_0[i][0] ] ^ unit194_0[i][1]) |(x[ unit194_0[i][2] ] ^ unit194_0[i][3]));
			}
		}
	}
	//Check all rules of unit[194][1]
	L[194][1] = LargeX[194][0]>0 ? 1 : 0;
	satisfiable[194][1]=1; 
	if(!L[194][1]){
		for(int i=0;i<101;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit194_1[i][0] ][ unit194_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit194_1[i][2] ][ unit194_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit194_1[i][4] ][ unit194_1[i][5] ] >0) ? 1 : 0;
			L[194][1] = L[194][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit194_1[i][4]==0){
				satisfiable[194][1]=satisfiable[194][1] & ((x[194] ^ 1) | (x[ unit194_1[i][0] ] ^ unit194_1[i][1]) |(x[ unit194_1[i][2] ] ^ unit194_1[i][3]));
			}
		}
	}
	//Check all rules of unit[195][0]
	L[195][0] = LargeX[195][1]>0 ? 1 : 0;
	satisfiable[195][0]=1; 
	if(!L[195][0]){
		for(int i=0;i<97;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit195_0[i][0] ][ unit195_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit195_0[i][2] ][ unit195_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit195_0[i][4] ][ unit195_0[i][5] ] >0) ? 1 : 0;
			L[195][0] = L[195][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit195_0[i][4]==0){
				satisfiable[195][0]=satisfiable[195][0] & ((x[195] ^ 0) | (x[ unit195_0[i][0] ] ^ unit195_0[i][1]) |(x[ unit195_0[i][2] ] ^ unit195_0[i][3]));
			}
		}
	}
	//Check all rules of unit[195][1]
	L[195][1] = LargeX[195][0]>0 ? 1 : 0;
	satisfiable[195][1]=1; 
	if(!L[195][1]){
		for(int i=0;i<77;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit195_1[i][0] ][ unit195_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit195_1[i][2] ][ unit195_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit195_1[i][4] ][ unit195_1[i][5] ] >0) ? 1 : 0;
			L[195][1] = L[195][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit195_1[i][4]==0){
				satisfiable[195][1]=satisfiable[195][1] & ((x[195] ^ 1) | (x[ unit195_1[i][0] ] ^ unit195_1[i][1]) |(x[ unit195_1[i][2] ] ^ unit195_1[i][3]));
			}
		}
	}
	//Check all rules of unit[196][0]
	L[196][0] = LargeX[196][1]>0 ? 1 : 0;
	satisfiable[196][0]=1; 
	if(!L[196][0]){
		for(int i=0;i<84;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit196_0[i][0] ][ unit196_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit196_0[i][2] ][ unit196_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit196_0[i][4] ][ unit196_0[i][5] ] >0) ? 1 : 0;
			L[196][0] = L[196][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit196_0[i][4]==0){
				satisfiable[196][0]=satisfiable[196][0] & ((x[196] ^ 0) | (x[ unit196_0[i][0] ] ^ unit196_0[i][1]) |(x[ unit196_0[i][2] ] ^ unit196_0[i][3]));
			}
		}
	}
	//Check all rules of unit[196][1]
	L[196][1] = LargeX[196][0]>0 ? 1 : 0;
	satisfiable[196][1]=1; 
	if(!L[196][1]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit196_1[i][0] ][ unit196_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit196_1[i][2] ][ unit196_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit196_1[i][4] ][ unit196_1[i][5] ] >0) ? 1 : 0;
			L[196][1] = L[196][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit196_1[i][4]==0){
				satisfiable[196][1]=satisfiable[196][1] & ((x[196] ^ 1) | (x[ unit196_1[i][0] ] ^ unit196_1[i][1]) |(x[ unit196_1[i][2] ] ^ unit196_1[i][3]));
			}
		}
	}
	//Check all rules of unit[197][0]
	L[197][0] = LargeX[197][1]>0 ? 1 : 0;
	satisfiable[197][0]=1; 
	if(!L[197][0]){
		for(int i=0;i<104;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit197_0[i][0] ][ unit197_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit197_0[i][2] ][ unit197_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit197_0[i][4] ][ unit197_0[i][5] ] >0) ? 1 : 0;
			L[197][0] = L[197][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit197_0[i][4]==0){
				satisfiable[197][0]=satisfiable[197][0] & ((x[197] ^ 0) | (x[ unit197_0[i][0] ] ^ unit197_0[i][1]) |(x[ unit197_0[i][2] ] ^ unit197_0[i][3]));
			}
		}
	}
	//Check all rules of unit[197][1]
	L[197][1] = LargeX[197][0]>0 ? 1 : 0;
	satisfiable[197][1]=1; 
	if(!L[197][1]){
		for(int i=0;i<102;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit197_1[i][0] ][ unit197_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit197_1[i][2] ][ unit197_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit197_1[i][4] ][ unit197_1[i][5] ] >0) ? 1 : 0;
			L[197][1] = L[197][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit197_1[i][4]==0){
				satisfiable[197][1]=satisfiable[197][1] & ((x[197] ^ 1) | (x[ unit197_1[i][0] ] ^ unit197_1[i][1]) |(x[ unit197_1[i][2] ] ^ unit197_1[i][3]));
			}
		}
	}
	//Check all rules of unit[198][0]
	L[198][0] = LargeX[198][1]>0 ? 1 : 0;
	satisfiable[198][0]=1; 
	if(!L[198][0]){
		for(int i=0;i<59;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit198_0[i][0] ][ unit198_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit198_0[i][2] ][ unit198_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit198_0[i][4] ][ unit198_0[i][5] ] >0) ? 1 : 0;
			L[198][0] = L[198][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit198_0[i][4]==0){
				satisfiable[198][0]=satisfiable[198][0] & ((x[198] ^ 0) | (x[ unit198_0[i][0] ] ^ unit198_0[i][1]) |(x[ unit198_0[i][2] ] ^ unit198_0[i][3]));
			}
		}
	}
	//Check all rules of unit[198][1]
	L[198][1] = LargeX[198][0]>0 ? 1 : 0;
	satisfiable[198][1]=1; 
	if(!L[198][1]){
		for(int i=0;i<50;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit198_1[i][0] ][ unit198_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit198_1[i][2] ][ unit198_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit198_1[i][4] ][ unit198_1[i][5] ] >0) ? 1 : 0;
			L[198][1] = L[198][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit198_1[i][4]==0){
				satisfiable[198][1]=satisfiable[198][1] & ((x[198] ^ 1) | (x[ unit198_1[i][0] ] ^ unit198_1[i][1]) |(x[ unit198_1[i][2] ] ^ unit198_1[i][3]));
			}
		}
	}
	//Check all rules of unit[199][0]
	L[199][0] = LargeX[199][1]>0 ? 1 : 0;
	satisfiable[199][0]=1; 
	if(!L[199][0]){
		for(int i=0;i<109;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit199_0[i][0] ][ unit199_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit199_0[i][2] ][ unit199_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit199_0[i][4] ][ unit199_0[i][5] ] >0) ? 1 : 0;
			L[199][0] = L[199][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit199_0[i][4]==0){
				satisfiable[199][0]=satisfiable[199][0] & ((x[199] ^ 0) | (x[ unit199_0[i][0] ] ^ unit199_0[i][1]) |(x[ unit199_0[i][2] ] ^ unit199_0[i][3]));
			}
		}
	}
	//Check all rules of unit[199][1]
	L[199][1] = LargeX[199][0]>0 ? 1 : 0;
	satisfiable[199][1]=1; 
	if(!L[199][1]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit199_1[i][0] ][ unit199_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit199_1[i][2] ][ unit199_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit199_1[i][4] ][ unit199_1[i][5] ] >0) ? 1 : 0;
			L[199][1] = L[199][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit199_1[i][4]==0){
				satisfiable[199][1]=satisfiable[199][1] & ((x[199] ^ 1) | (x[ unit199_1[i][0] ] ^ unit199_1[i][1]) |(x[ unit199_1[i][2] ] ^ unit199_1[i][3]));
			}
		}
	}
	//Check all rules of unit[200][0]
	L[200][0] = LargeX[200][1]>0 ? 1 : 0;
	satisfiable[200][0]=1; 
	if(!L[200][0]){
		for(int i=0;i<73;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit200_0[i][0] ][ unit200_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit200_0[i][2] ][ unit200_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit200_0[i][4] ][ unit200_0[i][5] ] >0) ? 1 : 0;
			L[200][0] = L[200][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit200_0[i][4]==0){
				satisfiable[200][0]=satisfiable[200][0] & ((x[200] ^ 0) | (x[ unit200_0[i][0] ] ^ unit200_0[i][1]) |(x[ unit200_0[i][2] ] ^ unit200_0[i][3]));
			}
		}
	}
	//Check all rules of unit[200][1]
	L[200][1] = LargeX[200][0]>0 ? 1 : 0;
	satisfiable[200][1]=1; 
	if(!L[200][1]){
		for(int i=0;i<35;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit200_1[i][0] ][ unit200_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit200_1[i][2] ][ unit200_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit200_1[i][4] ][ unit200_1[i][5] ] >0) ? 1 : 0;
			L[200][1] = L[200][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit200_1[i][4]==0){
				satisfiable[200][1]=satisfiable[200][1] & ((x[200] ^ 1) | (x[ unit200_1[i][0] ] ^ unit200_1[i][1]) |(x[ unit200_1[i][2] ] ^ unit200_1[i][3]));
			}
		}
	}
	//Check all rules of unit[201][0]
	L[201][0] = LargeX[201][1]>0 ? 1 : 0;
	satisfiable[201][0]=1; 
	if(!L[201][0]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit201_0[i][0] ][ unit201_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit201_0[i][2] ][ unit201_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit201_0[i][4] ][ unit201_0[i][5] ] >0) ? 1 : 0;
			L[201][0] = L[201][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit201_0[i][4]==0){
				satisfiable[201][0]=satisfiable[201][0] & ((x[201] ^ 0) | (x[ unit201_0[i][0] ] ^ unit201_0[i][1]) |(x[ unit201_0[i][2] ] ^ unit201_0[i][3]));
			}
		}
	}
	//Check all rules of unit[201][1]
	L[201][1] = LargeX[201][0]>0 ? 1 : 0;
	satisfiable[201][1]=1; 
	if(!L[201][1]){
		for(int i=0;i<83;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit201_1[i][0] ][ unit201_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit201_1[i][2] ][ unit201_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit201_1[i][4] ][ unit201_1[i][5] ] >0) ? 1 : 0;
			L[201][1] = L[201][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit201_1[i][4]==0){
				satisfiable[201][1]=satisfiable[201][1] & ((x[201] ^ 1) | (x[ unit201_1[i][0] ] ^ unit201_1[i][1]) |(x[ unit201_1[i][2] ] ^ unit201_1[i][3]));
			}
		}
	}
	//Check all rules of unit[202][0]
	L[202][0] = LargeX[202][1]>0 ? 1 : 0;
	satisfiable[202][0]=1; 
	if(!L[202][0]){
		for(int i=0;i<95;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit202_0[i][0] ][ unit202_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit202_0[i][2] ][ unit202_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit202_0[i][4] ][ unit202_0[i][5] ] >0) ? 1 : 0;
			L[202][0] = L[202][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit202_0[i][4]==0){
				satisfiable[202][0]=satisfiable[202][0] & ((x[202] ^ 0) | (x[ unit202_0[i][0] ] ^ unit202_0[i][1]) |(x[ unit202_0[i][2] ] ^ unit202_0[i][3]));
			}
		}
	}
	//Check all rules of unit[202][1]
	L[202][1] = LargeX[202][0]>0 ? 1 : 0;
	satisfiable[202][1]=1; 
	if(!L[202][1]){
		for(int i=0;i<132;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit202_1[i][0] ][ unit202_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit202_1[i][2] ][ unit202_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit202_1[i][4] ][ unit202_1[i][5] ] >0) ? 1 : 0;
			L[202][1] = L[202][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit202_1[i][4]==0){
				satisfiable[202][1]=satisfiable[202][1] & ((x[202] ^ 1) | (x[ unit202_1[i][0] ] ^ unit202_1[i][1]) |(x[ unit202_1[i][2] ] ^ unit202_1[i][3]));
			}
		}
	}
	//Check all rules of unit[203][0]
	L[203][0] = LargeX[203][1]>0 ? 1 : 0;
	satisfiable[203][0]=1; 
	if(!L[203][0]){
		for(int i=0;i<73;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit203_0[i][0] ][ unit203_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit203_0[i][2] ][ unit203_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit203_0[i][4] ][ unit203_0[i][5] ] >0) ? 1 : 0;
			L[203][0] = L[203][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit203_0[i][4]==0){
				satisfiable[203][0]=satisfiable[203][0] & ((x[203] ^ 0) | (x[ unit203_0[i][0] ] ^ unit203_0[i][1]) |(x[ unit203_0[i][2] ] ^ unit203_0[i][3]));
			}
		}
	}
	//Check all rules of unit[203][1]
	L[203][1] = LargeX[203][0]>0 ? 1 : 0;
	satisfiable[203][1]=1; 
	if(!L[203][1]){
		for(int i=0;i<103;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit203_1[i][0] ][ unit203_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit203_1[i][2] ][ unit203_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit203_1[i][4] ][ unit203_1[i][5] ] >0) ? 1 : 0;
			L[203][1] = L[203][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit203_1[i][4]==0){
				satisfiable[203][1]=satisfiable[203][1] & ((x[203] ^ 1) | (x[ unit203_1[i][0] ] ^ unit203_1[i][1]) |(x[ unit203_1[i][2] ] ^ unit203_1[i][3]));
			}
		}
	}
	//Check all rules of unit[204][0]
	L[204][0] = LargeX[204][1]>0 ? 1 : 0;
	satisfiable[204][0]=1; 
	if(!L[204][0]){
		for(int i=0;i<100;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit204_0[i][0] ][ unit204_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit204_0[i][2] ][ unit204_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit204_0[i][4] ][ unit204_0[i][5] ] >0) ? 1 : 0;
			L[204][0] = L[204][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit204_0[i][4]==0){
				satisfiable[204][0]=satisfiable[204][0] & ((x[204] ^ 0) | (x[ unit204_0[i][0] ] ^ unit204_0[i][1]) |(x[ unit204_0[i][2] ] ^ unit204_0[i][3]));
			}
		}
	}
	//Check all rules of unit[204][1]
	L[204][1] = LargeX[204][0]>0 ? 1 : 0;
	satisfiable[204][1]=1; 
	if(!L[204][1]){
		for(int i=0;i<110;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit204_1[i][0] ][ unit204_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit204_1[i][2] ][ unit204_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit204_1[i][4] ][ unit204_1[i][5] ] >0) ? 1 : 0;
			L[204][1] = L[204][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit204_1[i][4]==0){
				satisfiable[204][1]=satisfiable[204][1] & ((x[204] ^ 1) | (x[ unit204_1[i][0] ] ^ unit204_1[i][1]) |(x[ unit204_1[i][2] ] ^ unit204_1[i][3]));
			}
		}
	}
	//Check all rules of unit[205][0]
	L[205][0] = LargeX[205][1]>0 ? 1 : 0;
	satisfiable[205][0]=1; 
	if(!L[205][0]){
		for(int i=0;i<119;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit205_0[i][0] ][ unit205_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit205_0[i][2] ][ unit205_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit205_0[i][4] ][ unit205_0[i][5] ] >0) ? 1 : 0;
			L[205][0] = L[205][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit205_0[i][4]==0){
				satisfiable[205][0]=satisfiable[205][0] & ((x[205] ^ 0) | (x[ unit205_0[i][0] ] ^ unit205_0[i][1]) |(x[ unit205_0[i][2] ] ^ unit205_0[i][3]));
			}
		}
	}
	//Check all rules of unit[205][1]
	L[205][1] = LargeX[205][0]>0 ? 1 : 0;
	satisfiable[205][1]=1; 
	if(!L[205][1]){
		for(int i=0;i<111;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit205_1[i][0] ][ unit205_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit205_1[i][2] ][ unit205_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit205_1[i][4] ][ unit205_1[i][5] ] >0) ? 1 : 0;
			L[205][1] = L[205][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit205_1[i][4]==0){
				satisfiable[205][1]=satisfiable[205][1] & ((x[205] ^ 1) | (x[ unit205_1[i][0] ] ^ unit205_1[i][1]) |(x[ unit205_1[i][2] ] ^ unit205_1[i][3]));
			}
		}
	}
	//Check all rules of unit[206][0]
	L[206][0] = LargeX[206][1]>0 ? 1 : 0;
	satisfiable[206][0]=1; 
	if(!L[206][0]){
		for(int i=0;i<74;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit206_0[i][0] ][ unit206_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit206_0[i][2] ][ unit206_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit206_0[i][4] ][ unit206_0[i][5] ] >0) ? 1 : 0;
			L[206][0] = L[206][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit206_0[i][4]==0){
				satisfiable[206][0]=satisfiable[206][0] & ((x[206] ^ 0) | (x[ unit206_0[i][0] ] ^ unit206_0[i][1]) |(x[ unit206_0[i][2] ] ^ unit206_0[i][3]));
			}
		}
	}
	//Check all rules of unit[206][1]
	L[206][1] = LargeX[206][0]>0 ? 1 : 0;
	satisfiable[206][1]=1; 
	if(!L[206][1]){
		for(int i=0;i<99;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit206_1[i][0] ][ unit206_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit206_1[i][2] ][ unit206_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit206_1[i][4] ][ unit206_1[i][5] ] >0) ? 1 : 0;
			L[206][1] = L[206][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit206_1[i][4]==0){
				satisfiable[206][1]=satisfiable[206][1] & ((x[206] ^ 1) | (x[ unit206_1[i][0] ] ^ unit206_1[i][1]) |(x[ unit206_1[i][2] ] ^ unit206_1[i][3]));
			}
		}
	}
	//Check all rules of unit[207][0]
	L[207][0] = LargeX[207][1]>0 ? 1 : 0;
	satisfiable[207][0]=1; 
	if(!L[207][0]){
		for(int i=0;i<85;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit207_0[i][0] ][ unit207_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit207_0[i][2] ][ unit207_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit207_0[i][4] ][ unit207_0[i][5] ] >0) ? 1 : 0;
			L[207][0] = L[207][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit207_0[i][4]==0){
				satisfiable[207][0]=satisfiable[207][0] & ((x[207] ^ 0) | (x[ unit207_0[i][0] ] ^ unit207_0[i][1]) |(x[ unit207_0[i][2] ] ^ unit207_0[i][3]));
			}
		}
	}
	//Check all rules of unit[207][1]
	L[207][1] = LargeX[207][0]>0 ? 1 : 0;
	satisfiable[207][1]=1; 
	if(!L[207][1]){
		for(int i=0;i<38;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit207_1[i][0] ][ unit207_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit207_1[i][2] ][ unit207_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit207_1[i][4] ][ unit207_1[i][5] ] >0) ? 1 : 0;
			L[207][1] = L[207][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit207_1[i][4]==0){
				satisfiable[207][1]=satisfiable[207][1] & ((x[207] ^ 1) | (x[ unit207_1[i][0] ] ^ unit207_1[i][1]) |(x[ unit207_1[i][2] ] ^ unit207_1[i][3]));
			}
		}
	}
	//Check all rules of unit[208][0]
	L[208][0] = LargeX[208][1]>0 ? 1 : 0;
	satisfiable[208][0]=1; 
	if(!L[208][0]){
		for(int i=0;i<94;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit208_0[i][0] ][ unit208_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit208_0[i][2] ][ unit208_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit208_0[i][4] ][ unit208_0[i][5] ] >0) ? 1 : 0;
			L[208][0] = L[208][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit208_0[i][4]==0){
				satisfiable[208][0]=satisfiable[208][0] & ((x[208] ^ 0) | (x[ unit208_0[i][0] ] ^ unit208_0[i][1]) |(x[ unit208_0[i][2] ] ^ unit208_0[i][3]));
			}
		}
	}
	//Check all rules of unit[208][1]
	L[208][1] = LargeX[208][0]>0 ? 1 : 0;
	satisfiable[208][1]=1; 
	if(!L[208][1]){
		for(int i=0;i<73;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit208_1[i][0] ][ unit208_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit208_1[i][2] ][ unit208_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit208_1[i][4] ][ unit208_1[i][5] ] >0) ? 1 : 0;
			L[208][1] = L[208][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit208_1[i][4]==0){
				satisfiable[208][1]=satisfiable[208][1] & ((x[208] ^ 1) | (x[ unit208_1[i][0] ] ^ unit208_1[i][1]) |(x[ unit208_1[i][2] ] ^ unit208_1[i][3]));
			}
		}
	}
	//Check all rules of unit[209][0]
	L[209][0] = LargeX[209][1]>0 ? 1 : 0;
	satisfiable[209][0]=1; 
	if(!L[209][0]){
		for(int i=0;i<83;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit209_0[i][0] ][ unit209_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit209_0[i][2] ][ unit209_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit209_0[i][4] ][ unit209_0[i][5] ] >0) ? 1 : 0;
			L[209][0] = L[209][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit209_0[i][4]==0){
				satisfiable[209][0]=satisfiable[209][0] & ((x[209] ^ 0) | (x[ unit209_0[i][0] ] ^ unit209_0[i][1]) |(x[ unit209_0[i][2] ] ^ unit209_0[i][3]));
			}
		}
	}
	//Check all rules of unit[209][1]
	L[209][1] = LargeX[209][0]>0 ? 1 : 0;
	satisfiable[209][1]=1; 
	if(!L[209][1]){
		for(int i=0;i<18;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit209_1[i][0] ][ unit209_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit209_1[i][2] ][ unit209_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit209_1[i][4] ][ unit209_1[i][5] ] >0) ? 1 : 0;
			L[209][1] = L[209][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit209_1[i][4]==0){
				satisfiable[209][1]=satisfiable[209][1] & ((x[209] ^ 1) | (x[ unit209_1[i][0] ] ^ unit209_1[i][1]) |(x[ unit209_1[i][2] ] ^ unit209_1[i][3]));
			}
		}
	}
	//Check all rules of unit[210][0]
	L[210][0] = LargeX[210][1]>0 ? 1 : 0;
	satisfiable[210][0]=1; 
	if(!L[210][0]){
		for(int i=0;i<80;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit210_0[i][0] ][ unit210_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit210_0[i][2] ][ unit210_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit210_0[i][4] ][ unit210_0[i][5] ] >0) ? 1 : 0;
			L[210][0] = L[210][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit210_0[i][4]==0){
				satisfiable[210][0]=satisfiable[210][0] & ((x[210] ^ 0) | (x[ unit210_0[i][0] ] ^ unit210_0[i][1]) |(x[ unit210_0[i][2] ] ^ unit210_0[i][3]));
			}
		}
	}
	//Check all rules of unit[210][1]
	L[210][1] = LargeX[210][0]>0 ? 1 : 0;
	satisfiable[210][1]=1; 
	if(!L[210][1]){
		for(int i=0;i<30;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit210_1[i][0] ][ unit210_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit210_1[i][2] ][ unit210_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit210_1[i][4] ][ unit210_1[i][5] ] >0) ? 1 : 0;
			L[210][1] = L[210][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit210_1[i][4]==0){
				satisfiable[210][1]=satisfiable[210][1] & ((x[210] ^ 1) | (x[ unit210_1[i][0] ] ^ unit210_1[i][1]) |(x[ unit210_1[i][2] ] ^ unit210_1[i][3]));
			}
		}
	}
	//Check all rules of unit[211][0]
	L[211][0] = LargeX[211][1]>0 ? 1 : 0;
	satisfiable[211][0]=1; 
	if(!L[211][0]){
		for(int i=0;i<144;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit211_0[i][0] ][ unit211_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit211_0[i][2] ][ unit211_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit211_0[i][4] ][ unit211_0[i][5] ] >0) ? 1 : 0;
			L[211][0] = L[211][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit211_0[i][4]==0){
				satisfiable[211][0]=satisfiable[211][0] & ((x[211] ^ 0) | (x[ unit211_0[i][0] ] ^ unit211_0[i][1]) |(x[ unit211_0[i][2] ] ^ unit211_0[i][3]));
			}
		}
	}
	//Check all rules of unit[211][1]
	L[211][1] = LargeX[211][0]>0 ? 1 : 0;
	satisfiable[211][1]=1; 
	if(!L[211][1]){
		for(int i=0;i<19;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit211_1[i][0] ][ unit211_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit211_1[i][2] ][ unit211_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit211_1[i][4] ][ unit211_1[i][5] ] >0) ? 1 : 0;
			L[211][1] = L[211][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit211_1[i][4]==0){
				satisfiable[211][1]=satisfiable[211][1] & ((x[211] ^ 1) | (x[ unit211_1[i][0] ] ^ unit211_1[i][1]) |(x[ unit211_1[i][2] ] ^ unit211_1[i][3]));
			}
		}
	}
	//Check all rules of unit[212][0]
	L[212][0] = LargeX[212][1]>0 ? 1 : 0;
	satisfiable[212][0]=1; 
	if(!L[212][0]){
		for(int i=0;i<29;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit212_0[i][0] ][ unit212_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit212_0[i][2] ][ unit212_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit212_0[i][4] ][ unit212_0[i][5] ] >0) ? 1 : 0;
			L[212][0] = L[212][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit212_0[i][4]==0){
				satisfiable[212][0]=satisfiable[212][0] & ((x[212] ^ 0) | (x[ unit212_0[i][0] ] ^ unit212_0[i][1]) |(x[ unit212_0[i][2] ] ^ unit212_0[i][3]));
			}
		}
	}
	//Check all rules of unit[212][1]
	L[212][1] = LargeX[212][0]>0 ? 1 : 0;
	satisfiable[212][1]=1; 
	if(!L[212][1]){
		for(int i=0;i<46;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit212_1[i][0] ][ unit212_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit212_1[i][2] ][ unit212_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit212_1[i][4] ][ unit212_1[i][5] ] >0) ? 1 : 0;
			L[212][1] = L[212][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit212_1[i][4]==0){
				satisfiable[212][1]=satisfiable[212][1] & ((x[212] ^ 1) | (x[ unit212_1[i][0] ] ^ unit212_1[i][1]) |(x[ unit212_1[i][2] ] ^ unit212_1[i][3]));
			}
		}
	}
	//Check all rules of unit[213][0]
	L[213][0] = LargeX[213][1]>0 ? 1 : 0;
	satisfiable[213][0]=1; 
	if(!L[213][0]){
		for(int i=0;i<119;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit213_0[i][0] ][ unit213_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit213_0[i][2] ][ unit213_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit213_0[i][4] ][ unit213_0[i][5] ] >0) ? 1 : 0;
			L[213][0] = L[213][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit213_0[i][4]==0){
				satisfiable[213][0]=satisfiable[213][0] & ((x[213] ^ 0) | (x[ unit213_0[i][0] ] ^ unit213_0[i][1]) |(x[ unit213_0[i][2] ] ^ unit213_0[i][3]));
			}
		}
	}
	//Check all rules of unit[213][1]
	L[213][1] = LargeX[213][0]>0 ? 1 : 0;
	satisfiable[213][1]=1; 
	if(!L[213][1]){
		for(int i=0;i<60;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit213_1[i][0] ][ unit213_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit213_1[i][2] ][ unit213_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit213_1[i][4] ][ unit213_1[i][5] ] >0) ? 1 : 0;
			L[213][1] = L[213][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit213_1[i][4]==0){
				satisfiable[213][1]=satisfiable[213][1] & ((x[213] ^ 1) | (x[ unit213_1[i][0] ] ^ unit213_1[i][1]) |(x[ unit213_1[i][2] ] ^ unit213_1[i][3]));
			}
		}
	}
	//Check all rules of unit[214][0]
	L[214][0] = LargeX[214][1]>0 ? 1 : 0;
	satisfiable[214][0]=1; 
	if(!L[214][0]){
		for(int i=0;i<42;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit214_0[i][0] ][ unit214_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit214_0[i][2] ][ unit214_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit214_0[i][4] ][ unit214_0[i][5] ] >0) ? 1 : 0;
			L[214][0] = L[214][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit214_0[i][4]==0){
				satisfiable[214][0]=satisfiable[214][0] & ((x[214] ^ 0) | (x[ unit214_0[i][0] ] ^ unit214_0[i][1]) |(x[ unit214_0[i][2] ] ^ unit214_0[i][3]));
			}
		}
	}
	//Check all rules of unit[214][1]
	L[214][1] = LargeX[214][0]>0 ? 1 : 0;
	satisfiable[214][1]=1; 
	if(!L[214][1]){
		for(int i=0;i<89;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit214_1[i][0] ][ unit214_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit214_1[i][2] ][ unit214_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit214_1[i][4] ][ unit214_1[i][5] ] >0) ? 1 : 0;
			L[214][1] = L[214][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit214_1[i][4]==0){
				satisfiable[214][1]=satisfiable[214][1] & ((x[214] ^ 1) | (x[ unit214_1[i][0] ] ^ unit214_1[i][1]) |(x[ unit214_1[i][2] ] ^ unit214_1[i][3]));
			}
		}
	}
	//Check all rules of unit[215][0]
	L[215][0] = LargeX[215][1]>0 ? 1 : 0;
	satisfiable[215][0]=1; 
	if(!L[215][0]){
		for(int i=0;i<135;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit215_0[i][0] ][ unit215_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit215_0[i][2] ][ unit215_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit215_0[i][4] ][ unit215_0[i][5] ] >0) ? 1 : 0;
			L[215][0] = L[215][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit215_0[i][4]==0){
				satisfiable[215][0]=satisfiable[215][0] & ((x[215] ^ 0) | (x[ unit215_0[i][0] ] ^ unit215_0[i][1]) |(x[ unit215_0[i][2] ] ^ unit215_0[i][3]));
			}
		}
	}
	//Check all rules of unit[215][1]
	L[215][1] = LargeX[215][0]>0 ? 1 : 0;
	satisfiable[215][1]=1; 
	if(!L[215][1]){
		for(int i=0;i<95;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit215_1[i][0] ][ unit215_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit215_1[i][2] ][ unit215_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit215_1[i][4] ][ unit215_1[i][5] ] >0) ? 1 : 0;
			L[215][1] = L[215][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit215_1[i][4]==0){
				satisfiable[215][1]=satisfiable[215][1] & ((x[215] ^ 1) | (x[ unit215_1[i][0] ] ^ unit215_1[i][1]) |(x[ unit215_1[i][2] ] ^ unit215_1[i][3]));
			}
		}
	}
	//Check all rules of unit[216][0]
	L[216][0] = LargeX[216][1]>0 ? 1 : 0;
	satisfiable[216][0]=1; 
	if(!L[216][0]){
		for(int i=0;i<45;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit216_0[i][0] ][ unit216_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit216_0[i][2] ][ unit216_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit216_0[i][4] ][ unit216_0[i][5] ] >0) ? 1 : 0;
			L[216][0] = L[216][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit216_0[i][4]==0){
				satisfiable[216][0]=satisfiable[216][0] & ((x[216] ^ 0) | (x[ unit216_0[i][0] ] ^ unit216_0[i][1]) |(x[ unit216_0[i][2] ] ^ unit216_0[i][3]));
			}
		}
	}
	//Check all rules of unit[216][1]
	L[216][1] = LargeX[216][0]>0 ? 1 : 0;
	satisfiable[216][1]=1; 
	if(!L[216][1]){
		for(int i=0;i<147;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit216_1[i][0] ][ unit216_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit216_1[i][2] ][ unit216_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit216_1[i][4] ][ unit216_1[i][5] ] >0) ? 1 : 0;
			L[216][1] = L[216][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit216_1[i][4]==0){
				satisfiable[216][1]=satisfiable[216][1] & ((x[216] ^ 1) | (x[ unit216_1[i][0] ] ^ unit216_1[i][1]) |(x[ unit216_1[i][2] ] ^ unit216_1[i][3]));
			}
		}
	}
	//Check all rules of unit[217][0]
	L[217][0] = LargeX[217][1]>0 ? 1 : 0;
	satisfiable[217][0]=1; 
	if(!L[217][0]){
		for(int i=0;i<85;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit217_0[i][0] ][ unit217_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit217_0[i][2] ][ unit217_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit217_0[i][4] ][ unit217_0[i][5] ] >0) ? 1 : 0;
			L[217][0] = L[217][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit217_0[i][4]==0){
				satisfiable[217][0]=satisfiable[217][0] & ((x[217] ^ 0) | (x[ unit217_0[i][0] ] ^ unit217_0[i][1]) |(x[ unit217_0[i][2] ] ^ unit217_0[i][3]));
			}
		}
	}
	//Check all rules of unit[217][1]
	L[217][1] = LargeX[217][0]>0 ? 1 : 0;
	satisfiable[217][1]=1; 
	if(!L[217][1]){
		for(int i=0;i<49;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit217_1[i][0] ][ unit217_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit217_1[i][2] ][ unit217_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit217_1[i][4] ][ unit217_1[i][5] ] >0) ? 1 : 0;
			L[217][1] = L[217][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit217_1[i][4]==0){
				satisfiable[217][1]=satisfiable[217][1] & ((x[217] ^ 1) | (x[ unit217_1[i][0] ] ^ unit217_1[i][1]) |(x[ unit217_1[i][2] ] ^ unit217_1[i][3]));
			}
		}
	}
	//Check all rules of unit[218][0]
	L[218][0] = LargeX[218][1]>0 ? 1 : 0;
	satisfiable[218][0]=1; 
	if(!L[218][0]){
		for(int i=0;i<166;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit218_0[i][0] ][ unit218_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit218_0[i][2] ][ unit218_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit218_0[i][4] ][ unit218_0[i][5] ] >0) ? 1 : 0;
			L[218][0] = L[218][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit218_0[i][4]==0){
				satisfiable[218][0]=satisfiable[218][0] & ((x[218] ^ 0) | (x[ unit218_0[i][0] ] ^ unit218_0[i][1]) |(x[ unit218_0[i][2] ] ^ unit218_0[i][3]));
			}
		}
	}
	//Check all rules of unit[218][1]
	L[218][1] = LargeX[218][0]>0 ? 1 : 0;
	satisfiable[218][1]=1; 
	if(!L[218][1]){
		for(int i=0;i<63;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit218_1[i][0] ][ unit218_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit218_1[i][2] ][ unit218_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit218_1[i][4] ][ unit218_1[i][5] ] >0) ? 1 : 0;
			L[218][1] = L[218][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit218_1[i][4]==0){
				satisfiable[218][1]=satisfiable[218][1] & ((x[218] ^ 1) | (x[ unit218_1[i][0] ] ^ unit218_1[i][1]) |(x[ unit218_1[i][2] ] ^ unit218_1[i][3]));
			}
		}
	}
	//Check all rules of unit[219][0]
	L[219][0] = LargeX[219][1]>0 ? 1 : 0;
	satisfiable[219][0]=1; 
	if(!L[219][0]){
		for(int i=0;i<33;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit219_0[i][0] ][ unit219_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit219_0[i][2] ][ unit219_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit219_0[i][4] ][ unit219_0[i][5] ] >0) ? 1 : 0;
			L[219][0] = L[219][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit219_0[i][4]==0){
				satisfiable[219][0]=satisfiable[219][0] & ((x[219] ^ 0) | (x[ unit219_0[i][0] ] ^ unit219_0[i][1]) |(x[ unit219_0[i][2] ] ^ unit219_0[i][3]));
			}
		}
	}
	//Check all rules of unit[219][1]
	L[219][1] = LargeX[219][0]>0 ? 1 : 0;
	satisfiable[219][1]=1; 
	if(!L[219][1]){
		for(int i=0;i<83;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit219_1[i][0] ][ unit219_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit219_1[i][2] ][ unit219_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit219_1[i][4] ][ unit219_1[i][5] ] >0) ? 1 : 0;
			L[219][1] = L[219][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit219_1[i][4]==0){
				satisfiable[219][1]=satisfiable[219][1] & ((x[219] ^ 1) | (x[ unit219_1[i][0] ] ^ unit219_1[i][1]) |(x[ unit219_1[i][2] ] ^ unit219_1[i][3]));
			}
		}
	}
	//Check all rules of unit[220][0]
	L[220][0] = LargeX[220][1]>0 ? 1 : 0;
	satisfiable[220][0]=1; 
	if(!L[220][0]){
		for(int i=0;i<69;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit220_0[i][0] ][ unit220_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit220_0[i][2] ][ unit220_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit220_0[i][4] ][ unit220_0[i][5] ] >0) ? 1 : 0;
			L[220][0] = L[220][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit220_0[i][4]==0){
				satisfiable[220][0]=satisfiable[220][0] & ((x[220] ^ 0) | (x[ unit220_0[i][0] ] ^ unit220_0[i][1]) |(x[ unit220_0[i][2] ] ^ unit220_0[i][3]));
			}
		}
	}
	//Check all rules of unit[220][1]
	L[220][1] = LargeX[220][0]>0 ? 1 : 0;
	satisfiable[220][1]=1; 
	if(!L[220][1]){
		for(int i=0;i<45;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit220_1[i][0] ][ unit220_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit220_1[i][2] ][ unit220_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit220_1[i][4] ][ unit220_1[i][5] ] >0) ? 1 : 0;
			L[220][1] = L[220][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit220_1[i][4]==0){
				satisfiable[220][1]=satisfiable[220][1] & ((x[220] ^ 1) | (x[ unit220_1[i][0] ] ^ unit220_1[i][1]) |(x[ unit220_1[i][2] ] ^ unit220_1[i][3]));
			}
		}
	}
	//Check all rules of unit[221][0]
	L[221][0] = LargeX[221][1]>0 ? 1 : 0;
	satisfiable[221][0]=1; 
	if(!L[221][0]){
		for(int i=0;i<65;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit221_0[i][0] ][ unit221_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit221_0[i][2] ][ unit221_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit221_0[i][4] ][ unit221_0[i][5] ] >0) ? 1 : 0;
			L[221][0] = L[221][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit221_0[i][4]==0){
				satisfiable[221][0]=satisfiable[221][0] & ((x[221] ^ 0) | (x[ unit221_0[i][0] ] ^ unit221_0[i][1]) |(x[ unit221_0[i][2] ] ^ unit221_0[i][3]));
			}
		}
	}
	//Check all rules of unit[221][1]
	L[221][1] = LargeX[221][0]>0 ? 1 : 0;
	satisfiable[221][1]=1; 
	if(!L[221][1]){
		for(int i=0;i<87;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit221_1[i][0] ][ unit221_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit221_1[i][2] ][ unit221_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit221_1[i][4] ][ unit221_1[i][5] ] >0) ? 1 : 0;
			L[221][1] = L[221][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit221_1[i][4]==0){
				satisfiable[221][1]=satisfiable[221][1] & ((x[221] ^ 1) | (x[ unit221_1[i][0] ] ^ unit221_1[i][1]) |(x[ unit221_1[i][2] ] ^ unit221_1[i][3]));
			}
		}
	}
	//Check all rules of unit[222][0]
	L[222][0] = LargeX[222][1]>0 ? 1 : 0;
	satisfiable[222][0]=1; 
	if(!L[222][0]){
		for(int i=0;i<131;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit222_0[i][0] ][ unit222_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit222_0[i][2] ][ unit222_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit222_0[i][4] ][ unit222_0[i][5] ] >0) ? 1 : 0;
			L[222][0] = L[222][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit222_0[i][4]==0){
				satisfiable[222][0]=satisfiable[222][0] & ((x[222] ^ 0) | (x[ unit222_0[i][0] ] ^ unit222_0[i][1]) |(x[ unit222_0[i][2] ] ^ unit222_0[i][3]));
			}
		}
	}
	//Check all rules of unit[222][1]
	L[222][1] = LargeX[222][0]>0 ? 1 : 0;
	satisfiable[222][1]=1; 
	if(!L[222][1]){
		for(int i=0;i<125;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit222_1[i][0] ][ unit222_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit222_1[i][2] ][ unit222_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit222_1[i][4] ][ unit222_1[i][5] ] >0) ? 1 : 0;
			L[222][1] = L[222][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit222_1[i][4]==0){
				satisfiable[222][1]=satisfiable[222][1] & ((x[222] ^ 1) | (x[ unit222_1[i][0] ] ^ unit222_1[i][1]) |(x[ unit222_1[i][2] ] ^ unit222_1[i][3]));
			}
		}
	}
	//Check all rules of unit[223][0]
	L[223][0] = LargeX[223][1]>0 ? 1 : 0;
	satisfiable[223][0]=1; 
	if(!L[223][0]){
		for(int i=0;i<44;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit223_0[i][0] ][ unit223_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit223_0[i][2] ][ unit223_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit223_0[i][4] ][ unit223_0[i][5] ] >0) ? 1 : 0;
			L[223][0] = L[223][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit223_0[i][4]==0){
				satisfiable[223][0]=satisfiable[223][0] & ((x[223] ^ 0) | (x[ unit223_0[i][0] ] ^ unit223_0[i][1]) |(x[ unit223_0[i][2] ] ^ unit223_0[i][3]));
			}
		}
	}
	//Check all rules of unit[223][1]
	L[223][1] = LargeX[223][0]>0 ? 1 : 0;
	satisfiable[223][1]=1; 
	if(!L[223][1]){
		for(int i=0;i<112;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit223_1[i][0] ][ unit223_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit223_1[i][2] ][ unit223_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit223_1[i][4] ][ unit223_1[i][5] ] >0) ? 1 : 0;
			L[223][1] = L[223][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit223_1[i][4]==0){
				satisfiable[223][1]=satisfiable[223][1] & ((x[223] ^ 1) | (x[ unit223_1[i][0] ] ^ unit223_1[i][1]) |(x[ unit223_1[i][2] ] ^ unit223_1[i][3]));
			}
		}
	}
	//Check all rules of unit[224][0]
	L[224][0] = LargeX[224][1]>0 ? 1 : 0;
	satisfiable[224][0]=1; 
	if(!L[224][0]){
		for(int i=0;i<36;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit224_0[i][0] ][ unit224_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit224_0[i][2] ][ unit224_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit224_0[i][4] ][ unit224_0[i][5] ] >0) ? 1 : 0;
			L[224][0] = L[224][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit224_0[i][4]==0){
				satisfiable[224][0]=satisfiable[224][0] & ((x[224] ^ 0) | (x[ unit224_0[i][0] ] ^ unit224_0[i][1]) |(x[ unit224_0[i][2] ] ^ unit224_0[i][3]));
			}
		}
	}
	//Check all rules of unit[224][1]
	L[224][1] = LargeX[224][0]>0 ? 1 : 0;
	satisfiable[224][1]=1; 
	if(!L[224][1]){
		for(int i=0;i<115;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit224_1[i][0] ][ unit224_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit224_1[i][2] ][ unit224_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit224_1[i][4] ][ unit224_1[i][5] ] >0) ? 1 : 0;
			L[224][1] = L[224][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit224_1[i][4]==0){
				satisfiable[224][1]=satisfiable[224][1] & ((x[224] ^ 1) | (x[ unit224_1[i][0] ] ^ unit224_1[i][1]) |(x[ unit224_1[i][2] ] ^ unit224_1[i][3]));
			}
		}
	}
	//Check all rules of unit[225][0]
	L[225][0] = LargeX[225][1]>0 ? 1 : 0;
	satisfiable[225][0]=1; 
	if(!L[225][0]){
		for(int i=0;i<37;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit225_0[i][0] ][ unit225_0[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit225_0[i][2] ][ unit225_0[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit225_0[i][4] ][ unit225_0[i][5] ] >0) ? 1 : 0;
			L[225][0] = L[225][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit225_0[i][4]==0){
				satisfiable[225][0]=satisfiable[225][0] & ((x[225] ^ 0) | (x[ unit225_0[i][0] ] ^ unit225_0[i][1]) |(x[ unit225_0[i][2] ] ^ unit225_0[i][3]));
			}
		}
	}
	//Check all rules of unit[225][1]
	L[225][1] = LargeX[225][0]>0 ? 1 : 0;
	satisfiable[225][1]=1; 
	if(!L[225][1]){
		for(int i=0;i<74;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit225_1[i][0] ][ unit225_1[i][1] ] >0) ? 1 : 0;
			X_contra23 = ( LargeX[ unit225_1[i][2] ][ unit225_1[i][3] ] >0) ? 1 : 0;
			X_contra45 = ( LargeX[ unit225_1[i][4] ][ unit225_1[i][5] ] >0) ? 1 : 0;
			L[225][1] = L[225][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit225_1[i][4]==0){
				satisfiable[225][1]=satisfiable[225][1] & ((x[225] ^ 1) | (x[ unit225_1[i][0] ] ^ unit225_1[i][1]) |(x[ unit225_1[i][2] ] ^ unit225_1[i][3]));
			}
		}
	}
}