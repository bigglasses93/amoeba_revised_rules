#include "amoeba_local_rules.h"
#include "local_rules_20.h"
void update_L(one_bit_t L[N_VARIABLE+1][2], largeX_t LargeX[N_VARIABLE+1][2], one_bit_t x[N_VARIABLE+1], one_bit_t satisfiable[N_VARIABLE+1][2]){
	//Check all rules of unit[1][0]
	L[1][0] = LargeX[1][1]>0 ? 1 : 0;
	satisfiable[1][0]=1; 
	if(!L[1][0]){
		for(int i=0;i<108;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit1_0[i][0] ][ unit1_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit1_0[i][2] ][ unit1_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit1_0[i][4] ][ unit1_0[i][5] ] >0);
			L[1][0] = L[1][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit1_0[i][4]==0){
				L[1][1] = L[1][1] & (!(X_contra01 & X_contra23));
				satisfiable[1][0]=satisfiable[1][0] & ((x[1] xor 0) | (x[ unit1_0[i][0] ] xor unit1_0[i][1]) |(x[ unit1_0[i][2] ] xor unit1_0[i][3]));
			}
		}
	}
	//Check all rules of unit[1][1]
	L[1][1] = LargeX[1][0]>0 ? 1 : 0;
	satisfiable[1][1]=1; 
	if(!L[1][1]){
		for(int i=0;i<53;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit1_1[i][0] ][ unit1_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit1_1[i][2] ][ unit1_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit1_1[i][4] ][ unit1_1[i][5] ] >0);
			L[1][1] = L[1][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit1_1[i][4]==0){
				L[1][0] = L[1][0] & (!(X_contra01 & X_contra23));
				satisfiable[1][1]=satisfiable[1][1] & ((x[1] xor 1) | (x[ unit1_1[i][0] ] xor unit1_1[i][1]) |(x[ unit1_1[i][2] ] xor unit1_1[i][3]));
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
			X_contra01 = ( LargeX[ unit2_0[i][0] ][ unit2_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit2_0[i][2] ][ unit2_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit2_0[i][4] ][ unit2_0[i][5] ] >0);
			L[2][0] = L[2][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit2_0[i][4]==0){
				L[2][1] = L[2][1] & (!(X_contra01 & X_contra23));
				satisfiable[2][0]=satisfiable[2][0] & ((x[2] xor 0) | (x[ unit2_0[i][0] ] xor unit2_0[i][1]) |(x[ unit2_0[i][2] ] xor unit2_0[i][3]));
			}
		}
	}
	//Check all rules of unit[2][1]
	L[2][1] = LargeX[2][0]>0 ? 1 : 0;
	satisfiable[2][1]=1; 
	if(!L[2][1]){
		for(int i=0;i<98;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit2_1[i][0] ][ unit2_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit2_1[i][2] ][ unit2_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit2_1[i][4] ][ unit2_1[i][5] ] >0);
			L[2][1] = L[2][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit2_1[i][4]==0){
				L[2][0] = L[2][0] & (!(X_contra01 & X_contra23));
				satisfiable[2][1]=satisfiable[2][1] & ((x[2] xor 1) | (x[ unit2_1[i][0] ] xor unit2_1[i][1]) |(x[ unit2_1[i][2] ] xor unit2_1[i][3]));
			}
		}
	}
	//Check all rules of unit[3][0]
	L[3][0] = LargeX[3][1]>0 ? 1 : 0;
	satisfiable[3][0]=1; 
	if(!L[3][0]){
		for(int i=0;i<52;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit3_0[i][0] ][ unit3_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit3_0[i][2] ][ unit3_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit3_0[i][4] ][ unit3_0[i][5] ] >0);
			L[3][0] = L[3][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit3_0[i][4]==0){
				L[3][1] = L[3][1] & (!(X_contra01 & X_contra23));
				satisfiable[3][0]=satisfiable[3][0] & ((x[3] xor 0) | (x[ unit3_0[i][0] ] xor unit3_0[i][1]) |(x[ unit3_0[i][2] ] xor unit3_0[i][3]));
			}
		}
	}
	//Check all rules of unit[3][1]
	L[3][1] = LargeX[3][0]>0 ? 1 : 0;
	satisfiable[3][1]=1; 
	if(!L[3][1]){
		for(int i=0;i<41;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit3_1[i][0] ][ unit3_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit3_1[i][2] ][ unit3_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit3_1[i][4] ][ unit3_1[i][5] ] >0);
			L[3][1] = L[3][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit3_1[i][4]==0){
				L[3][0] = L[3][0] & (!(X_contra01 & X_contra23));
				satisfiable[3][1]=satisfiable[3][1] & ((x[3] xor 1) | (x[ unit3_1[i][0] ] xor unit3_1[i][1]) |(x[ unit3_1[i][2] ] xor unit3_1[i][3]));
			}
		}
	}
	//Check all rules of unit[4][0]
	L[4][0] = LargeX[4][1]>0 ? 1 : 0;
	satisfiable[4][0]=1; 
	if(!L[4][0]){
		for(int i=0;i<105;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit4_0[i][0] ][ unit4_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit4_0[i][2] ][ unit4_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit4_0[i][4] ][ unit4_0[i][5] ] >0);
			L[4][0] = L[4][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit4_0[i][4]==0){
				L[4][1] = L[4][1] & (!(X_contra01 & X_contra23));
				satisfiable[4][0]=satisfiable[4][0] & ((x[4] xor 0) | (x[ unit4_0[i][0] ] xor unit4_0[i][1]) |(x[ unit4_0[i][2] ] xor unit4_0[i][3]));
			}
		}
	}
	//Check all rules of unit[4][1]
	L[4][1] = LargeX[4][0]>0 ? 1 : 0;
	satisfiable[4][1]=1; 
	if(!L[4][1]){
		for(int i=0;i<46;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit4_1[i][0] ][ unit4_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit4_1[i][2] ][ unit4_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit4_1[i][4] ][ unit4_1[i][5] ] >0);
			L[4][1] = L[4][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit4_1[i][4]==0){
				L[4][0] = L[4][0] & (!(X_contra01 & X_contra23));
				satisfiable[4][1]=satisfiable[4][1] & ((x[4] xor 1) | (x[ unit4_1[i][0] ] xor unit4_1[i][1]) |(x[ unit4_1[i][2] ] xor unit4_1[i][3]));
			}
		}
	}
	//Check all rules of unit[5][0]
	L[5][0] = LargeX[5][1]>0 ? 1 : 0;
	satisfiable[5][0]=1; 
	if(!L[5][0]){
		for(int i=0;i<47;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit5_0[i][0] ][ unit5_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit5_0[i][2] ][ unit5_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit5_0[i][4] ][ unit5_0[i][5] ] >0);
			L[5][0] = L[5][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit5_0[i][4]==0){
				L[5][1] = L[5][1] & (!(X_contra01 & X_contra23));
				satisfiable[5][0]=satisfiable[5][0] & ((x[5] xor 0) | (x[ unit5_0[i][0] ] xor unit5_0[i][1]) |(x[ unit5_0[i][2] ] xor unit5_0[i][3]));
			}
		}
	}
	//Check all rules of unit[5][1]
	L[5][1] = LargeX[5][0]>0 ? 1 : 0;
	satisfiable[5][1]=1; 
	if(!L[5][1]){
		for(int i=0;i<163;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit5_1[i][0] ][ unit5_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit5_1[i][2] ][ unit5_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit5_1[i][4] ][ unit5_1[i][5] ] >0);
			L[5][1] = L[5][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit5_1[i][4]==0){
				L[5][0] = L[5][0] & (!(X_contra01 & X_contra23));
				satisfiable[5][1]=satisfiable[5][1] & ((x[5] xor 1) | (x[ unit5_1[i][0] ] xor unit5_1[i][1]) |(x[ unit5_1[i][2] ] xor unit5_1[i][3]));
			}
		}
	}
	//Check all rules of unit[6][0]
	L[6][0] = LargeX[6][1]>0 ? 1 : 0;
	satisfiable[6][0]=1; 
	if(!L[6][0]){
		for(int i=0;i<40;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit6_0[i][0] ][ unit6_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit6_0[i][2] ][ unit6_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit6_0[i][4] ][ unit6_0[i][5] ] >0);
			L[6][0] = L[6][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit6_0[i][4]==0){
				L[6][1] = L[6][1] & (!(X_contra01 & X_contra23));
				satisfiable[6][0]=satisfiable[6][0] & ((x[6] xor 0) | (x[ unit6_0[i][0] ] xor unit6_0[i][1]) |(x[ unit6_0[i][2] ] xor unit6_0[i][3]));
			}
		}
	}
	//Check all rules of unit[6][1]
	L[6][1] = LargeX[6][0]>0 ? 1 : 0;
	satisfiable[6][1]=1; 
	if(!L[6][1]){
		for(int i=0;i<60;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit6_1[i][0] ][ unit6_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit6_1[i][2] ][ unit6_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit6_1[i][4] ][ unit6_1[i][5] ] >0);
			L[6][1] = L[6][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit6_1[i][4]==0){
				L[6][0] = L[6][0] & (!(X_contra01 & X_contra23));
				satisfiable[6][1]=satisfiable[6][1] & ((x[6] xor 1) | (x[ unit6_1[i][0] ] xor unit6_1[i][1]) |(x[ unit6_1[i][2] ] xor unit6_1[i][3]));
			}
		}
	}
	//Check all rules of unit[7][0]
	L[7][0] = LargeX[7][1]>0 ? 1 : 0;
	satisfiable[7][0]=1; 
	if(!L[7][0]){
		for(int i=0;i<67;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit7_0[i][0] ][ unit7_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit7_0[i][2] ][ unit7_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit7_0[i][4] ][ unit7_0[i][5] ] >0);
			L[7][0] = L[7][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit7_0[i][4]==0){
				L[7][1] = L[7][1] & (!(X_contra01 & X_contra23));
				satisfiable[7][0]=satisfiable[7][0] & ((x[7] xor 0) | (x[ unit7_0[i][0] ] xor unit7_0[i][1]) |(x[ unit7_0[i][2] ] xor unit7_0[i][3]));
			}
		}
	}
	//Check all rules of unit[7][1]
	L[7][1] = LargeX[7][0]>0 ? 1 : 0;
	satisfiable[7][1]=1; 
	if(!L[7][1]){
		for(int i=0;i<90;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit7_1[i][0] ][ unit7_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit7_1[i][2] ][ unit7_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit7_1[i][4] ][ unit7_1[i][5] ] >0);
			L[7][1] = L[7][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit7_1[i][4]==0){
				L[7][0] = L[7][0] & (!(X_contra01 & X_contra23));
				satisfiable[7][1]=satisfiable[7][1] & ((x[7] xor 1) | (x[ unit7_1[i][0] ] xor unit7_1[i][1]) |(x[ unit7_1[i][2] ] xor unit7_1[i][3]));
			}
		}
	}
	//Check all rules of unit[8][0]
	L[8][0] = LargeX[8][1]>0 ? 1 : 0;
	satisfiable[8][0]=1; 
	if(!L[8][0]){
		for(int i=0;i<40;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit8_0[i][0] ][ unit8_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit8_0[i][2] ][ unit8_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit8_0[i][4] ][ unit8_0[i][5] ] >0);
			L[8][0] = L[8][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit8_0[i][4]==0){
				L[8][1] = L[8][1] & (!(X_contra01 & X_contra23));
				satisfiable[8][0]=satisfiable[8][0] & ((x[8] xor 0) | (x[ unit8_0[i][0] ] xor unit8_0[i][1]) |(x[ unit8_0[i][2] ] xor unit8_0[i][3]));
			}
		}
	}
	//Check all rules of unit[8][1]
	L[8][1] = LargeX[8][0]>0 ? 1 : 0;
	satisfiable[8][1]=1; 
	if(!L[8][1]){
		for(int i=0;i<78;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit8_1[i][0] ][ unit8_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit8_1[i][2] ][ unit8_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit8_1[i][4] ][ unit8_1[i][5] ] >0);
			L[8][1] = L[8][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit8_1[i][4]==0){
				L[8][0] = L[8][0] & (!(X_contra01 & X_contra23));
				satisfiable[8][1]=satisfiable[8][1] & ((x[8] xor 1) | (x[ unit8_1[i][0] ] xor unit8_1[i][1]) |(x[ unit8_1[i][2] ] xor unit8_1[i][3]));
			}
		}
	}
	//Check all rules of unit[9][0]
	L[9][0] = LargeX[9][1]>0 ? 1 : 0;
	satisfiable[9][0]=1; 
	if(!L[9][0]){
		for(int i=0;i<111;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit9_0[i][0] ][ unit9_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit9_0[i][2] ][ unit9_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit9_0[i][4] ][ unit9_0[i][5] ] >0);
			L[9][0] = L[9][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit9_0[i][4]==0){
				L[9][1] = L[9][1] & (!(X_contra01 & X_contra23));
				satisfiable[9][0]=satisfiable[9][0] & ((x[9] xor 0) | (x[ unit9_0[i][0] ] xor unit9_0[i][1]) |(x[ unit9_0[i][2] ] xor unit9_0[i][3]));
			}
		}
	}
	//Check all rules of unit[9][1]
	L[9][1] = LargeX[9][0]>0 ? 1 : 0;
	satisfiable[9][1]=1; 
	if(!L[9][1]){
		for(int i=0;i<90;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit9_1[i][0] ][ unit9_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit9_1[i][2] ][ unit9_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit9_1[i][4] ][ unit9_1[i][5] ] >0);
			L[9][1] = L[9][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit9_1[i][4]==0){
				L[9][0] = L[9][0] & (!(X_contra01 & X_contra23));
				satisfiable[9][1]=satisfiable[9][1] & ((x[9] xor 1) | (x[ unit9_1[i][0] ] xor unit9_1[i][1]) |(x[ unit9_1[i][2] ] xor unit9_1[i][3]));
			}
		}
	}
	//Check all rules of unit[10][0]
	L[10][0] = LargeX[10][1]>0 ? 1 : 0;
	satisfiable[10][0]=1; 
	if(!L[10][0]){
		for(int i=0;i<113;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit10_0[i][0] ][ unit10_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit10_0[i][2] ][ unit10_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit10_0[i][4] ][ unit10_0[i][5] ] >0);
			L[10][0] = L[10][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit10_0[i][4]==0){
				L[10][1] = L[10][1] & (!(X_contra01 & X_contra23));
				satisfiable[10][0]=satisfiable[10][0] & ((x[10] xor 0) | (x[ unit10_0[i][0] ] xor unit10_0[i][1]) |(x[ unit10_0[i][2] ] xor unit10_0[i][3]));
			}
		}
	}
	//Check all rules of unit[10][1]
	L[10][1] = LargeX[10][0]>0 ? 1 : 0;
	satisfiable[10][1]=1; 
	if(!L[10][1]){
		for(int i=0;i<79;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit10_1[i][0] ][ unit10_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit10_1[i][2] ][ unit10_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit10_1[i][4] ][ unit10_1[i][5] ] >0);
			L[10][1] = L[10][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit10_1[i][4]==0){
				L[10][0] = L[10][0] & (!(X_contra01 & X_contra23));
				satisfiable[10][1]=satisfiable[10][1] & ((x[10] xor 1) | (x[ unit10_1[i][0] ] xor unit10_1[i][1]) |(x[ unit10_1[i][2] ] xor unit10_1[i][3]));
			}
		}
	}
	//Check all rules of unit[11][0]
	L[11][0] = LargeX[11][1]>0 ? 1 : 0;
	satisfiable[11][0]=1; 
	if(!L[11][0]){
		for(int i=0;i<91;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit11_0[i][0] ][ unit11_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit11_0[i][2] ][ unit11_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit11_0[i][4] ][ unit11_0[i][5] ] >0);
			L[11][0] = L[11][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit11_0[i][4]==0){
				L[11][1] = L[11][1] & (!(X_contra01 & X_contra23));
				satisfiable[11][0]=satisfiable[11][0] & ((x[11] xor 0) | (x[ unit11_0[i][0] ] xor unit11_0[i][1]) |(x[ unit11_0[i][2] ] xor unit11_0[i][3]));
			}
		}
	}
	//Check all rules of unit[11][1]
	L[11][1] = LargeX[11][0]>0 ? 1 : 0;
	satisfiable[11][1]=1; 
	if(!L[11][1]){
		for(int i=0;i<81;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit11_1[i][0] ][ unit11_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit11_1[i][2] ][ unit11_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit11_1[i][4] ][ unit11_1[i][5] ] >0);
			L[11][1] = L[11][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit11_1[i][4]==0){
				L[11][0] = L[11][0] & (!(X_contra01 & X_contra23));
				satisfiable[11][1]=satisfiable[11][1] & ((x[11] xor 1) | (x[ unit11_1[i][0] ] xor unit11_1[i][1]) |(x[ unit11_1[i][2] ] xor unit11_1[i][3]));
			}
		}
	}
	//Check all rules of unit[12][0]
	L[12][0] = LargeX[12][1]>0 ? 1 : 0;
	satisfiable[12][0]=1; 
	if(!L[12][0]){
		for(int i=0;i<135;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit12_0[i][0] ][ unit12_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit12_0[i][2] ][ unit12_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit12_0[i][4] ][ unit12_0[i][5] ] >0);
			L[12][0] = L[12][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit12_0[i][4]==0){
				L[12][1] = L[12][1] & (!(X_contra01 & X_contra23));
				satisfiable[12][0]=satisfiable[12][0] & ((x[12] xor 0) | (x[ unit12_0[i][0] ] xor unit12_0[i][1]) |(x[ unit12_0[i][2] ] xor unit12_0[i][3]));
			}
		}
	}
	//Check all rules of unit[12][1]
	L[12][1] = LargeX[12][0]>0 ? 1 : 0;
	satisfiable[12][1]=1; 
	if(!L[12][1]){
		for(int i=0;i<61;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit12_1[i][0] ][ unit12_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit12_1[i][2] ][ unit12_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit12_1[i][4] ][ unit12_1[i][5] ] >0);
			L[12][1] = L[12][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit12_1[i][4]==0){
				L[12][0] = L[12][0] & (!(X_contra01 & X_contra23));
				satisfiable[12][1]=satisfiable[12][1] & ((x[12] xor 1) | (x[ unit12_1[i][0] ] xor unit12_1[i][1]) |(x[ unit12_1[i][2] ] xor unit12_1[i][3]));
			}
		}
	}
	//Check all rules of unit[13][0]
	L[13][0] = LargeX[13][1]>0 ? 1 : 0;
	satisfiable[13][0]=1; 
	if(!L[13][0]){
		for(int i=0;i<70;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit13_0[i][0] ][ unit13_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit13_0[i][2] ][ unit13_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit13_0[i][4] ][ unit13_0[i][5] ] >0);
			L[13][0] = L[13][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit13_0[i][4]==0){
				L[13][1] = L[13][1] & (!(X_contra01 & X_contra23));
				satisfiable[13][0]=satisfiable[13][0] & ((x[13] xor 0) | (x[ unit13_0[i][0] ] xor unit13_0[i][1]) |(x[ unit13_0[i][2] ] xor unit13_0[i][3]));
			}
		}
	}
	//Check all rules of unit[13][1]
	L[13][1] = LargeX[13][0]>0 ? 1 : 0;
	satisfiable[13][1]=1; 
	if(!L[13][1]){
		for(int i=0;i<105;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit13_1[i][0] ][ unit13_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit13_1[i][2] ][ unit13_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit13_1[i][4] ][ unit13_1[i][5] ] >0);
			L[13][1] = L[13][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit13_1[i][4]==0){
				L[13][0] = L[13][0] & (!(X_contra01 & X_contra23));
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
				L[14][1] = L[14][1] & (!(X_contra01 & X_contra23));
				satisfiable[14][0]=satisfiable[14][0] & ((x[14] xor 0) | (x[ unit14_0[i][0] ] xor unit14_0[i][1]) |(x[ unit14_0[i][2] ] xor unit14_0[i][3]));
			}
		}
	}
	//Check all rules of unit[14][1]
	L[14][1] = LargeX[14][0]>0 ? 1 : 0;
	satisfiable[14][1]=1; 
	if(!L[14][1]){
		for(int i=0;i<70;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit14_1[i][0] ][ unit14_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit14_1[i][2] ][ unit14_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit14_1[i][4] ][ unit14_1[i][5] ] >0);
			L[14][1] = L[14][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit14_1[i][4]==0){
				L[14][0] = L[14][0] & (!(X_contra01 & X_contra23));
				satisfiable[14][1]=satisfiable[14][1] & ((x[14] xor 1) | (x[ unit14_1[i][0] ] xor unit14_1[i][1]) |(x[ unit14_1[i][2] ] xor unit14_1[i][3]));
			}
		}
	}
	//Check all rules of unit[15][0]
	L[15][0] = LargeX[15][1]>0 ? 1 : 0;
	satisfiable[15][0]=1; 
	if(!L[15][0]){
		for(int i=0;i<64;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit15_0[i][0] ][ unit15_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit15_0[i][2] ][ unit15_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit15_0[i][4] ][ unit15_0[i][5] ] >0);
			L[15][0] = L[15][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit15_0[i][4]==0){
				L[15][1] = L[15][1] & (!(X_contra01 & X_contra23));
				satisfiable[15][0]=satisfiable[15][0] & ((x[15] xor 0) | (x[ unit15_0[i][0] ] xor unit15_0[i][1]) |(x[ unit15_0[i][2] ] xor unit15_0[i][3]));
			}
		}
	}
	//Check all rules of unit[15][1]
	L[15][1] = LargeX[15][0]>0 ? 1 : 0;
	satisfiable[15][1]=1; 
	if(!L[15][1]){
		for(int i=0;i<152;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit15_1[i][0] ][ unit15_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit15_1[i][2] ][ unit15_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit15_1[i][4] ][ unit15_1[i][5] ] >0);
			L[15][1] = L[15][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit15_1[i][4]==0){
				L[15][0] = L[15][0] & (!(X_contra01 & X_contra23));
				satisfiable[15][1]=satisfiable[15][1] & ((x[15] xor 1) | (x[ unit15_1[i][0] ] xor unit15_1[i][1]) |(x[ unit15_1[i][2] ] xor unit15_1[i][3]));
			}
		}
	}
	//Check all rules of unit[16][0]
	L[16][0] = LargeX[16][1]>0 ? 1 : 0;
	satisfiable[16][0]=1; 
	if(!L[16][0]){
		for(int i=0;i<31;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit16_0[i][0] ][ unit16_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit16_0[i][2] ][ unit16_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit16_0[i][4] ][ unit16_0[i][5] ] >0);
			L[16][0] = L[16][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit16_0[i][4]==0){
				L[16][1] = L[16][1] & (!(X_contra01 & X_contra23));
				satisfiable[16][0]=satisfiable[16][0] & ((x[16] xor 0) | (x[ unit16_0[i][0] ] xor unit16_0[i][1]) |(x[ unit16_0[i][2] ] xor unit16_0[i][3]));
			}
		}
	}
	//Check all rules of unit[16][1]
	L[16][1] = LargeX[16][0]>0 ? 1 : 0;
	satisfiable[16][1]=1; 
	if(!L[16][1]){
		for(int i=0;i<108;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit16_1[i][0] ][ unit16_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit16_1[i][2] ][ unit16_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit16_1[i][4] ][ unit16_1[i][5] ] >0);
			L[16][1] = L[16][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit16_1[i][4]==0){
				L[16][0] = L[16][0] & (!(X_contra01 & X_contra23));
				satisfiable[16][1]=satisfiable[16][1] & ((x[16] xor 1) | (x[ unit16_1[i][0] ] xor unit16_1[i][1]) |(x[ unit16_1[i][2] ] xor unit16_1[i][3]));
			}
		}
	}
	//Check all rules of unit[17][0]
	L[17][0] = LargeX[17][1]>0 ? 1 : 0;
	satisfiable[17][0]=1; 
	if(!L[17][0]){
		for(int i=0;i<133;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit17_0[i][0] ][ unit17_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit17_0[i][2] ][ unit17_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit17_0[i][4] ][ unit17_0[i][5] ] >0);
			L[17][0] = L[17][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit17_0[i][4]==0){
				L[17][1] = L[17][1] & (!(X_contra01 & X_contra23));
				satisfiable[17][0]=satisfiable[17][0] & ((x[17] xor 0) | (x[ unit17_0[i][0] ] xor unit17_0[i][1]) |(x[ unit17_0[i][2] ] xor unit17_0[i][3]));
			}
		}
	}
	//Check all rules of unit[17][1]
	L[17][1] = LargeX[17][0]>0 ? 1 : 0;
	satisfiable[17][1]=1; 
	if(!L[17][1]){
		for(int i=0;i<72;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit17_1[i][0] ][ unit17_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit17_1[i][2] ][ unit17_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit17_1[i][4] ][ unit17_1[i][5] ] >0);
			L[17][1] = L[17][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit17_1[i][4]==0){
				L[17][0] = L[17][0] & (!(X_contra01 & X_contra23));
				satisfiable[17][1]=satisfiable[17][1] & ((x[17] xor 1) | (x[ unit17_1[i][0] ] xor unit17_1[i][1]) |(x[ unit17_1[i][2] ] xor unit17_1[i][3]));
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
			X_contra01 = ( LargeX[ unit18_0[i][0] ][ unit18_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit18_0[i][2] ][ unit18_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit18_0[i][4] ][ unit18_0[i][5] ] >0);
			L[18][0] = L[18][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit18_0[i][4]==0){
				L[18][1] = L[18][1] & (!(X_contra01 & X_contra23));
				satisfiable[18][0]=satisfiable[18][0] & ((x[18] xor 0) | (x[ unit18_0[i][0] ] xor unit18_0[i][1]) |(x[ unit18_0[i][2] ] xor unit18_0[i][3]));
			}
		}
	}
	//Check all rules of unit[18][1]
	L[18][1] = LargeX[18][0]>0 ? 1 : 0;
	satisfiable[18][1]=1; 
	if(!L[18][1]){
		for(int i=0;i<98;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit18_1[i][0] ][ unit18_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit18_1[i][2] ][ unit18_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit18_1[i][4] ][ unit18_1[i][5] ] >0);
			L[18][1] = L[18][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit18_1[i][4]==0){
				L[18][0] = L[18][0] & (!(X_contra01 & X_contra23));
				satisfiable[18][1]=satisfiable[18][1] & ((x[18] xor 1) | (x[ unit18_1[i][0] ] xor unit18_1[i][1]) |(x[ unit18_1[i][2] ] xor unit18_1[i][3]));
			}
		}
	}
	//Check all rules of unit[19][0]
	L[19][0] = LargeX[19][1]>0 ? 1 : 0;
	satisfiable[19][0]=1; 
	if(!L[19][0]){
		for(int i=0;i<71;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit19_0[i][0] ][ unit19_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit19_0[i][2] ][ unit19_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit19_0[i][4] ][ unit19_0[i][5] ] >0);
			L[19][0] = L[19][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit19_0[i][4]==0){
				L[19][1] = L[19][1] & (!(X_contra01 & X_contra23));
				satisfiable[19][0]=satisfiable[19][0] & ((x[19] xor 0) | (x[ unit19_0[i][0] ] xor unit19_0[i][1]) |(x[ unit19_0[i][2] ] xor unit19_0[i][3]));
			}
		}
	}
	//Check all rules of unit[19][1]
	L[19][1] = LargeX[19][0]>0 ? 1 : 0;
	satisfiable[19][1]=1; 
	if(!L[19][1]){
		for(int i=0;i<112;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit19_1[i][0] ][ unit19_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit19_1[i][2] ][ unit19_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit19_1[i][4] ][ unit19_1[i][5] ] >0);
			L[19][1] = L[19][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit19_1[i][4]==0){
				L[19][0] = L[19][0] & (!(X_contra01 & X_contra23));
				satisfiable[19][1]=satisfiable[19][1] & ((x[19] xor 1) | (x[ unit19_1[i][0] ] xor unit19_1[i][1]) |(x[ unit19_1[i][2] ] xor unit19_1[i][3]));
			}
		}
	}
	//Check all rules of unit[20][0]
	L[20][0] = LargeX[20][1]>0 ? 1 : 0;
	satisfiable[20][0]=1; 
	if(!L[20][0]){
		for(int i=0;i<101;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit20_0[i][0] ][ unit20_0[i][1] ] >0);
			X_contra23 = ( LargeX[ unit20_0[i][2] ][ unit20_0[i][3] ] >0);
			X_contra45 = ( LargeX[ unit20_0[i][4] ][ unit20_0[i][5] ] >0);
			L[20][0] = L[20][0] | (X_contra01 & X_contra23 & X_contra45);
			if(unit20_0[i][4]==0){
				L[20][1] = L[20][1] & (!(X_contra01 & X_contra23));
				satisfiable[20][0]=satisfiable[20][0] & ((x[20] xor 0) | (x[ unit20_0[i][0] ] xor unit20_0[i][1]) |(x[ unit20_0[i][2] ] xor unit20_0[i][3]));
			}
		}
	}
	//Check all rules of unit[20][1]
	L[20][1] = LargeX[20][0]>0 ? 1 : 0;
	satisfiable[20][1]=1; 
	if(!L[20][1]){
		for(int i=0;i<43;i++){
//#pragma HLS PIPELINE
			one_bit_t X_contra01;
			one_bit_t X_contra23;
			one_bit_t X_contra45;
			X_contra01 = ( LargeX[ unit20_1[i][0] ][ unit20_1[i][1] ] >0);
			X_contra23 = ( LargeX[ unit20_1[i][2] ][ unit20_1[i][3] ] >0);
			X_contra45 = ( LargeX[ unit20_1[i][4] ][ unit20_1[i][5] ] >0);
			L[20][1] = L[20][1] | (X_contra01 & X_contra23 & X_contra45);
			if(unit20_1[i][4]==0){
				L[20][0] = L[20][0] & (!(X_contra01 & X_contra23));
				satisfiable[20][1]=satisfiable[20][1] & ((x[20] xor 1) | (x[ unit20_1[i][0] ] xor unit20_1[i][1]) |(x[ unit20_1[i][2] ] xor unit20_1[i][3]));
			}
		}
	}
}