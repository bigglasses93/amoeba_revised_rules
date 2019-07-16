#include "amoeba_local_rules.h"
#include "local_rules_50.h"
void update_L(one_bit_t L[N_VARIABLE+1][2], largeX_t LargeX[N_VARIABLE+1][2], one_bit_t x[N_VARIABLE+1], one_bit_t satisfiable[N_VARIABLE+1][2]){
	//Check all rules of unit[1][0]
	L[1][0] = LargeX[1][1]>0 ? 1 : 0;
	satisfiable[1][0]=1; 
	if(!L[1][0]){
		for(int i=0;i<138;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit1_0[i][0] ][ unit1_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit1_0[i][2] ][ unit1_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit1_0[i][4] ][ unit1_0[i][5] ] >0);
			L[1][0] = L[1][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit1_0[i][4]==0){
				satisfiable[1][0]=satisfiable[1][0] & ((x[1] xor 0) | (x[ unit1_0[i][0] ] xor unit1_0[i][1]) |(x[ unit1_0[i][2] ] xor unit1_0[i][3]));
			}
		}
	}
	//Check all rules of unit[1][1]
	L[1][1] = LargeX[1][0]>0 ? 1 : 0;
	satisfiable[1][1]=1; 
	if(!L[1][1]){
		for(int i=0;i<51;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit1_1[i][0] ][ unit1_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit1_1[i][2] ][ unit1_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit1_1[i][4] ][ unit1_1[i][5] ] >0);
			L[1][1] = L[1][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit1_1[i][4]==0){
				satisfiable[1][1]=satisfiable[1][1] & ((x[1] xor 1) | (x[ unit1_1[i][0] ] xor unit1_1[i][1]) |(x[ unit1_1[i][2] ] xor unit1_1[i][3]));
			}
		}
	}
	//Check all rules of unit[2][0]
	L[2][0] = LargeX[2][1]>0 ? 1 : 0;
	satisfiable[2][0]=1; 
	if(!L[2][0]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit2_0[i][0] ][ unit2_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit2_0[i][2] ][ unit2_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit2_0[i][4] ][ unit2_0[i][5] ] >0);
			L[2][0] = L[2][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit2_0[i][4]==0){
				satisfiable[2][0]=satisfiable[2][0] & ((x[2] xor 0) | (x[ unit2_0[i][0] ] xor unit2_0[i][1]) |(x[ unit2_0[i][2] ] xor unit2_0[i][3]));
			}
		}
	}
	//Check all rules of unit[2][1]
	L[2][1] = LargeX[2][0]>0 ? 1 : 0;
	satisfiable[2][1]=1; 
	if(!L[2][1]){
		for(int i=0;i<105;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit2_1[i][0] ][ unit2_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit2_1[i][2] ][ unit2_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit2_1[i][4] ][ unit2_1[i][5] ] >0);
			L[2][1] = L[2][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit2_1[i][4]==0){
				satisfiable[2][1]=satisfiable[2][1] & ((x[2] xor 1) | (x[ unit2_1[i][0] ] xor unit2_1[i][1]) |(x[ unit2_1[i][2] ] xor unit2_1[i][3]));
			}
		}
	}
	//Check all rules of unit[3][0]
	L[3][0] = LargeX[3][1]>0 ? 1 : 0;
	satisfiable[3][0]=1; 
	if(!L[3][0]){
		for(int i=0;i<28;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit3_0[i][0] ][ unit3_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit3_0[i][2] ][ unit3_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit3_0[i][4] ][ unit3_0[i][5] ] >0);
			L[3][0] = L[3][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit3_0[i][4]==0){
				satisfiable[3][0]=satisfiable[3][0] & ((x[3] xor 0) | (x[ unit3_0[i][0] ] xor unit3_0[i][1]) |(x[ unit3_0[i][2] ] xor unit3_0[i][3]));
			}
		}
	}
	//Check all rules of unit[3][1]
	L[3][1] = LargeX[3][0]>0 ? 1 : 0;
	satisfiable[3][1]=1; 
	if(!L[3][1]){
		for(int i=0;i<90;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit3_1[i][0] ][ unit3_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit3_1[i][2] ][ unit3_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit3_1[i][4] ][ unit3_1[i][5] ] >0);
			L[3][1] = L[3][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit3_1[i][4]==0){
				satisfiable[3][1]=satisfiable[3][1] & ((x[3] xor 1) | (x[ unit3_1[i][0] ] xor unit3_1[i][1]) |(x[ unit3_1[i][2] ] xor unit3_1[i][3]));
			}
		}
	}
	//Check all rules of unit[4][0]
	L[4][0] = LargeX[4][1]>0 ? 1 : 0;
	satisfiable[4][0]=1; 
	if(!L[4][0]){
		for(int i=0;i<96;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit4_0[i][0] ][ unit4_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit4_0[i][2] ][ unit4_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit4_0[i][4] ][ unit4_0[i][5] ] >0);
			L[4][0] = L[4][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit4_0[i][4]==0){
				satisfiable[4][0]=satisfiable[4][0] & ((x[4] xor 0) | (x[ unit4_0[i][0] ] xor unit4_0[i][1]) |(x[ unit4_0[i][2] ] xor unit4_0[i][3]));
			}
		}
	}
	//Check all rules of unit[4][1]
	L[4][1] = LargeX[4][0]>0 ? 1 : 0;
	satisfiable[4][1]=1; 
	if(!L[4][1]){
		for(int i=0;i<107;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit4_1[i][0] ][ unit4_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit4_1[i][2] ][ unit4_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit4_1[i][4] ][ unit4_1[i][5] ] >0);
			L[4][1] = L[4][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit4_1[i][4]==0){
				satisfiable[4][1]=satisfiable[4][1] & ((x[4] xor 1) | (x[ unit4_1[i][0] ] xor unit4_1[i][1]) |(x[ unit4_1[i][2] ] xor unit4_1[i][3]));
			}
		}
	}
	//Check all rules of unit[5][0]
	L[5][0] = LargeX[5][1]>0 ? 1 : 0;
	satisfiable[5][0]=1; 
	if(!L[5][0]){
		for(int i=0;i<40;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit5_0[i][0] ][ unit5_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit5_0[i][2] ][ unit5_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit5_0[i][4] ][ unit5_0[i][5] ] >0);
			L[5][0] = L[5][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit5_0[i][4]==0){
				satisfiable[5][0]=satisfiable[5][0] & ((x[5] xor 0) | (x[ unit5_0[i][0] ] xor unit5_0[i][1]) |(x[ unit5_0[i][2] ] xor unit5_0[i][3]));
			}
		}
	}
	//Check all rules of unit[5][1]
	L[5][1] = LargeX[5][0]>0 ? 1 : 0;
	satisfiable[5][1]=1; 
	if(!L[5][1]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit5_1[i][0] ][ unit5_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit5_1[i][2] ][ unit5_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit5_1[i][4] ][ unit5_1[i][5] ] >0);
			L[5][1] = L[5][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit5_1[i][4]==0){
				satisfiable[5][1]=satisfiable[5][1] & ((x[5] xor 1) | (x[ unit5_1[i][0] ] xor unit5_1[i][1]) |(x[ unit5_1[i][2] ] xor unit5_1[i][3]));
			}
		}
	}
	//Check all rules of unit[6][0]
	L[6][0] = LargeX[6][1]>0 ? 1 : 0;
	satisfiable[6][0]=1; 
	if(!L[6][0]){
		for(int i=0;i<94;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit6_0[i][0] ][ unit6_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit6_0[i][2] ][ unit6_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit6_0[i][4] ][ unit6_0[i][5] ] >0);
			L[6][0] = L[6][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit6_0[i][4]==0){
				satisfiable[6][0]=satisfiable[6][0] & ((x[6] xor 0) | (x[ unit6_0[i][0] ] xor unit6_0[i][1]) |(x[ unit6_0[i][2] ] xor unit6_0[i][3]));
			}
		}
	}
	//Check all rules of unit[6][1]
	L[6][1] = LargeX[6][0]>0 ? 1 : 0;
	satisfiable[6][1]=1; 
	if(!L[6][1]){
		for(int i=0;i<65;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit6_1[i][0] ][ unit6_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit6_1[i][2] ][ unit6_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit6_1[i][4] ][ unit6_1[i][5] ] >0);
			L[6][1] = L[6][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit6_1[i][4]==0){
				satisfiable[6][1]=satisfiable[6][1] & ((x[6] xor 1) | (x[ unit6_1[i][0] ] xor unit6_1[i][1]) |(x[ unit6_1[i][2] ] xor unit6_1[i][3]));
			}
		}
	}
	//Check all rules of unit[7][0]
	L[7][0] = LargeX[7][1]>0 ? 1 : 0;
	satisfiable[7][0]=1; 
	if(!L[7][0]){
		for(int i=0;i<19;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit7_0[i][0] ][ unit7_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit7_0[i][2] ][ unit7_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit7_0[i][4] ][ unit7_0[i][5] ] >0);
			L[7][0] = L[7][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit7_0[i][4]==0){
				satisfiable[7][0]=satisfiable[7][0] & ((x[7] xor 0) | (x[ unit7_0[i][0] ] xor unit7_0[i][1]) |(x[ unit7_0[i][2] ] xor unit7_0[i][3]));
			}
		}
	}
	//Check all rules of unit[7][1]
	L[7][1] = LargeX[7][0]>0 ? 1 : 0;
	satisfiable[7][1]=1; 
	if(!L[7][1]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit7_1[i][0] ][ unit7_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit7_1[i][2] ][ unit7_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit7_1[i][4] ][ unit7_1[i][5] ] >0);
			L[7][1] = L[7][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit7_1[i][4]==0){
				satisfiable[7][1]=satisfiable[7][1] & ((x[7] xor 1) | (x[ unit7_1[i][0] ] xor unit7_1[i][1]) |(x[ unit7_1[i][2] ] xor unit7_1[i][3]));
			}
		}
	}
	//Check all rules of unit[8][0]
	L[8][0] = LargeX[8][1]>0 ? 1 : 0;
	satisfiable[8][0]=1; 
	if(!L[8][0]){
		for(int i=0;i<95;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit8_0[i][0] ][ unit8_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit8_0[i][2] ][ unit8_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit8_0[i][4] ][ unit8_0[i][5] ] >0);
			L[8][0] = L[8][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit8_0[i][4]==0){
				satisfiable[8][0]=satisfiable[8][0] & ((x[8] xor 0) | (x[ unit8_0[i][0] ] xor unit8_0[i][1]) |(x[ unit8_0[i][2] ] xor unit8_0[i][3]));
			}
		}
	}
	//Check all rules of unit[8][1]
	L[8][1] = LargeX[8][0]>0 ? 1 : 0;
	satisfiable[8][1]=1; 
	if(!L[8][1]){
		for(int i=0;i<134;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit8_1[i][0] ][ unit8_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit8_1[i][2] ][ unit8_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit8_1[i][4] ][ unit8_1[i][5] ] >0);
			L[8][1] = L[8][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit8_1[i][4]==0){
				satisfiable[8][1]=satisfiable[8][1] & ((x[8] xor 1) | (x[ unit8_1[i][0] ] xor unit8_1[i][1]) |(x[ unit8_1[i][2] ] xor unit8_1[i][3]));
			}
		}
	}
	//Check all rules of unit[9][0]
	L[9][0] = LargeX[9][1]>0 ? 1 : 0;
	satisfiable[9][0]=1; 
	if(!L[9][0]){
		for(int i=0;i<144;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit9_0[i][0] ][ unit9_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit9_0[i][2] ][ unit9_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit9_0[i][4] ][ unit9_0[i][5] ] >0);
			L[9][0] = L[9][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit9_0[i][4]==0){
				satisfiable[9][0]=satisfiable[9][0] & ((x[9] xor 0) | (x[ unit9_0[i][0] ] xor unit9_0[i][1]) |(x[ unit9_0[i][2] ] xor unit9_0[i][3]));
			}
		}
	}
	//Check all rules of unit[9][1]
	L[9][1] = LargeX[9][0]>0 ? 1 : 0;
	satisfiable[9][1]=1; 
	if(!L[9][1]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit9_1[i][0] ][ unit9_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit9_1[i][2] ][ unit9_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit9_1[i][4] ][ unit9_1[i][5] ] >0);
			L[9][1] = L[9][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit9_1[i][4]==0){
				satisfiable[9][1]=satisfiable[9][1] & ((x[9] xor 1) | (x[ unit9_1[i][0] ] xor unit9_1[i][1]) |(x[ unit9_1[i][2] ] xor unit9_1[i][3]));
			}
		}
	}
	//Check all rules of unit[10][0]
	L[10][0] = LargeX[10][1]>0 ? 1 : 0;
	satisfiable[10][0]=1; 
	if(!L[10][0]){
		for(int i=0;i<38;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit10_0[i][0] ][ unit10_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit10_0[i][2] ][ unit10_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit10_0[i][4] ][ unit10_0[i][5] ] >0);
			L[10][0] = L[10][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit10_0[i][4]==0){
				satisfiable[10][0]=satisfiable[10][0] & ((x[10] xor 0) | (x[ unit10_0[i][0] ] xor unit10_0[i][1]) |(x[ unit10_0[i][2] ] xor unit10_0[i][3]));
			}
		}
	}
	//Check all rules of unit[10][1]
	L[10][1] = LargeX[10][0]>0 ? 1 : 0;
	satisfiable[10][1]=1; 
	if(!L[10][1]){
		for(int i=0;i<127;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit10_1[i][0] ][ unit10_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit10_1[i][2] ][ unit10_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit10_1[i][4] ][ unit10_1[i][5] ] >0);
			L[10][1] = L[10][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit10_1[i][4]==0){
				satisfiable[10][1]=satisfiable[10][1] & ((x[10] xor 1) | (x[ unit10_1[i][0] ] xor unit10_1[i][1]) |(x[ unit10_1[i][2] ] xor unit10_1[i][3]));
			}
		}
	}
	//Check all rules of unit[11][0]
	L[11][0] = LargeX[11][1]>0 ? 1 : 0;
	satisfiable[11][0]=1; 
	if(!L[11][0]){
		for(int i=0;i<127;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit11_0[i][0] ][ unit11_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit11_0[i][2] ][ unit11_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit11_0[i][4] ][ unit11_0[i][5] ] >0);
			L[11][0] = L[11][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit11_0[i][4]==0){
				satisfiable[11][0]=satisfiable[11][0] & ((x[11] xor 0) | (x[ unit11_0[i][0] ] xor unit11_0[i][1]) |(x[ unit11_0[i][2] ] xor unit11_0[i][3]));
			}
		}
	}
	//Check all rules of unit[11][1]
	L[11][1] = LargeX[11][0]>0 ? 1 : 0;
	satisfiable[11][1]=1; 
	if(!L[11][1]){
		for(int i=0;i<8;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit11_1[i][0] ][ unit11_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit11_1[i][2] ][ unit11_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit11_1[i][4] ][ unit11_1[i][5] ] >0);
			L[11][1] = L[11][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit11_1[i][4]==0){
				satisfiable[11][1]=satisfiable[11][1] & ((x[11] xor 1) | (x[ unit11_1[i][0] ] xor unit11_1[i][1]) |(x[ unit11_1[i][2] ] xor unit11_1[i][3]));
			}
		}
	}
	//Check all rules of unit[12][0]
	L[12][0] = LargeX[12][1]>0 ? 1 : 0;
	satisfiable[12][0]=1; 
	if(!L[12][0]){
		for(int i=0;i<111;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit12_0[i][0] ][ unit12_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit12_0[i][2] ][ unit12_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit12_0[i][4] ][ unit12_0[i][5] ] >0);
			L[12][0] = L[12][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit12_0[i][4]==0){
				satisfiable[12][0]=satisfiable[12][0] & ((x[12] xor 0) | (x[ unit12_0[i][0] ] xor unit12_0[i][1]) |(x[ unit12_0[i][2] ] xor unit12_0[i][3]));
			}
		}
	}
	//Check all rules of unit[12][1]
	L[12][1] = LargeX[12][0]>0 ? 1 : 0;
	satisfiable[12][1]=1; 
	if(!L[12][1]){
		for(int i=0;i<153;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit12_1[i][0] ][ unit12_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit12_1[i][2] ][ unit12_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit12_1[i][4] ][ unit12_1[i][5] ] >0);
			L[12][1] = L[12][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit12_1[i][4]==0){
				satisfiable[12][1]=satisfiable[12][1] & ((x[12] xor 1) | (x[ unit12_1[i][0] ] xor unit12_1[i][1]) |(x[ unit12_1[i][2] ] xor unit12_1[i][3]));
			}
		}
	}
	//Check all rules of unit[13][0]
	L[13][0] = LargeX[13][1]>0 ? 1 : 0;
	satisfiable[13][0]=1; 
	if(!L[13][0]){
		for(int i=0;i<52;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit13_0[i][0] ][ unit13_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit13_0[i][2] ][ unit13_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit13_0[i][4] ][ unit13_0[i][5] ] >0);
			L[13][0] = L[13][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit13_0[i][4]==0){
				satisfiable[13][0]=satisfiable[13][0] & ((x[13] xor 0) | (x[ unit13_0[i][0] ] xor unit13_0[i][1]) |(x[ unit13_0[i][2] ] xor unit13_0[i][3]));
			}
		}
	}
	//Check all rules of unit[13][1]
	L[13][1] = LargeX[13][0]>0 ? 1 : 0;
	satisfiable[13][1]=1; 
	if(!L[13][1]){
		for(int i=0;i<74;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit13_1[i][0] ][ unit13_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit13_1[i][2] ][ unit13_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit13_1[i][4] ][ unit13_1[i][5] ] >0);
			L[13][1] = L[13][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit13_1[i][4]==0){
				satisfiable[13][1]=satisfiable[13][1] & ((x[13] xor 1) | (x[ unit13_1[i][0] ] xor unit13_1[i][1]) |(x[ unit13_1[i][2] ] xor unit13_1[i][3]));
			}
		}
	}
	//Check all rules of unit[14][0]
	L[14][0] = LargeX[14][1]>0 ? 1 : 0;
	satisfiable[14][0]=1; 
	if(!L[14][0]){
		for(int i=0;i<89;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit14_0[i][0] ][ unit14_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit14_0[i][2] ][ unit14_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit14_0[i][4] ][ unit14_0[i][5] ] >0);
			L[14][0] = L[14][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit14_0[i][4]==0){
				satisfiable[14][0]=satisfiable[14][0] & ((x[14] xor 0) | (x[ unit14_0[i][0] ] xor unit14_0[i][1]) |(x[ unit14_0[i][2] ] xor unit14_0[i][3]));
			}
		}
	}
	//Check all rules of unit[14][1]
	L[14][1] = LargeX[14][0]>0 ? 1 : 0;
	satisfiable[14][1]=1; 
	if(!L[14][1]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit14_1[i][0] ][ unit14_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit14_1[i][2] ][ unit14_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit14_1[i][4] ][ unit14_1[i][5] ] >0);
			L[14][1] = L[14][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit14_1[i][4]==0){
				satisfiable[14][1]=satisfiable[14][1] & ((x[14] xor 1) | (x[ unit14_1[i][0] ] xor unit14_1[i][1]) |(x[ unit14_1[i][2] ] xor unit14_1[i][3]));
			}
		}
	}
	//Check all rules of unit[15][0]
	L[15][0] = LargeX[15][1]>0 ? 1 : 0;
	satisfiable[15][0]=1; 
	if(!L[15][0]){
		for(int i=0;i<76;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit15_0[i][0] ][ unit15_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit15_0[i][2] ][ unit15_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit15_0[i][4] ][ unit15_0[i][5] ] >0);
			L[15][0] = L[15][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit15_0[i][4]==0){
				satisfiable[15][0]=satisfiable[15][0] & ((x[15] xor 0) | (x[ unit15_0[i][0] ] xor unit15_0[i][1]) |(x[ unit15_0[i][2] ] xor unit15_0[i][3]));
			}
		}
	}
	//Check all rules of unit[15][1]
	L[15][1] = LargeX[15][0]>0 ? 1 : 0;
	satisfiable[15][1]=1; 
	if(!L[15][1]){
		for(int i=0;i<87;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit15_1[i][0] ][ unit15_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit15_1[i][2] ][ unit15_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit15_1[i][4] ][ unit15_1[i][5] ] >0);
			L[15][1] = L[15][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit15_1[i][4]==0){
				satisfiable[15][1]=satisfiable[15][1] & ((x[15] xor 1) | (x[ unit15_1[i][0] ] xor unit15_1[i][1]) |(x[ unit15_1[i][2] ] xor unit15_1[i][3]));
			}
		}
	}
	//Check all rules of unit[16][0]
	L[16][0] = LargeX[16][1]>0 ? 1 : 0;
	satisfiable[16][0]=1; 
	if(!L[16][0]){
		for(int i=0;i<60;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit16_0[i][0] ][ unit16_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit16_0[i][2] ][ unit16_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit16_0[i][4] ][ unit16_0[i][5] ] >0);
			L[16][0] = L[16][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit16_0[i][4]==0){
				satisfiable[16][0]=satisfiable[16][0] & ((x[16] xor 0) | (x[ unit16_0[i][0] ] xor unit16_0[i][1]) |(x[ unit16_0[i][2] ] xor unit16_0[i][3]));
			}
		}
	}
	//Check all rules of unit[16][1]
	L[16][1] = LargeX[16][0]>0 ? 1 : 0;
	satisfiable[16][1]=1; 
	if(!L[16][1]){
		for(int i=0;i<46;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit16_1[i][0] ][ unit16_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit16_1[i][2] ][ unit16_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit16_1[i][4] ][ unit16_1[i][5] ] >0);
			L[16][1] = L[16][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit16_1[i][4]==0){
				satisfiable[16][1]=satisfiable[16][1] & ((x[16] xor 1) | (x[ unit16_1[i][0] ] xor unit16_1[i][1]) |(x[ unit16_1[i][2] ] xor unit16_1[i][3]));
			}
		}
	}
	//Check all rules of unit[17][0]
	L[17][0] = LargeX[17][1]>0 ? 1 : 0;
	satisfiable[17][0]=1; 
	if(!L[17][0]){
		for(int i=0;i<64;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit17_0[i][0] ][ unit17_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit17_0[i][2] ][ unit17_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit17_0[i][4] ][ unit17_0[i][5] ] >0);
			L[17][0] = L[17][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit17_0[i][4]==0){
				satisfiable[17][0]=satisfiable[17][0] & ((x[17] xor 0) | (x[ unit17_0[i][0] ] xor unit17_0[i][1]) |(x[ unit17_0[i][2] ] xor unit17_0[i][3]));
			}
		}
	}
	//Check all rules of unit[17][1]
	L[17][1] = LargeX[17][0]>0 ? 1 : 0;
	satisfiable[17][1]=1; 
	if(!L[17][1]){
		for(int i=0;i<97;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit17_1[i][0] ][ unit17_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit17_1[i][2] ][ unit17_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit17_1[i][4] ][ unit17_1[i][5] ] >0);
			L[17][1] = L[17][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit17_1[i][4]==0){
				satisfiable[17][1]=satisfiable[17][1] & ((x[17] xor 1) | (x[ unit17_1[i][0] ] xor unit17_1[i][1]) |(x[ unit17_1[i][2] ] xor unit17_1[i][3]));
			}
		}
	}
	//Check all rules of unit[18][0]
	L[18][0] = LargeX[18][1]>0 ? 1 : 0;
	satisfiable[18][0]=1; 
	if(!L[18][0]){
		for(int i=0;i<136;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit18_0[i][0] ][ unit18_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit18_0[i][2] ][ unit18_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit18_0[i][4] ][ unit18_0[i][5] ] >0);
			L[18][0] = L[18][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit18_0[i][4]==0){
				satisfiable[18][0]=satisfiable[18][0] & ((x[18] xor 0) | (x[ unit18_0[i][0] ] xor unit18_0[i][1]) |(x[ unit18_0[i][2] ] xor unit18_0[i][3]));
			}
		}
	}
	//Check all rules of unit[18][1]
	L[18][1] = LargeX[18][0]>0 ? 1 : 0;
	satisfiable[18][1]=1; 
	if(!L[18][1]){
		for(int i=0;i<112;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit18_1[i][0] ][ unit18_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit18_1[i][2] ][ unit18_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit18_1[i][4] ][ unit18_1[i][5] ] >0);
			L[18][1] = L[18][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit18_1[i][4]==0){
				satisfiable[18][1]=satisfiable[18][1] & ((x[18] xor 1) | (x[ unit18_1[i][0] ] xor unit18_1[i][1]) |(x[ unit18_1[i][2] ] xor unit18_1[i][3]));
			}
		}
	}
	//Check all rules of unit[19][0]
	L[19][0] = LargeX[19][1]>0 ? 1 : 0;
	satisfiable[19][0]=1; 
	if(!L[19][0]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit19_0[i][0] ][ unit19_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit19_0[i][2] ][ unit19_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit19_0[i][4] ][ unit19_0[i][5] ] >0);
			L[19][0] = L[19][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit19_0[i][4]==0){
				satisfiable[19][0]=satisfiable[19][0] & ((x[19] xor 0) | (x[ unit19_0[i][0] ] xor unit19_0[i][1]) |(x[ unit19_0[i][2] ] xor unit19_0[i][3]));
			}
		}
	}
	//Check all rules of unit[19][1]
	L[19][1] = LargeX[19][0]>0 ? 1 : 0;
	satisfiable[19][1]=1; 
	if(!L[19][1]){
		for(int i=0;i<131;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit19_1[i][0] ][ unit19_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit19_1[i][2] ][ unit19_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit19_1[i][4] ][ unit19_1[i][5] ] >0);
			L[19][1] = L[19][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit19_1[i][4]==0){
				satisfiable[19][1]=satisfiable[19][1] & ((x[19] xor 1) | (x[ unit19_1[i][0] ] xor unit19_1[i][1]) |(x[ unit19_1[i][2] ] xor unit19_1[i][3]));
			}
		}
	}
	//Check all rules of unit[20][0]
	L[20][0] = LargeX[20][1]>0 ? 1 : 0;
	satisfiable[20][0]=1; 
	if(!L[20][0]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit20_0[i][0] ][ unit20_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit20_0[i][2] ][ unit20_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit20_0[i][4] ][ unit20_0[i][5] ] >0);
			L[20][0] = L[20][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit20_0[i][4]==0){
				satisfiable[20][0]=satisfiable[20][0] & ((x[20] xor 0) | (x[ unit20_0[i][0] ] xor unit20_0[i][1]) |(x[ unit20_0[i][2] ] xor unit20_0[i][3]));
			}
		}
	}
	//Check all rules of unit[20][1]
	L[20][1] = LargeX[20][0]>0 ? 1 : 0;
	satisfiable[20][1]=1; 
	if(!L[20][1]){
		for(int i=0;i<45;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit20_1[i][0] ][ unit20_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit20_1[i][2] ][ unit20_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit20_1[i][4] ][ unit20_1[i][5] ] >0);
			L[20][1] = L[20][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit20_1[i][4]==0){
				satisfiable[20][1]=satisfiable[20][1] & ((x[20] xor 1) | (x[ unit20_1[i][0] ] xor unit20_1[i][1]) |(x[ unit20_1[i][2] ] xor unit20_1[i][3]));
			}
		}
	}
	//Check all rules of unit[21][0]
	L[21][0] = LargeX[21][1]>0 ? 1 : 0;
	satisfiable[21][0]=1; 
	if(!L[21][0]){
		for(int i=0;i<25;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit21_0[i][0] ][ unit21_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit21_0[i][2] ][ unit21_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit21_0[i][4] ][ unit21_0[i][5] ] >0);
			L[21][0] = L[21][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit21_0[i][4]==0){
				satisfiable[21][0]=satisfiable[21][0] & ((x[21] xor 0) | (x[ unit21_0[i][0] ] xor unit21_0[i][1]) |(x[ unit21_0[i][2] ] xor unit21_0[i][3]));
			}
		}
	}
	//Check all rules of unit[21][1]
	L[21][1] = LargeX[21][0]>0 ? 1 : 0;
	satisfiable[21][1]=1; 
	if(!L[21][1]){
		for(int i=0;i<72;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit21_1[i][0] ][ unit21_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit21_1[i][2] ][ unit21_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit21_1[i][4] ][ unit21_1[i][5] ] >0);
			L[21][1] = L[21][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit21_1[i][4]==0){
				satisfiable[21][1]=satisfiable[21][1] & ((x[21] xor 1) | (x[ unit21_1[i][0] ] xor unit21_1[i][1]) |(x[ unit21_1[i][2] ] xor unit21_1[i][3]));
			}
		}
	}
	//Check all rules of unit[22][0]
	L[22][0] = LargeX[22][1]>0 ? 1 : 0;
	satisfiable[22][0]=1; 
	if(!L[22][0]){
		for(int i=0;i<53;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit22_0[i][0] ][ unit22_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit22_0[i][2] ][ unit22_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit22_0[i][4] ][ unit22_0[i][5] ] >0);
			L[22][0] = L[22][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit22_0[i][4]==0){
				satisfiable[22][0]=satisfiable[22][0] & ((x[22] xor 0) | (x[ unit22_0[i][0] ] xor unit22_0[i][1]) |(x[ unit22_0[i][2] ] xor unit22_0[i][3]));
			}
		}
	}
	//Check all rules of unit[22][1]
	L[22][1] = LargeX[22][0]>0 ? 1 : 0;
	satisfiable[22][1]=1; 
	if(!L[22][1]){
		for(int i=0;i<24;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit22_1[i][0] ][ unit22_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit22_1[i][2] ][ unit22_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit22_1[i][4] ][ unit22_1[i][5] ] >0);
			L[22][1] = L[22][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit22_1[i][4]==0){
				satisfiable[22][1]=satisfiable[22][1] & ((x[22] xor 1) | (x[ unit22_1[i][0] ] xor unit22_1[i][1]) |(x[ unit22_1[i][2] ] xor unit22_1[i][3]));
			}
		}
	}
	//Check all rules of unit[23][0]
	L[23][0] = LargeX[23][1]>0 ? 1 : 0;
	satisfiable[23][0]=1; 
	if(!L[23][0]){
		for(int i=0;i<55;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit23_0[i][0] ][ unit23_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit23_0[i][2] ][ unit23_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit23_0[i][4] ][ unit23_0[i][5] ] >0);
			L[23][0] = L[23][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit23_0[i][4]==0){
				satisfiable[23][0]=satisfiable[23][0] & ((x[23] xor 0) | (x[ unit23_0[i][0] ] xor unit23_0[i][1]) |(x[ unit23_0[i][2] ] xor unit23_0[i][3]));
			}
		}
	}
	//Check all rules of unit[23][1]
	L[23][1] = LargeX[23][0]>0 ? 1 : 0;
	satisfiable[23][1]=1; 
	if(!L[23][1]){
		for(int i=0;i<65;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit23_1[i][0] ][ unit23_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit23_1[i][2] ][ unit23_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit23_1[i][4] ][ unit23_1[i][5] ] >0);
			L[23][1] = L[23][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit23_1[i][4]==0){
				satisfiable[23][1]=satisfiable[23][1] & ((x[23] xor 1) | (x[ unit23_1[i][0] ] xor unit23_1[i][1]) |(x[ unit23_1[i][2] ] xor unit23_1[i][3]));
			}
		}
	}
	//Check all rules of unit[24][0]
	L[24][0] = LargeX[24][1]>0 ? 1 : 0;
	satisfiable[24][0]=1; 
	if(!L[24][0]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit24_0[i][0] ][ unit24_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit24_0[i][2] ][ unit24_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit24_0[i][4] ][ unit24_0[i][5] ] >0);
			L[24][0] = L[24][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit24_0[i][4]==0){
				satisfiable[24][0]=satisfiable[24][0] & ((x[24] xor 0) | (x[ unit24_0[i][0] ] xor unit24_0[i][1]) |(x[ unit24_0[i][2] ] xor unit24_0[i][3]));
			}
		}
	}
	//Check all rules of unit[24][1]
	L[24][1] = LargeX[24][0]>0 ? 1 : 0;
	satisfiable[24][1]=1; 
	if(!L[24][1]){
		for(int i=0;i<124;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit24_1[i][0] ][ unit24_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit24_1[i][2] ][ unit24_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit24_1[i][4] ][ unit24_1[i][5] ] >0);
			L[24][1] = L[24][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit24_1[i][4]==0){
				satisfiable[24][1]=satisfiable[24][1] & ((x[24] xor 1) | (x[ unit24_1[i][0] ] xor unit24_1[i][1]) |(x[ unit24_1[i][2] ] xor unit24_1[i][3]));
			}
		}
	}
	//Check all rules of unit[25][0]
	L[25][0] = LargeX[25][1]>0 ? 1 : 0;
	satisfiable[25][0]=1; 
	if(!L[25][0]){
		for(int i=0;i<92;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit25_0[i][0] ][ unit25_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit25_0[i][2] ][ unit25_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit25_0[i][4] ][ unit25_0[i][5] ] >0);
			L[25][0] = L[25][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit25_0[i][4]==0){
				satisfiable[25][0]=satisfiable[25][0] & ((x[25] xor 0) | (x[ unit25_0[i][0] ] xor unit25_0[i][1]) |(x[ unit25_0[i][2] ] xor unit25_0[i][3]));
			}
		}
	}
	//Check all rules of unit[25][1]
	L[25][1] = LargeX[25][0]>0 ? 1 : 0;
	satisfiable[25][1]=1; 
	if(!L[25][1]){
		for(int i=0;i<63;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit25_1[i][0] ][ unit25_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit25_1[i][2] ][ unit25_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit25_1[i][4] ][ unit25_1[i][5] ] >0);
			L[25][1] = L[25][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit25_1[i][4]==0){
				satisfiable[25][1]=satisfiable[25][1] & ((x[25] xor 1) | (x[ unit25_1[i][0] ] xor unit25_1[i][1]) |(x[ unit25_1[i][2] ] xor unit25_1[i][3]));
			}
		}
	}
	//Check all rules of unit[26][0]
	L[26][0] = LargeX[26][1]>0 ? 1 : 0;
	satisfiable[26][0]=1; 
	if(!L[26][0]){
		for(int i=0;i<77;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit26_0[i][0] ][ unit26_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit26_0[i][2] ][ unit26_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit26_0[i][4] ][ unit26_0[i][5] ] >0);
			L[26][0] = L[26][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit26_0[i][4]==0){
				satisfiable[26][0]=satisfiable[26][0] & ((x[26] xor 0) | (x[ unit26_0[i][0] ] xor unit26_0[i][1]) |(x[ unit26_0[i][2] ] xor unit26_0[i][3]));
			}
		}
	}
	//Check all rules of unit[26][1]
	L[26][1] = LargeX[26][0]>0 ? 1 : 0;
	satisfiable[26][1]=1; 
	if(!L[26][1]){
		for(int i=0;i<15;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit26_1[i][0] ][ unit26_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit26_1[i][2] ][ unit26_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit26_1[i][4] ][ unit26_1[i][5] ] >0);
			L[26][1] = L[26][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit26_1[i][4]==0){
				satisfiable[26][1]=satisfiable[26][1] & ((x[26] xor 1) | (x[ unit26_1[i][0] ] xor unit26_1[i][1]) |(x[ unit26_1[i][2] ] xor unit26_1[i][3]));
			}
		}
	}
	//Check all rules of unit[27][0]
	L[27][0] = LargeX[27][1]>0 ? 1 : 0;
	satisfiable[27][0]=1; 
	if(!L[27][0]){
		for(int i=0;i<206;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit27_0[i][0] ][ unit27_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit27_0[i][2] ][ unit27_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit27_0[i][4] ][ unit27_0[i][5] ] >0);
			L[27][0] = L[27][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit27_0[i][4]==0){
				satisfiable[27][0]=satisfiable[27][0] & ((x[27] xor 0) | (x[ unit27_0[i][0] ] xor unit27_0[i][1]) |(x[ unit27_0[i][2] ] xor unit27_0[i][3]));
			}
		}
	}
	//Check all rules of unit[27][1]
	L[27][1] = LargeX[27][0]>0 ? 1 : 0;
	satisfiable[27][1]=1; 
	if(!L[27][1]){
		for(int i=0;i<116;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit27_1[i][0] ][ unit27_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit27_1[i][2] ][ unit27_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit27_1[i][4] ][ unit27_1[i][5] ] >0);
			L[27][1] = L[27][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit27_1[i][4]==0){
				satisfiable[27][1]=satisfiable[27][1] & ((x[27] xor 1) | (x[ unit27_1[i][0] ] xor unit27_1[i][1]) |(x[ unit27_1[i][2] ] xor unit27_1[i][3]));
			}
		}
	}
	//Check all rules of unit[28][0]
	L[28][0] = LargeX[28][1]>0 ? 1 : 0;
	satisfiable[28][0]=1; 
	if(!L[28][0]){
		for(int i=0;i<124;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit28_0[i][0] ][ unit28_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit28_0[i][2] ][ unit28_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit28_0[i][4] ][ unit28_0[i][5] ] >0);
			L[28][0] = L[28][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit28_0[i][4]==0){
				satisfiable[28][0]=satisfiable[28][0] & ((x[28] xor 0) | (x[ unit28_0[i][0] ] xor unit28_0[i][1]) |(x[ unit28_0[i][2] ] xor unit28_0[i][3]));
			}
		}
	}
	//Check all rules of unit[28][1]
	L[28][1] = LargeX[28][0]>0 ? 1 : 0;
	satisfiable[28][1]=1; 
	if(!L[28][1]){
		for(int i=0;i<62;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit28_1[i][0] ][ unit28_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit28_1[i][2] ][ unit28_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit28_1[i][4] ][ unit28_1[i][5] ] >0);
			L[28][1] = L[28][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit28_1[i][4]==0){
				satisfiable[28][1]=satisfiable[28][1] & ((x[28] xor 1) | (x[ unit28_1[i][0] ] xor unit28_1[i][1]) |(x[ unit28_1[i][2] ] xor unit28_1[i][3]));
			}
		}
	}
	//Check all rules of unit[29][0]
	L[29][0] = LargeX[29][1]>0 ? 1 : 0;
	satisfiable[29][0]=1; 
	if(!L[29][0]){
		for(int i=0;i<133;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit29_0[i][0] ][ unit29_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit29_0[i][2] ][ unit29_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit29_0[i][4] ][ unit29_0[i][5] ] >0);
			L[29][0] = L[29][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit29_0[i][4]==0){
				satisfiable[29][0]=satisfiable[29][0] & ((x[29] xor 0) | (x[ unit29_0[i][0] ] xor unit29_0[i][1]) |(x[ unit29_0[i][2] ] xor unit29_0[i][3]));
			}
		}
	}
	//Check all rules of unit[29][1]
	L[29][1] = LargeX[29][0]>0 ? 1 : 0;
	satisfiable[29][1]=1; 
	if(!L[29][1]){
		for(int i=0;i<66;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit29_1[i][0] ][ unit29_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit29_1[i][2] ][ unit29_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit29_1[i][4] ][ unit29_1[i][5] ] >0);
			L[29][1] = L[29][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit29_1[i][4]==0){
				satisfiable[29][1]=satisfiable[29][1] & ((x[29] xor 1) | (x[ unit29_1[i][0] ] xor unit29_1[i][1]) |(x[ unit29_1[i][2] ] xor unit29_1[i][3]));
			}
		}
	}
	//Check all rules of unit[30][0]
	L[30][0] = LargeX[30][1]>0 ? 1 : 0;
	satisfiable[30][0]=1; 
	if(!L[30][0]){
		for(int i=0;i<154;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit30_0[i][0] ][ unit30_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit30_0[i][2] ][ unit30_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit30_0[i][4] ][ unit30_0[i][5] ] >0);
			L[30][0] = L[30][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit30_0[i][4]==0){
				satisfiable[30][0]=satisfiable[30][0] & ((x[30] xor 0) | (x[ unit30_0[i][0] ] xor unit30_0[i][1]) |(x[ unit30_0[i][2] ] xor unit30_0[i][3]));
			}
		}
	}
	//Check all rules of unit[30][1]
	L[30][1] = LargeX[30][0]>0 ? 1 : 0;
	satisfiable[30][1]=1; 
	if(!L[30][1]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit30_1[i][0] ][ unit30_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit30_1[i][2] ][ unit30_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit30_1[i][4] ][ unit30_1[i][5] ] >0);
			L[30][1] = L[30][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit30_1[i][4]==0){
				satisfiable[30][1]=satisfiable[30][1] & ((x[30] xor 1) | (x[ unit30_1[i][0] ] xor unit30_1[i][1]) |(x[ unit30_1[i][2] ] xor unit30_1[i][3]));
			}
		}
	}
	//Check all rules of unit[31][0]
	L[31][0] = LargeX[31][1]>0 ? 1 : 0;
	satisfiable[31][0]=1; 
	if(!L[31][0]){
		for(int i=0;i<56;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit31_0[i][0] ][ unit31_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit31_0[i][2] ][ unit31_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit31_0[i][4] ][ unit31_0[i][5] ] >0);
			L[31][0] = L[31][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit31_0[i][4]==0){
				satisfiable[31][0]=satisfiable[31][0] & ((x[31] xor 0) | (x[ unit31_0[i][0] ] xor unit31_0[i][1]) |(x[ unit31_0[i][2] ] xor unit31_0[i][3]));
			}
		}
	}
	//Check all rules of unit[31][1]
	L[31][1] = LargeX[31][0]>0 ? 1 : 0;
	satisfiable[31][1]=1; 
	if(!L[31][1]){
		for(int i=0;i<129;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit31_1[i][0] ][ unit31_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit31_1[i][2] ][ unit31_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit31_1[i][4] ][ unit31_1[i][5] ] >0);
			L[31][1] = L[31][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit31_1[i][4]==0){
				satisfiable[31][1]=satisfiable[31][1] & ((x[31] xor 1) | (x[ unit31_1[i][0] ] xor unit31_1[i][1]) |(x[ unit31_1[i][2] ] xor unit31_1[i][3]));
			}
		}
	}
	//Check all rules of unit[32][0]
	L[32][0] = LargeX[32][1]>0 ? 1 : 0;
	satisfiable[32][0]=1; 
	if(!L[32][0]){
		for(int i=0;i<86;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit32_0[i][0] ][ unit32_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit32_0[i][2] ][ unit32_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit32_0[i][4] ][ unit32_0[i][5] ] >0);
			L[32][0] = L[32][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit32_0[i][4]==0){
				satisfiable[32][0]=satisfiable[32][0] & ((x[32] xor 0) | (x[ unit32_0[i][0] ] xor unit32_0[i][1]) |(x[ unit32_0[i][2] ] xor unit32_0[i][3]));
			}
		}
	}
	//Check all rules of unit[32][1]
	L[32][1] = LargeX[32][0]>0 ? 1 : 0;
	satisfiable[32][1]=1; 
	if(!L[32][1]){
		for(int i=0;i<82;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit32_1[i][0] ][ unit32_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit32_1[i][2] ][ unit32_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit32_1[i][4] ][ unit32_1[i][5] ] >0);
			L[32][1] = L[32][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit32_1[i][4]==0){
				satisfiable[32][1]=satisfiable[32][1] & ((x[32] xor 1) | (x[ unit32_1[i][0] ] xor unit32_1[i][1]) |(x[ unit32_1[i][2] ] xor unit32_1[i][3]));
			}
		}
	}
	//Check all rules of unit[33][0]
	L[33][0] = LargeX[33][1]>0 ? 1 : 0;
	satisfiable[33][0]=1; 
	if(!L[33][0]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit33_0[i][0] ][ unit33_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit33_0[i][2] ][ unit33_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit33_0[i][4] ][ unit33_0[i][5] ] >0);
			L[33][0] = L[33][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit33_0[i][4]==0){
				satisfiable[33][0]=satisfiable[33][0] & ((x[33] xor 0) | (x[ unit33_0[i][0] ] xor unit33_0[i][1]) |(x[ unit33_0[i][2] ] xor unit33_0[i][3]));
			}
		}
	}
	//Check all rules of unit[33][1]
	L[33][1] = LargeX[33][0]>0 ? 1 : 0;
	satisfiable[33][1]=1; 
	if(!L[33][1]){
		for(int i=0;i<55;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit33_1[i][0] ][ unit33_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit33_1[i][2] ][ unit33_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit33_1[i][4] ][ unit33_1[i][5] ] >0);
			L[33][1] = L[33][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit33_1[i][4]==0){
				satisfiable[33][1]=satisfiable[33][1] & ((x[33] xor 1) | (x[ unit33_1[i][0] ] xor unit33_1[i][1]) |(x[ unit33_1[i][2] ] xor unit33_1[i][3]));
			}
		}
	}
	//Check all rules of unit[34][0]
	L[34][0] = LargeX[34][1]>0 ? 1 : 0;
	satisfiable[34][0]=1; 
	if(!L[34][0]){
		for(int i=0;i<58;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit34_0[i][0] ][ unit34_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit34_0[i][2] ][ unit34_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit34_0[i][4] ][ unit34_0[i][5] ] >0);
			L[34][0] = L[34][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit34_0[i][4]==0){
				satisfiable[34][0]=satisfiable[34][0] & ((x[34] xor 0) | (x[ unit34_0[i][0] ] xor unit34_0[i][1]) |(x[ unit34_0[i][2] ] xor unit34_0[i][3]));
			}
		}
	}
	//Check all rules of unit[34][1]
	L[34][1] = LargeX[34][0]>0 ? 1 : 0;
	satisfiable[34][1]=1; 
	if(!L[34][1]){
		for(int i=0;i<72;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit34_1[i][0] ][ unit34_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit34_1[i][2] ][ unit34_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit34_1[i][4] ][ unit34_1[i][5] ] >0);
			L[34][1] = L[34][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit34_1[i][4]==0){
				satisfiable[34][1]=satisfiable[34][1] & ((x[34] xor 1) | (x[ unit34_1[i][0] ] xor unit34_1[i][1]) |(x[ unit34_1[i][2] ] xor unit34_1[i][3]));
			}
		}
	}
	//Check all rules of unit[35][0]
	L[35][0] = LargeX[35][1]>0 ? 1 : 0;
	satisfiable[35][0]=1; 
	if(!L[35][0]){
		for(int i=0;i<62;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit35_0[i][0] ][ unit35_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit35_0[i][2] ][ unit35_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit35_0[i][4] ][ unit35_0[i][5] ] >0);
			L[35][0] = L[35][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit35_0[i][4]==0){
				satisfiable[35][0]=satisfiable[35][0] & ((x[35] xor 0) | (x[ unit35_0[i][0] ] xor unit35_0[i][1]) |(x[ unit35_0[i][2] ] xor unit35_0[i][3]));
			}
		}
	}
	//Check all rules of unit[35][1]
	L[35][1] = LargeX[35][0]>0 ? 1 : 0;
	satisfiable[35][1]=1; 
	if(!L[35][1]){
		for(int i=0;i<167;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit35_1[i][0] ][ unit35_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit35_1[i][2] ][ unit35_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit35_1[i][4] ][ unit35_1[i][5] ] >0);
			L[35][1] = L[35][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit35_1[i][4]==0){
				satisfiable[35][1]=satisfiable[35][1] & ((x[35] xor 1) | (x[ unit35_1[i][0] ] xor unit35_1[i][1]) |(x[ unit35_1[i][2] ] xor unit35_1[i][3]));
			}
		}
	}
	//Check all rules of unit[36][0]
	L[36][0] = LargeX[36][1]>0 ? 1 : 0;
	satisfiable[36][0]=1; 
	if(!L[36][0]){
		for(int i=0;i<133;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit36_0[i][0] ][ unit36_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit36_0[i][2] ][ unit36_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit36_0[i][4] ][ unit36_0[i][5] ] >0);
			L[36][0] = L[36][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit36_0[i][4]==0){
				satisfiable[36][0]=satisfiable[36][0] & ((x[36] xor 0) | (x[ unit36_0[i][0] ] xor unit36_0[i][1]) |(x[ unit36_0[i][2] ] xor unit36_0[i][3]));
			}
		}
	}
	//Check all rules of unit[36][1]
	L[36][1] = LargeX[36][0]>0 ? 1 : 0;
	satisfiable[36][1]=1; 
	if(!L[36][1]){
		for(int i=0;i<122;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit36_1[i][0] ][ unit36_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit36_1[i][2] ][ unit36_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit36_1[i][4] ][ unit36_1[i][5] ] >0);
			L[36][1] = L[36][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit36_1[i][4]==0){
				satisfiable[36][1]=satisfiable[36][1] & ((x[36] xor 1) | (x[ unit36_1[i][0] ] xor unit36_1[i][1]) |(x[ unit36_1[i][2] ] xor unit36_1[i][3]));
			}
		}
	}
	//Check all rules of unit[37][0]
	L[37][0] = LargeX[37][1]>0 ? 1 : 0;
	satisfiable[37][0]=1; 
	if(!L[37][0]){
		for(int i=0;i<66;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit37_0[i][0] ][ unit37_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit37_0[i][2] ][ unit37_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit37_0[i][4] ][ unit37_0[i][5] ] >0);
			L[37][0] = L[37][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit37_0[i][4]==0){
				satisfiable[37][0]=satisfiable[37][0] & ((x[37] xor 0) | (x[ unit37_0[i][0] ] xor unit37_0[i][1]) |(x[ unit37_0[i][2] ] xor unit37_0[i][3]));
			}
		}
	}
	//Check all rules of unit[37][1]
	L[37][1] = LargeX[37][0]>0 ? 1 : 0;
	satisfiable[37][1]=1; 
	if(!L[37][1]){
		for(int i=0;i<133;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit37_1[i][0] ][ unit37_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit37_1[i][2] ][ unit37_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit37_1[i][4] ][ unit37_1[i][5] ] >0);
			L[37][1] = L[37][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit37_1[i][4]==0){
				satisfiable[37][1]=satisfiable[37][1] & ((x[37] xor 1) | (x[ unit37_1[i][0] ] xor unit37_1[i][1]) |(x[ unit37_1[i][2] ] xor unit37_1[i][3]));
			}
		}
	}
	//Check all rules of unit[38][0]
	L[38][0] = LargeX[38][1]>0 ? 1 : 0;
	satisfiable[38][0]=1; 
	if(!L[38][0]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit38_0[i][0] ][ unit38_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit38_0[i][2] ][ unit38_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit38_0[i][4] ][ unit38_0[i][5] ] >0);
			L[38][0] = L[38][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit38_0[i][4]==0){
				satisfiable[38][0]=satisfiable[38][0] & ((x[38] xor 0) | (x[ unit38_0[i][0] ] xor unit38_0[i][1]) |(x[ unit38_0[i][2] ] xor unit38_0[i][3]));
			}
		}
	}
	//Check all rules of unit[38][1]
	L[38][1] = LargeX[38][0]>0 ? 1 : 0;
	satisfiable[38][1]=1; 
	if(!L[38][1]){
		for(int i=0;i<134;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit38_1[i][0] ][ unit38_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit38_1[i][2] ][ unit38_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit38_1[i][4] ][ unit38_1[i][5] ] >0);
			L[38][1] = L[38][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit38_1[i][4]==0){
				satisfiable[38][1]=satisfiable[38][1] & ((x[38] xor 1) | (x[ unit38_1[i][0] ] xor unit38_1[i][1]) |(x[ unit38_1[i][2] ] xor unit38_1[i][3]));
			}
		}
	}
	//Check all rules of unit[39][0]
	L[39][0] = LargeX[39][1]>0 ? 1 : 0;
	satisfiable[39][0]=1; 
	if(!L[39][0]){
		for(int i=0;i<121;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit39_0[i][0] ][ unit39_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit39_0[i][2] ][ unit39_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit39_0[i][4] ][ unit39_0[i][5] ] >0);
			L[39][0] = L[39][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit39_0[i][4]==0){
				satisfiable[39][0]=satisfiable[39][0] & ((x[39] xor 0) | (x[ unit39_0[i][0] ] xor unit39_0[i][1]) |(x[ unit39_0[i][2] ] xor unit39_0[i][3]));
			}
		}
	}
	//Check all rules of unit[39][1]
	L[39][1] = LargeX[39][0]>0 ? 1 : 0;
	satisfiable[39][1]=1; 
	if(!L[39][1]){
		for(int i=0;i<100;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit39_1[i][0] ][ unit39_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit39_1[i][2] ][ unit39_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit39_1[i][4] ][ unit39_1[i][5] ] >0);
			L[39][1] = L[39][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit39_1[i][4]==0){
				satisfiable[39][1]=satisfiable[39][1] & ((x[39] xor 1) | (x[ unit39_1[i][0] ] xor unit39_1[i][1]) |(x[ unit39_1[i][2] ] xor unit39_1[i][3]));
			}
		}
	}
	//Check all rules of unit[40][0]
	L[40][0] = LargeX[40][1]>0 ? 1 : 0;
	satisfiable[40][0]=1; 
	if(!L[40][0]){
		for(int i=0;i<97;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit40_0[i][0] ][ unit40_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit40_0[i][2] ][ unit40_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit40_0[i][4] ][ unit40_0[i][5] ] >0);
			L[40][0] = L[40][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit40_0[i][4]==0){
				satisfiable[40][0]=satisfiable[40][0] & ((x[40] xor 0) | (x[ unit40_0[i][0] ] xor unit40_0[i][1]) |(x[ unit40_0[i][2] ] xor unit40_0[i][3]));
			}
		}
	}
	//Check all rules of unit[40][1]
	L[40][1] = LargeX[40][0]>0 ? 1 : 0;
	satisfiable[40][1]=1; 
	if(!L[40][1]){
		for(int i=0;i<94;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit40_1[i][0] ][ unit40_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit40_1[i][2] ][ unit40_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit40_1[i][4] ][ unit40_1[i][5] ] >0);
			L[40][1] = L[40][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit40_1[i][4]==0){
				satisfiable[40][1]=satisfiable[40][1] & ((x[40] xor 1) | (x[ unit40_1[i][0] ] xor unit40_1[i][1]) |(x[ unit40_1[i][2] ] xor unit40_1[i][3]));
			}
		}
	}
	//Check all rules of unit[41][0]
	L[41][0] = LargeX[41][1]>0 ? 1 : 0;
	satisfiable[41][0]=1; 
	if(!L[41][0]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit41_0[i][0] ][ unit41_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit41_0[i][2] ][ unit41_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit41_0[i][4] ][ unit41_0[i][5] ] >0);
			L[41][0] = L[41][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit41_0[i][4]==0){
				satisfiable[41][0]=satisfiable[41][0] & ((x[41] xor 0) | (x[ unit41_0[i][0] ] xor unit41_0[i][1]) |(x[ unit41_0[i][2] ] xor unit41_0[i][3]));
			}
		}
	}
	//Check all rules of unit[41][1]
	L[41][1] = LargeX[41][0]>0 ? 1 : 0;
	satisfiable[41][1]=1; 
	if(!L[41][1]){
		for(int i=0;i<84;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit41_1[i][0] ][ unit41_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit41_1[i][2] ][ unit41_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit41_1[i][4] ][ unit41_1[i][5] ] >0);
			L[41][1] = L[41][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit41_1[i][4]==0){
				satisfiable[41][1]=satisfiable[41][1] & ((x[41] xor 1) | (x[ unit41_1[i][0] ] xor unit41_1[i][1]) |(x[ unit41_1[i][2] ] xor unit41_1[i][3]));
			}
		}
	}
	//Check all rules of unit[42][0]
	L[42][0] = LargeX[42][1]>0 ? 1 : 0;
	satisfiable[42][0]=1; 
	if(!L[42][0]){
		for(int i=0;i<81;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit42_0[i][0] ][ unit42_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit42_0[i][2] ][ unit42_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit42_0[i][4] ][ unit42_0[i][5] ] >0);
			L[42][0] = L[42][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit42_0[i][4]==0){
				satisfiable[42][0]=satisfiable[42][0] & ((x[42] xor 0) | (x[ unit42_0[i][0] ] xor unit42_0[i][1]) |(x[ unit42_0[i][2] ] xor unit42_0[i][3]));
			}
		}
	}
	//Check all rules of unit[42][1]
	L[42][1] = LargeX[42][0]>0 ? 1 : 0;
	satisfiable[42][1]=1; 
	if(!L[42][1]){
		for(int i=0;i<64;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit42_1[i][0] ][ unit42_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit42_1[i][2] ][ unit42_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit42_1[i][4] ][ unit42_1[i][5] ] >0);
			L[42][1] = L[42][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit42_1[i][4]==0){
				satisfiable[42][1]=satisfiable[42][1] & ((x[42] xor 1) | (x[ unit42_1[i][0] ] xor unit42_1[i][1]) |(x[ unit42_1[i][2] ] xor unit42_1[i][3]));
			}
		}
	}
	//Check all rules of unit[43][0]
	L[43][0] = LargeX[43][1]>0 ? 1 : 0;
	satisfiable[43][0]=1; 
	if(!L[43][0]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit43_0[i][0] ][ unit43_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit43_0[i][2] ][ unit43_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit43_0[i][4] ][ unit43_0[i][5] ] >0);
			L[43][0] = L[43][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit43_0[i][4]==0){
				satisfiable[43][0]=satisfiable[43][0] & ((x[43] xor 0) | (x[ unit43_0[i][0] ] xor unit43_0[i][1]) |(x[ unit43_0[i][2] ] xor unit43_0[i][3]));
			}
		}
	}
	//Check all rules of unit[43][1]
	L[43][1] = LargeX[43][0]>0 ? 1 : 0;
	satisfiable[43][1]=1; 
	if(!L[43][1]){
		for(int i=0;i<110;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit43_1[i][0] ][ unit43_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit43_1[i][2] ][ unit43_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit43_1[i][4] ][ unit43_1[i][5] ] >0);
			L[43][1] = L[43][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit43_1[i][4]==0){
				satisfiable[43][1]=satisfiable[43][1] & ((x[43] xor 1) | (x[ unit43_1[i][0] ] xor unit43_1[i][1]) |(x[ unit43_1[i][2] ] xor unit43_1[i][3]));
			}
		}
	}
	//Check all rules of unit[44][0]
	L[44][0] = LargeX[44][1]>0 ? 1 : 0;
	satisfiable[44][0]=1; 
	if(!L[44][0]){
		for(int i=0;i<85;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit44_0[i][0] ][ unit44_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit44_0[i][2] ][ unit44_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit44_0[i][4] ][ unit44_0[i][5] ] >0);
			L[44][0] = L[44][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit44_0[i][4]==0){
				satisfiable[44][0]=satisfiable[44][0] & ((x[44] xor 0) | (x[ unit44_0[i][0] ] xor unit44_0[i][1]) |(x[ unit44_0[i][2] ] xor unit44_0[i][3]));
			}
		}
	}
	//Check all rules of unit[44][1]
	L[44][1] = LargeX[44][0]>0 ? 1 : 0;
	satisfiable[44][1]=1; 
	if(!L[44][1]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit44_1[i][0] ][ unit44_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit44_1[i][2] ][ unit44_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit44_1[i][4] ][ unit44_1[i][5] ] >0);
			L[44][1] = L[44][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit44_1[i][4]==0){
				satisfiable[44][1]=satisfiable[44][1] & ((x[44] xor 1) | (x[ unit44_1[i][0] ] xor unit44_1[i][1]) |(x[ unit44_1[i][2] ] xor unit44_1[i][3]));
			}
		}
	}
	//Check all rules of unit[45][0]
	L[45][0] = LargeX[45][1]>0 ? 1 : 0;
	satisfiable[45][0]=1; 
	if(!L[45][0]){
		for(int i=0;i<62;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit45_0[i][0] ][ unit45_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit45_0[i][2] ][ unit45_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit45_0[i][4] ][ unit45_0[i][5] ] >0);
			L[45][0] = L[45][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit45_0[i][4]==0){
				satisfiable[45][0]=satisfiable[45][0] & ((x[45] xor 0) | (x[ unit45_0[i][0] ] xor unit45_0[i][1]) |(x[ unit45_0[i][2] ] xor unit45_0[i][3]));
			}
		}
	}
	//Check all rules of unit[45][1]
	L[45][1] = LargeX[45][0]>0 ? 1 : 0;
	satisfiable[45][1]=1; 
	if(!L[45][1]){
		for(int i=0;i<94;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit45_1[i][0] ][ unit45_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit45_1[i][2] ][ unit45_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit45_1[i][4] ][ unit45_1[i][5] ] >0);
			L[45][1] = L[45][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit45_1[i][4]==0){
				satisfiable[45][1]=satisfiable[45][1] & ((x[45] xor 1) | (x[ unit45_1[i][0] ] xor unit45_1[i][1]) |(x[ unit45_1[i][2] ] xor unit45_1[i][3]));
			}
		}
	}
	//Check all rules of unit[46][0]
	L[46][0] = LargeX[46][1]>0 ? 1 : 0;
	satisfiable[46][0]=1; 
	if(!L[46][0]){
		for(int i=0;i<110;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit46_0[i][0] ][ unit46_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit46_0[i][2] ][ unit46_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit46_0[i][4] ][ unit46_0[i][5] ] >0);
			L[46][0] = L[46][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit46_0[i][4]==0){
				satisfiable[46][0]=satisfiable[46][0] & ((x[46] xor 0) | (x[ unit46_0[i][0] ] xor unit46_0[i][1]) |(x[ unit46_0[i][2] ] xor unit46_0[i][3]));
			}
		}
	}
	//Check all rules of unit[46][1]
	L[46][1] = LargeX[46][0]>0 ? 1 : 0;
	satisfiable[46][1]=1; 
	if(!L[46][1]){
		for(int i=0;i<47;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit46_1[i][0] ][ unit46_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit46_1[i][2] ][ unit46_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit46_1[i][4] ][ unit46_1[i][5] ] >0);
			L[46][1] = L[46][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit46_1[i][4]==0){
				satisfiable[46][1]=satisfiable[46][1] & ((x[46] xor 1) | (x[ unit46_1[i][0] ] xor unit46_1[i][1]) |(x[ unit46_1[i][2] ] xor unit46_1[i][3]));
			}
		}
	}
	//Check all rules of unit[47][0]
	L[47][0] = LargeX[47][1]>0 ? 1 : 0;
	satisfiable[47][0]=1; 
	if(!L[47][0]){
		for(int i=0;i<93;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit47_0[i][0] ][ unit47_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit47_0[i][2] ][ unit47_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit47_0[i][4] ][ unit47_0[i][5] ] >0);
			L[47][0] = L[47][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit47_0[i][4]==0){
				satisfiable[47][0]=satisfiable[47][0] & ((x[47] xor 0) | (x[ unit47_0[i][0] ] xor unit47_0[i][1]) |(x[ unit47_0[i][2] ] xor unit47_0[i][3]));
			}
		}
	}
	//Check all rules of unit[47][1]
	L[47][1] = LargeX[47][0]>0 ? 1 : 0;
	satisfiable[47][1]=1; 
	if(!L[47][1]){
		for(int i=0;i<55;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit47_1[i][0] ][ unit47_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit47_1[i][2] ][ unit47_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit47_1[i][4] ][ unit47_1[i][5] ] >0);
			L[47][1] = L[47][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit47_1[i][4]==0){
				satisfiable[47][1]=satisfiable[47][1] & ((x[47] xor 1) | (x[ unit47_1[i][0] ] xor unit47_1[i][1]) |(x[ unit47_1[i][2] ] xor unit47_1[i][3]));
			}
		}
	}
	//Check all rules of unit[48][0]
	L[48][0] = LargeX[48][1]>0 ? 1 : 0;
	satisfiable[48][0]=1; 
	if(!L[48][0]){
		for(int i=0;i<117;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit48_0[i][0] ][ unit48_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit48_0[i][2] ][ unit48_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit48_0[i][4] ][ unit48_0[i][5] ] >0);
			L[48][0] = L[48][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit48_0[i][4]==0){
				satisfiable[48][0]=satisfiable[48][0] & ((x[48] xor 0) | (x[ unit48_0[i][0] ] xor unit48_0[i][1]) |(x[ unit48_0[i][2] ] xor unit48_0[i][3]));
			}
		}
	}
	//Check all rules of unit[48][1]
	L[48][1] = LargeX[48][0]>0 ? 1 : 0;
	satisfiable[48][1]=1; 
	if(!L[48][1]){
		for(int i=0;i<86;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit48_1[i][0] ][ unit48_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit48_1[i][2] ][ unit48_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit48_1[i][4] ][ unit48_1[i][5] ] >0);
			L[48][1] = L[48][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit48_1[i][4]==0){
				satisfiable[48][1]=satisfiable[48][1] & ((x[48] xor 1) | (x[ unit48_1[i][0] ] xor unit48_1[i][1]) |(x[ unit48_1[i][2] ] xor unit48_1[i][3]));
			}
		}
	}
	//Check all rules of unit[49][0]
	L[49][0] = LargeX[49][1]>0 ? 1 : 0;
	satisfiable[49][0]=1; 
	if(!L[49][0]){
		for(int i=0;i<105;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit49_0[i][0] ][ unit49_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit49_0[i][2] ][ unit49_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit49_0[i][4] ][ unit49_0[i][5] ] >0);
			L[49][0] = L[49][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit49_0[i][4]==0){
				satisfiable[49][0]=satisfiable[49][0] & ((x[49] xor 0) | (x[ unit49_0[i][0] ] xor unit49_0[i][1]) |(x[ unit49_0[i][2] ] xor unit49_0[i][3]));
			}
		}
	}
	//Check all rules of unit[49][1]
	L[49][1] = LargeX[49][0]>0 ? 1 : 0;
	satisfiable[49][1]=1; 
	if(!L[49][1]){
		for(int i=0;i<88;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit49_1[i][0] ][ unit49_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit49_1[i][2] ][ unit49_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit49_1[i][4] ][ unit49_1[i][5] ] >0);
			L[49][1] = L[49][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit49_1[i][4]==0){
				satisfiable[49][1]=satisfiable[49][1] & ((x[49] xor 1) | (x[ unit49_1[i][0] ] xor unit49_1[i][1]) |(x[ unit49_1[i][2] ] xor unit49_1[i][3]));
			}
		}
	}
	//Check all rules of unit[50][0]
	L[50][0] = LargeX[50][1]>0 ? 1 : 0;
	satisfiable[50][0]=1; 
	if(!L[50][0]){
		for(int i=0;i<67;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit50_0[i][0] ][ unit50_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit50_0[i][2] ][ unit50_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit50_0[i][4] ][ unit50_0[i][5] ] >0);
			L[50][0] = L[50][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit50_0[i][4]==0){
				satisfiable[50][0]=satisfiable[50][0] & ((x[50] xor 0) | (x[ unit50_0[i][0] ] xor unit50_0[i][1]) |(x[ unit50_0[i][2] ] xor unit50_0[i][3]));
			}
		}
	}
	//Check all rules of unit[50][1]
	L[50][1] = LargeX[50][0]>0 ? 1 : 0;
	satisfiable[50][1]=1; 
	if(!L[50][1]){
		for(int i=0;i<115;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit50_1[i][0] ][ unit50_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit50_1[i][2] ][ unit50_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit50_1[i][4] ][ unit50_1[i][5] ] >0);
			L[50][1] = L[50][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit50_1[i][4]==0){
				satisfiable[50][1]=satisfiable[50][1] & ((x[50] xor 1) | (x[ unit50_1[i][0] ] xor unit50_1[i][1]) |(x[ unit50_1[i][2] ] xor unit50_1[i][3]));
			}
		}
	}
}