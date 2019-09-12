#include "amoeba_local_rules.h"
#include "local_rules_529.h"
void update_L(two_bit_t L[N_VARIABLE+1][2], largeX_t LargeX[N_VARIABLE+1][2], one_bit_t x[N_VARIABLE+1], one_bit_t satisfiable[N_VARIABLE+1][2]){
	//Check all rules of unit[11][0]
	L[11][0] = LargeX[11][1]>0 ? 1 : 0;
	satisfiable[11][0]=1; 
	for(int i=0;i<27;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit11_0[i][0] ][ unit11_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit11_0[i][2] ][ unit11_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit11_0[i][4] ][ unit11_0[i][5] ] >0);
		X_contra = ( LargeX[11][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit11_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[11][1]=0; L[11][0]=1;}
			satisfiable[11][0]=satisfiable[11][0] & ((x[11] ^ 0) | (x[ unit11_0[i][0] ] ^ unit11_0[i][1]) |(x[ unit11_0[i][2] ] ^ unit11_0[i][3]));
			}
		if(X_contra>0) L[11][0]=2;
		}
	//Check all rules of unit[11][1]
	L[11][1] = LargeX[11][0]>0 ? 1 : 0;
	satisfiable[11][1]=1; 
	for(int i=0;i<43;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit11_1[i][0] ][ unit11_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit11_1[i][2] ][ unit11_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit11_1[i][4] ][ unit11_1[i][5] ] >0);
		X_contra = ( LargeX[11][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit11_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[11][0]=0; L[11][1]=1;}
			satisfiable[11][1]=satisfiable[11][1] & ((x[11] ^ 1) | (x[ unit11_1[i][0] ] ^ unit11_1[i][1]) |(x[ unit11_1[i][2] ] ^ unit11_1[i][3]));
			}
		if(X_contra>0) L[11][1]=2;
		}
	//Check all rules of unit[14][0]
	L[14][0] = LargeX[14][1]>0 ? 1 : 0;
	satisfiable[14][0]=1; 
	for(int i=0;i<26;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit14_0[i][0] ][ unit14_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit14_0[i][2] ][ unit14_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit14_0[i][4] ][ unit14_0[i][5] ] >0);
		X_contra = ( LargeX[14][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit14_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[14][1]=0; L[14][0]=1;}
			satisfiable[14][0]=satisfiable[14][0] & ((x[14] ^ 0) | (x[ unit14_0[i][0] ] ^ unit14_0[i][1]) |(x[ unit14_0[i][2] ] ^ unit14_0[i][3]));
			}
		if(X_contra>0) L[14][0]=2;
		}
	//Check all rules of unit[14][1]
	L[14][1] = LargeX[14][0]>0 ? 1 : 0;
	satisfiable[14][1]=1; 
	for(int i=0;i<48;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit14_1[i][0] ][ unit14_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit14_1[i][2] ][ unit14_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit14_1[i][4] ][ unit14_1[i][5] ] >0);
		X_contra = ( LargeX[14][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit14_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[14][0]=0; L[14][1]=1;}
			satisfiable[14][1]=satisfiable[14][1] & ((x[14] ^ 1) | (x[ unit14_1[i][0] ] ^ unit14_1[i][1]) |(x[ unit14_1[i][2] ] ^ unit14_1[i][3]));
			}
		if(X_contra>0) L[14][1]=2;
		}
	//Check all rules of unit[20][0]
	L[20][0] = LargeX[20][1]>0 ? 1 : 0;
	satisfiable[20][0]=1; 
	for(int i=0;i<34;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit20_0[i][0] ][ unit20_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit20_0[i][2] ][ unit20_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit20_0[i][4] ][ unit20_0[i][5] ] >0);
		X_contra = ( LargeX[20][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit20_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[20][1]=0; L[20][0]=1;}
			satisfiable[20][0]=satisfiable[20][0] & ((x[20] ^ 0) | (x[ unit20_0[i][0] ] ^ unit20_0[i][1]) |(x[ unit20_0[i][2] ] ^ unit20_0[i][3]));
			}
		if(X_contra>0) L[20][0]=2;
		}
	//Check all rules of unit[20][1]
	L[20][1] = LargeX[20][0]>0 ? 1 : 0;
	satisfiable[20][1]=1; 
	for(int i=0;i<20;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit20_1[i][0] ][ unit20_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit20_1[i][2] ][ unit20_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit20_1[i][4] ][ unit20_1[i][5] ] >0);
		X_contra = ( LargeX[20][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit20_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[20][0]=0; L[20][1]=1;}
			satisfiable[20][1]=satisfiable[20][1] & ((x[20] ^ 1) | (x[ unit20_1[i][0] ] ^ unit20_1[i][1]) |(x[ unit20_1[i][2] ] ^ unit20_1[i][3]));
			}
		if(X_contra>0) L[20][1]=2;
		}
	//Check all rules of unit[21][0]
	L[21][0] = LargeX[21][1]>0 ? 1 : 0;
	satisfiable[21][0]=1; 
	for(int i=0;i<44;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit21_0[i][0] ][ unit21_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit21_0[i][2] ][ unit21_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit21_0[i][4] ][ unit21_0[i][5] ] >0);
		X_contra = ( LargeX[21][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit21_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[21][1]=0; L[21][0]=1;}
			satisfiable[21][0]=satisfiable[21][0] & ((x[21] ^ 0) | (x[ unit21_0[i][0] ] ^ unit21_0[i][1]) |(x[ unit21_0[i][2] ] ^ unit21_0[i][3]));
			}
		if(X_contra>0) L[21][0]=2;
		}
	//Check all rules of unit[21][1]
	L[21][1] = LargeX[21][0]>0 ? 1 : 0;
	satisfiable[21][1]=1; 
	for(int i=0;i<121;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit21_1[i][0] ][ unit21_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit21_1[i][2] ][ unit21_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit21_1[i][4] ][ unit21_1[i][5] ] >0);
		X_contra = ( LargeX[21][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit21_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[21][0]=0; L[21][1]=1;}
			satisfiable[21][1]=satisfiable[21][1] & ((x[21] ^ 1) | (x[ unit21_1[i][0] ] ^ unit21_1[i][1]) |(x[ unit21_1[i][2] ] ^ unit21_1[i][3]));
			}
		if(X_contra>0) L[21][1]=2;
		}
	//Check all rules of unit[22][0]
	L[22][0] = LargeX[22][1]>0 ? 1 : 0;
	satisfiable[22][0]=1; 
	for(int i=0;i<45;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit22_0[i][0] ][ unit22_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit22_0[i][2] ][ unit22_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit22_0[i][4] ][ unit22_0[i][5] ] >0);
		X_contra = ( LargeX[22][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit22_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[22][1]=0; L[22][0]=1;}
			satisfiable[22][0]=satisfiable[22][0] & ((x[22] ^ 0) | (x[ unit22_0[i][0] ] ^ unit22_0[i][1]) |(x[ unit22_0[i][2] ] ^ unit22_0[i][3]));
			}
		if(X_contra>0) L[22][0]=2;
		}
	//Check all rules of unit[22][1]
	L[22][1] = LargeX[22][0]>0 ? 1 : 0;
	satisfiable[22][1]=1; 
	for(int i=0;i<118;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit22_1[i][0] ][ unit22_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit22_1[i][2] ][ unit22_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit22_1[i][4] ][ unit22_1[i][5] ] >0);
		X_contra = ( LargeX[22][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit22_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[22][0]=0; L[22][1]=1;}
			satisfiable[22][1]=satisfiable[22][1] & ((x[22] ^ 1) | (x[ unit22_1[i][0] ] ^ unit22_1[i][1]) |(x[ unit22_1[i][2] ] ^ unit22_1[i][3]));
			}
		if(X_contra>0) L[22][1]=2;
		}
	//Check all rules of unit[23][0]
	L[23][0] = LargeX[23][1]>0 ? 1 : 0;
	satisfiable[23][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit23_0[i][0] ][ unit23_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit23_0[i][2] ][ unit23_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit23_0[i][4] ][ unit23_0[i][5] ] >0);
		X_contra = ( LargeX[23][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit23_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[23][1]=0; L[23][0]=1;}
			satisfiable[23][0]=satisfiable[23][0] & ((x[23] ^ 0) | (x[ unit23_0[i][0] ] ^ unit23_0[i][1]) |(x[ unit23_0[i][2] ] ^ unit23_0[i][3]));
			}
		if(X_contra>0) L[23][0]=2;
		}
	//Check all rules of unit[23][1]
	L[23][1] = LargeX[23][0]>0 ? 1 : 0;
	satisfiable[23][1]=1; 
	for(int i=0;i<108;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit23_1[i][0] ][ unit23_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit23_1[i][2] ][ unit23_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit23_1[i][4] ][ unit23_1[i][5] ] >0);
		X_contra = ( LargeX[23][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit23_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[23][0]=0; L[23][1]=1;}
			satisfiable[23][1]=satisfiable[23][1] & ((x[23] ^ 1) | (x[ unit23_1[i][0] ] ^ unit23_1[i][1]) |(x[ unit23_1[i][2] ] ^ unit23_1[i][3]));
			}
		if(X_contra>0) L[23][1]=2;
		}
	//Check all rules of unit[24][0]
	L[24][0] = LargeX[24][1]>0 ? 1 : 0;
	satisfiable[24][0]=1; 
	for(int i=0;i<41;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit24_0[i][0] ][ unit24_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit24_0[i][2] ][ unit24_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit24_0[i][4] ][ unit24_0[i][5] ] >0);
		X_contra = ( LargeX[24][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit24_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[24][1]=0; L[24][0]=1;}
			satisfiable[24][0]=satisfiable[24][0] & ((x[24] ^ 0) | (x[ unit24_0[i][0] ] ^ unit24_0[i][1]) |(x[ unit24_0[i][2] ] ^ unit24_0[i][3]));
			}
		if(X_contra>0) L[24][0]=2;
		}
	//Check all rules of unit[24][1]
	L[24][1] = LargeX[24][0]>0 ? 1 : 0;
	satisfiable[24][1]=1; 
	for(int i=0;i<93;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit24_1[i][0] ][ unit24_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit24_1[i][2] ][ unit24_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit24_1[i][4] ][ unit24_1[i][5] ] >0);
		X_contra = ( LargeX[24][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit24_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[24][0]=0; L[24][1]=1;}
			satisfiable[24][1]=satisfiable[24][1] & ((x[24] ^ 1) | (x[ unit24_1[i][0] ] ^ unit24_1[i][1]) |(x[ unit24_1[i][2] ] ^ unit24_1[i][3]));
			}
		if(X_contra>0) L[24][1]=2;
		}
	//Check all rules of unit[25][0]
	L[25][0] = LargeX[25][1]>0 ? 1 : 0;
	satisfiable[25][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit25_0[i][0] ][ unit25_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit25_0[i][2] ][ unit25_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit25_0[i][4] ][ unit25_0[i][5] ] >0);
		X_contra = ( LargeX[25][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit25_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[25][1]=0; L[25][0]=1;}
			satisfiable[25][0]=satisfiable[25][0] & ((x[25] ^ 0) | (x[ unit25_0[i][0] ] ^ unit25_0[i][1]) |(x[ unit25_0[i][2] ] ^ unit25_0[i][3]));
			}
		if(X_contra>0) L[25][0]=2;
		}
	//Check all rules of unit[25][1]
	L[25][1] = LargeX[25][0]>0 ? 1 : 0;
	satisfiable[25][1]=1; 
	for(int i=0;i<91;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit25_1[i][0] ][ unit25_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit25_1[i][2] ][ unit25_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit25_1[i][4] ][ unit25_1[i][5] ] >0);
		X_contra = ( LargeX[25][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit25_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[25][0]=0; L[25][1]=1;}
			satisfiable[25][1]=satisfiable[25][1] & ((x[25] ^ 1) | (x[ unit25_1[i][0] ] ^ unit25_1[i][1]) |(x[ unit25_1[i][2] ] ^ unit25_1[i][3]));
			}
		if(X_contra>0) L[25][1]=2;
		}
	//Check all rules of unit[26][0]
	L[26][0] = LargeX[26][1]>0 ? 1 : 0;
	satisfiable[26][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit26_0[i][0] ][ unit26_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit26_0[i][2] ][ unit26_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit26_0[i][4] ][ unit26_0[i][5] ] >0);
		X_contra = ( LargeX[26][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit26_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[26][1]=0; L[26][0]=1;}
			satisfiable[26][0]=satisfiable[26][0] & ((x[26] ^ 0) | (x[ unit26_0[i][0] ] ^ unit26_0[i][1]) |(x[ unit26_0[i][2] ] ^ unit26_0[i][3]));
			}
		if(X_contra>0) L[26][0]=2;
		}
	//Check all rules of unit[26][1]
	L[26][1] = LargeX[26][0]>0 ? 1 : 0;
	satisfiable[26][1]=1; 
	for(int i=0;i<89;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit26_1[i][0] ][ unit26_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit26_1[i][2] ][ unit26_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit26_1[i][4] ][ unit26_1[i][5] ] >0);
		X_contra = ( LargeX[26][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit26_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[26][0]=0; L[26][1]=1;}
			satisfiable[26][1]=satisfiable[26][1] & ((x[26] ^ 1) | (x[ unit26_1[i][0] ] ^ unit26_1[i][1]) |(x[ unit26_1[i][2] ] ^ unit26_1[i][3]));
			}
		if(X_contra>0) L[26][1]=2;
		}
	//Check all rules of unit[27][0]
	L[27][0] = LargeX[27][1]>0 ? 1 : 0;
	satisfiable[27][0]=1; 
	for(int i=0;i<28;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit27_0[i][0] ][ unit27_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit27_0[i][2] ][ unit27_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit27_0[i][4] ][ unit27_0[i][5] ] >0);
		X_contra = ( LargeX[27][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit27_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[27][1]=0; L[27][0]=1;}
			satisfiable[27][0]=satisfiable[27][0] & ((x[27] ^ 0) | (x[ unit27_0[i][0] ] ^ unit27_0[i][1]) |(x[ unit27_0[i][2] ] ^ unit27_0[i][3]));
			}
		if(X_contra>0) L[27][0]=2;
		}
	//Check all rules of unit[27][1]
	L[27][1] = LargeX[27][0]>0 ? 1 : 0;
	satisfiable[27][1]=1; 
	for(int i=0;i<78;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit27_1[i][0] ][ unit27_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit27_1[i][2] ][ unit27_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit27_1[i][4] ][ unit27_1[i][5] ] >0);
		X_contra = ( LargeX[27][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit27_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[27][0]=0; L[27][1]=1;}
			satisfiable[27][1]=satisfiable[27][1] & ((x[27] ^ 1) | (x[ unit27_1[i][0] ] ^ unit27_1[i][1]) |(x[ unit27_1[i][2] ] ^ unit27_1[i][3]));
			}
		if(X_contra>0) L[27][1]=2;
		}
	//Check all rules of unit[28][0]
	L[28][0] = LargeX[28][1]>0 ? 1 : 0;
	satisfiable[28][0]=1; 
	for(int i=0;i<31;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit28_0[i][0] ][ unit28_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit28_0[i][2] ][ unit28_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit28_0[i][4] ][ unit28_0[i][5] ] >0);
		X_contra = ( LargeX[28][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit28_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[28][1]=0; L[28][0]=1;}
			satisfiable[28][0]=satisfiable[28][0] & ((x[28] ^ 0) | (x[ unit28_0[i][0] ] ^ unit28_0[i][1]) |(x[ unit28_0[i][2] ] ^ unit28_0[i][3]));
			}
		if(X_contra>0) L[28][0]=2;
		}
	//Check all rules of unit[28][1]
	L[28][1] = LargeX[28][0]>0 ? 1 : 0;
	satisfiable[28][1]=1; 
	for(int i=0;i<70;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit28_1[i][0] ][ unit28_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit28_1[i][2] ][ unit28_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit28_1[i][4] ][ unit28_1[i][5] ] >0);
		X_contra = ( LargeX[28][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit28_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[28][0]=0; L[28][1]=1;}
			satisfiable[28][1]=satisfiable[28][1] & ((x[28] ^ 1) | (x[ unit28_1[i][0] ] ^ unit28_1[i][1]) |(x[ unit28_1[i][2] ] ^ unit28_1[i][3]));
			}
		if(X_contra>0) L[28][1]=2;
		}
	//Check all rules of unit[29][0]
	L[29][0] = LargeX[29][1]>0 ? 1 : 0;
	satisfiable[29][0]=1; 
	for(int i=0;i<22;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit29_0[i][0] ][ unit29_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit29_0[i][2] ][ unit29_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit29_0[i][4] ][ unit29_0[i][5] ] >0);
		X_contra = ( LargeX[29][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit29_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[29][1]=0; L[29][0]=1;}
			satisfiable[29][0]=satisfiable[29][0] & ((x[29] ^ 0) | (x[ unit29_0[i][0] ] ^ unit29_0[i][1]) |(x[ unit29_0[i][2] ] ^ unit29_0[i][3]));
			}
		if(X_contra>0) L[29][0]=2;
		}
	//Check all rules of unit[29][1]
	L[29][1] = LargeX[29][0]>0 ? 1 : 0;
	satisfiable[29][1]=1; 
	for(int i=0;i<63;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit29_1[i][0] ][ unit29_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit29_1[i][2] ][ unit29_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit29_1[i][4] ][ unit29_1[i][5] ] >0);
		X_contra = ( LargeX[29][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit29_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[29][0]=0; L[29][1]=1;}
			satisfiable[29][1]=satisfiable[29][1] & ((x[29] ^ 1) | (x[ unit29_1[i][0] ] ^ unit29_1[i][1]) |(x[ unit29_1[i][2] ] ^ unit29_1[i][3]));
			}
		if(X_contra>0) L[29][1]=2;
		}
	//Check all rules of unit[30][0]
	L[30][0] = LargeX[30][1]>0 ? 1 : 0;
	satisfiable[30][0]=1; 
	for(int i=0;i<28;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit30_0[i][0] ][ unit30_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit30_0[i][2] ][ unit30_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit30_0[i][4] ][ unit30_0[i][5] ] >0);
		X_contra = ( LargeX[30][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit30_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[30][1]=0; L[30][0]=1;}
			satisfiable[30][0]=satisfiable[30][0] & ((x[30] ^ 0) | (x[ unit30_0[i][0] ] ^ unit30_0[i][1]) |(x[ unit30_0[i][2] ] ^ unit30_0[i][3]));
			}
		if(X_contra>0) L[30][0]=2;
		}
	//Check all rules of unit[30][1]
	L[30][1] = LargeX[30][0]>0 ? 1 : 0;
	satisfiable[30][1]=1; 
	for(int i=0;i<45;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit30_1[i][0] ][ unit30_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit30_1[i][2] ][ unit30_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit30_1[i][4] ][ unit30_1[i][5] ] >0);
		X_contra = ( LargeX[30][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit30_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[30][0]=0; L[30][1]=1;}
			satisfiable[30][1]=satisfiable[30][1] & ((x[30] ^ 1) | (x[ unit30_1[i][0] ] ^ unit30_1[i][1]) |(x[ unit30_1[i][2] ] ^ unit30_1[i][3]));
			}
		if(X_contra>0) L[30][1]=2;
		}
	//Check all rules of unit[31][0]
	L[31][0] = LargeX[31][1]>0 ? 1 : 0;
	satisfiable[31][0]=1; 
	for(int i=0;i<20;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit31_0[i][0] ][ unit31_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit31_0[i][2] ][ unit31_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit31_0[i][4] ][ unit31_0[i][5] ] >0);
		X_contra = ( LargeX[31][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit31_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[31][1]=0; L[31][0]=1;}
			satisfiable[31][0]=satisfiable[31][0] & ((x[31] ^ 0) | (x[ unit31_0[i][0] ] ^ unit31_0[i][1]) |(x[ unit31_0[i][2] ] ^ unit31_0[i][3]));
			}
		if(X_contra>0) L[31][0]=2;
		}
	//Check all rules of unit[31][1]
	L[31][1] = LargeX[31][0]>0 ? 1 : 0;
	satisfiable[31][1]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit31_1[i][0] ][ unit31_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit31_1[i][2] ][ unit31_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit31_1[i][4] ][ unit31_1[i][5] ] >0);
		X_contra = ( LargeX[31][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit31_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[31][0]=0; L[31][1]=1;}
			satisfiable[31][1]=satisfiable[31][1] & ((x[31] ^ 1) | (x[ unit31_1[i][0] ] ^ unit31_1[i][1]) |(x[ unit31_1[i][2] ] ^ unit31_1[i][3]));
			}
		if(X_contra>0) L[31][1]=2;
		}
	//Check all rules of unit[32][0]
	L[32][0] = LargeX[32][1]>0 ? 1 : 0;
	satisfiable[32][0]=1; 
	for(int i=0;i<18;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit32_0[i][0] ][ unit32_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit32_0[i][2] ][ unit32_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit32_0[i][4] ][ unit32_0[i][5] ] >0);
		X_contra = ( LargeX[32][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit32_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[32][1]=0; L[32][0]=1;}
			satisfiable[32][0]=satisfiable[32][0] & ((x[32] ^ 0) | (x[ unit32_0[i][0] ] ^ unit32_0[i][1]) |(x[ unit32_0[i][2] ] ^ unit32_0[i][3]));
			}
		if(X_contra>0) L[32][0]=2;
		}
	//Check all rules of unit[32][1]
	L[32][1] = LargeX[32][0]>0 ? 1 : 0;
	satisfiable[32][1]=1; 
	for(int i=0;i<42;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit32_1[i][0] ][ unit32_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit32_1[i][2] ][ unit32_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit32_1[i][4] ][ unit32_1[i][5] ] >0);
		X_contra = ( LargeX[32][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit32_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[32][0]=0; L[32][1]=1;}
			satisfiable[32][1]=satisfiable[32][1] & ((x[32] ^ 1) | (x[ unit32_1[i][0] ] ^ unit32_1[i][1]) |(x[ unit32_1[i][2] ] ^ unit32_1[i][3]));
			}
		if(X_contra>0) L[32][1]=2;
		}
	//Check all rules of unit[33][0]
	L[33][0] = LargeX[33][1]>0 ? 1 : 0;
	satisfiable[33][0]=1; 
	for(int i=0;i<25;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit33_0[i][0] ][ unit33_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit33_0[i][2] ][ unit33_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit33_0[i][4] ][ unit33_0[i][5] ] >0);
		X_contra = ( LargeX[33][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit33_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[33][1]=0; L[33][0]=1;}
			satisfiable[33][0]=satisfiable[33][0] & ((x[33] ^ 0) | (x[ unit33_0[i][0] ] ^ unit33_0[i][1]) |(x[ unit33_0[i][2] ] ^ unit33_0[i][3]));
			}
		if(X_contra>0) L[33][0]=2;
		}
	//Check all rules of unit[33][1]
	L[33][1] = LargeX[33][0]>0 ? 1 : 0;
	satisfiable[33][1]=1; 
	for(int i=0;i<51;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit33_1[i][0] ][ unit33_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit33_1[i][2] ][ unit33_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit33_1[i][4] ][ unit33_1[i][5] ] >0);
		X_contra = ( LargeX[33][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit33_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[33][0]=0; L[33][1]=1;}
			satisfiable[33][1]=satisfiable[33][1] & ((x[33] ^ 1) | (x[ unit33_1[i][0] ] ^ unit33_1[i][1]) |(x[ unit33_1[i][2] ] ^ unit33_1[i][3]));
			}
		if(X_contra>0) L[33][1]=2;
		}
	//Check all rules of unit[34][0]
	L[34][0] = LargeX[34][1]>0 ? 1 : 0;
	satisfiable[34][0]=1; 
	for(int i=0;i<23;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit34_0[i][0] ][ unit34_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit34_0[i][2] ][ unit34_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit34_0[i][4] ][ unit34_0[i][5] ] >0);
		X_contra = ( LargeX[34][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit34_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[34][1]=0; L[34][0]=1;}
			satisfiable[34][0]=satisfiable[34][0] & ((x[34] ^ 0) | (x[ unit34_0[i][0] ] ^ unit34_0[i][1]) |(x[ unit34_0[i][2] ] ^ unit34_0[i][3]));
			}
		if(X_contra>0) L[34][0]=2;
		}
	//Check all rules of unit[34][1]
	L[34][1] = LargeX[34][0]>0 ? 1 : 0;
	satisfiable[34][1]=1; 
	for(int i=0;i<58;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit34_1[i][0] ][ unit34_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit34_1[i][2] ][ unit34_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit34_1[i][4] ][ unit34_1[i][5] ] >0);
		X_contra = ( LargeX[34][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit34_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[34][0]=0; L[34][1]=1;}
			satisfiable[34][1]=satisfiable[34][1] & ((x[34] ^ 1) | (x[ unit34_1[i][0] ] ^ unit34_1[i][1]) |(x[ unit34_1[i][2] ] ^ unit34_1[i][3]));
			}
		if(X_contra>0) L[34][1]=2;
		}
	//Check all rules of unit[35][0]
	L[35][0] = LargeX[35][1]>0 ? 1 : 0;
	satisfiable[35][0]=1; 
	for(int i=0;i<33;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit35_0[i][0] ][ unit35_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit35_0[i][2] ][ unit35_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit35_0[i][4] ][ unit35_0[i][5] ] >0);
		X_contra = ( LargeX[35][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit35_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[35][1]=0; L[35][0]=1;}
			satisfiable[35][0]=satisfiable[35][0] & ((x[35] ^ 0) | (x[ unit35_0[i][0] ] ^ unit35_0[i][1]) |(x[ unit35_0[i][2] ] ^ unit35_0[i][3]));
			}
		if(X_contra>0) L[35][0]=2;
		}
	//Check all rules of unit[35][1]
	L[35][1] = LargeX[35][0]>0 ? 1 : 0;
	satisfiable[35][1]=1; 
	for(int i=0;i<69;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit35_1[i][0] ][ unit35_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit35_1[i][2] ][ unit35_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit35_1[i][4] ][ unit35_1[i][5] ] >0);
		X_contra = ( LargeX[35][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit35_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[35][0]=0; L[35][1]=1;}
			satisfiable[35][1]=satisfiable[35][1] & ((x[35] ^ 1) | (x[ unit35_1[i][0] ] ^ unit35_1[i][1]) |(x[ unit35_1[i][2] ] ^ unit35_1[i][3]));
			}
		if(X_contra>0) L[35][1]=2;
		}
	//Check all rules of unit[36][0]
	L[36][0] = LargeX[36][1]>0 ? 1 : 0;
	satisfiable[36][0]=1; 
	for(int i=0;i<29;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit36_0[i][0] ][ unit36_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit36_0[i][2] ][ unit36_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit36_0[i][4] ][ unit36_0[i][5] ] >0);
		X_contra = ( LargeX[36][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit36_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[36][1]=0; L[36][0]=1;}
			satisfiable[36][0]=satisfiable[36][0] & ((x[36] ^ 0) | (x[ unit36_0[i][0] ] ^ unit36_0[i][1]) |(x[ unit36_0[i][2] ] ^ unit36_0[i][3]));
			}
		if(X_contra>0) L[36][0]=2;
		}
	//Check all rules of unit[36][1]
	L[36][1] = LargeX[36][0]>0 ? 1 : 0;
	satisfiable[36][1]=1; 
	for(int i=0;i<80;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit36_1[i][0] ][ unit36_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit36_1[i][2] ][ unit36_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit36_1[i][4] ][ unit36_1[i][5] ] >0);
		X_contra = ( LargeX[36][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit36_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[36][0]=0; L[36][1]=1;}
			satisfiable[36][1]=satisfiable[36][1] & ((x[36] ^ 1) | (x[ unit36_1[i][0] ] ^ unit36_1[i][1]) |(x[ unit36_1[i][2] ] ^ unit36_1[i][3]));
			}
		if(X_contra>0) L[36][1]=2;
		}
	//Check all rules of unit[37][0]
	L[37][0] = LargeX[37][1]>0 ? 1 : 0;
	satisfiable[37][0]=1; 
	for(int i=0;i<37;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit37_0[i][0] ][ unit37_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit37_0[i][2] ][ unit37_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit37_0[i][4] ][ unit37_0[i][5] ] >0);
		X_contra = ( LargeX[37][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit37_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[37][1]=0; L[37][0]=1;}
			satisfiable[37][0]=satisfiable[37][0] & ((x[37] ^ 0) | (x[ unit37_0[i][0] ] ^ unit37_0[i][1]) |(x[ unit37_0[i][2] ] ^ unit37_0[i][3]));
			}
		if(X_contra>0) L[37][0]=2;
		}
	//Check all rules of unit[37][1]
	L[37][1] = LargeX[37][0]>0 ? 1 : 0;
	satisfiable[37][1]=1; 
	for(int i=0;i<87;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit37_1[i][0] ][ unit37_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit37_1[i][2] ][ unit37_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit37_1[i][4] ][ unit37_1[i][5] ] >0);
		X_contra = ( LargeX[37][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit37_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[37][0]=0; L[37][1]=1;}
			satisfiable[37][1]=satisfiable[37][1] & ((x[37] ^ 1) | (x[ unit37_1[i][0] ] ^ unit37_1[i][1]) |(x[ unit37_1[i][2] ] ^ unit37_1[i][3]));
			}
		if(X_contra>0) L[37][1]=2;
		}
	//Check all rules of unit[38][0]
	L[38][0] = LargeX[38][1]>0 ? 1 : 0;
	satisfiable[38][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit38_0[i][0] ][ unit38_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit38_0[i][2] ][ unit38_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit38_0[i][4] ][ unit38_0[i][5] ] >0);
		X_contra = ( LargeX[38][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit38_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[38][1]=0; L[38][0]=1;}
			satisfiable[38][0]=satisfiable[38][0] & ((x[38] ^ 0) | (x[ unit38_0[i][0] ] ^ unit38_0[i][1]) |(x[ unit38_0[i][2] ] ^ unit38_0[i][3]));
			}
		if(X_contra>0) L[38][0]=2;
		}
	//Check all rules of unit[38][1]
	L[38][1] = LargeX[38][0]>0 ? 1 : 0;
	satisfiable[38][1]=1; 
	for(int i=0;i<94;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit38_1[i][0] ][ unit38_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit38_1[i][2] ][ unit38_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit38_1[i][4] ][ unit38_1[i][5] ] >0);
		X_contra = ( LargeX[38][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit38_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[38][0]=0; L[38][1]=1;}
			satisfiable[38][1]=satisfiable[38][1] & ((x[38] ^ 1) | (x[ unit38_1[i][0] ] ^ unit38_1[i][1]) |(x[ unit38_1[i][2] ] ^ unit38_1[i][3]));
			}
		if(X_contra>0) L[38][1]=2;
		}
	//Check all rules of unit[39][0]
	L[39][0] = LargeX[39][1]>0 ? 1 : 0;
	satisfiable[39][0]=1; 
	for(int i=0;i<83;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit39_0[i][0] ][ unit39_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit39_0[i][2] ][ unit39_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit39_0[i][4] ][ unit39_0[i][5] ] >0);
		X_contra = ( LargeX[39][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit39_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[39][1]=0; L[39][0]=1;}
			satisfiable[39][0]=satisfiable[39][0] & ((x[39] ^ 0) | (x[ unit39_0[i][0] ] ^ unit39_0[i][1]) |(x[ unit39_0[i][2] ] ^ unit39_0[i][3]));
			}
		if(X_contra>0) L[39][0]=2;
		}
	//Check all rules of unit[39][1]
	L[39][1] = LargeX[39][0]>0 ? 1 : 0;
	satisfiable[39][1]=1; 
	for(int i=0;i<101;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit39_1[i][0] ][ unit39_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit39_1[i][2] ][ unit39_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit39_1[i][4] ][ unit39_1[i][5] ] >0);
		X_contra = ( LargeX[39][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit39_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[39][0]=0; L[39][1]=1;}
			satisfiable[39][1]=satisfiable[39][1] & ((x[39] ^ 1) | (x[ unit39_1[i][0] ] ^ unit39_1[i][1]) |(x[ unit39_1[i][2] ] ^ unit39_1[i][3]));
			}
		if(X_contra>0) L[39][1]=2;
		}
	//Check all rules of unit[40][0]
	L[40][0] = LargeX[40][1]>0 ? 1 : 0;
	satisfiable[40][0]=1; 
	for(int i=0;i<79;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit40_0[i][0] ][ unit40_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit40_0[i][2] ][ unit40_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit40_0[i][4] ][ unit40_0[i][5] ] >0);
		X_contra = ( LargeX[40][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit40_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[40][1]=0; L[40][0]=1;}
			satisfiable[40][0]=satisfiable[40][0] & ((x[40] ^ 0) | (x[ unit40_0[i][0] ] ^ unit40_0[i][1]) |(x[ unit40_0[i][2] ] ^ unit40_0[i][3]));
			}
		if(X_contra>0) L[40][0]=2;
		}
	//Check all rules of unit[40][1]
	L[40][1] = LargeX[40][0]>0 ? 1 : 0;
	satisfiable[40][1]=1; 
	for(int i=0;i<108;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit40_1[i][0] ][ unit40_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit40_1[i][2] ][ unit40_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit40_1[i][4] ][ unit40_1[i][5] ] >0);
		X_contra = ( LargeX[40][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit40_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[40][0]=0; L[40][1]=1;}
			satisfiable[40][1]=satisfiable[40][1] & ((x[40] ^ 1) | (x[ unit40_1[i][0] ] ^ unit40_1[i][1]) |(x[ unit40_1[i][2] ] ^ unit40_1[i][3]));
			}
		if(X_contra>0) L[40][1]=2;
		}
	//Check all rules of unit[52][0]
	L[52][0] = LargeX[52][1]>0 ? 1 : 0;
	satisfiable[52][0]=1; 
	for(int i=0;i<28;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit52_0[i][0] ][ unit52_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit52_0[i][2] ][ unit52_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit52_0[i][4] ][ unit52_0[i][5] ] >0);
		X_contra = ( LargeX[52][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit52_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[52][1]=0; L[52][0]=1;}
			satisfiable[52][0]=satisfiable[52][0] & ((x[52] ^ 0) | (x[ unit52_0[i][0] ] ^ unit52_0[i][1]) |(x[ unit52_0[i][2] ] ^ unit52_0[i][3]));
			}
		if(X_contra>0) L[52][0]=2;
		}
	//Check all rules of unit[52][1]
	L[52][1] = LargeX[52][0]>0 ? 1 : 0;
	satisfiable[52][1]=1; 
	for(int i=0;i<40;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit52_1[i][0] ][ unit52_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit52_1[i][2] ][ unit52_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit52_1[i][4] ][ unit52_1[i][5] ] >0);
		X_contra = ( LargeX[52][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit52_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[52][0]=0; L[52][1]=1;}
			satisfiable[52][1]=satisfiable[52][1] & ((x[52] ^ 1) | (x[ unit52_1[i][0] ] ^ unit52_1[i][1]) |(x[ unit52_1[i][2] ] ^ unit52_1[i][3]));
			}
		if(X_contra>0) L[52][1]=2;
		}
	//Check all rules of unit[54][0]
	L[54][0] = LargeX[54][1]>0 ? 1 : 0;
	satisfiable[54][0]=1; 
	for(int i=0;i<26;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit54_0[i][0] ][ unit54_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit54_0[i][2] ][ unit54_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit54_0[i][4] ][ unit54_0[i][5] ] >0);
		X_contra = ( LargeX[54][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit54_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[54][1]=0; L[54][0]=1;}
			satisfiable[54][0]=satisfiable[54][0] & ((x[54] ^ 0) | (x[ unit54_0[i][0] ] ^ unit54_0[i][1]) |(x[ unit54_0[i][2] ] ^ unit54_0[i][3]));
			}
		if(X_contra>0) L[54][0]=2;
		}
	//Check all rules of unit[54][1]
	L[54][1] = LargeX[54][0]>0 ? 1 : 0;
	satisfiable[54][1]=1; 
	for(int i=0;i<48;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit54_1[i][0] ][ unit54_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit54_1[i][2] ][ unit54_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit54_1[i][4] ][ unit54_1[i][5] ] >0);
		X_contra = ( LargeX[54][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit54_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[54][0]=0; L[54][1]=1;}
			satisfiable[54][1]=satisfiable[54][1] & ((x[54] ^ 1) | (x[ unit54_1[i][0] ] ^ unit54_1[i][1]) |(x[ unit54_1[i][2] ] ^ unit54_1[i][3]));
			}
		if(X_contra>0) L[54][1]=2;
		}
	//Check all rules of unit[55][0]
	L[55][0] = LargeX[55][1]>0 ? 1 : 0;
	satisfiable[55][0]=1; 
	for(int i=0;i<33;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit55_0[i][0] ][ unit55_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit55_0[i][2] ][ unit55_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit55_0[i][4] ][ unit55_0[i][5] ] >0);
		X_contra = ( LargeX[55][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit55_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[55][1]=0; L[55][0]=1;}
			satisfiable[55][0]=satisfiable[55][0] & ((x[55] ^ 0) | (x[ unit55_0[i][0] ] ^ unit55_0[i][1]) |(x[ unit55_0[i][2] ] ^ unit55_0[i][3]));
			}
		if(X_contra>0) L[55][0]=2;
		}
	//Check all rules of unit[55][1]
	L[55][1] = LargeX[55][0]>0 ? 1 : 0;
	satisfiable[55][1]=1; 
	for(int i=0;i<27;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit55_1[i][0] ][ unit55_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit55_1[i][2] ][ unit55_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit55_1[i][4] ][ unit55_1[i][5] ] >0);
		X_contra = ( LargeX[55][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit55_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[55][0]=0; L[55][1]=1;}
			satisfiable[55][1]=satisfiable[55][1] & ((x[55] ^ 1) | (x[ unit55_1[i][0] ] ^ unit55_1[i][1]) |(x[ unit55_1[i][2] ] ^ unit55_1[i][3]));
			}
		if(X_contra>0) L[55][1]=2;
		}
	//Check all rules of unit[61][0]
	L[61][0] = LargeX[61][1]>0 ? 1 : 0;
	satisfiable[61][0]=1; 
	for(int i=0;i<41;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit61_0[i][0] ][ unit61_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit61_0[i][2] ][ unit61_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit61_0[i][4] ][ unit61_0[i][5] ] >0);
		X_contra = ( LargeX[61][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit61_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[61][1]=0; L[61][0]=1;}
			satisfiable[61][0]=satisfiable[61][0] & ((x[61] ^ 0) | (x[ unit61_0[i][0] ] ^ unit61_0[i][1]) |(x[ unit61_0[i][2] ] ^ unit61_0[i][3]));
			}
		if(X_contra>0) L[61][0]=2;
		}
	//Check all rules of unit[61][1]
	L[61][1] = LargeX[61][0]>0 ? 1 : 0;
	satisfiable[61][1]=1; 
	for(int i=0;i<123;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit61_1[i][0] ][ unit61_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit61_1[i][2] ][ unit61_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit61_1[i][4] ][ unit61_1[i][5] ] >0);
		X_contra = ( LargeX[61][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit61_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[61][0]=0; L[61][1]=1;}
			satisfiable[61][1]=satisfiable[61][1] & ((x[61] ^ 1) | (x[ unit61_1[i][0] ] ^ unit61_1[i][1]) |(x[ unit61_1[i][2] ] ^ unit61_1[i][3]));
			}
		if(X_contra>0) L[61][1]=2;
		}
	//Check all rules of unit[62][0]
	L[62][0] = LargeX[62][1]>0 ? 1 : 0;
	satisfiable[62][0]=1; 
	for(int i=0;i<46;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit62_0[i][0] ][ unit62_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit62_0[i][2] ][ unit62_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit62_0[i][4] ][ unit62_0[i][5] ] >0);
		X_contra = ( LargeX[62][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit62_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[62][1]=0; L[62][0]=1;}
			satisfiable[62][0]=satisfiable[62][0] & ((x[62] ^ 0) | (x[ unit62_0[i][0] ] ^ unit62_0[i][1]) |(x[ unit62_0[i][2] ] ^ unit62_0[i][3]));
			}
		if(X_contra>0) L[62][0]=2;
		}
	//Check all rules of unit[62][1]
	L[62][1] = LargeX[62][0]>0 ? 1 : 0;
	satisfiable[62][1]=1; 
	for(int i=0;i<111;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit62_1[i][0] ][ unit62_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit62_1[i][2] ][ unit62_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit62_1[i][4] ][ unit62_1[i][5] ] >0);
		X_contra = ( LargeX[62][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit62_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[62][0]=0; L[62][1]=1;}
			satisfiable[62][1]=satisfiable[62][1] & ((x[62] ^ 1) | (x[ unit62_1[i][0] ] ^ unit62_1[i][1]) |(x[ unit62_1[i][2] ] ^ unit62_1[i][3]));
			}
		if(X_contra>0) L[62][1]=2;
		}
	//Check all rules of unit[63][0]
	L[63][0] = LargeX[63][1]>0 ? 1 : 0;
	satisfiable[63][0]=1; 
	for(int i=0;i<34;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit63_0[i][0] ][ unit63_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit63_0[i][2] ][ unit63_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit63_0[i][4] ][ unit63_0[i][5] ] >0);
		X_contra = ( LargeX[63][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit63_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[63][1]=0; L[63][0]=1;}
			satisfiable[63][0]=satisfiable[63][0] & ((x[63] ^ 0) | (x[ unit63_0[i][0] ] ^ unit63_0[i][1]) |(x[ unit63_0[i][2] ] ^ unit63_0[i][3]));
			}
		if(X_contra>0) L[63][0]=2;
		}
	//Check all rules of unit[63][1]
	L[63][1] = LargeX[63][0]>0 ? 1 : 0;
	satisfiable[63][1]=1; 
	for(int i=0;i<108;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit63_1[i][0] ][ unit63_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit63_1[i][2] ][ unit63_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit63_1[i][4] ][ unit63_1[i][5] ] >0);
		X_contra = ( LargeX[63][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit63_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[63][0]=0; L[63][1]=1;}
			satisfiable[63][1]=satisfiable[63][1] & ((x[63] ^ 1) | (x[ unit63_1[i][0] ] ^ unit63_1[i][1]) |(x[ unit63_1[i][2] ] ^ unit63_1[i][3]));
			}
		if(X_contra>0) L[63][1]=2;
		}
	//Check all rules of unit[64][0]
	L[64][0] = LargeX[64][1]>0 ? 1 : 0;
	satisfiable[64][0]=1; 
	for(int i=0;i<41;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit64_0[i][0] ][ unit64_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit64_0[i][2] ][ unit64_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit64_0[i][4] ][ unit64_0[i][5] ] >0);
		X_contra = ( LargeX[64][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit64_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[64][1]=0; L[64][0]=1;}
			satisfiable[64][0]=satisfiable[64][0] & ((x[64] ^ 0) | (x[ unit64_0[i][0] ] ^ unit64_0[i][1]) |(x[ unit64_0[i][2] ] ^ unit64_0[i][3]));
			}
		if(X_contra>0) L[64][0]=2;
		}
	//Check all rules of unit[64][1]
	L[64][1] = LargeX[64][0]>0 ? 1 : 0;
	satisfiable[64][1]=1; 
	for(int i=0;i<91;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit64_1[i][0] ][ unit64_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit64_1[i][2] ][ unit64_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit64_1[i][4] ][ unit64_1[i][5] ] >0);
		X_contra = ( LargeX[64][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit64_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[64][0]=0; L[64][1]=1;}
			satisfiable[64][1]=satisfiable[64][1] & ((x[64] ^ 1) | (x[ unit64_1[i][0] ] ^ unit64_1[i][1]) |(x[ unit64_1[i][2] ] ^ unit64_1[i][3]));
			}
		if(X_contra>0) L[64][1]=2;
		}
	//Check all rules of unit[65][0]
	L[65][0] = LargeX[65][1]>0 ? 1 : 0;
	satisfiable[65][0]=1; 
	for(int i=0;i<36;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit65_0[i][0] ][ unit65_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit65_0[i][2] ][ unit65_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit65_0[i][4] ][ unit65_0[i][5] ] >0);
		X_contra = ( LargeX[65][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit65_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[65][1]=0; L[65][0]=1;}
			satisfiable[65][0]=satisfiable[65][0] & ((x[65] ^ 0) | (x[ unit65_0[i][0] ] ^ unit65_0[i][1]) |(x[ unit65_0[i][2] ] ^ unit65_0[i][3]));
			}
		if(X_contra>0) L[65][0]=2;
		}
	//Check all rules of unit[65][1]
	L[65][1] = LargeX[65][0]>0 ? 1 : 0;
	satisfiable[65][1]=1; 
	for(int i=0;i<87;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit65_1[i][0] ][ unit65_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit65_1[i][2] ][ unit65_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit65_1[i][4] ][ unit65_1[i][5] ] >0);
		X_contra = ( LargeX[65][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit65_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[65][0]=0; L[65][1]=1;}
			satisfiable[65][1]=satisfiable[65][1] & ((x[65] ^ 1) | (x[ unit65_1[i][0] ] ^ unit65_1[i][1]) |(x[ unit65_1[i][2] ] ^ unit65_1[i][3]));
			}
		if(X_contra>0) L[65][1]=2;
		}
	//Check all rules of unit[66][0]
	L[66][0] = LargeX[66][1]>0 ? 1 : 0;
	satisfiable[66][0]=1; 
	for(int i=0;i<33;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit66_0[i][0] ][ unit66_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit66_0[i][2] ][ unit66_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit66_0[i][4] ][ unit66_0[i][5] ] >0);
		X_contra = ( LargeX[66][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit66_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[66][1]=0; L[66][0]=1;}
			satisfiable[66][0]=satisfiable[66][0] & ((x[66] ^ 0) | (x[ unit66_0[i][0] ] ^ unit66_0[i][1]) |(x[ unit66_0[i][2] ] ^ unit66_0[i][3]));
			}
		if(X_contra>0) L[66][0]=2;
		}
	//Check all rules of unit[66][1]
	L[66][1] = LargeX[66][0]>0 ? 1 : 0;
	satisfiable[66][1]=1; 
	for(int i=0;i<92;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit66_1[i][0] ][ unit66_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit66_1[i][2] ][ unit66_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit66_1[i][4] ][ unit66_1[i][5] ] >0);
		X_contra = ( LargeX[66][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit66_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[66][0]=0; L[66][1]=1;}
			satisfiable[66][1]=satisfiable[66][1] & ((x[66] ^ 1) | (x[ unit66_1[i][0] ] ^ unit66_1[i][1]) |(x[ unit66_1[i][2] ] ^ unit66_1[i][3]));
			}
		if(X_contra>0) L[66][1]=2;
		}
	//Check all rules of unit[67][0]
	L[67][0] = LargeX[67][1]>0 ? 1 : 0;
	satisfiable[67][0]=1; 
	for(int i=0;i<29;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit67_0[i][0] ][ unit67_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit67_0[i][2] ][ unit67_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit67_0[i][4] ][ unit67_0[i][5] ] >0);
		X_contra = ( LargeX[67][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit67_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[67][1]=0; L[67][0]=1;}
			satisfiable[67][0]=satisfiable[67][0] & ((x[67] ^ 0) | (x[ unit67_0[i][0] ] ^ unit67_0[i][1]) |(x[ unit67_0[i][2] ] ^ unit67_0[i][3]));
			}
		if(X_contra>0) L[67][0]=2;
		}
	//Check all rules of unit[67][1]
	L[67][1] = LargeX[67][0]>0 ? 1 : 0;
	satisfiable[67][1]=1; 
	for(int i=0;i<81;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit67_1[i][0] ][ unit67_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit67_1[i][2] ][ unit67_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit67_1[i][4] ][ unit67_1[i][5] ] >0);
		X_contra = ( LargeX[67][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit67_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[67][0]=0; L[67][1]=1;}
			satisfiable[67][1]=satisfiable[67][1] & ((x[67] ^ 1) | (x[ unit67_1[i][0] ] ^ unit67_1[i][1]) |(x[ unit67_1[i][2] ] ^ unit67_1[i][3]));
			}
		if(X_contra>0) L[67][1]=2;
		}
	//Check all rules of unit[68][0]
	L[68][0] = LargeX[68][1]>0 ? 1 : 0;
	satisfiable[68][0]=1; 
	for(int i=0;i<32;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit68_0[i][0] ][ unit68_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit68_0[i][2] ][ unit68_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit68_0[i][4] ][ unit68_0[i][5] ] >0);
		X_contra = ( LargeX[68][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit68_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[68][1]=0; L[68][0]=1;}
			satisfiable[68][0]=satisfiable[68][0] & ((x[68] ^ 0) | (x[ unit68_0[i][0] ] ^ unit68_0[i][1]) |(x[ unit68_0[i][2] ] ^ unit68_0[i][3]));
			}
		if(X_contra>0) L[68][0]=2;
		}
	//Check all rules of unit[68][1]
	L[68][1] = LargeX[68][0]>0 ? 1 : 0;
	satisfiable[68][1]=1; 
	for(int i=0;i<73;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit68_1[i][0] ][ unit68_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit68_1[i][2] ][ unit68_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit68_1[i][4] ][ unit68_1[i][5] ] >0);
		X_contra = ( LargeX[68][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit68_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[68][0]=0; L[68][1]=1;}
			satisfiable[68][1]=satisfiable[68][1] & ((x[68] ^ 1) | (x[ unit68_1[i][0] ] ^ unit68_1[i][1]) |(x[ unit68_1[i][2] ] ^ unit68_1[i][3]));
			}
		if(X_contra>0) L[68][1]=2;
		}
	//Check all rules of unit[69][0]
	L[69][0] = LargeX[69][1]>0 ? 1 : 0;
	satisfiable[69][0]=1; 
	for(int i=0;i<24;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit69_0[i][0] ][ unit69_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit69_0[i][2] ][ unit69_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit69_0[i][4] ][ unit69_0[i][5] ] >0);
		X_contra = ( LargeX[69][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit69_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[69][1]=0; L[69][0]=1;}
			satisfiable[69][0]=satisfiable[69][0] & ((x[69] ^ 0) | (x[ unit69_0[i][0] ] ^ unit69_0[i][1]) |(x[ unit69_0[i][2] ] ^ unit69_0[i][3]));
			}
		if(X_contra>0) L[69][0]=2;
		}
	//Check all rules of unit[69][1]
	L[69][1] = LargeX[69][0]>0 ? 1 : 0;
	satisfiable[69][1]=1; 
	for(int i=0;i<64;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit69_1[i][0] ][ unit69_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit69_1[i][2] ][ unit69_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit69_1[i][4] ][ unit69_1[i][5] ] >0);
		X_contra = ( LargeX[69][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit69_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[69][0]=0; L[69][1]=1;}
			satisfiable[69][1]=satisfiable[69][1] & ((x[69] ^ 1) | (x[ unit69_1[i][0] ] ^ unit69_1[i][1]) |(x[ unit69_1[i][2] ] ^ unit69_1[i][3]));
			}
		if(X_contra>0) L[69][1]=2;
		}
	//Check all rules of unit[70][0]
	L[70][0] = LargeX[70][1]>0 ? 1 : 0;
	satisfiable[70][0]=1; 
	for(int i=0;i<28;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit70_0[i][0] ][ unit70_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit70_0[i][2] ][ unit70_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit70_0[i][4] ][ unit70_0[i][5] ] >0);
		X_contra = ( LargeX[70][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit70_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[70][1]=0; L[70][0]=1;}
			satisfiable[70][0]=satisfiable[70][0] & ((x[70] ^ 0) | (x[ unit70_0[i][0] ] ^ unit70_0[i][1]) |(x[ unit70_0[i][2] ] ^ unit70_0[i][3]));
			}
		if(X_contra>0) L[70][0]=2;
		}
	//Check all rules of unit[70][1]
	L[70][1] = LargeX[70][0]>0 ? 1 : 0;
	satisfiable[70][1]=1; 
	for(int i=0;i<50;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit70_1[i][0] ][ unit70_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit70_1[i][2] ][ unit70_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit70_1[i][4] ][ unit70_1[i][5] ] >0);
		X_contra = ( LargeX[70][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit70_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[70][0]=0; L[70][1]=1;}
			satisfiable[70][1]=satisfiable[70][1] & ((x[70] ^ 1) | (x[ unit70_1[i][0] ] ^ unit70_1[i][1]) |(x[ unit70_1[i][2] ] ^ unit70_1[i][3]));
			}
		if(X_contra>0) L[70][1]=2;
		}
	//Check all rules of unit[71][0]
	L[71][0] = LargeX[71][1]>0 ? 1 : 0;
	satisfiable[71][0]=1; 
	for(int i=0;i<20;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit71_0[i][0] ][ unit71_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit71_0[i][2] ][ unit71_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit71_0[i][4] ][ unit71_0[i][5] ] >0);
		X_contra = ( LargeX[71][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit71_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[71][1]=0; L[71][0]=1;}
			satisfiable[71][0]=satisfiable[71][0] & ((x[71] ^ 0) | (x[ unit71_0[i][0] ] ^ unit71_0[i][1]) |(x[ unit71_0[i][2] ] ^ unit71_0[i][3]));
			}
		if(X_contra>0) L[71][0]=2;
		}
	//Check all rules of unit[71][1]
	L[71][1] = LargeX[71][0]>0 ? 1 : 0;
	satisfiable[71][1]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit71_1[i][0] ][ unit71_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit71_1[i][2] ][ unit71_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit71_1[i][4] ][ unit71_1[i][5] ] >0);
		X_contra = ( LargeX[71][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit71_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[71][0]=0; L[71][1]=1;}
			satisfiable[71][1]=satisfiable[71][1] & ((x[71] ^ 1) | (x[ unit71_1[i][0] ] ^ unit71_1[i][1]) |(x[ unit71_1[i][2] ] ^ unit71_1[i][3]));
			}
		if(X_contra>0) L[71][1]=2;
		}
	//Check all rules of unit[72][0]
	L[72][0] = LargeX[72][1]>0 ? 1 : 0;
	satisfiable[72][0]=1; 
	for(int i=0;i<18;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit72_0[i][0] ][ unit72_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit72_0[i][2] ][ unit72_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit72_0[i][4] ][ unit72_0[i][5] ] >0);
		X_contra = ( LargeX[72][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit72_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[72][1]=0; L[72][0]=1;}
			satisfiable[72][0]=satisfiable[72][0] & ((x[72] ^ 0) | (x[ unit72_0[i][0] ] ^ unit72_0[i][1]) |(x[ unit72_0[i][2] ] ^ unit72_0[i][3]));
			}
		if(X_contra>0) L[72][0]=2;
		}
	//Check all rules of unit[72][1]
	L[72][1] = LargeX[72][0]>0 ? 1 : 0;
	satisfiable[72][1]=1; 
	for(int i=0;i<42;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit72_1[i][0] ][ unit72_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit72_1[i][2] ][ unit72_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit72_1[i][4] ][ unit72_1[i][5] ] >0);
		X_contra = ( LargeX[72][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit72_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[72][0]=0; L[72][1]=1;}
			satisfiable[72][1]=satisfiable[72][1] & ((x[72] ^ 1) | (x[ unit72_1[i][0] ] ^ unit72_1[i][1]) |(x[ unit72_1[i][2] ] ^ unit72_1[i][3]));
			}
		if(X_contra>0) L[72][1]=2;
		}
	//Check all rules of unit[73][0]
	L[73][0] = LargeX[73][1]>0 ? 1 : 0;
	satisfiable[73][0]=1; 
	for(int i=0;i<25;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit73_0[i][0] ][ unit73_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit73_0[i][2] ][ unit73_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit73_0[i][4] ][ unit73_0[i][5] ] >0);
		X_contra = ( LargeX[73][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit73_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[73][1]=0; L[73][0]=1;}
			satisfiable[73][0]=satisfiable[73][0] & ((x[73] ^ 0) | (x[ unit73_0[i][0] ] ^ unit73_0[i][1]) |(x[ unit73_0[i][2] ] ^ unit73_0[i][3]));
			}
		if(X_contra>0) L[73][0]=2;
		}
	//Check all rules of unit[73][1]
	L[73][1] = LargeX[73][0]>0 ? 1 : 0;
	satisfiable[73][1]=1; 
	for(int i=0;i<51;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit73_1[i][0] ][ unit73_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit73_1[i][2] ][ unit73_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit73_1[i][4] ][ unit73_1[i][5] ] >0);
		X_contra = ( LargeX[73][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit73_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[73][0]=0; L[73][1]=1;}
			satisfiable[73][1]=satisfiable[73][1] & ((x[73] ^ 1) | (x[ unit73_1[i][0] ] ^ unit73_1[i][1]) |(x[ unit73_1[i][2] ] ^ unit73_1[i][3]));
			}
		if(X_contra>0) L[73][1]=2;
		}
	//Check all rules of unit[74][0]
	L[74][0] = LargeX[74][1]>0 ? 1 : 0;
	satisfiable[74][0]=1; 
	for(int i=0;i<23;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit74_0[i][0] ][ unit74_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit74_0[i][2] ][ unit74_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit74_0[i][4] ][ unit74_0[i][5] ] >0);
		X_contra = ( LargeX[74][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit74_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[74][1]=0; L[74][0]=1;}
			satisfiable[74][0]=satisfiable[74][0] & ((x[74] ^ 0) | (x[ unit74_0[i][0] ] ^ unit74_0[i][1]) |(x[ unit74_0[i][2] ] ^ unit74_0[i][3]));
			}
		if(X_contra>0) L[74][0]=2;
		}
	//Check all rules of unit[74][1]
	L[74][1] = LargeX[74][0]>0 ? 1 : 0;
	satisfiable[74][1]=1; 
	for(int i=0;i<58;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit74_1[i][0] ][ unit74_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit74_1[i][2] ][ unit74_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit74_1[i][4] ][ unit74_1[i][5] ] >0);
		X_contra = ( LargeX[74][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit74_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[74][0]=0; L[74][1]=1;}
			satisfiable[74][1]=satisfiable[74][1] & ((x[74] ^ 1) | (x[ unit74_1[i][0] ] ^ unit74_1[i][1]) |(x[ unit74_1[i][2] ] ^ unit74_1[i][3]));
			}
		if(X_contra>0) L[74][1]=2;
		}
	//Check all rules of unit[75][0]
	L[75][0] = LargeX[75][1]>0 ? 1 : 0;
	satisfiable[75][0]=1; 
	for(int i=0;i<33;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit75_0[i][0] ][ unit75_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit75_0[i][2] ][ unit75_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit75_0[i][4] ][ unit75_0[i][5] ] >0);
		X_contra = ( LargeX[75][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit75_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[75][1]=0; L[75][0]=1;}
			satisfiable[75][0]=satisfiable[75][0] & ((x[75] ^ 0) | (x[ unit75_0[i][0] ] ^ unit75_0[i][1]) |(x[ unit75_0[i][2] ] ^ unit75_0[i][3]));
			}
		if(X_contra>0) L[75][0]=2;
		}
	//Check all rules of unit[75][1]
	L[75][1] = LargeX[75][0]>0 ? 1 : 0;
	satisfiable[75][1]=1; 
	for(int i=0;i<69;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit75_1[i][0] ][ unit75_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit75_1[i][2] ][ unit75_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit75_1[i][4] ][ unit75_1[i][5] ] >0);
		X_contra = ( LargeX[75][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit75_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[75][0]=0; L[75][1]=1;}
			satisfiable[75][1]=satisfiable[75][1] & ((x[75] ^ 1) | (x[ unit75_1[i][0] ] ^ unit75_1[i][1]) |(x[ unit75_1[i][2] ] ^ unit75_1[i][3]));
			}
		if(X_contra>0) L[75][1]=2;
		}
	//Check all rules of unit[76][0]
	L[76][0] = LargeX[76][1]>0 ? 1 : 0;
	satisfiable[76][0]=1; 
	for(int i=0;i<29;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit76_0[i][0] ][ unit76_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit76_0[i][2] ][ unit76_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit76_0[i][4] ][ unit76_0[i][5] ] >0);
		X_contra = ( LargeX[76][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit76_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[76][1]=0; L[76][0]=1;}
			satisfiable[76][0]=satisfiable[76][0] & ((x[76] ^ 0) | (x[ unit76_0[i][0] ] ^ unit76_0[i][1]) |(x[ unit76_0[i][2] ] ^ unit76_0[i][3]));
			}
		if(X_contra>0) L[76][0]=2;
		}
	//Check all rules of unit[76][1]
	L[76][1] = LargeX[76][0]>0 ? 1 : 0;
	satisfiable[76][1]=1; 
	for(int i=0;i<80;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit76_1[i][0] ][ unit76_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit76_1[i][2] ][ unit76_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit76_1[i][4] ][ unit76_1[i][5] ] >0);
		X_contra = ( LargeX[76][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit76_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[76][0]=0; L[76][1]=1;}
			satisfiable[76][1]=satisfiable[76][1] & ((x[76] ^ 1) | (x[ unit76_1[i][0] ] ^ unit76_1[i][1]) |(x[ unit76_1[i][2] ] ^ unit76_1[i][3]));
			}
		if(X_contra>0) L[76][1]=2;
		}
	//Check all rules of unit[77][0]
	L[77][0] = LargeX[77][1]>0 ? 1 : 0;
	satisfiable[77][0]=1; 
	for(int i=0;i<37;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit77_0[i][0] ][ unit77_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit77_0[i][2] ][ unit77_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit77_0[i][4] ][ unit77_0[i][5] ] >0);
		X_contra = ( LargeX[77][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit77_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[77][1]=0; L[77][0]=1;}
			satisfiable[77][0]=satisfiable[77][0] & ((x[77] ^ 0) | (x[ unit77_0[i][0] ] ^ unit77_0[i][1]) |(x[ unit77_0[i][2] ] ^ unit77_0[i][3]));
			}
		if(X_contra>0) L[77][0]=2;
		}
	//Check all rules of unit[77][1]
	L[77][1] = LargeX[77][0]>0 ? 1 : 0;
	satisfiable[77][1]=1; 
	for(int i=0;i<87;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit77_1[i][0] ][ unit77_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit77_1[i][2] ][ unit77_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit77_1[i][4] ][ unit77_1[i][5] ] >0);
		X_contra = ( LargeX[77][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit77_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[77][0]=0; L[77][1]=1;}
			satisfiable[77][1]=satisfiable[77][1] & ((x[77] ^ 1) | (x[ unit77_1[i][0] ] ^ unit77_1[i][1]) |(x[ unit77_1[i][2] ] ^ unit77_1[i][3]));
			}
		if(X_contra>0) L[77][1]=2;
		}
	//Check all rules of unit[78][0]
	L[78][0] = LargeX[78][1]>0 ? 1 : 0;
	satisfiable[78][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit78_0[i][0] ][ unit78_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit78_0[i][2] ][ unit78_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit78_0[i][4] ][ unit78_0[i][5] ] >0);
		X_contra = ( LargeX[78][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit78_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[78][1]=0; L[78][0]=1;}
			satisfiable[78][0]=satisfiable[78][0] & ((x[78] ^ 0) | (x[ unit78_0[i][0] ] ^ unit78_0[i][1]) |(x[ unit78_0[i][2] ] ^ unit78_0[i][3]));
			}
		if(X_contra>0) L[78][0]=2;
		}
	//Check all rules of unit[78][1]
	L[78][1] = LargeX[78][0]>0 ? 1 : 0;
	satisfiable[78][1]=1; 
	for(int i=0;i<94;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit78_1[i][0] ][ unit78_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit78_1[i][2] ][ unit78_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit78_1[i][4] ][ unit78_1[i][5] ] >0);
		X_contra = ( LargeX[78][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit78_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[78][0]=0; L[78][1]=1;}
			satisfiable[78][1]=satisfiable[78][1] & ((x[78] ^ 1) | (x[ unit78_1[i][0] ] ^ unit78_1[i][1]) |(x[ unit78_1[i][2] ] ^ unit78_1[i][3]));
			}
		if(X_contra>0) L[78][1]=2;
		}
	//Check all rules of unit[79][0]
	L[79][0] = LargeX[79][1]>0 ? 1 : 0;
	satisfiable[79][0]=1; 
	for(int i=0;i<83;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit79_0[i][0] ][ unit79_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit79_0[i][2] ][ unit79_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit79_0[i][4] ][ unit79_0[i][5] ] >0);
		X_contra = ( LargeX[79][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit79_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[79][1]=0; L[79][0]=1;}
			satisfiable[79][0]=satisfiable[79][0] & ((x[79] ^ 0) | (x[ unit79_0[i][0] ] ^ unit79_0[i][1]) |(x[ unit79_0[i][2] ] ^ unit79_0[i][3]));
			}
		if(X_contra>0) L[79][0]=2;
		}
	//Check all rules of unit[79][1]
	L[79][1] = LargeX[79][0]>0 ? 1 : 0;
	satisfiable[79][1]=1; 
	for(int i=0;i<101;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit79_1[i][0] ][ unit79_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit79_1[i][2] ][ unit79_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit79_1[i][4] ][ unit79_1[i][5] ] >0);
		X_contra = ( LargeX[79][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit79_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[79][0]=0; L[79][1]=1;}
			satisfiable[79][1]=satisfiable[79][1] & ((x[79] ^ 1) | (x[ unit79_1[i][0] ] ^ unit79_1[i][1]) |(x[ unit79_1[i][2] ] ^ unit79_1[i][3]));
			}
		if(X_contra>0) L[79][1]=2;
		}
	//Check all rules of unit[80][0]
	L[80][0] = LargeX[80][1]>0 ? 1 : 0;
	satisfiable[80][0]=1; 
	for(int i=0;i<79;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit80_0[i][0] ][ unit80_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit80_0[i][2] ][ unit80_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit80_0[i][4] ][ unit80_0[i][5] ] >0);
		X_contra = ( LargeX[80][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit80_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[80][1]=0; L[80][0]=1;}
			satisfiable[80][0]=satisfiable[80][0] & ((x[80] ^ 0) | (x[ unit80_0[i][0] ] ^ unit80_0[i][1]) |(x[ unit80_0[i][2] ] ^ unit80_0[i][3]));
			}
		if(X_contra>0) L[80][0]=2;
		}
	//Check all rules of unit[80][1]
	L[80][1] = LargeX[80][0]>0 ? 1 : 0;
	satisfiable[80][1]=1; 
	for(int i=0;i<108;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit80_1[i][0] ][ unit80_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit80_1[i][2] ][ unit80_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit80_1[i][4] ][ unit80_1[i][5] ] >0);
		X_contra = ( LargeX[80][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit80_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[80][0]=0; L[80][1]=1;}
			satisfiable[80][1]=satisfiable[80][1] & ((x[80] ^ 1) | (x[ unit80_1[i][0] ] ^ unit80_1[i][1]) |(x[ unit80_1[i][2] ] ^ unit80_1[i][3]));
			}
		if(X_contra>0) L[80][1]=2;
		}
	//Check all rules of unit[93][0]
	L[93][0] = LargeX[93][1]>0 ? 1 : 0;
	satisfiable[93][0]=1; 
	for(int i=0;i<10;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit93_0[i][0] ][ unit93_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit93_0[i][2] ][ unit93_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit93_0[i][4] ][ unit93_0[i][5] ] >0);
		X_contra = ( LargeX[93][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit93_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[93][1]=0; L[93][0]=1;}
			satisfiable[93][0]=satisfiable[93][0] & ((x[93] ^ 0) | (x[ unit93_0[i][0] ] ^ unit93_0[i][1]) |(x[ unit93_0[i][2] ] ^ unit93_0[i][3]));
			}
		if(X_contra>0) L[93][0]=2;
		}
	//Check all rules of unit[93][1]
	L[93][1] = LargeX[93][0]>0 ? 1 : 0;
	satisfiable[93][1]=1; 
	for(int i=0;i<17;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit93_1[i][0] ][ unit93_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit93_1[i][2] ][ unit93_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit93_1[i][4] ][ unit93_1[i][5] ] >0);
		X_contra = ( LargeX[93][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit93_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[93][0]=0; L[93][1]=1;}
			satisfiable[93][1]=satisfiable[93][1] & ((x[93] ^ 1) | (x[ unit93_1[i][0] ] ^ unit93_1[i][1]) |(x[ unit93_1[i][2] ] ^ unit93_1[i][3]));
			}
		if(X_contra>0) L[93][1]=2;
		}
	//Check all rules of unit[97][0]
	L[97][0] = LargeX[97][1]>0 ? 1 : 0;
	satisfiable[97][0]=1; 
	for(int i=0;i<10;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit97_0[i][0] ][ unit97_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit97_0[i][2] ][ unit97_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit97_0[i][4] ][ unit97_0[i][5] ] >0);
		X_contra = ( LargeX[97][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit97_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[97][1]=0; L[97][0]=1;}
			satisfiable[97][0]=satisfiable[97][0] & ((x[97] ^ 0) | (x[ unit97_0[i][0] ] ^ unit97_0[i][1]) |(x[ unit97_0[i][2] ] ^ unit97_0[i][3]));
			}
		if(X_contra>0) L[97][0]=2;
		}
	//Check all rules of unit[97][1]
	L[97][1] = LargeX[97][0]>0 ? 1 : 0;
	satisfiable[97][1]=1; 
	for(int i=0;i<17;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit97_1[i][0] ][ unit97_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit97_1[i][2] ][ unit97_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit97_1[i][4] ][ unit97_1[i][5] ] >0);
		X_contra = ( LargeX[97][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit97_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[97][0]=0; L[97][1]=1;}
			satisfiable[97][1]=satisfiable[97][1] & ((x[97] ^ 1) | (x[ unit97_1[i][0] ] ^ unit97_1[i][1]) |(x[ unit97_1[i][2] ] ^ unit97_1[i][3]));
			}
		if(X_contra>0) L[97][1]=2;
		}
	//Check all rules of unit[98][0]
	L[98][0] = LargeX[98][1]>0 ? 1 : 0;
	satisfiable[98][0]=1; 
	for(int i=0;i<13;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit98_0[i][0] ][ unit98_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit98_0[i][2] ][ unit98_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit98_0[i][4] ][ unit98_0[i][5] ] >0);
		X_contra = ( LargeX[98][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit98_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[98][1]=0; L[98][0]=1;}
			satisfiable[98][0]=satisfiable[98][0] & ((x[98] ^ 0) | (x[ unit98_0[i][0] ] ^ unit98_0[i][1]) |(x[ unit98_0[i][2] ] ^ unit98_0[i][3]));
			}
		if(X_contra>0) L[98][0]=2;
		}
	//Check all rules of unit[98][1]
	L[98][1] = LargeX[98][0]>0 ? 1 : 0;
	satisfiable[98][1]=1; 
	for(int i=0;i<17;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit98_1[i][0] ][ unit98_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit98_1[i][2] ][ unit98_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit98_1[i][4] ][ unit98_1[i][5] ] >0);
		X_contra = ( LargeX[98][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit98_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[98][0]=0; L[98][1]=1;}
			satisfiable[98][1]=satisfiable[98][1] & ((x[98] ^ 1) | (x[ unit98_1[i][0] ] ^ unit98_1[i][1]) |(x[ unit98_1[i][2] ] ^ unit98_1[i][3]));
			}
		if(X_contra>0) L[98][1]=2;
		}
	//Check all rules of unit[100][0]
	L[100][0] = LargeX[100][1]>0 ? 1 : 0;
	satisfiable[100][0]=1; 
	for(int i=0;i<10;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit100_0[i][0] ][ unit100_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit100_0[i][2] ][ unit100_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit100_0[i][4] ][ unit100_0[i][5] ] >0);
		X_contra = ( LargeX[100][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit100_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[100][1]=0; L[100][0]=1;}
			satisfiable[100][0]=satisfiable[100][0] & ((x[100] ^ 0) | (x[ unit100_0[i][0] ] ^ unit100_0[i][1]) |(x[ unit100_0[i][2] ] ^ unit100_0[i][3]));
			}
		if(X_contra>0) L[100][0]=2;
		}
	//Check all rules of unit[100][1]
	L[100][1] = LargeX[100][0]>0 ? 1 : 0;
	satisfiable[100][1]=1; 
	for(int i=0;i<23;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit100_1[i][0] ][ unit100_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit100_1[i][2] ][ unit100_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit100_1[i][4] ][ unit100_1[i][5] ] >0);
		X_contra = ( LargeX[100][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit100_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[100][0]=0; L[100][1]=1;}
			satisfiable[100][1]=satisfiable[100][1] & ((x[100] ^ 1) | (x[ unit100_1[i][0] ] ^ unit100_1[i][1]) |(x[ unit100_1[i][2] ] ^ unit100_1[i][3]));
			}
		if(X_contra>0) L[100][1]=2;
		}
	//Check all rules of unit[101][0]
	L[101][0] = LargeX[101][1]>0 ? 1 : 0;
	satisfiable[101][0]=1; 
	for(int i=0;i<45;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit101_0[i][0] ][ unit101_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit101_0[i][2] ][ unit101_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit101_0[i][4] ][ unit101_0[i][5] ] >0);
		X_contra = ( LargeX[101][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit101_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[101][1]=0; L[101][0]=1;}
			satisfiable[101][0]=satisfiable[101][0] & ((x[101] ^ 0) | (x[ unit101_0[i][0] ] ^ unit101_0[i][1]) |(x[ unit101_0[i][2] ] ^ unit101_0[i][3]));
			}
		if(X_contra>0) L[101][0]=2;
		}
	//Check all rules of unit[101][1]
	L[101][1] = LargeX[101][0]>0 ? 1 : 0;
	satisfiable[101][1]=1; 
	for(int i=0;i<127;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit101_1[i][0] ][ unit101_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit101_1[i][2] ][ unit101_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit101_1[i][4] ][ unit101_1[i][5] ] >0);
		X_contra = ( LargeX[101][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit101_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[101][0]=0; L[101][1]=1;}
			satisfiable[101][1]=satisfiable[101][1] & ((x[101] ^ 1) | (x[ unit101_1[i][0] ] ^ unit101_1[i][1]) |(x[ unit101_1[i][2] ] ^ unit101_1[i][3]));
			}
		if(X_contra>0) L[101][1]=2;
		}
	//Check all rules of unit[102][0]
	L[102][0] = LargeX[102][1]>0 ? 1 : 0;
	satisfiable[102][0]=1; 
	for(int i=0;i<48;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit102_0[i][0] ][ unit102_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit102_0[i][2] ][ unit102_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit102_0[i][4] ][ unit102_0[i][5] ] >0);
		X_contra = ( LargeX[102][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit102_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[102][1]=0; L[102][0]=1;}
			satisfiable[102][0]=satisfiable[102][0] & ((x[102] ^ 0) | (x[ unit102_0[i][0] ] ^ unit102_0[i][1]) |(x[ unit102_0[i][2] ] ^ unit102_0[i][3]));
			}
		if(X_contra>0) L[102][0]=2;
		}
	//Check all rules of unit[102][1]
	L[102][1] = LargeX[102][0]>0 ? 1 : 0;
	satisfiable[102][1]=1; 
	for(int i=0;i<119;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit102_1[i][0] ][ unit102_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit102_1[i][2] ][ unit102_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit102_1[i][4] ][ unit102_1[i][5] ] >0);
		X_contra = ( LargeX[102][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit102_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[102][0]=0; L[102][1]=1;}
			satisfiable[102][1]=satisfiable[102][1] & ((x[102] ^ 1) | (x[ unit102_1[i][0] ] ^ unit102_1[i][1]) |(x[ unit102_1[i][2] ] ^ unit102_1[i][3]));
			}
		if(X_contra>0) L[102][1]=2;
		}
	//Check all rules of unit[103][0]
	L[103][0] = LargeX[103][1]>0 ? 1 : 0;
	satisfiable[103][0]=1; 
	for(int i=0;i<37;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit103_0[i][0] ][ unit103_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit103_0[i][2] ][ unit103_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit103_0[i][4] ][ unit103_0[i][5] ] >0);
		X_contra = ( LargeX[103][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit103_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[103][1]=0; L[103][0]=1;}
			satisfiable[103][0]=satisfiable[103][0] & ((x[103] ^ 0) | (x[ unit103_0[i][0] ] ^ unit103_0[i][1]) |(x[ unit103_0[i][2] ] ^ unit103_0[i][3]));
			}
		if(X_contra>0) L[103][0]=2;
		}
	//Check all rules of unit[103][1]
	L[103][1] = LargeX[103][0]>0 ? 1 : 0;
	satisfiable[103][1]=1; 
	for(int i=0;i<101;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit103_1[i][0] ][ unit103_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit103_1[i][2] ][ unit103_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit103_1[i][4] ][ unit103_1[i][5] ] >0);
		X_contra = ( LargeX[103][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit103_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[103][0]=0; L[103][1]=1;}
			satisfiable[103][1]=satisfiable[103][1] & ((x[103] ^ 1) | (x[ unit103_1[i][0] ] ^ unit103_1[i][1]) |(x[ unit103_1[i][2] ] ^ unit103_1[i][3]));
			}
		if(X_contra>0) L[103][1]=2;
		}
	//Check all rules of unit[104][0]
	L[104][0] = LargeX[104][1]>0 ? 1 : 0;
	satisfiable[104][0]=1; 
	for(int i=0;i<38;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit104_0[i][0] ][ unit104_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit104_0[i][2] ][ unit104_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit104_0[i][4] ][ unit104_0[i][5] ] >0);
		X_contra = ( LargeX[104][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit104_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[104][1]=0; L[104][0]=1;}
			satisfiable[104][0]=satisfiable[104][0] & ((x[104] ^ 0) | (x[ unit104_0[i][0] ] ^ unit104_0[i][1]) |(x[ unit104_0[i][2] ] ^ unit104_0[i][3]));
			}
		if(X_contra>0) L[104][0]=2;
		}
	//Check all rules of unit[104][1]
	L[104][1] = LargeX[104][0]>0 ? 1 : 0;
	satisfiable[104][1]=1; 
	for(int i=0;i<96;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit104_1[i][0] ][ unit104_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit104_1[i][2] ][ unit104_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit104_1[i][4] ][ unit104_1[i][5] ] >0);
		X_contra = ( LargeX[104][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit104_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[104][0]=0; L[104][1]=1;}
			satisfiable[104][1]=satisfiable[104][1] & ((x[104] ^ 1) | (x[ unit104_1[i][0] ] ^ unit104_1[i][1]) |(x[ unit104_1[i][2] ] ^ unit104_1[i][3]));
			}
		if(X_contra>0) L[104][1]=2;
		}
	//Check all rules of unit[105][0]
	L[105][0] = LargeX[105][1]>0 ? 1 : 0;
	satisfiable[105][0]=1; 
	for(int i=0;i<32;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit105_0[i][0] ][ unit105_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit105_0[i][2] ][ unit105_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit105_0[i][4] ][ unit105_0[i][5] ] >0);
		X_contra = ( LargeX[105][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit105_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[105][1]=0; L[105][0]=1;}
			satisfiable[105][0]=satisfiable[105][0] & ((x[105] ^ 0) | (x[ unit105_0[i][0] ] ^ unit105_0[i][1]) |(x[ unit105_0[i][2] ] ^ unit105_0[i][3]));
			}
		if(X_contra>0) L[105][0]=2;
		}
	//Check all rules of unit[105][1]
	L[105][1] = LargeX[105][0]>0 ? 1 : 0;
	satisfiable[105][1]=1; 
	for(int i=0;i<86;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit105_1[i][0] ][ unit105_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit105_1[i][2] ][ unit105_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit105_1[i][4] ][ unit105_1[i][5] ] >0);
		X_contra = ( LargeX[105][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit105_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[105][0]=0; L[105][1]=1;}
			satisfiable[105][1]=satisfiable[105][1] & ((x[105] ^ 1) | (x[ unit105_1[i][0] ] ^ unit105_1[i][1]) |(x[ unit105_1[i][2] ] ^ unit105_1[i][3]));
			}
		if(X_contra>0) L[105][1]=2;
		}
	//Check all rules of unit[106][0]
	L[106][0] = LargeX[106][1]>0 ? 1 : 0;
	satisfiable[106][0]=1; 
	for(int i=0;i<34;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit106_0[i][0] ][ unit106_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit106_0[i][2] ][ unit106_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit106_0[i][4] ][ unit106_0[i][5] ] >0);
		X_contra = ( LargeX[106][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit106_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[106][1]=0; L[106][0]=1;}
			satisfiable[106][0]=satisfiable[106][0] & ((x[106] ^ 0) | (x[ unit106_0[i][0] ] ^ unit106_0[i][1]) |(x[ unit106_0[i][2] ] ^ unit106_0[i][3]));
			}
		if(X_contra>0) L[106][0]=2;
		}
	//Check all rules of unit[106][1]
	L[106][1] = LargeX[106][0]>0 ? 1 : 0;
	satisfiable[106][1]=1; 
	for(int i=0;i<80;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit106_1[i][0] ][ unit106_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit106_1[i][2] ][ unit106_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit106_1[i][4] ][ unit106_1[i][5] ] >0);
		X_contra = ( LargeX[106][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit106_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[106][0]=0; L[106][1]=1;}
			satisfiable[106][1]=satisfiable[106][1] & ((x[106] ^ 1) | (x[ unit106_1[i][0] ] ^ unit106_1[i][1]) |(x[ unit106_1[i][2] ] ^ unit106_1[i][3]));
			}
		if(X_contra>0) L[106][1]=2;
		}
	//Check all rules of unit[107][0]
	L[107][0] = LargeX[107][1]>0 ? 1 : 0;
	satisfiable[107][0]=1; 
	for(int i=0;i<23;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit107_0[i][0] ][ unit107_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit107_0[i][2] ][ unit107_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit107_0[i][4] ][ unit107_0[i][5] ] >0);
		X_contra = ( LargeX[107][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit107_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[107][1]=0; L[107][0]=1;}
			satisfiable[107][0]=satisfiable[107][0] & ((x[107] ^ 0) | (x[ unit107_0[i][0] ] ^ unit107_0[i][1]) |(x[ unit107_0[i][2] ] ^ unit107_0[i][3]));
			}
		if(X_contra>0) L[107][0]=2;
		}
	//Check all rules of unit[107][1]
	L[107][1] = LargeX[107][0]>0 ? 1 : 0;
	satisfiable[107][1]=1; 
	for(int i=0;i<65;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit107_1[i][0] ][ unit107_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit107_1[i][2] ][ unit107_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit107_1[i][4] ][ unit107_1[i][5] ] >0);
		X_contra = ( LargeX[107][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit107_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[107][0]=0; L[107][1]=1;}
			satisfiable[107][1]=satisfiable[107][1] & ((x[107] ^ 1) | (x[ unit107_1[i][0] ] ^ unit107_1[i][1]) |(x[ unit107_1[i][2] ] ^ unit107_1[i][3]));
			}
		if(X_contra>0) L[107][1]=2;
		}
	//Check all rules of unit[108][0]
	L[108][0] = LargeX[108][1]>0 ? 1 : 0;
	satisfiable[108][0]=1; 
	for(int i=0;i<26;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit108_0[i][0] ][ unit108_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit108_0[i][2] ][ unit108_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit108_0[i][4] ][ unit108_0[i][5] ] >0);
		X_contra = ( LargeX[108][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit108_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[108][1]=0; L[108][0]=1;}
			satisfiable[108][0]=satisfiable[108][0] & ((x[108] ^ 0) | (x[ unit108_0[i][0] ] ^ unit108_0[i][1]) |(x[ unit108_0[i][2] ] ^ unit108_0[i][3]));
			}
		if(X_contra>0) L[108][0]=2;
		}
	//Check all rules of unit[108][1]
	L[108][1] = LargeX[108][0]>0 ? 1 : 0;
	satisfiable[108][1]=1; 
	for(int i=0;i<57;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit108_1[i][0] ][ unit108_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit108_1[i][2] ][ unit108_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit108_1[i][4] ][ unit108_1[i][5] ] >0);
		X_contra = ( LargeX[108][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit108_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[108][0]=0; L[108][1]=1;}
			satisfiable[108][1]=satisfiable[108][1] & ((x[108] ^ 1) | (x[ unit108_1[i][0] ] ^ unit108_1[i][1]) |(x[ unit108_1[i][2] ] ^ unit108_1[i][3]));
			}
		if(X_contra>0) L[108][1]=2;
		}
	//Check all rules of unit[109][0]
	L[109][0] = LargeX[109][1]>0 ? 1 : 0;
	satisfiable[109][0]=1; 
	for(int i=0;i<21;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit109_0[i][0] ][ unit109_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit109_0[i][2] ][ unit109_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit109_0[i][4] ][ unit109_0[i][5] ] >0);
		X_contra = ( LargeX[109][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit109_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[109][1]=0; L[109][0]=1;}
			satisfiable[109][0]=satisfiable[109][0] & ((x[109] ^ 0) | (x[ unit109_0[i][0] ] ^ unit109_0[i][1]) |(x[ unit109_0[i][2] ] ^ unit109_0[i][3]));
			}
		if(X_contra>0) L[109][0]=2;
		}
	//Check all rules of unit[109][1]
	L[109][1] = LargeX[109][0]>0 ? 1 : 0;
	satisfiable[109][1]=1; 
	for(int i=0;i<53;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit109_1[i][0] ][ unit109_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit109_1[i][2] ][ unit109_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit109_1[i][4] ][ unit109_1[i][5] ] >0);
		X_contra = ( LargeX[109][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit109_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[109][0]=0; L[109][1]=1;}
			satisfiable[109][1]=satisfiable[109][1] & ((x[109] ^ 1) | (x[ unit109_1[i][0] ] ^ unit109_1[i][1]) |(x[ unit109_1[i][2] ] ^ unit109_1[i][3]));
			}
		if(X_contra>0) L[109][1]=2;
		}
	//Check all rules of unit[110][0]
	L[110][0] = LargeX[110][1]>0 ? 1 : 0;
	satisfiable[110][0]=1; 
	for(int i=0;i<25;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit110_0[i][0] ][ unit110_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit110_0[i][2] ][ unit110_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit110_0[i][4] ][ unit110_0[i][5] ] >0);
		X_contra = ( LargeX[110][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit110_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[110][1]=0; L[110][0]=1;}
			satisfiable[110][0]=satisfiable[110][0] & ((x[110] ^ 0) | (x[ unit110_0[i][0] ] ^ unit110_0[i][1]) |(x[ unit110_0[i][2] ] ^ unit110_0[i][3]));
			}
		if(X_contra>0) L[110][0]=2;
		}
	//Check all rules of unit[110][1]
	L[110][1] = LargeX[110][0]>0 ? 1 : 0;
	satisfiable[110][1]=1; 
	for(int i=0;i<40;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit110_1[i][0] ][ unit110_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit110_1[i][2] ][ unit110_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit110_1[i][4] ][ unit110_1[i][5] ] >0);
		X_contra = ( LargeX[110][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit110_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[110][0]=0; L[110][1]=1;}
			satisfiable[110][1]=satisfiable[110][1] & ((x[110] ^ 1) | (x[ unit110_1[i][0] ] ^ unit110_1[i][1]) |(x[ unit110_1[i][2] ] ^ unit110_1[i][3]));
			}
		if(X_contra>0) L[110][1]=2;
		}
	//Check all rules of unit[111][0]
	L[111][0] = LargeX[111][1]>0 ? 1 : 0;
	satisfiable[111][0]=1; 
	for(int i=0;i<20;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit111_0[i][0] ][ unit111_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit111_0[i][2] ][ unit111_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit111_0[i][4] ][ unit111_0[i][5] ] >0);
		X_contra = ( LargeX[111][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit111_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[111][1]=0; L[111][0]=1;}
			satisfiable[111][0]=satisfiable[111][0] & ((x[111] ^ 0) | (x[ unit111_0[i][0] ] ^ unit111_0[i][1]) |(x[ unit111_0[i][2] ] ^ unit111_0[i][3]));
			}
		if(X_contra>0) L[111][0]=2;
		}
	//Check all rules of unit[111][1]
	L[111][1] = LargeX[111][0]>0 ? 1 : 0;
	satisfiable[111][1]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit111_1[i][0] ][ unit111_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit111_1[i][2] ][ unit111_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit111_1[i][4] ][ unit111_1[i][5] ] >0);
		X_contra = ( LargeX[111][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit111_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[111][0]=0; L[111][1]=1;}
			satisfiable[111][1]=satisfiable[111][1] & ((x[111] ^ 1) | (x[ unit111_1[i][0] ] ^ unit111_1[i][1]) |(x[ unit111_1[i][2] ] ^ unit111_1[i][3]));
			}
		if(X_contra>0) L[111][1]=2;
		}
	//Check all rules of unit[112][0]
	L[112][0] = LargeX[112][1]>0 ? 1 : 0;
	satisfiable[112][0]=1; 
	for(int i=0;i<18;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit112_0[i][0] ][ unit112_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit112_0[i][2] ][ unit112_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit112_0[i][4] ][ unit112_0[i][5] ] >0);
		X_contra = ( LargeX[112][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit112_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[112][1]=0; L[112][0]=1;}
			satisfiable[112][0]=satisfiable[112][0] & ((x[112] ^ 0) | (x[ unit112_0[i][0] ] ^ unit112_0[i][1]) |(x[ unit112_0[i][2] ] ^ unit112_0[i][3]));
			}
		if(X_contra>0) L[112][0]=2;
		}
	//Check all rules of unit[112][1]
	L[112][1] = LargeX[112][0]>0 ? 1 : 0;
	satisfiable[112][1]=1; 
	for(int i=0;i<42;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit112_1[i][0] ][ unit112_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit112_1[i][2] ][ unit112_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit112_1[i][4] ][ unit112_1[i][5] ] >0);
		X_contra = ( LargeX[112][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit112_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[112][0]=0; L[112][1]=1;}
			satisfiable[112][1]=satisfiable[112][1] & ((x[112] ^ 1) | (x[ unit112_1[i][0] ] ^ unit112_1[i][1]) |(x[ unit112_1[i][2] ] ^ unit112_1[i][3]));
			}
		if(X_contra>0) L[112][1]=2;
		}
	//Check all rules of unit[113][0]
	L[113][0] = LargeX[113][1]>0 ? 1 : 0;
	satisfiable[113][0]=1; 
	for(int i=0;i<25;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit113_0[i][0] ][ unit113_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit113_0[i][2] ][ unit113_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit113_0[i][4] ][ unit113_0[i][5] ] >0);
		X_contra = ( LargeX[113][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit113_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[113][1]=0; L[113][0]=1;}
			satisfiable[113][0]=satisfiable[113][0] & ((x[113] ^ 0) | (x[ unit113_0[i][0] ] ^ unit113_0[i][1]) |(x[ unit113_0[i][2] ] ^ unit113_0[i][3]));
			}
		if(X_contra>0) L[113][0]=2;
		}
	//Check all rules of unit[113][1]
	L[113][1] = LargeX[113][0]>0 ? 1 : 0;
	satisfiable[113][1]=1; 
	for(int i=0;i<51;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit113_1[i][0] ][ unit113_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit113_1[i][2] ][ unit113_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit113_1[i][4] ][ unit113_1[i][5] ] >0);
		X_contra = ( LargeX[113][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit113_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[113][0]=0; L[113][1]=1;}
			satisfiable[113][1]=satisfiable[113][1] & ((x[113] ^ 1) | (x[ unit113_1[i][0] ] ^ unit113_1[i][1]) |(x[ unit113_1[i][2] ] ^ unit113_1[i][3]));
			}
		if(X_contra>0) L[113][1]=2;
		}
	//Check all rules of unit[114][0]
	L[114][0] = LargeX[114][1]>0 ? 1 : 0;
	satisfiable[114][0]=1; 
	for(int i=0;i<23;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit114_0[i][0] ][ unit114_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit114_0[i][2] ][ unit114_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit114_0[i][4] ][ unit114_0[i][5] ] >0);
		X_contra = ( LargeX[114][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit114_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[114][1]=0; L[114][0]=1;}
			satisfiable[114][0]=satisfiable[114][0] & ((x[114] ^ 0) | (x[ unit114_0[i][0] ] ^ unit114_0[i][1]) |(x[ unit114_0[i][2] ] ^ unit114_0[i][3]));
			}
		if(X_contra>0) L[114][0]=2;
		}
	//Check all rules of unit[114][1]
	L[114][1] = LargeX[114][0]>0 ? 1 : 0;
	satisfiable[114][1]=1; 
	for(int i=0;i<58;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit114_1[i][0] ][ unit114_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit114_1[i][2] ][ unit114_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit114_1[i][4] ][ unit114_1[i][5] ] >0);
		X_contra = ( LargeX[114][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit114_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[114][0]=0; L[114][1]=1;}
			satisfiable[114][1]=satisfiable[114][1] & ((x[114] ^ 1) | (x[ unit114_1[i][0] ] ^ unit114_1[i][1]) |(x[ unit114_1[i][2] ] ^ unit114_1[i][3]));
			}
		if(X_contra>0) L[114][1]=2;
		}
	//Check all rules of unit[115][0]
	L[115][0] = LargeX[115][1]>0 ? 1 : 0;
	satisfiable[115][0]=1; 
	for(int i=0;i<33;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit115_0[i][0] ][ unit115_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit115_0[i][2] ][ unit115_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit115_0[i][4] ][ unit115_0[i][5] ] >0);
		X_contra = ( LargeX[115][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit115_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[115][1]=0; L[115][0]=1;}
			satisfiable[115][0]=satisfiable[115][0] & ((x[115] ^ 0) | (x[ unit115_0[i][0] ] ^ unit115_0[i][1]) |(x[ unit115_0[i][2] ] ^ unit115_0[i][3]));
			}
		if(X_contra>0) L[115][0]=2;
		}
	//Check all rules of unit[115][1]
	L[115][1] = LargeX[115][0]>0 ? 1 : 0;
	satisfiable[115][1]=1; 
	for(int i=0;i<69;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit115_1[i][0] ][ unit115_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit115_1[i][2] ][ unit115_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit115_1[i][4] ][ unit115_1[i][5] ] >0);
		X_contra = ( LargeX[115][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit115_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[115][0]=0; L[115][1]=1;}
			satisfiable[115][1]=satisfiable[115][1] & ((x[115] ^ 1) | (x[ unit115_1[i][0] ] ^ unit115_1[i][1]) |(x[ unit115_1[i][2] ] ^ unit115_1[i][3]));
			}
		if(X_contra>0) L[115][1]=2;
		}
	//Check all rules of unit[116][0]
	L[116][0] = LargeX[116][1]>0 ? 1 : 0;
	satisfiable[116][0]=1; 
	for(int i=0;i<29;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit116_0[i][0] ][ unit116_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit116_0[i][2] ][ unit116_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit116_0[i][4] ][ unit116_0[i][5] ] >0);
		X_contra = ( LargeX[116][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit116_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[116][1]=0; L[116][0]=1;}
			satisfiable[116][0]=satisfiable[116][0] & ((x[116] ^ 0) | (x[ unit116_0[i][0] ] ^ unit116_0[i][1]) |(x[ unit116_0[i][2] ] ^ unit116_0[i][3]));
			}
		if(X_contra>0) L[116][0]=2;
		}
	//Check all rules of unit[116][1]
	L[116][1] = LargeX[116][0]>0 ? 1 : 0;
	satisfiable[116][1]=1; 
	for(int i=0;i<80;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit116_1[i][0] ][ unit116_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit116_1[i][2] ][ unit116_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit116_1[i][4] ][ unit116_1[i][5] ] >0);
		X_contra = ( LargeX[116][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit116_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[116][0]=0; L[116][1]=1;}
			satisfiable[116][1]=satisfiable[116][1] & ((x[116] ^ 1) | (x[ unit116_1[i][0] ] ^ unit116_1[i][1]) |(x[ unit116_1[i][2] ] ^ unit116_1[i][3]));
			}
		if(X_contra>0) L[116][1]=2;
		}
	//Check all rules of unit[117][0]
	L[117][0] = LargeX[117][1]>0 ? 1 : 0;
	satisfiable[117][0]=1; 
	for(int i=0;i<37;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit117_0[i][0] ][ unit117_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit117_0[i][2] ][ unit117_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit117_0[i][4] ][ unit117_0[i][5] ] >0);
		X_contra = ( LargeX[117][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit117_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[117][1]=0; L[117][0]=1;}
			satisfiable[117][0]=satisfiable[117][0] & ((x[117] ^ 0) | (x[ unit117_0[i][0] ] ^ unit117_0[i][1]) |(x[ unit117_0[i][2] ] ^ unit117_0[i][3]));
			}
		if(X_contra>0) L[117][0]=2;
		}
	//Check all rules of unit[117][1]
	L[117][1] = LargeX[117][0]>0 ? 1 : 0;
	satisfiable[117][1]=1; 
	for(int i=0;i<87;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit117_1[i][0] ][ unit117_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit117_1[i][2] ][ unit117_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit117_1[i][4] ][ unit117_1[i][5] ] >0);
		X_contra = ( LargeX[117][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit117_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[117][0]=0; L[117][1]=1;}
			satisfiable[117][1]=satisfiable[117][1] & ((x[117] ^ 1) | (x[ unit117_1[i][0] ] ^ unit117_1[i][1]) |(x[ unit117_1[i][2] ] ^ unit117_1[i][3]));
			}
		if(X_contra>0) L[117][1]=2;
		}
	//Check all rules of unit[118][0]
	L[118][0] = LargeX[118][1]>0 ? 1 : 0;
	satisfiable[118][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit118_0[i][0] ][ unit118_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit118_0[i][2] ][ unit118_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit118_0[i][4] ][ unit118_0[i][5] ] >0);
		X_contra = ( LargeX[118][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit118_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[118][1]=0; L[118][0]=1;}
			satisfiable[118][0]=satisfiable[118][0] & ((x[118] ^ 0) | (x[ unit118_0[i][0] ] ^ unit118_0[i][1]) |(x[ unit118_0[i][2] ] ^ unit118_0[i][3]));
			}
		if(X_contra>0) L[118][0]=2;
		}
	//Check all rules of unit[118][1]
	L[118][1] = LargeX[118][0]>0 ? 1 : 0;
	satisfiable[118][1]=1; 
	for(int i=0;i<94;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit118_1[i][0] ][ unit118_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit118_1[i][2] ][ unit118_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit118_1[i][4] ][ unit118_1[i][5] ] >0);
		X_contra = ( LargeX[118][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit118_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[118][0]=0; L[118][1]=1;}
			satisfiable[118][1]=satisfiable[118][1] & ((x[118] ^ 1) | (x[ unit118_1[i][0] ] ^ unit118_1[i][1]) |(x[ unit118_1[i][2] ] ^ unit118_1[i][3]));
			}
		if(X_contra>0) L[118][1]=2;
		}
	//Check all rules of unit[119][0]
	L[119][0] = LargeX[119][1]>0 ? 1 : 0;
	satisfiable[119][0]=1; 
	for(int i=0;i<83;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit119_0[i][0] ][ unit119_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit119_0[i][2] ][ unit119_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit119_0[i][4] ][ unit119_0[i][5] ] >0);
		X_contra = ( LargeX[119][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit119_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[119][1]=0; L[119][0]=1;}
			satisfiable[119][0]=satisfiable[119][0] & ((x[119] ^ 0) | (x[ unit119_0[i][0] ] ^ unit119_0[i][1]) |(x[ unit119_0[i][2] ] ^ unit119_0[i][3]));
			}
		if(X_contra>0) L[119][0]=2;
		}
	//Check all rules of unit[119][1]
	L[119][1] = LargeX[119][0]>0 ? 1 : 0;
	satisfiable[119][1]=1; 
	for(int i=0;i<101;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit119_1[i][0] ][ unit119_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit119_1[i][2] ][ unit119_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit119_1[i][4] ][ unit119_1[i][5] ] >0);
		X_contra = ( LargeX[119][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit119_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[119][0]=0; L[119][1]=1;}
			satisfiable[119][1]=satisfiable[119][1] & ((x[119] ^ 1) | (x[ unit119_1[i][0] ] ^ unit119_1[i][1]) |(x[ unit119_1[i][2] ] ^ unit119_1[i][3]));
			}
		if(X_contra>0) L[119][1]=2;
		}
	//Check all rules of unit[120][0]
	L[120][0] = LargeX[120][1]>0 ? 1 : 0;
	satisfiable[120][0]=1; 
	for(int i=0;i<79;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit120_0[i][0] ][ unit120_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit120_0[i][2] ][ unit120_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit120_0[i][4] ][ unit120_0[i][5] ] >0);
		X_contra = ( LargeX[120][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit120_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[120][1]=0; L[120][0]=1;}
			satisfiable[120][0]=satisfiable[120][0] & ((x[120] ^ 0) | (x[ unit120_0[i][0] ] ^ unit120_0[i][1]) |(x[ unit120_0[i][2] ] ^ unit120_0[i][3]));
			}
		if(X_contra>0) L[120][0]=2;
		}
	//Check all rules of unit[120][1]
	L[120][1] = LargeX[120][0]>0 ? 1 : 0;
	satisfiable[120][1]=1; 
	for(int i=0;i<107;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit120_1[i][0] ][ unit120_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit120_1[i][2] ][ unit120_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit120_1[i][4] ][ unit120_1[i][5] ] >0);
		X_contra = ( LargeX[120][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit120_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[120][0]=0; L[120][1]=1;}
			satisfiable[120][1]=satisfiable[120][1] & ((x[120] ^ 1) | (x[ unit120_1[i][0] ] ^ unit120_1[i][1]) |(x[ unit120_1[i][2] ] ^ unit120_1[i][3]));
			}
		if(X_contra>0) L[120][1]=2;
		}
	//Check all rules of unit[131][0]
	L[131][0] = LargeX[131][1]>0 ? 1 : 0;
	satisfiable[131][0]=1; 
	for(int i=0;i<20;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit131_0[i][0] ][ unit131_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit131_0[i][2] ][ unit131_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit131_0[i][4] ][ unit131_0[i][5] ] >0);
		X_contra = ( LargeX[131][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit131_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[131][1]=0; L[131][0]=1;}
			satisfiable[131][0]=satisfiable[131][0] & ((x[131] ^ 0) | (x[ unit131_0[i][0] ] ^ unit131_0[i][1]) |(x[ unit131_0[i][2] ] ^ unit131_0[i][3]));
			}
		if(X_contra>0) L[131][0]=2;
		}
	//Check all rules of unit[131][1]
	L[131][1] = LargeX[131][0]>0 ? 1 : 0;
	satisfiable[131][1]=1; 
	for(int i=0;i<48;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit131_1[i][0] ][ unit131_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit131_1[i][2] ][ unit131_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit131_1[i][4] ][ unit131_1[i][5] ] >0);
		X_contra = ( LargeX[131][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit131_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[131][0]=0; L[131][1]=1;}
			satisfiable[131][1]=satisfiable[131][1] & ((x[131] ^ 1) | (x[ unit131_1[i][0] ] ^ unit131_1[i][1]) |(x[ unit131_1[i][2] ] ^ unit131_1[i][3]));
			}
		if(X_contra>0) L[131][1]=2;
		}
	//Check all rules of unit[132][0]
	L[132][0] = LargeX[132][1]>0 ? 1 : 0;
	satisfiable[132][0]=1; 
	for(int i=0;i<21;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit132_0[i][0] ][ unit132_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit132_0[i][2] ][ unit132_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit132_0[i][4] ][ unit132_0[i][5] ] >0);
		X_contra = ( LargeX[132][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit132_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[132][1]=0; L[132][0]=1;}
			satisfiable[132][0]=satisfiable[132][0] & ((x[132] ^ 0) | (x[ unit132_0[i][0] ] ^ unit132_0[i][1]) |(x[ unit132_0[i][2] ] ^ unit132_0[i][3]));
			}
		if(X_contra>0) L[132][0]=2;
		}
	//Check all rules of unit[132][1]
	L[132][1] = LargeX[132][0]>0 ? 1 : 0;
	satisfiable[132][1]=1; 
	for(int i=0;i<45;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit132_1[i][0] ][ unit132_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit132_1[i][2] ][ unit132_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit132_1[i][4] ][ unit132_1[i][5] ] >0);
		X_contra = ( LargeX[132][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit132_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[132][0]=0; L[132][1]=1;}
			satisfiable[132][1]=satisfiable[132][1] & ((x[132] ^ 1) | (x[ unit132_1[i][0] ] ^ unit132_1[i][1]) |(x[ unit132_1[i][2] ] ^ unit132_1[i][3]));
			}
		if(X_contra>0) L[132][1]=2;
		}
	//Check all rules of unit[134][0]
	L[134][0] = LargeX[134][1]>0 ? 1 : 0;
	satisfiable[134][0]=1; 
	for(int i=0;i<15;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit134_0[i][0] ][ unit134_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit134_0[i][2] ][ unit134_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit134_0[i][4] ][ unit134_0[i][5] ] >0);
		X_contra = ( LargeX[134][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit134_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[134][1]=0; L[134][0]=1;}
			satisfiable[134][0]=satisfiable[134][0] & ((x[134] ^ 0) | (x[ unit134_0[i][0] ] ^ unit134_0[i][1]) |(x[ unit134_0[i][2] ] ^ unit134_0[i][3]));
			}
		if(X_contra>0) L[134][0]=2;
		}
	//Check all rules of unit[134][1]
	L[134][1] = LargeX[134][0]>0 ? 1 : 0;
	satisfiable[134][1]=1; 
	for(int i=0;i<53;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit134_1[i][0] ][ unit134_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit134_1[i][2] ][ unit134_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit134_1[i][4] ][ unit134_1[i][5] ] >0);
		X_contra = ( LargeX[134][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit134_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[134][0]=0; L[134][1]=1;}
			satisfiable[134][1]=satisfiable[134][1] & ((x[134] ^ 1) | (x[ unit134_1[i][0] ] ^ unit134_1[i][1]) |(x[ unit134_1[i][2] ] ^ unit134_1[i][3]));
			}
		if(X_contra>0) L[134][1]=2;
		}
	//Check all rules of unit[135][0]
	L[135][0] = LargeX[135][1]>0 ? 1 : 0;
	satisfiable[135][0]=1; 
	for(int i=0;i<22;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit135_0[i][0] ][ unit135_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit135_0[i][2] ][ unit135_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit135_0[i][4] ][ unit135_0[i][5] ] >0);
		X_contra = ( LargeX[135][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit135_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[135][1]=0; L[135][0]=1;}
			satisfiable[135][0]=satisfiable[135][0] & ((x[135] ^ 0) | (x[ unit135_0[i][0] ] ^ unit135_0[i][1]) |(x[ unit135_0[i][2] ] ^ unit135_0[i][3]));
			}
		if(X_contra>0) L[135][0]=2;
		}
	//Check all rules of unit[135][1]
	L[135][1] = LargeX[135][0]>0 ? 1 : 0;
	satisfiable[135][1]=1; 
	for(int i=0;i<32;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit135_1[i][0] ][ unit135_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit135_1[i][2] ][ unit135_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit135_1[i][4] ][ unit135_1[i][5] ] >0);
		X_contra = ( LargeX[135][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit135_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[135][0]=0; L[135][1]=1;}
			satisfiable[135][1]=satisfiable[135][1] & ((x[135] ^ 1) | (x[ unit135_1[i][0] ] ^ unit135_1[i][1]) |(x[ unit135_1[i][2] ] ^ unit135_1[i][3]));
			}
		if(X_contra>0) L[135][1]=2;
		}
	//Check all rules of unit[140][0]
	L[140][0] = LargeX[140][1]>0 ? 1 : 0;
	satisfiable[140][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit140_0[i][0] ][ unit140_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit140_0[i][2] ][ unit140_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit140_0[i][4] ][ unit140_0[i][5] ] >0);
		X_contra = ( LargeX[140][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit140_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[140][1]=0; L[140][0]=1;}
			satisfiable[140][0]=satisfiable[140][0] & ((x[140] ^ 0) | (x[ unit140_0[i][0] ] ^ unit140_0[i][1]) |(x[ unit140_0[i][2] ] ^ unit140_0[i][3]));
			}
		if(X_contra>0) L[140][0]=2;
		}
	//Check all rules of unit[140][1]
	L[140][1] = LargeX[140][0]>0 ? 1 : 0;
	satisfiable[140][1]=1; 
	for(int i=0;i<26;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit140_1[i][0] ][ unit140_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit140_1[i][2] ][ unit140_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit140_1[i][4] ][ unit140_1[i][5] ] >0);
		X_contra = ( LargeX[140][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit140_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[140][0]=0; L[140][1]=1;}
			satisfiable[140][1]=satisfiable[140][1] & ((x[140] ^ 1) | (x[ unit140_1[i][0] ] ^ unit140_1[i][1]) |(x[ unit140_1[i][2] ] ^ unit140_1[i][3]));
			}
		if(X_contra>0) L[140][1]=2;
		}
	//Check all rules of unit[141][0]
	L[141][0] = LargeX[141][1]>0 ? 1 : 0;
	satisfiable[141][0]=1; 
	for(int i=0;i<44;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit141_0[i][0] ][ unit141_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit141_0[i][2] ][ unit141_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit141_0[i][4] ][ unit141_0[i][5] ] >0);
		X_contra = ( LargeX[141][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit141_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[141][1]=0; L[141][0]=1;}
			satisfiable[141][0]=satisfiable[141][0] & ((x[141] ^ 0) | (x[ unit141_0[i][0] ] ^ unit141_0[i][1]) |(x[ unit141_0[i][2] ] ^ unit141_0[i][3]));
			}
		if(X_contra>0) L[141][0]=2;
		}
	//Check all rules of unit[141][1]
	L[141][1] = LargeX[141][0]>0 ? 1 : 0;
	satisfiable[141][1]=1; 
	for(int i=0;i<125;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit141_1[i][0] ][ unit141_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit141_1[i][2] ][ unit141_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit141_1[i][4] ][ unit141_1[i][5] ] >0);
		X_contra = ( LargeX[141][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit141_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[141][0]=0; L[141][1]=1;}
			satisfiable[141][1]=satisfiable[141][1] & ((x[141] ^ 1) | (x[ unit141_1[i][0] ] ^ unit141_1[i][1]) |(x[ unit141_1[i][2] ] ^ unit141_1[i][3]));
			}
		if(X_contra>0) L[141][1]=2;
		}
	//Check all rules of unit[142][0]
	L[142][0] = LargeX[142][1]>0 ? 1 : 0;
	satisfiable[142][0]=1; 
	for(int i=0;i<47;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit142_0[i][0] ][ unit142_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit142_0[i][2] ][ unit142_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit142_0[i][4] ][ unit142_0[i][5] ] >0);
		X_contra = ( LargeX[142][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit142_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[142][1]=0; L[142][0]=1;}
			satisfiable[142][0]=satisfiable[142][0] & ((x[142] ^ 0) | (x[ unit142_0[i][0] ] ^ unit142_0[i][1]) |(x[ unit142_0[i][2] ] ^ unit142_0[i][3]));
			}
		if(X_contra>0) L[142][0]=2;
		}
	//Check all rules of unit[142][1]
	L[142][1] = LargeX[142][0]>0 ? 1 : 0;
	satisfiable[142][1]=1; 
	for(int i=0;i<118;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit142_1[i][0] ][ unit142_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit142_1[i][2] ][ unit142_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit142_1[i][4] ][ unit142_1[i][5] ] >0);
		X_contra = ( LargeX[142][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit142_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[142][0]=0; L[142][1]=1;}
			satisfiable[142][1]=satisfiable[142][1] & ((x[142] ^ 1) | (x[ unit142_1[i][0] ] ^ unit142_1[i][1]) |(x[ unit142_1[i][2] ] ^ unit142_1[i][3]));
			}
		if(X_contra>0) L[142][1]=2;
		}
	//Check all rules of unit[143][0]
	L[143][0] = LargeX[143][1]>0 ? 1 : 0;
	satisfiable[143][0]=1; 
	for(int i=0;i<36;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit143_0[i][0] ][ unit143_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit143_0[i][2] ][ unit143_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit143_0[i][4] ][ unit143_0[i][5] ] >0);
		X_contra = ( LargeX[143][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit143_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[143][1]=0; L[143][0]=1;}
			satisfiable[143][0]=satisfiable[143][0] & ((x[143] ^ 0) | (x[ unit143_0[i][0] ] ^ unit143_0[i][1]) |(x[ unit143_0[i][2] ] ^ unit143_0[i][3]));
			}
		if(X_contra>0) L[143][0]=2;
		}
	//Check all rules of unit[143][1]
	L[143][1] = LargeX[143][0]>0 ? 1 : 0;
	satisfiable[143][1]=1; 
	for(int i=0;i<115;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit143_1[i][0] ][ unit143_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit143_1[i][2] ][ unit143_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit143_1[i][4] ][ unit143_1[i][5] ] >0);
		X_contra = ( LargeX[143][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit143_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[143][0]=0; L[143][1]=1;}
			satisfiable[143][1]=satisfiable[143][1] & ((x[143] ^ 1) | (x[ unit143_1[i][0] ] ^ unit143_1[i][1]) |(x[ unit143_1[i][2] ] ^ unit143_1[i][3]));
			}
		if(X_contra>0) L[143][1]=2;
		}
	//Check all rules of unit[144][0]
	L[144][0] = LargeX[144][1]>0 ? 1 : 0;
	satisfiable[144][0]=1; 
	for(int i=0;i<44;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit144_0[i][0] ][ unit144_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit144_0[i][2] ][ unit144_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit144_0[i][4] ][ unit144_0[i][5] ] >0);
		X_contra = ( LargeX[144][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit144_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[144][1]=0; L[144][0]=1;}
			satisfiable[144][0]=satisfiable[144][0] & ((x[144] ^ 0) | (x[ unit144_0[i][0] ] ^ unit144_0[i][1]) |(x[ unit144_0[i][2] ] ^ unit144_0[i][3]));
			}
		if(X_contra>0) L[144][0]=2;
		}
	//Check all rules of unit[144][1]
	L[144][1] = LargeX[144][0]>0 ? 1 : 0;
	satisfiable[144][1]=1; 
	for(int i=0;i<96;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit144_1[i][0] ][ unit144_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit144_1[i][2] ][ unit144_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit144_1[i][4] ][ unit144_1[i][5] ] >0);
		X_contra = ( LargeX[144][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit144_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[144][0]=0; L[144][1]=1;}
			satisfiable[144][1]=satisfiable[144][1] & ((x[144] ^ 1) | (x[ unit144_1[i][0] ] ^ unit144_1[i][1]) |(x[ unit144_1[i][2] ] ^ unit144_1[i][3]));
			}
		if(X_contra>0) L[144][1]=2;
		}
	//Check all rules of unit[145][0]
	L[145][0] = LargeX[145][1]>0 ? 1 : 0;
	satisfiable[145][0]=1; 
	for(int i=0;i<39;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit145_0[i][0] ][ unit145_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit145_0[i][2] ][ unit145_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit145_0[i][4] ][ unit145_0[i][5] ] >0);
		X_contra = ( LargeX[145][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit145_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[145][1]=0; L[145][0]=1;}
			satisfiable[145][0]=satisfiable[145][0] & ((x[145] ^ 0) | (x[ unit145_0[i][0] ] ^ unit145_0[i][1]) |(x[ unit145_0[i][2] ] ^ unit145_0[i][3]));
			}
		if(X_contra>0) L[145][0]=2;
		}
	//Check all rules of unit[145][1]
	L[145][1] = LargeX[145][0]>0 ? 1 : 0;
	satisfiable[145][1]=1; 
	for(int i=0;i<94;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit145_1[i][0] ][ unit145_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit145_1[i][2] ][ unit145_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit145_1[i][4] ][ unit145_1[i][5] ] >0);
		X_contra = ( LargeX[145][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit145_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[145][0]=0; L[145][1]=1;}
			satisfiable[145][1]=satisfiable[145][1] & ((x[145] ^ 1) | (x[ unit145_1[i][0] ] ^ unit145_1[i][1]) |(x[ unit145_1[i][2] ] ^ unit145_1[i][3]));
			}
		if(X_contra>0) L[145][1]=2;
		}
	//Check all rules of unit[146][0]
	L[146][0] = LargeX[146][1]>0 ? 1 : 0;
	satisfiable[146][0]=1; 
	for(int i=0;i<36;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit146_0[i][0] ][ unit146_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit146_0[i][2] ][ unit146_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit146_0[i][4] ][ unit146_0[i][5] ] >0);
		X_contra = ( LargeX[146][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit146_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[146][1]=0; L[146][0]=1;}
			satisfiable[146][0]=satisfiable[146][0] & ((x[146] ^ 0) | (x[ unit146_0[i][0] ] ^ unit146_0[i][1]) |(x[ unit146_0[i][2] ] ^ unit146_0[i][3]));
			}
		if(X_contra>0) L[146][0]=2;
		}
	//Check all rules of unit[146][1]
	L[146][1] = LargeX[146][0]>0 ? 1 : 0;
	satisfiable[146][1]=1; 
	for(int i=0;i<99;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit146_1[i][0] ][ unit146_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit146_1[i][2] ][ unit146_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit146_1[i][4] ][ unit146_1[i][5] ] >0);
		X_contra = ( LargeX[146][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit146_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[146][0]=0; L[146][1]=1;}
			satisfiable[146][1]=satisfiable[146][1] & ((x[146] ^ 1) | (x[ unit146_1[i][0] ] ^ unit146_1[i][1]) |(x[ unit146_1[i][2] ] ^ unit146_1[i][3]));
			}
		if(X_contra>0) L[146][1]=2;
		}
	//Check all rules of unit[147][0]
	L[147][0] = LargeX[147][1]>0 ? 1 : 0;
	satisfiable[147][0]=1; 
	for(int i=0;i<32;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit147_0[i][0] ][ unit147_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit147_0[i][2] ][ unit147_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit147_0[i][4] ][ unit147_0[i][5] ] >0);
		X_contra = ( LargeX[147][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit147_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[147][1]=0; L[147][0]=1;}
			satisfiable[147][0]=satisfiable[147][0] & ((x[147] ^ 0) | (x[ unit147_0[i][0] ] ^ unit147_0[i][1]) |(x[ unit147_0[i][2] ] ^ unit147_0[i][3]));
			}
		if(X_contra>0) L[147][0]=2;
		}
	//Check all rules of unit[147][1]
	L[147][1] = LargeX[147][0]>0 ? 1 : 0;
	satisfiable[147][1]=1; 
	for(int i=0;i<88;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit147_1[i][0] ][ unit147_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit147_1[i][2] ][ unit147_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit147_1[i][4] ][ unit147_1[i][5] ] >0);
		X_contra = ( LargeX[147][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit147_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[147][0]=0; L[147][1]=1;}
			satisfiable[147][1]=satisfiable[147][1] & ((x[147] ^ 1) | (x[ unit147_1[i][0] ] ^ unit147_1[i][1]) |(x[ unit147_1[i][2] ] ^ unit147_1[i][3]));
			}
		if(X_contra>0) L[147][1]=2;
		}
	//Check all rules of unit[148][0]
	L[148][0] = LargeX[148][1]>0 ? 1 : 0;
	satisfiable[148][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit148_0[i][0] ][ unit148_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit148_0[i][2] ][ unit148_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit148_0[i][4] ][ unit148_0[i][5] ] >0);
		X_contra = ( LargeX[148][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit148_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[148][1]=0; L[148][0]=1;}
			satisfiable[148][0]=satisfiable[148][0] & ((x[148] ^ 0) | (x[ unit148_0[i][0] ] ^ unit148_0[i][1]) |(x[ unit148_0[i][2] ] ^ unit148_0[i][3]));
			}
		if(X_contra>0) L[148][0]=2;
		}
	//Check all rules of unit[148][1]
	L[148][1] = LargeX[148][0]>0 ? 1 : 0;
	satisfiable[148][1]=1; 
	for(int i=0;i<80;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit148_1[i][0] ][ unit148_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit148_1[i][2] ][ unit148_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit148_1[i][4] ][ unit148_1[i][5] ] >0);
		X_contra = ( LargeX[148][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit148_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[148][0]=0; L[148][1]=1;}
			satisfiable[148][1]=satisfiable[148][1] & ((x[148] ^ 1) | (x[ unit148_1[i][0] ] ^ unit148_1[i][1]) |(x[ unit148_1[i][2] ] ^ unit148_1[i][3]));
			}
		if(X_contra>0) L[148][1]=2;
		}
	//Check all rules of unit[149][0]
	L[149][0] = LargeX[149][1]>0 ? 1 : 0;
	satisfiable[149][0]=1; 
	for(int i=0;i<25;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit149_0[i][0] ][ unit149_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit149_0[i][2] ][ unit149_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit149_0[i][4] ][ unit149_0[i][5] ] >0);
		X_contra = ( LargeX[149][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit149_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[149][1]=0; L[149][0]=1;}
			satisfiable[149][0]=satisfiable[149][0] & ((x[149] ^ 0) | (x[ unit149_0[i][0] ] ^ unit149_0[i][1]) |(x[ unit149_0[i][2] ] ^ unit149_0[i][3]));
			}
		if(X_contra>0) L[149][0]=2;
		}
	//Check all rules of unit[149][1]
	L[149][1] = LargeX[149][0]>0 ? 1 : 0;
	satisfiable[149][1]=1; 
	for(int i=0;i<67;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit149_1[i][0] ][ unit149_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit149_1[i][2] ][ unit149_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit149_1[i][4] ][ unit149_1[i][5] ] >0);
		X_contra = ( LargeX[149][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit149_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[149][0]=0; L[149][1]=1;}
			satisfiable[149][1]=satisfiable[149][1] & ((x[149] ^ 1) | (x[ unit149_1[i][0] ] ^ unit149_1[i][1]) |(x[ unit149_1[i][2] ] ^ unit149_1[i][3]));
			}
		if(X_contra>0) L[149][1]=2;
		}
	//Check all rules of unit[150][0]
	L[150][0] = LargeX[150][1]>0 ? 1 : 0;
	satisfiable[150][0]=1; 
	for(int i=0;i<30;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit150_0[i][0] ][ unit150_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit150_0[i][2] ][ unit150_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit150_0[i][4] ][ unit150_0[i][5] ] >0);
		X_contra = ( LargeX[150][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit150_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[150][1]=0; L[150][0]=1;}
			satisfiable[150][0]=satisfiable[150][0] & ((x[150] ^ 0) | (x[ unit150_0[i][0] ] ^ unit150_0[i][1]) |(x[ unit150_0[i][2] ] ^ unit150_0[i][3]));
			}
		if(X_contra>0) L[150][0]=2;
		}
	//Check all rules of unit[150][1]
	L[150][1] = LargeX[150][0]>0 ? 1 : 0;
	satisfiable[150][1]=1; 
	for(int i=0;i<53;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit150_1[i][0] ][ unit150_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit150_1[i][2] ][ unit150_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit150_1[i][4] ][ unit150_1[i][5] ] >0);
		X_contra = ( LargeX[150][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit150_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[150][0]=0; L[150][1]=1;}
			satisfiable[150][1]=satisfiable[150][1] & ((x[150] ^ 1) | (x[ unit150_1[i][0] ] ^ unit150_1[i][1]) |(x[ unit150_1[i][2] ] ^ unit150_1[i][3]));
			}
		if(X_contra>0) L[150][1]=2;
		}
	//Check all rules of unit[151][0]
	L[151][0] = LargeX[151][1]>0 ? 1 : 0;
	satisfiable[151][0]=1; 
	for(int i=0;i<20;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit151_0[i][0] ][ unit151_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit151_0[i][2] ][ unit151_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit151_0[i][4] ][ unit151_0[i][5] ] >0);
		X_contra = ( LargeX[151][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit151_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[151][1]=0; L[151][0]=1;}
			satisfiable[151][0]=satisfiable[151][0] & ((x[151] ^ 0) | (x[ unit151_0[i][0] ] ^ unit151_0[i][1]) |(x[ unit151_0[i][2] ] ^ unit151_0[i][3]));
			}
		if(X_contra>0) L[151][0]=2;
		}
	//Check all rules of unit[151][1]
	L[151][1] = LargeX[151][0]>0 ? 1 : 0;
	satisfiable[151][1]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit151_1[i][0] ][ unit151_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit151_1[i][2] ][ unit151_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit151_1[i][4] ][ unit151_1[i][5] ] >0);
		X_contra = ( LargeX[151][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit151_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[151][0]=0; L[151][1]=1;}
			satisfiable[151][1]=satisfiable[151][1] & ((x[151] ^ 1) | (x[ unit151_1[i][0] ] ^ unit151_1[i][1]) |(x[ unit151_1[i][2] ] ^ unit151_1[i][3]));
			}
		if(X_contra>0) L[151][1]=2;
		}
	//Check all rules of unit[152][0]
	L[152][0] = LargeX[152][1]>0 ? 1 : 0;
	satisfiable[152][0]=1; 
	for(int i=0;i<18;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit152_0[i][0] ][ unit152_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit152_0[i][2] ][ unit152_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit152_0[i][4] ][ unit152_0[i][5] ] >0);
		X_contra = ( LargeX[152][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit152_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[152][1]=0; L[152][0]=1;}
			satisfiable[152][0]=satisfiable[152][0] & ((x[152] ^ 0) | (x[ unit152_0[i][0] ] ^ unit152_0[i][1]) |(x[ unit152_0[i][2] ] ^ unit152_0[i][3]));
			}
		if(X_contra>0) L[152][0]=2;
		}
	//Check all rules of unit[152][1]
	L[152][1] = LargeX[152][0]>0 ? 1 : 0;
	satisfiable[152][1]=1; 
	for(int i=0;i<42;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit152_1[i][0] ][ unit152_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit152_1[i][2] ][ unit152_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit152_1[i][4] ][ unit152_1[i][5] ] >0);
		X_contra = ( LargeX[152][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit152_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[152][0]=0; L[152][1]=1;}
			satisfiable[152][1]=satisfiable[152][1] & ((x[152] ^ 1) | (x[ unit152_1[i][0] ] ^ unit152_1[i][1]) |(x[ unit152_1[i][2] ] ^ unit152_1[i][3]));
			}
		if(X_contra>0) L[152][1]=2;
		}
	//Check all rules of unit[153][0]
	L[153][0] = LargeX[153][1]>0 ? 1 : 0;
	satisfiable[153][0]=1; 
	for(int i=0;i<25;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit153_0[i][0] ][ unit153_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit153_0[i][2] ][ unit153_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit153_0[i][4] ][ unit153_0[i][5] ] >0);
		X_contra = ( LargeX[153][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit153_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[153][1]=0; L[153][0]=1;}
			satisfiable[153][0]=satisfiable[153][0] & ((x[153] ^ 0) | (x[ unit153_0[i][0] ] ^ unit153_0[i][1]) |(x[ unit153_0[i][2] ] ^ unit153_0[i][3]));
			}
		if(X_contra>0) L[153][0]=2;
		}
	//Check all rules of unit[153][1]
	L[153][1] = LargeX[153][0]>0 ? 1 : 0;
	satisfiable[153][1]=1; 
	for(int i=0;i<51;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit153_1[i][0] ][ unit153_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit153_1[i][2] ][ unit153_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit153_1[i][4] ][ unit153_1[i][5] ] >0);
		X_contra = ( LargeX[153][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit153_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[153][0]=0; L[153][1]=1;}
			satisfiable[153][1]=satisfiable[153][1] & ((x[153] ^ 1) | (x[ unit153_1[i][0] ] ^ unit153_1[i][1]) |(x[ unit153_1[i][2] ] ^ unit153_1[i][3]));
			}
		if(X_contra>0) L[153][1]=2;
		}
	//Check all rules of unit[154][0]
	L[154][0] = LargeX[154][1]>0 ? 1 : 0;
	satisfiable[154][0]=1; 
	for(int i=0;i<23;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit154_0[i][0] ][ unit154_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit154_0[i][2] ][ unit154_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit154_0[i][4] ][ unit154_0[i][5] ] >0);
		X_contra = ( LargeX[154][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit154_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[154][1]=0; L[154][0]=1;}
			satisfiable[154][0]=satisfiable[154][0] & ((x[154] ^ 0) | (x[ unit154_0[i][0] ] ^ unit154_0[i][1]) |(x[ unit154_0[i][2] ] ^ unit154_0[i][3]));
			}
		if(X_contra>0) L[154][0]=2;
		}
	//Check all rules of unit[154][1]
	L[154][1] = LargeX[154][0]>0 ? 1 : 0;
	satisfiable[154][1]=1; 
	for(int i=0;i<58;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit154_1[i][0] ][ unit154_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit154_1[i][2] ][ unit154_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit154_1[i][4] ][ unit154_1[i][5] ] >0);
		X_contra = ( LargeX[154][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit154_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[154][0]=0; L[154][1]=1;}
			satisfiable[154][1]=satisfiable[154][1] & ((x[154] ^ 1) | (x[ unit154_1[i][0] ] ^ unit154_1[i][1]) |(x[ unit154_1[i][2] ] ^ unit154_1[i][3]));
			}
		if(X_contra>0) L[154][1]=2;
		}
	//Check all rules of unit[155][0]
	L[155][0] = LargeX[155][1]>0 ? 1 : 0;
	satisfiable[155][0]=1; 
	for(int i=0;i<33;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit155_0[i][0] ][ unit155_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit155_0[i][2] ][ unit155_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit155_0[i][4] ][ unit155_0[i][5] ] >0);
		X_contra = ( LargeX[155][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit155_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[155][1]=0; L[155][0]=1;}
			satisfiable[155][0]=satisfiable[155][0] & ((x[155] ^ 0) | (x[ unit155_0[i][0] ] ^ unit155_0[i][1]) |(x[ unit155_0[i][2] ] ^ unit155_0[i][3]));
			}
		if(X_contra>0) L[155][0]=2;
		}
	//Check all rules of unit[155][1]
	L[155][1] = LargeX[155][0]>0 ? 1 : 0;
	satisfiable[155][1]=1; 
	for(int i=0;i<69;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit155_1[i][0] ][ unit155_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit155_1[i][2] ][ unit155_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit155_1[i][4] ][ unit155_1[i][5] ] >0);
		X_contra = ( LargeX[155][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit155_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[155][0]=0; L[155][1]=1;}
			satisfiable[155][1]=satisfiable[155][1] & ((x[155] ^ 1) | (x[ unit155_1[i][0] ] ^ unit155_1[i][1]) |(x[ unit155_1[i][2] ] ^ unit155_1[i][3]));
			}
		if(X_contra>0) L[155][1]=2;
		}
	//Check all rules of unit[156][0]
	L[156][0] = LargeX[156][1]>0 ? 1 : 0;
	satisfiable[156][0]=1; 
	for(int i=0;i<29;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit156_0[i][0] ][ unit156_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit156_0[i][2] ][ unit156_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit156_0[i][4] ][ unit156_0[i][5] ] >0);
		X_contra = ( LargeX[156][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit156_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[156][1]=0; L[156][0]=1;}
			satisfiable[156][0]=satisfiable[156][0] & ((x[156] ^ 0) | (x[ unit156_0[i][0] ] ^ unit156_0[i][1]) |(x[ unit156_0[i][2] ] ^ unit156_0[i][3]));
			}
		if(X_contra>0) L[156][0]=2;
		}
	//Check all rules of unit[156][1]
	L[156][1] = LargeX[156][0]>0 ? 1 : 0;
	satisfiable[156][1]=1; 
	for(int i=0;i<80;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit156_1[i][0] ][ unit156_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit156_1[i][2] ][ unit156_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit156_1[i][4] ][ unit156_1[i][5] ] >0);
		X_contra = ( LargeX[156][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit156_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[156][0]=0; L[156][1]=1;}
			satisfiable[156][1]=satisfiable[156][1] & ((x[156] ^ 1) | (x[ unit156_1[i][0] ] ^ unit156_1[i][1]) |(x[ unit156_1[i][2] ] ^ unit156_1[i][3]));
			}
		if(X_contra>0) L[156][1]=2;
		}
	//Check all rules of unit[157][0]
	L[157][0] = LargeX[157][1]>0 ? 1 : 0;
	satisfiable[157][0]=1; 
	for(int i=0;i<37;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit157_0[i][0] ][ unit157_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit157_0[i][2] ][ unit157_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit157_0[i][4] ][ unit157_0[i][5] ] >0);
		X_contra = ( LargeX[157][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit157_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[157][1]=0; L[157][0]=1;}
			satisfiable[157][0]=satisfiable[157][0] & ((x[157] ^ 0) | (x[ unit157_0[i][0] ] ^ unit157_0[i][1]) |(x[ unit157_0[i][2] ] ^ unit157_0[i][3]));
			}
		if(X_contra>0) L[157][0]=2;
		}
	//Check all rules of unit[157][1]
	L[157][1] = LargeX[157][0]>0 ? 1 : 0;
	satisfiable[157][1]=1; 
	for(int i=0;i<87;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit157_1[i][0] ][ unit157_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit157_1[i][2] ][ unit157_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit157_1[i][4] ][ unit157_1[i][5] ] >0);
		X_contra = ( LargeX[157][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit157_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[157][0]=0; L[157][1]=1;}
			satisfiable[157][1]=satisfiable[157][1] & ((x[157] ^ 1) | (x[ unit157_1[i][0] ] ^ unit157_1[i][1]) |(x[ unit157_1[i][2] ] ^ unit157_1[i][3]));
			}
		if(X_contra>0) L[157][1]=2;
		}
	//Check all rules of unit[158][0]
	L[158][0] = LargeX[158][1]>0 ? 1 : 0;
	satisfiable[158][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit158_0[i][0] ][ unit158_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit158_0[i][2] ][ unit158_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit158_0[i][4] ][ unit158_0[i][5] ] >0);
		X_contra = ( LargeX[158][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit158_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[158][1]=0; L[158][0]=1;}
			satisfiable[158][0]=satisfiable[158][0] & ((x[158] ^ 0) | (x[ unit158_0[i][0] ] ^ unit158_0[i][1]) |(x[ unit158_0[i][2] ] ^ unit158_0[i][3]));
			}
		if(X_contra>0) L[158][0]=2;
		}
	//Check all rules of unit[158][1]
	L[158][1] = LargeX[158][0]>0 ? 1 : 0;
	satisfiable[158][1]=1; 
	for(int i=0;i<94;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit158_1[i][0] ][ unit158_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit158_1[i][2] ][ unit158_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit158_1[i][4] ][ unit158_1[i][5] ] >0);
		X_contra = ( LargeX[158][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit158_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[158][0]=0; L[158][1]=1;}
			satisfiable[158][1]=satisfiable[158][1] & ((x[158] ^ 1) | (x[ unit158_1[i][0] ] ^ unit158_1[i][1]) |(x[ unit158_1[i][2] ] ^ unit158_1[i][3]));
			}
		if(X_contra>0) L[158][1]=2;
		}
	//Check all rules of unit[159][0]
	L[159][0] = LargeX[159][1]>0 ? 1 : 0;
	satisfiable[159][0]=1; 
	for(int i=0;i<81;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit159_0[i][0] ][ unit159_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit159_0[i][2] ][ unit159_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit159_0[i][4] ][ unit159_0[i][5] ] >0);
		X_contra = ( LargeX[159][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit159_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[159][1]=0; L[159][0]=1;}
			satisfiable[159][0]=satisfiable[159][0] & ((x[159] ^ 0) | (x[ unit159_0[i][0] ] ^ unit159_0[i][1]) |(x[ unit159_0[i][2] ] ^ unit159_0[i][3]));
			}
		if(X_contra>0) L[159][0]=2;
		}
	//Check all rules of unit[159][1]
	L[159][1] = LargeX[159][0]>0 ? 1 : 0;
	satisfiable[159][1]=1; 
	for(int i=0;i<101;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit159_1[i][0] ][ unit159_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit159_1[i][2] ][ unit159_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit159_1[i][4] ][ unit159_1[i][5] ] >0);
		X_contra = ( LargeX[159][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit159_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[159][0]=0; L[159][1]=1;}
			satisfiable[159][1]=satisfiable[159][1] & ((x[159] ^ 1) | (x[ unit159_1[i][0] ] ^ unit159_1[i][1]) |(x[ unit159_1[i][2] ] ^ unit159_1[i][3]));
			}
		if(X_contra>0) L[159][1]=2;
		}
	//Check all rules of unit[160][0]
	L[160][0] = LargeX[160][1]>0 ? 1 : 0;
	satisfiable[160][0]=1; 
	for(int i=0;i<79;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit160_0[i][0] ][ unit160_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit160_0[i][2] ][ unit160_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit160_0[i][4] ][ unit160_0[i][5] ] >0);
		X_contra = ( LargeX[160][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit160_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[160][1]=0; L[160][0]=1;}
			satisfiable[160][0]=satisfiable[160][0] & ((x[160] ^ 0) | (x[ unit160_0[i][0] ] ^ unit160_0[i][1]) |(x[ unit160_0[i][2] ] ^ unit160_0[i][3]));
			}
		if(X_contra>0) L[160][0]=2;
		}
	//Check all rules of unit[160][1]
	L[160][1] = LargeX[160][0]>0 ? 1 : 0;
	satisfiable[160][1]=1; 
	for(int i=0;i<105;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit160_1[i][0] ][ unit160_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit160_1[i][2] ][ unit160_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit160_1[i][4] ][ unit160_1[i][5] ] >0);
		X_contra = ( LargeX[160][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit160_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[160][0]=0; L[160][1]=1;}
			satisfiable[160][1]=satisfiable[160][1] & ((x[160] ^ 1) | (x[ unit160_1[i][0] ] ^ unit160_1[i][1]) |(x[ unit160_1[i][2] ] ^ unit160_1[i][3]));
			}
		if(X_contra>0) L[160][1]=2;
		}
	//Check all rules of unit[161][0]
	L[161][0] = LargeX[161][1]>0 ? 1 : 0;
	satisfiable[161][0]=1; 
	for(int i=0;i<86;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit161_0[i][0] ][ unit161_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit161_0[i][2] ][ unit161_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit161_0[i][4] ][ unit161_0[i][5] ] >0);
		X_contra = ( LargeX[161][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit161_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[161][1]=0; L[161][0]=1;}
			satisfiable[161][0]=satisfiable[161][0] & ((x[161] ^ 0) | (x[ unit161_0[i][0] ] ^ unit161_0[i][1]) |(x[ unit161_0[i][2] ] ^ unit161_0[i][3]));
			}
		if(X_contra>0) L[161][0]=2;
		}
	//Check all rules of unit[161][1]
	L[161][1] = LargeX[161][0]>0 ? 1 : 0;
	satisfiable[161][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit161_1[i][0] ][ unit161_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit161_1[i][2] ][ unit161_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit161_1[i][4] ][ unit161_1[i][5] ] >0);
		X_contra = ( LargeX[161][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit161_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[161][0]=0; L[161][1]=1;}
			satisfiable[161][1]=satisfiable[161][1] & ((x[161] ^ 1) | (x[ unit161_1[i][0] ] ^ unit161_1[i][1]) |(x[ unit161_1[i][2] ] ^ unit161_1[i][3]));
			}
		if(X_contra>0) L[161][1]=2;
		}
	//Check all rules of unit[162][0]
	L[162][0] = LargeX[162][1]>0 ? 1 : 0;
	satisfiable[162][0]=1; 
	for(int i=0;i<73;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit162_0[i][0] ][ unit162_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit162_0[i][2] ][ unit162_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit162_0[i][4] ][ unit162_0[i][5] ] >0);
		X_contra = ( LargeX[162][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit162_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[162][1]=0; L[162][0]=1;}
			satisfiable[162][0]=satisfiable[162][0] & ((x[162] ^ 0) | (x[ unit162_0[i][0] ] ^ unit162_0[i][1]) |(x[ unit162_0[i][2] ] ^ unit162_0[i][3]));
			}
		if(X_contra>0) L[162][0]=2;
		}
	//Check all rules of unit[162][1]
	L[162][1] = LargeX[162][0]>0 ? 1 : 0;
	satisfiable[162][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit162_1[i][0] ][ unit162_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit162_1[i][2] ][ unit162_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit162_1[i][4] ][ unit162_1[i][5] ] >0);
		X_contra = ( LargeX[162][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit162_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[162][0]=0; L[162][1]=1;}
			satisfiable[162][1]=satisfiable[162][1] & ((x[162] ^ 1) | (x[ unit162_1[i][0] ] ^ unit162_1[i][1]) |(x[ unit162_1[i][2] ] ^ unit162_1[i][3]));
			}
		if(X_contra>0) L[162][1]=2;
		}
	//Check all rules of unit[163][0]
	L[163][0] = LargeX[163][1]>0 ? 1 : 0;
	satisfiable[163][0]=1; 
	for(int i=0;i<67;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit163_0[i][0] ][ unit163_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit163_0[i][2] ][ unit163_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit163_0[i][4] ][ unit163_0[i][5] ] >0);
		X_contra = ( LargeX[163][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit163_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[163][1]=0; L[163][0]=1;}
			satisfiable[163][0]=satisfiable[163][0] & ((x[163] ^ 0) | (x[ unit163_0[i][0] ] ^ unit163_0[i][1]) |(x[ unit163_0[i][2] ] ^ unit163_0[i][3]));
			}
		if(X_contra>0) L[163][0]=2;
		}
	//Check all rules of unit[163][1]
	L[163][1] = LargeX[163][0]>0 ? 1 : 0;
	satisfiable[163][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit163_1[i][0] ][ unit163_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit163_1[i][2] ][ unit163_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit163_1[i][4] ][ unit163_1[i][5] ] >0);
		X_contra = ( LargeX[163][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit163_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[163][0]=0; L[163][1]=1;}
			satisfiable[163][1]=satisfiable[163][1] & ((x[163] ^ 1) | (x[ unit163_1[i][0] ] ^ unit163_1[i][1]) |(x[ unit163_1[i][2] ] ^ unit163_1[i][3]));
			}
		if(X_contra>0) L[163][1]=2;
		}
	//Check all rules of unit[164][0]
	L[164][0] = LargeX[164][1]>0 ? 1 : 0;
	satisfiable[164][0]=1; 
	for(int i=0;i<56;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit164_0[i][0] ][ unit164_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit164_0[i][2] ][ unit164_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit164_0[i][4] ][ unit164_0[i][5] ] >0);
		X_contra = ( LargeX[164][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit164_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[164][1]=0; L[164][0]=1;}
			satisfiable[164][0]=satisfiable[164][0] & ((x[164] ^ 0) | (x[ unit164_0[i][0] ] ^ unit164_0[i][1]) |(x[ unit164_0[i][2] ] ^ unit164_0[i][3]));
			}
		if(X_contra>0) L[164][0]=2;
		}
	//Check all rules of unit[164][1]
	L[164][1] = LargeX[164][0]>0 ? 1 : 0;
	satisfiable[164][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit164_1[i][0] ][ unit164_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit164_1[i][2] ][ unit164_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit164_1[i][4] ][ unit164_1[i][5] ] >0);
		X_contra = ( LargeX[164][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit164_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[164][0]=0; L[164][1]=1;}
			satisfiable[164][1]=satisfiable[164][1] & ((x[164] ^ 1) | (x[ unit164_1[i][0] ] ^ unit164_1[i][1]) |(x[ unit164_1[i][2] ] ^ unit164_1[i][3]));
			}
		if(X_contra>0) L[164][1]=2;
		}
	//Check all rules of unit[165][0]
	L[165][0] = LargeX[165][1]>0 ? 1 : 0;
	satisfiable[165][0]=1; 
	for(int i=0;i<47;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit165_0[i][0] ][ unit165_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit165_0[i][2] ][ unit165_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit165_0[i][4] ][ unit165_0[i][5] ] >0);
		X_contra = ( LargeX[165][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit165_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[165][1]=0; L[165][0]=1;}
			satisfiable[165][0]=satisfiable[165][0] & ((x[165] ^ 0) | (x[ unit165_0[i][0] ] ^ unit165_0[i][1]) |(x[ unit165_0[i][2] ] ^ unit165_0[i][3]));
			}
		if(X_contra>0) L[165][0]=2;
		}
	//Check all rules of unit[165][1]
	L[165][1] = LargeX[165][0]>0 ? 1 : 0;
	satisfiable[165][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit165_1[i][0] ][ unit165_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit165_1[i][2] ][ unit165_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit165_1[i][4] ][ unit165_1[i][5] ] >0);
		X_contra = ( LargeX[165][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit165_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[165][0]=0; L[165][1]=1;}
			satisfiable[165][1]=satisfiable[165][1] & ((x[165] ^ 1) | (x[ unit165_1[i][0] ] ^ unit165_1[i][1]) |(x[ unit165_1[i][2] ] ^ unit165_1[i][3]));
			}
		if(X_contra>0) L[165][1]=2;
		}
	//Check all rules of unit[166][0]
	L[166][0] = LargeX[166][1]>0 ? 1 : 0;
	satisfiable[166][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit166_0[i][0] ][ unit166_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit166_0[i][2] ][ unit166_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit166_0[i][4] ][ unit166_0[i][5] ] >0);
		X_contra = ( LargeX[166][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit166_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[166][1]=0; L[166][0]=1;}
			satisfiable[166][0]=satisfiable[166][0] & ((x[166] ^ 0) | (x[ unit166_0[i][0] ] ^ unit166_0[i][1]) |(x[ unit166_0[i][2] ] ^ unit166_0[i][3]));
			}
		if(X_contra>0) L[166][0]=2;
		}
	//Check all rules of unit[166][1]
	L[166][1] = LargeX[166][0]>0 ? 1 : 0;
	satisfiable[166][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit166_1[i][0] ][ unit166_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit166_1[i][2] ][ unit166_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit166_1[i][4] ][ unit166_1[i][5] ] >0);
		X_contra = ( LargeX[166][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit166_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[166][0]=0; L[166][1]=1;}
			satisfiable[166][1]=satisfiable[166][1] & ((x[166] ^ 1) | (x[ unit166_1[i][0] ] ^ unit166_1[i][1]) |(x[ unit166_1[i][2] ] ^ unit166_1[i][3]));
			}
		if(X_contra>0) L[166][1]=2;
		}
	//Check all rules of unit[167][0]
	L[167][0] = LargeX[167][1]>0 ? 1 : 0;
	satisfiable[167][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit167_0[i][0] ][ unit167_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit167_0[i][2] ][ unit167_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit167_0[i][4] ][ unit167_0[i][5] ] >0);
		X_contra = ( LargeX[167][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit167_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[167][1]=0; L[167][0]=1;}
			satisfiable[167][0]=satisfiable[167][0] & ((x[167] ^ 0) | (x[ unit167_0[i][0] ] ^ unit167_0[i][1]) |(x[ unit167_0[i][2] ] ^ unit167_0[i][3]));
			}
		if(X_contra>0) L[167][0]=2;
		}
	//Check all rules of unit[167][1]
	L[167][1] = LargeX[167][0]>0 ? 1 : 0;
	satisfiable[167][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit167_1[i][0] ][ unit167_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit167_1[i][2] ][ unit167_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit167_1[i][4] ][ unit167_1[i][5] ] >0);
		X_contra = ( LargeX[167][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit167_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[167][0]=0; L[167][1]=1;}
			satisfiable[167][1]=satisfiable[167][1] & ((x[167] ^ 1) | (x[ unit167_1[i][0] ] ^ unit167_1[i][1]) |(x[ unit167_1[i][2] ] ^ unit167_1[i][3]));
			}
		if(X_contra>0) L[167][1]=2;
		}
	//Check all rules of unit[168][0]
	L[168][0] = LargeX[168][1]>0 ? 1 : 0;
	satisfiable[168][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit168_0[i][0] ][ unit168_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit168_0[i][2] ][ unit168_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit168_0[i][4] ][ unit168_0[i][5] ] >0);
		X_contra = ( LargeX[168][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit168_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[168][1]=0; L[168][0]=1;}
			satisfiable[168][0]=satisfiable[168][0] & ((x[168] ^ 0) | (x[ unit168_0[i][0] ] ^ unit168_0[i][1]) |(x[ unit168_0[i][2] ] ^ unit168_0[i][3]));
			}
		if(X_contra>0) L[168][0]=2;
		}
	//Check all rules of unit[168][1]
	L[168][1] = LargeX[168][0]>0 ? 1 : 0;
	satisfiable[168][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit168_1[i][0] ][ unit168_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit168_1[i][2] ][ unit168_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit168_1[i][4] ][ unit168_1[i][5] ] >0);
		X_contra = ( LargeX[168][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit168_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[168][0]=0; L[168][1]=1;}
			satisfiable[168][1]=satisfiable[168][1] & ((x[168] ^ 1) | (x[ unit168_1[i][0] ] ^ unit168_1[i][1]) |(x[ unit168_1[i][2] ] ^ unit168_1[i][3]));
			}
		if(X_contra>0) L[168][1]=2;
		}
	//Check all rules of unit[169][0]
	L[169][0] = LargeX[169][1]>0 ? 1 : 0;
	satisfiable[169][0]=1; 
	for(int i=0;i<45;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit169_0[i][0] ][ unit169_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit169_0[i][2] ][ unit169_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit169_0[i][4] ][ unit169_0[i][5] ] >0);
		X_contra = ( LargeX[169][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit169_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[169][1]=0; L[169][0]=1;}
			satisfiable[169][0]=satisfiable[169][0] & ((x[169] ^ 0) | (x[ unit169_0[i][0] ] ^ unit169_0[i][1]) |(x[ unit169_0[i][2] ] ^ unit169_0[i][3]));
			}
		if(X_contra>0) L[169][0]=2;
		}
	//Check all rules of unit[169][1]
	L[169][1] = LargeX[169][0]>0 ? 1 : 0;
	satisfiable[169][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit169_1[i][0] ][ unit169_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit169_1[i][2] ][ unit169_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit169_1[i][4] ][ unit169_1[i][5] ] >0);
		X_contra = ( LargeX[169][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit169_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[169][0]=0; L[169][1]=1;}
			satisfiable[169][1]=satisfiable[169][1] & ((x[169] ^ 1) | (x[ unit169_1[i][0] ] ^ unit169_1[i][1]) |(x[ unit169_1[i][2] ] ^ unit169_1[i][3]));
			}
		if(X_contra>0) L[169][1]=2;
		}
	//Check all rules of unit[170][0]
	L[170][0] = LargeX[170][1]>0 ? 1 : 0;
	satisfiable[170][0]=1; 
	for(int i=0;i<59;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit170_0[i][0] ][ unit170_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit170_0[i][2] ][ unit170_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit170_0[i][4] ][ unit170_0[i][5] ] >0);
		X_contra = ( LargeX[170][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit170_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[170][1]=0; L[170][0]=1;}
			satisfiable[170][0]=satisfiable[170][0] & ((x[170] ^ 0) | (x[ unit170_0[i][0] ] ^ unit170_0[i][1]) |(x[ unit170_0[i][2] ] ^ unit170_0[i][3]));
			}
		if(X_contra>0) L[170][0]=2;
		}
	//Check all rules of unit[170][1]
	L[170][1] = LargeX[170][0]>0 ? 1 : 0;
	satisfiable[170][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit170_1[i][0] ][ unit170_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit170_1[i][2] ][ unit170_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit170_1[i][4] ][ unit170_1[i][5] ] >0);
		X_contra = ( LargeX[170][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit170_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[170][0]=0; L[170][1]=1;}
			satisfiable[170][1]=satisfiable[170][1] & ((x[170] ^ 1) | (x[ unit170_1[i][0] ] ^ unit170_1[i][1]) |(x[ unit170_1[i][2] ] ^ unit170_1[i][3]));
			}
		if(X_contra>0) L[170][1]=2;
		}
	//Check all rules of unit[171][0]
	L[171][0] = LargeX[171][1]>0 ? 1 : 0;
	satisfiable[171][0]=1; 
	for(int i=0;i<69;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit171_0[i][0] ][ unit171_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit171_0[i][2] ][ unit171_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit171_0[i][4] ][ unit171_0[i][5] ] >0);
		X_contra = ( LargeX[171][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit171_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[171][1]=0; L[171][0]=1;}
			satisfiable[171][0]=satisfiable[171][0] & ((x[171] ^ 0) | (x[ unit171_0[i][0] ] ^ unit171_0[i][1]) |(x[ unit171_0[i][2] ] ^ unit171_0[i][3]));
			}
		if(X_contra>0) L[171][0]=2;
		}
	//Check all rules of unit[171][1]
	L[171][1] = LargeX[171][0]>0 ? 1 : 0;
	satisfiable[171][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit171_1[i][0] ][ unit171_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit171_1[i][2] ][ unit171_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit171_1[i][4] ][ unit171_1[i][5] ] >0);
		X_contra = ( LargeX[171][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit171_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[171][0]=0; L[171][1]=1;}
			satisfiable[171][1]=satisfiable[171][1] & ((x[171] ^ 1) | (x[ unit171_1[i][0] ] ^ unit171_1[i][1]) |(x[ unit171_1[i][2] ] ^ unit171_1[i][3]));
			}
		if(X_contra>0) L[171][1]=2;
		}
	//Check all rules of unit[172][0]
	L[172][0] = LargeX[172][1]>0 ? 1 : 0;
	satisfiable[172][0]=1; 
	for(int i=0;i<79;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit172_0[i][0] ][ unit172_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit172_0[i][2] ][ unit172_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit172_0[i][4] ][ unit172_0[i][5] ] >0);
		X_contra = ( LargeX[172][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit172_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[172][1]=0; L[172][0]=1;}
			satisfiable[172][0]=satisfiable[172][0] & ((x[172] ^ 0) | (x[ unit172_0[i][0] ] ^ unit172_0[i][1]) |(x[ unit172_0[i][2] ] ^ unit172_0[i][3]));
			}
		if(X_contra>0) L[172][0]=2;
		}
	//Check all rules of unit[172][1]
	L[172][1] = LargeX[172][0]>0 ? 1 : 0;
	satisfiable[172][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit172_1[i][0] ][ unit172_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit172_1[i][2] ][ unit172_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit172_1[i][4] ][ unit172_1[i][5] ] >0);
		X_contra = ( LargeX[172][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit172_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[172][0]=0; L[172][1]=1;}
			satisfiable[172][1]=satisfiable[172][1] & ((x[172] ^ 1) | (x[ unit172_1[i][0] ] ^ unit172_1[i][1]) |(x[ unit172_1[i][2] ] ^ unit172_1[i][3]));
			}
		if(X_contra>0) L[172][1]=2;
		}
	//Check all rules of unit[173][0]
	L[173][0] = LargeX[173][1]>0 ? 1 : 0;
	satisfiable[173][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit173_0[i][0] ][ unit173_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit173_0[i][2] ][ unit173_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit173_0[i][4] ][ unit173_0[i][5] ] >0);
		X_contra = ( LargeX[173][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit173_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[173][1]=0; L[173][0]=1;}
			satisfiable[173][0]=satisfiable[173][0] & ((x[173] ^ 0) | (x[ unit173_0[i][0] ] ^ unit173_0[i][1]) |(x[ unit173_0[i][2] ] ^ unit173_0[i][3]));
			}
		if(X_contra>0) L[173][0]=2;
		}
	//Check all rules of unit[173][1]
	L[173][1] = LargeX[173][0]>0 ? 1 : 0;
	satisfiable[173][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit173_1[i][0] ][ unit173_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit173_1[i][2] ][ unit173_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit173_1[i][4] ][ unit173_1[i][5] ] >0);
		X_contra = ( LargeX[173][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit173_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[173][0]=0; L[173][1]=1;}
			satisfiable[173][1]=satisfiable[173][1] & ((x[173] ^ 1) | (x[ unit173_1[i][0] ] ^ unit173_1[i][1]) |(x[ unit173_1[i][2] ] ^ unit173_1[i][3]));
			}
		if(X_contra>0) L[173][1]=2;
		}
	//Check all rules of unit[174][0]
	L[174][0] = LargeX[174][1]>0 ? 1 : 0;
	satisfiable[174][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit174_0[i][0] ][ unit174_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit174_0[i][2] ][ unit174_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit174_0[i][4] ][ unit174_0[i][5] ] >0);
		X_contra = ( LargeX[174][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit174_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[174][1]=0; L[174][0]=1;}
			satisfiable[174][0]=satisfiable[174][0] & ((x[174] ^ 0) | (x[ unit174_0[i][0] ] ^ unit174_0[i][1]) |(x[ unit174_0[i][2] ] ^ unit174_0[i][3]));
			}
		if(X_contra>0) L[174][0]=2;
		}
	//Check all rules of unit[174][1]
	L[174][1] = LargeX[174][0]>0 ? 1 : 0;
	satisfiable[174][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit174_1[i][0] ][ unit174_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit174_1[i][2] ][ unit174_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit174_1[i][4] ][ unit174_1[i][5] ] >0);
		X_contra = ( LargeX[174][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit174_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[174][0]=0; L[174][1]=1;}
			satisfiable[174][1]=satisfiable[174][1] & ((x[174] ^ 1) | (x[ unit174_1[i][0] ] ^ unit174_1[i][1]) |(x[ unit174_1[i][2] ] ^ unit174_1[i][3]));
			}
		if(X_contra>0) L[174][1]=2;
		}
	//Check all rules of unit[175][0]
	L[175][0] = LargeX[175][1]>0 ? 1 : 0;
	satisfiable[175][0]=1; 
	for(int i=0;i<84;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit175_0[i][0] ][ unit175_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit175_0[i][2] ][ unit175_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit175_0[i][4] ][ unit175_0[i][5] ] >0);
		X_contra = ( LargeX[175][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit175_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[175][1]=0; L[175][0]=1;}
			satisfiable[175][0]=satisfiable[175][0] & ((x[175] ^ 0) | (x[ unit175_0[i][0] ] ^ unit175_0[i][1]) |(x[ unit175_0[i][2] ] ^ unit175_0[i][3]));
			}
		if(X_contra>0) L[175][0]=2;
		}
	//Check all rules of unit[175][1]
	L[175][1] = LargeX[175][0]>0 ? 1 : 0;
	satisfiable[175][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit175_1[i][0] ][ unit175_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit175_1[i][2] ][ unit175_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit175_1[i][4] ][ unit175_1[i][5] ] >0);
		X_contra = ( LargeX[175][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit175_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[175][0]=0; L[175][1]=1;}
			satisfiable[175][1]=satisfiable[175][1] & ((x[175] ^ 1) | (x[ unit175_1[i][0] ] ^ unit175_1[i][1]) |(x[ unit175_1[i][2] ] ^ unit175_1[i][3]));
			}
		if(X_contra>0) L[175][1]=2;
		}
	//Check all rules of unit[176][0]
	L[176][0] = LargeX[176][1]>0 ? 1 : 0;
	satisfiable[176][0]=1; 
	for(int i=0;i<72;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit176_0[i][0] ][ unit176_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit176_0[i][2] ][ unit176_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit176_0[i][4] ][ unit176_0[i][5] ] >0);
		X_contra = ( LargeX[176][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit176_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[176][1]=0; L[176][0]=1;}
			satisfiable[176][0]=satisfiable[176][0] & ((x[176] ^ 0) | (x[ unit176_0[i][0] ] ^ unit176_0[i][1]) |(x[ unit176_0[i][2] ] ^ unit176_0[i][3]));
			}
		if(X_contra>0) L[176][0]=2;
		}
	//Check all rules of unit[176][1]
	L[176][1] = LargeX[176][0]>0 ? 1 : 0;
	satisfiable[176][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit176_1[i][0] ][ unit176_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit176_1[i][2] ][ unit176_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit176_1[i][4] ][ unit176_1[i][5] ] >0);
		X_contra = ( LargeX[176][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit176_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[176][0]=0; L[176][1]=1;}
			satisfiable[176][1]=satisfiable[176][1] & ((x[176] ^ 1) | (x[ unit176_1[i][0] ] ^ unit176_1[i][1]) |(x[ unit176_1[i][2] ] ^ unit176_1[i][3]));
			}
		if(X_contra>0) L[176][1]=2;
		}
	//Check all rules of unit[177][0]
	L[177][0] = LargeX[177][1]>0 ? 1 : 0;
	satisfiable[177][0]=1; 
	for(int i=0;i<66;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit177_0[i][0] ][ unit177_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit177_0[i][2] ][ unit177_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit177_0[i][4] ][ unit177_0[i][5] ] >0);
		X_contra = ( LargeX[177][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit177_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[177][1]=0; L[177][0]=1;}
			satisfiable[177][0]=satisfiable[177][0] & ((x[177] ^ 0) | (x[ unit177_0[i][0] ] ^ unit177_0[i][1]) |(x[ unit177_0[i][2] ] ^ unit177_0[i][3]));
			}
		if(X_contra>0) L[177][0]=2;
		}
	//Check all rules of unit[177][1]
	L[177][1] = LargeX[177][0]>0 ? 1 : 0;
	satisfiable[177][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit177_1[i][0] ][ unit177_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit177_1[i][2] ][ unit177_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit177_1[i][4] ][ unit177_1[i][5] ] >0);
		X_contra = ( LargeX[177][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit177_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[177][0]=0; L[177][1]=1;}
			satisfiable[177][1]=satisfiable[177][1] & ((x[177] ^ 1) | (x[ unit177_1[i][0] ] ^ unit177_1[i][1]) |(x[ unit177_1[i][2] ] ^ unit177_1[i][3]));
			}
		if(X_contra>0) L[177][1]=2;
		}
	//Check all rules of unit[178][0]
	L[178][0] = LargeX[178][1]>0 ? 1 : 0;
	satisfiable[178][0]=1; 
	for(int i=0;i<58;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit178_0[i][0] ][ unit178_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit178_0[i][2] ][ unit178_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit178_0[i][4] ][ unit178_0[i][5] ] >0);
		X_contra = ( LargeX[178][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit178_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[178][1]=0; L[178][0]=1;}
			satisfiable[178][0]=satisfiable[178][0] & ((x[178] ^ 0) | (x[ unit178_0[i][0] ] ^ unit178_0[i][1]) |(x[ unit178_0[i][2] ] ^ unit178_0[i][3]));
			}
		if(X_contra>0) L[178][0]=2;
		}
	//Check all rules of unit[178][1]
	L[178][1] = LargeX[178][0]>0 ? 1 : 0;
	satisfiable[178][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit178_1[i][0] ][ unit178_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit178_1[i][2] ][ unit178_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit178_1[i][4] ][ unit178_1[i][5] ] >0);
		X_contra = ( LargeX[178][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit178_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[178][0]=0; L[178][1]=1;}
			satisfiable[178][1]=satisfiable[178][1] & ((x[178] ^ 1) | (x[ unit178_1[i][0] ] ^ unit178_1[i][1]) |(x[ unit178_1[i][2] ] ^ unit178_1[i][3]));
			}
		if(X_contra>0) L[178][1]=2;
		}
	//Check all rules of unit[179][0]
	L[179][0] = LargeX[179][1]>0 ? 1 : 0;
	satisfiable[179][0]=1; 
	for(int i=0;i<49;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit179_0[i][0] ][ unit179_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit179_0[i][2] ][ unit179_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit179_0[i][4] ][ unit179_0[i][5] ] >0);
		X_contra = ( LargeX[179][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit179_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[179][1]=0; L[179][0]=1;}
			satisfiable[179][0]=satisfiable[179][0] & ((x[179] ^ 0) | (x[ unit179_0[i][0] ] ^ unit179_0[i][1]) |(x[ unit179_0[i][2] ] ^ unit179_0[i][3]));
			}
		if(X_contra>0) L[179][0]=2;
		}
	//Check all rules of unit[179][1]
	L[179][1] = LargeX[179][0]>0 ? 1 : 0;
	satisfiable[179][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit179_1[i][0] ][ unit179_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit179_1[i][2] ][ unit179_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit179_1[i][4] ][ unit179_1[i][5] ] >0);
		X_contra = ( LargeX[179][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit179_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[179][0]=0; L[179][1]=1;}
			satisfiable[179][1]=satisfiable[179][1] & ((x[179] ^ 1) | (x[ unit179_1[i][0] ] ^ unit179_1[i][1]) |(x[ unit179_1[i][2] ] ^ unit179_1[i][3]));
			}
		if(X_contra>0) L[179][1]=2;
		}
	//Check all rules of unit[180][0]
	L[180][0] = LargeX[180][1]>0 ? 1 : 0;
	satisfiable[180][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit180_0[i][0] ][ unit180_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit180_0[i][2] ][ unit180_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit180_0[i][4] ][ unit180_0[i][5] ] >0);
		X_contra = ( LargeX[180][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit180_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[180][1]=0; L[180][0]=1;}
			satisfiable[180][0]=satisfiable[180][0] & ((x[180] ^ 0) | (x[ unit180_0[i][0] ] ^ unit180_0[i][1]) |(x[ unit180_0[i][2] ] ^ unit180_0[i][3]));
			}
		if(X_contra>0) L[180][0]=2;
		}
	//Check all rules of unit[180][1]
	L[180][1] = LargeX[180][0]>0 ? 1 : 0;
	satisfiable[180][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit180_1[i][0] ][ unit180_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit180_1[i][2] ][ unit180_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit180_1[i][4] ][ unit180_1[i][5] ] >0);
		X_contra = ( LargeX[180][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit180_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[180][0]=0; L[180][1]=1;}
			satisfiable[180][1]=satisfiable[180][1] & ((x[180] ^ 1) | (x[ unit180_1[i][0] ] ^ unit180_1[i][1]) |(x[ unit180_1[i][2] ] ^ unit180_1[i][3]));
			}
		if(X_contra>0) L[180][1]=2;
		}
	//Check all rules of unit[181][0]
	L[181][0] = LargeX[181][1]>0 ? 1 : 0;
	satisfiable[181][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit181_0[i][0] ][ unit181_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit181_0[i][2] ][ unit181_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit181_0[i][4] ][ unit181_0[i][5] ] >0);
		X_contra = ( LargeX[181][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit181_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[181][1]=0; L[181][0]=1;}
			satisfiable[181][0]=satisfiable[181][0] & ((x[181] ^ 0) | (x[ unit181_0[i][0] ] ^ unit181_0[i][1]) |(x[ unit181_0[i][2] ] ^ unit181_0[i][3]));
			}
		if(X_contra>0) L[181][0]=2;
		}
	//Check all rules of unit[181][1]
	L[181][1] = LargeX[181][0]>0 ? 1 : 0;
	satisfiable[181][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit181_1[i][0] ][ unit181_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit181_1[i][2] ][ unit181_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit181_1[i][4] ][ unit181_1[i][5] ] >0);
		X_contra = ( LargeX[181][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit181_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[181][0]=0; L[181][1]=1;}
			satisfiable[181][1]=satisfiable[181][1] & ((x[181] ^ 1) | (x[ unit181_1[i][0] ] ^ unit181_1[i][1]) |(x[ unit181_1[i][2] ] ^ unit181_1[i][3]));
			}
		if(X_contra>0) L[181][1]=2;
		}
	//Check all rules of unit[182][0]
	L[182][0] = LargeX[182][1]>0 ? 1 : 0;
	satisfiable[182][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit182_0[i][0] ][ unit182_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit182_0[i][2] ][ unit182_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit182_0[i][4] ][ unit182_0[i][5] ] >0);
		X_contra = ( LargeX[182][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit182_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[182][1]=0; L[182][0]=1;}
			satisfiable[182][0]=satisfiable[182][0] & ((x[182] ^ 0) | (x[ unit182_0[i][0] ] ^ unit182_0[i][1]) |(x[ unit182_0[i][2] ] ^ unit182_0[i][3]));
			}
		if(X_contra>0) L[182][0]=2;
		}
	//Check all rules of unit[182][1]
	L[182][1] = LargeX[182][0]>0 ? 1 : 0;
	satisfiable[182][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit182_1[i][0] ][ unit182_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit182_1[i][2] ][ unit182_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit182_1[i][4] ][ unit182_1[i][5] ] >0);
		X_contra = ( LargeX[182][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit182_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[182][0]=0; L[182][1]=1;}
			satisfiable[182][1]=satisfiable[182][1] & ((x[182] ^ 1) | (x[ unit182_1[i][0] ] ^ unit182_1[i][1]) |(x[ unit182_1[i][2] ] ^ unit182_1[i][3]));
			}
		if(X_contra>0) L[182][1]=2;
		}
	//Check all rules of unit[183][0]
	L[183][0] = LargeX[183][1]>0 ? 1 : 0;
	satisfiable[183][0]=1; 
	for(int i=0;i<45;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit183_0[i][0] ][ unit183_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit183_0[i][2] ][ unit183_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit183_0[i][4] ][ unit183_0[i][5] ] >0);
		X_contra = ( LargeX[183][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit183_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[183][1]=0; L[183][0]=1;}
			satisfiable[183][0]=satisfiable[183][0] & ((x[183] ^ 0) | (x[ unit183_0[i][0] ] ^ unit183_0[i][1]) |(x[ unit183_0[i][2] ] ^ unit183_0[i][3]));
			}
		if(X_contra>0) L[183][0]=2;
		}
	//Check all rules of unit[183][1]
	L[183][1] = LargeX[183][0]>0 ? 1 : 0;
	satisfiable[183][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit183_1[i][0] ][ unit183_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit183_1[i][2] ][ unit183_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit183_1[i][4] ][ unit183_1[i][5] ] >0);
		X_contra = ( LargeX[183][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit183_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[183][0]=0; L[183][1]=1;}
			satisfiable[183][1]=satisfiable[183][1] & ((x[183] ^ 1) | (x[ unit183_1[i][0] ] ^ unit183_1[i][1]) |(x[ unit183_1[i][2] ] ^ unit183_1[i][3]));
			}
		if(X_contra>0) L[183][1]=2;
		}
	//Check all rules of unit[184][0]
	L[184][0] = LargeX[184][1]>0 ? 1 : 0;
	satisfiable[184][0]=1; 
	for(int i=0;i<59;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit184_0[i][0] ][ unit184_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit184_0[i][2] ][ unit184_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit184_0[i][4] ][ unit184_0[i][5] ] >0);
		X_contra = ( LargeX[184][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit184_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[184][1]=0; L[184][0]=1;}
			satisfiable[184][0]=satisfiable[184][0] & ((x[184] ^ 0) | (x[ unit184_0[i][0] ] ^ unit184_0[i][1]) |(x[ unit184_0[i][2] ] ^ unit184_0[i][3]));
			}
		if(X_contra>0) L[184][0]=2;
		}
	//Check all rules of unit[184][1]
	L[184][1] = LargeX[184][0]>0 ? 1 : 0;
	satisfiable[184][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit184_1[i][0] ][ unit184_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit184_1[i][2] ][ unit184_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit184_1[i][4] ][ unit184_1[i][5] ] >0);
		X_contra = ( LargeX[184][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit184_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[184][0]=0; L[184][1]=1;}
			satisfiable[184][1]=satisfiable[184][1] & ((x[184] ^ 1) | (x[ unit184_1[i][0] ] ^ unit184_1[i][1]) |(x[ unit184_1[i][2] ] ^ unit184_1[i][3]));
			}
		if(X_contra>0) L[184][1]=2;
		}
	//Check all rules of unit[185][0]
	L[185][0] = LargeX[185][1]>0 ? 1 : 0;
	satisfiable[185][0]=1; 
	for(int i=0;i<69;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit185_0[i][0] ][ unit185_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit185_0[i][2] ][ unit185_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit185_0[i][4] ][ unit185_0[i][5] ] >0);
		X_contra = ( LargeX[185][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit185_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[185][1]=0; L[185][0]=1;}
			satisfiable[185][0]=satisfiable[185][0] & ((x[185] ^ 0) | (x[ unit185_0[i][0] ] ^ unit185_0[i][1]) |(x[ unit185_0[i][2] ] ^ unit185_0[i][3]));
			}
		if(X_contra>0) L[185][0]=2;
		}
	//Check all rules of unit[185][1]
	L[185][1] = LargeX[185][0]>0 ? 1 : 0;
	satisfiable[185][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit185_1[i][0] ][ unit185_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit185_1[i][2] ][ unit185_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit185_1[i][4] ][ unit185_1[i][5] ] >0);
		X_contra = ( LargeX[185][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit185_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[185][0]=0; L[185][1]=1;}
			satisfiable[185][1]=satisfiable[185][1] & ((x[185] ^ 1) | (x[ unit185_1[i][0] ] ^ unit185_1[i][1]) |(x[ unit185_1[i][2] ] ^ unit185_1[i][3]));
			}
		if(X_contra>0) L[185][1]=2;
		}
	//Check all rules of unit[186][0]
	L[186][0] = LargeX[186][1]>0 ? 1 : 0;
	satisfiable[186][0]=1; 
	for(int i=0;i<79;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit186_0[i][0] ][ unit186_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit186_0[i][2] ][ unit186_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit186_0[i][4] ][ unit186_0[i][5] ] >0);
		X_contra = ( LargeX[186][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit186_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[186][1]=0; L[186][0]=1;}
			satisfiable[186][0]=satisfiable[186][0] & ((x[186] ^ 0) | (x[ unit186_0[i][0] ] ^ unit186_0[i][1]) |(x[ unit186_0[i][2] ] ^ unit186_0[i][3]));
			}
		if(X_contra>0) L[186][0]=2;
		}
	//Check all rules of unit[186][1]
	L[186][1] = LargeX[186][0]>0 ? 1 : 0;
	satisfiable[186][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit186_1[i][0] ][ unit186_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit186_1[i][2] ][ unit186_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit186_1[i][4] ][ unit186_1[i][5] ] >0);
		X_contra = ( LargeX[186][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit186_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[186][0]=0; L[186][1]=1;}
			satisfiable[186][1]=satisfiable[186][1] & ((x[186] ^ 1) | (x[ unit186_1[i][0] ] ^ unit186_1[i][1]) |(x[ unit186_1[i][2] ] ^ unit186_1[i][3]));
			}
		if(X_contra>0) L[186][1]=2;
		}
	//Check all rules of unit[187][0]
	L[187][0] = LargeX[187][1]>0 ? 1 : 0;
	satisfiable[187][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit187_0[i][0] ][ unit187_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit187_0[i][2] ][ unit187_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit187_0[i][4] ][ unit187_0[i][5] ] >0);
		X_contra = ( LargeX[187][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit187_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[187][1]=0; L[187][0]=1;}
			satisfiable[187][0]=satisfiable[187][0] & ((x[187] ^ 0) | (x[ unit187_0[i][0] ] ^ unit187_0[i][1]) |(x[ unit187_0[i][2] ] ^ unit187_0[i][3]));
			}
		if(X_contra>0) L[187][0]=2;
		}
	//Check all rules of unit[187][1]
	L[187][1] = LargeX[187][0]>0 ? 1 : 0;
	satisfiable[187][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit187_1[i][0] ][ unit187_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit187_1[i][2] ][ unit187_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit187_1[i][4] ][ unit187_1[i][5] ] >0);
		X_contra = ( LargeX[187][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit187_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[187][0]=0; L[187][1]=1;}
			satisfiable[187][1]=satisfiable[187][1] & ((x[187] ^ 1) | (x[ unit187_1[i][0] ] ^ unit187_1[i][1]) |(x[ unit187_1[i][2] ] ^ unit187_1[i][3]));
			}
		if(X_contra>0) L[187][1]=2;
		}
	//Check all rules of unit[188][0]
	L[188][0] = LargeX[188][1]>0 ? 1 : 0;
	satisfiable[188][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit188_0[i][0] ][ unit188_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit188_0[i][2] ][ unit188_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit188_0[i][4] ][ unit188_0[i][5] ] >0);
		X_contra = ( LargeX[188][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit188_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[188][1]=0; L[188][0]=1;}
			satisfiable[188][0]=satisfiable[188][0] & ((x[188] ^ 0) | (x[ unit188_0[i][0] ] ^ unit188_0[i][1]) |(x[ unit188_0[i][2] ] ^ unit188_0[i][3]));
			}
		if(X_contra>0) L[188][0]=2;
		}
	//Check all rules of unit[188][1]
	L[188][1] = LargeX[188][0]>0 ? 1 : 0;
	satisfiable[188][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit188_1[i][0] ][ unit188_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit188_1[i][2] ][ unit188_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit188_1[i][4] ][ unit188_1[i][5] ] >0);
		X_contra = ( LargeX[188][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit188_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[188][0]=0; L[188][1]=1;}
			satisfiable[188][1]=satisfiable[188][1] & ((x[188] ^ 1) | (x[ unit188_1[i][0] ] ^ unit188_1[i][1]) |(x[ unit188_1[i][2] ] ^ unit188_1[i][3]));
			}
		if(X_contra>0) L[188][1]=2;
		}
	//Check all rules of unit[189][0]
	L[189][0] = LargeX[189][1]>0 ? 1 : 0;
	satisfiable[189][0]=1; 
	for(int i=0;i<17;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit189_0[i][0] ][ unit189_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit189_0[i][2] ][ unit189_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit189_0[i][4] ][ unit189_0[i][5] ] >0);
		X_contra = ( LargeX[189][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit189_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[189][1]=0; L[189][0]=1;}
			satisfiable[189][0]=satisfiable[189][0] & ((x[189] ^ 0) | (x[ unit189_0[i][0] ] ^ unit189_0[i][1]) |(x[ unit189_0[i][2] ] ^ unit189_0[i][3]));
			}
		if(X_contra>0) L[189][0]=2;
		}
	//Check all rules of unit[189][1]
	L[189][1] = LargeX[189][0]>0 ? 1 : 0;
	satisfiable[189][1]=1; 
	for(int i=0;i<20;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit189_1[i][0] ][ unit189_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit189_1[i][2] ][ unit189_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit189_1[i][4] ][ unit189_1[i][5] ] >0);
		X_contra = ( LargeX[189][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit189_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[189][0]=0; L[189][1]=1;}
			satisfiable[189][1]=satisfiable[189][1] & ((x[189] ^ 1) | (x[ unit189_1[i][0] ] ^ unit189_1[i][1]) |(x[ unit189_1[i][2] ] ^ unit189_1[i][3]));
			}
		if(X_contra>0) L[189][1]=2;
		}
	//Check all rules of unit[190][0]
	L[190][0] = LargeX[190][1]>0 ? 1 : 0;
	satisfiable[190][0]=1; 
	for(int i=0;i<90;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit190_0[i][0] ][ unit190_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit190_0[i][2] ][ unit190_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit190_0[i][4] ][ unit190_0[i][5] ] >0);
		X_contra = ( LargeX[190][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit190_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[190][1]=0; L[190][0]=1;}
			satisfiable[190][0]=satisfiable[190][0] & ((x[190] ^ 0) | (x[ unit190_0[i][0] ] ^ unit190_0[i][1]) |(x[ unit190_0[i][2] ] ^ unit190_0[i][3]));
			}
		if(X_contra>0) L[190][0]=2;
		}
	//Check all rules of unit[190][1]
	L[190][1] = LargeX[190][0]>0 ? 1 : 0;
	satisfiable[190][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit190_1[i][0] ][ unit190_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit190_1[i][2] ][ unit190_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit190_1[i][4] ][ unit190_1[i][5] ] >0);
		X_contra = ( LargeX[190][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit190_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[190][0]=0; L[190][1]=1;}
			satisfiable[190][1]=satisfiable[190][1] & ((x[190] ^ 1) | (x[ unit190_1[i][0] ] ^ unit190_1[i][1]) |(x[ unit190_1[i][2] ] ^ unit190_1[i][3]));
			}
		if(X_contra>0) L[190][1]=2;
		}
	//Check all rules of unit[191][0]
	L[191][0] = LargeX[191][1]>0 ? 1 : 0;
	satisfiable[191][0]=1; 
	for(int i=0;i<72;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit191_0[i][0] ][ unit191_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit191_0[i][2] ][ unit191_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit191_0[i][4] ][ unit191_0[i][5] ] >0);
		X_contra = ( LargeX[191][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit191_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[191][1]=0; L[191][0]=1;}
			satisfiable[191][0]=satisfiable[191][0] & ((x[191] ^ 0) | (x[ unit191_0[i][0] ] ^ unit191_0[i][1]) |(x[ unit191_0[i][2] ] ^ unit191_0[i][3]));
			}
		if(X_contra>0) L[191][0]=2;
		}
	//Check all rules of unit[191][1]
	L[191][1] = LargeX[191][0]>0 ? 1 : 0;
	satisfiable[191][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit191_1[i][0] ][ unit191_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit191_1[i][2] ][ unit191_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit191_1[i][4] ][ unit191_1[i][5] ] >0);
		X_contra = ( LargeX[191][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit191_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[191][0]=0; L[191][1]=1;}
			satisfiable[191][1]=satisfiable[191][1] & ((x[191] ^ 1) | (x[ unit191_1[i][0] ] ^ unit191_1[i][1]) |(x[ unit191_1[i][2] ] ^ unit191_1[i][3]));
			}
		if(X_contra>0) L[191][1]=2;
		}
	//Check all rules of unit[192][0]
	L[192][0] = LargeX[192][1]>0 ? 1 : 0;
	satisfiable[192][0]=1; 
	for(int i=0;i<63;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit192_0[i][0] ][ unit192_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit192_0[i][2] ][ unit192_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit192_0[i][4] ][ unit192_0[i][5] ] >0);
		X_contra = ( LargeX[192][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit192_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[192][1]=0; L[192][0]=1;}
			satisfiable[192][0]=satisfiable[192][0] & ((x[192] ^ 0) | (x[ unit192_0[i][0] ] ^ unit192_0[i][1]) |(x[ unit192_0[i][2] ] ^ unit192_0[i][3]));
			}
		if(X_contra>0) L[192][0]=2;
		}
	//Check all rules of unit[192][1]
	L[192][1] = LargeX[192][0]>0 ? 1 : 0;
	satisfiable[192][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit192_1[i][0] ][ unit192_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit192_1[i][2] ][ unit192_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit192_1[i][4] ][ unit192_1[i][5] ] >0);
		X_contra = ( LargeX[192][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit192_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[192][0]=0; L[192][1]=1;}
			satisfiable[192][1]=satisfiable[192][1] & ((x[192] ^ 1) | (x[ unit192_1[i][0] ] ^ unit192_1[i][1]) |(x[ unit192_1[i][2] ] ^ unit192_1[i][3]));
			}
		if(X_contra>0) L[192][1]=2;
		}
	//Check all rules of unit[193][0]
	L[193][0] = LargeX[193][1]>0 ? 1 : 0;
	satisfiable[193][0]=1; 
	for(int i=0;i<46;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit193_0[i][0] ][ unit193_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit193_0[i][2] ][ unit193_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit193_0[i][4] ][ unit193_0[i][5] ] >0);
		X_contra = ( LargeX[193][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit193_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[193][1]=0; L[193][0]=1;}
			satisfiable[193][0]=satisfiable[193][0] & ((x[193] ^ 0) | (x[ unit193_0[i][0] ] ^ unit193_0[i][1]) |(x[ unit193_0[i][2] ] ^ unit193_0[i][3]));
			}
		if(X_contra>0) L[193][0]=2;
		}
	//Check all rules of unit[193][1]
	L[193][1] = LargeX[193][0]>0 ? 1 : 0;
	satisfiable[193][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit193_1[i][0] ][ unit193_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit193_1[i][2] ][ unit193_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit193_1[i][4] ][ unit193_1[i][5] ] >0);
		X_contra = ( LargeX[193][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit193_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[193][0]=0; L[193][1]=1;}
			satisfiable[193][1]=satisfiable[193][1] & ((x[193] ^ 1) | (x[ unit193_1[i][0] ] ^ unit193_1[i][1]) |(x[ unit193_1[i][2] ] ^ unit193_1[i][3]));
			}
		if(X_contra>0) L[193][1]=2;
		}
	//Check all rules of unit[194][0]
	L[194][0] = LargeX[194][1]>0 ? 1 : 0;
	satisfiable[194][0]=1; 
	for(int i=0;i<43;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit194_0[i][0] ][ unit194_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit194_0[i][2] ][ unit194_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit194_0[i][4] ][ unit194_0[i][5] ] >0);
		X_contra = ( LargeX[194][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit194_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[194][1]=0; L[194][0]=1;}
			satisfiable[194][0]=satisfiable[194][0] & ((x[194] ^ 0) | (x[ unit194_0[i][0] ] ^ unit194_0[i][1]) |(x[ unit194_0[i][2] ] ^ unit194_0[i][3]));
			}
		if(X_contra>0) L[194][0]=2;
		}
	//Check all rules of unit[194][1]
	L[194][1] = LargeX[194][0]>0 ? 1 : 0;
	satisfiable[194][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit194_1[i][0] ][ unit194_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit194_1[i][2] ][ unit194_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit194_1[i][4] ][ unit194_1[i][5] ] >0);
		X_contra = ( LargeX[194][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit194_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[194][0]=0; L[194][1]=1;}
			satisfiable[194][1]=satisfiable[194][1] & ((x[194] ^ 1) | (x[ unit194_1[i][0] ] ^ unit194_1[i][1]) |(x[ unit194_1[i][2] ] ^ unit194_1[i][3]));
			}
		if(X_contra>0) L[194][1]=2;
		}
	//Check all rules of unit[195][0]
	L[195][0] = LargeX[195][1]>0 ? 1 : 0;
	satisfiable[195][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit195_0[i][0] ][ unit195_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit195_0[i][2] ][ unit195_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit195_0[i][4] ][ unit195_0[i][5] ] >0);
		X_contra = ( LargeX[195][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit195_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[195][1]=0; L[195][0]=1;}
			satisfiable[195][0]=satisfiable[195][0] & ((x[195] ^ 0) | (x[ unit195_0[i][0] ] ^ unit195_0[i][1]) |(x[ unit195_0[i][2] ] ^ unit195_0[i][3]));
			}
		if(X_contra>0) L[195][0]=2;
		}
	//Check all rules of unit[195][1]
	L[195][1] = LargeX[195][0]>0 ? 1 : 0;
	satisfiable[195][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit195_1[i][0] ][ unit195_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit195_1[i][2] ][ unit195_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit195_1[i][4] ][ unit195_1[i][5] ] >0);
		X_contra = ( LargeX[195][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit195_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[195][0]=0; L[195][1]=1;}
			satisfiable[195][1]=satisfiable[195][1] & ((x[195] ^ 1) | (x[ unit195_1[i][0] ] ^ unit195_1[i][1]) |(x[ unit195_1[i][2] ] ^ unit195_1[i][3]));
			}
		if(X_contra>0) L[195][1]=2;
		}
	//Check all rules of unit[196][0]
	L[196][0] = LargeX[196][1]>0 ? 1 : 0;
	satisfiable[196][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit196_0[i][0] ][ unit196_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit196_0[i][2] ][ unit196_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit196_0[i][4] ][ unit196_0[i][5] ] >0);
		X_contra = ( LargeX[196][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit196_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[196][1]=0; L[196][0]=1;}
			satisfiable[196][0]=satisfiable[196][0] & ((x[196] ^ 0) | (x[ unit196_0[i][0] ] ^ unit196_0[i][1]) |(x[ unit196_0[i][2] ] ^ unit196_0[i][3]));
			}
		if(X_contra>0) L[196][0]=2;
		}
	//Check all rules of unit[196][1]
	L[196][1] = LargeX[196][0]>0 ? 1 : 0;
	satisfiable[196][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit196_1[i][0] ][ unit196_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit196_1[i][2] ][ unit196_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit196_1[i][4] ][ unit196_1[i][5] ] >0);
		X_contra = ( LargeX[196][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit196_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[196][0]=0; L[196][1]=1;}
			satisfiable[196][1]=satisfiable[196][1] & ((x[196] ^ 1) | (x[ unit196_1[i][0] ] ^ unit196_1[i][1]) |(x[ unit196_1[i][2] ] ^ unit196_1[i][3]));
			}
		if(X_contra>0) L[196][1]=2;
		}
	//Check all rules of unit[197][0]
	L[197][0] = LargeX[197][1]>0 ? 1 : 0;
	satisfiable[197][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit197_0[i][0] ][ unit197_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit197_0[i][2] ][ unit197_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit197_0[i][4] ][ unit197_0[i][5] ] >0);
		X_contra = ( LargeX[197][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit197_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[197][1]=0; L[197][0]=1;}
			satisfiable[197][0]=satisfiable[197][0] & ((x[197] ^ 0) | (x[ unit197_0[i][0] ] ^ unit197_0[i][1]) |(x[ unit197_0[i][2] ] ^ unit197_0[i][3]));
			}
		if(X_contra>0) L[197][0]=2;
		}
	//Check all rules of unit[197][1]
	L[197][1] = LargeX[197][0]>0 ? 1 : 0;
	satisfiable[197][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit197_1[i][0] ][ unit197_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit197_1[i][2] ][ unit197_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit197_1[i][4] ][ unit197_1[i][5] ] >0);
		X_contra = ( LargeX[197][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit197_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[197][0]=0; L[197][1]=1;}
			satisfiable[197][1]=satisfiable[197][1] & ((x[197] ^ 1) | (x[ unit197_1[i][0] ] ^ unit197_1[i][1]) |(x[ unit197_1[i][2] ] ^ unit197_1[i][3]));
			}
		if(X_contra>0) L[197][1]=2;
		}
	//Check all rules of unit[198][0]
	L[198][0] = LargeX[198][1]>0 ? 1 : 0;
	satisfiable[198][0]=1; 
	for(int i=0;i<45;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit198_0[i][0] ][ unit198_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit198_0[i][2] ][ unit198_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit198_0[i][4] ][ unit198_0[i][5] ] >0);
		X_contra = ( LargeX[198][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit198_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[198][1]=0; L[198][0]=1;}
			satisfiable[198][0]=satisfiable[198][0] & ((x[198] ^ 0) | (x[ unit198_0[i][0] ] ^ unit198_0[i][1]) |(x[ unit198_0[i][2] ] ^ unit198_0[i][3]));
			}
		if(X_contra>0) L[198][0]=2;
		}
	//Check all rules of unit[198][1]
	L[198][1] = LargeX[198][0]>0 ? 1 : 0;
	satisfiable[198][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit198_1[i][0] ][ unit198_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit198_1[i][2] ][ unit198_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit198_1[i][4] ][ unit198_1[i][5] ] >0);
		X_contra = ( LargeX[198][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit198_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[198][0]=0; L[198][1]=1;}
			satisfiable[198][1]=satisfiable[198][1] & ((x[198] ^ 1) | (x[ unit198_1[i][0] ] ^ unit198_1[i][1]) |(x[ unit198_1[i][2] ] ^ unit198_1[i][3]));
			}
		if(X_contra>0) L[198][1]=2;
		}
	//Check all rules of unit[199][0]
	L[199][0] = LargeX[199][1]>0 ? 1 : 0;
	satisfiable[199][0]=1; 
	for(int i=0;i<59;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit199_0[i][0] ][ unit199_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit199_0[i][2] ][ unit199_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit199_0[i][4] ][ unit199_0[i][5] ] >0);
		X_contra = ( LargeX[199][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit199_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[199][1]=0; L[199][0]=1;}
			satisfiable[199][0]=satisfiable[199][0] & ((x[199] ^ 0) | (x[ unit199_0[i][0] ] ^ unit199_0[i][1]) |(x[ unit199_0[i][2] ] ^ unit199_0[i][3]));
			}
		if(X_contra>0) L[199][0]=2;
		}
	//Check all rules of unit[199][1]
	L[199][1] = LargeX[199][0]>0 ? 1 : 0;
	satisfiable[199][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit199_1[i][0] ][ unit199_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit199_1[i][2] ][ unit199_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit199_1[i][4] ][ unit199_1[i][5] ] >0);
		X_contra = ( LargeX[199][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit199_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[199][0]=0; L[199][1]=1;}
			satisfiable[199][1]=satisfiable[199][1] & ((x[199] ^ 1) | (x[ unit199_1[i][0] ] ^ unit199_1[i][1]) |(x[ unit199_1[i][2] ] ^ unit199_1[i][3]));
			}
		if(X_contra>0) L[199][1]=2;
		}
	//Check all rules of unit[200][0]
	L[200][0] = LargeX[200][1]>0 ? 1 : 0;
	satisfiable[200][0]=1; 
	for(int i=0;i<69;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit200_0[i][0] ][ unit200_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit200_0[i][2] ][ unit200_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit200_0[i][4] ][ unit200_0[i][5] ] >0);
		X_contra = ( LargeX[200][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit200_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[200][1]=0; L[200][0]=1;}
			satisfiable[200][0]=satisfiable[200][0] & ((x[200] ^ 0) | (x[ unit200_0[i][0] ] ^ unit200_0[i][1]) |(x[ unit200_0[i][2] ] ^ unit200_0[i][3]));
			}
		if(X_contra>0) L[200][0]=2;
		}
	//Check all rules of unit[200][1]
	L[200][1] = LargeX[200][0]>0 ? 1 : 0;
	satisfiable[200][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit200_1[i][0] ][ unit200_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit200_1[i][2] ][ unit200_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit200_1[i][4] ][ unit200_1[i][5] ] >0);
		X_contra = ( LargeX[200][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit200_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[200][0]=0; L[200][1]=1;}
			satisfiable[200][1]=satisfiable[200][1] & ((x[200] ^ 1) | (x[ unit200_1[i][0] ] ^ unit200_1[i][1]) |(x[ unit200_1[i][2] ] ^ unit200_1[i][3]));
			}
		if(X_contra>0) L[200][1]=2;
		}
	//Check all rules of unit[201][0]
	L[201][0] = LargeX[201][1]>0 ? 1 : 0;
	satisfiable[201][0]=1; 
	for(int i=0;i<79;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit201_0[i][0] ][ unit201_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit201_0[i][2] ][ unit201_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit201_0[i][4] ][ unit201_0[i][5] ] >0);
		X_contra = ( LargeX[201][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit201_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[201][1]=0; L[201][0]=1;}
			satisfiable[201][0]=satisfiable[201][0] & ((x[201] ^ 0) | (x[ unit201_0[i][0] ] ^ unit201_0[i][1]) |(x[ unit201_0[i][2] ] ^ unit201_0[i][3]));
			}
		if(X_contra>0) L[201][0]=2;
		}
	//Check all rules of unit[201][1]
	L[201][1] = LargeX[201][0]>0 ? 1 : 0;
	satisfiable[201][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit201_1[i][0] ][ unit201_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit201_1[i][2] ][ unit201_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit201_1[i][4] ][ unit201_1[i][5] ] >0);
		X_contra = ( LargeX[201][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit201_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[201][0]=0; L[201][1]=1;}
			satisfiable[201][1]=satisfiable[201][1] & ((x[201] ^ 1) | (x[ unit201_1[i][0] ] ^ unit201_1[i][1]) |(x[ unit201_1[i][2] ] ^ unit201_1[i][3]));
			}
		if(X_contra>0) L[201][1]=2;
		}
	//Check all rules of unit[202][0]
	L[202][0] = LargeX[202][1]>0 ? 1 : 0;
	satisfiable[202][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit202_0[i][0] ][ unit202_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit202_0[i][2] ][ unit202_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit202_0[i][4] ][ unit202_0[i][5] ] >0);
		X_contra = ( LargeX[202][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit202_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[202][1]=0; L[202][0]=1;}
			satisfiable[202][0]=satisfiable[202][0] & ((x[202] ^ 0) | (x[ unit202_0[i][0] ] ^ unit202_0[i][1]) |(x[ unit202_0[i][2] ] ^ unit202_0[i][3]));
			}
		if(X_contra>0) L[202][0]=2;
		}
	//Check all rules of unit[202][1]
	L[202][1] = LargeX[202][0]>0 ? 1 : 0;
	satisfiable[202][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit202_1[i][0] ][ unit202_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit202_1[i][2] ][ unit202_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit202_1[i][4] ][ unit202_1[i][5] ] >0);
		X_contra = ( LargeX[202][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit202_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[202][0]=0; L[202][1]=1;}
			satisfiable[202][1]=satisfiable[202][1] & ((x[202] ^ 1) | (x[ unit202_1[i][0] ] ^ unit202_1[i][1]) |(x[ unit202_1[i][2] ] ^ unit202_1[i][3]));
			}
		if(X_contra>0) L[202][1]=2;
		}
	//Check all rules of unit[203][0]
	L[203][0] = LargeX[203][1]>0 ? 1 : 0;
	satisfiable[203][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit203_0[i][0] ][ unit203_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit203_0[i][2] ][ unit203_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit203_0[i][4] ][ unit203_0[i][5] ] >0);
		X_contra = ( LargeX[203][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit203_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[203][1]=0; L[203][0]=1;}
			satisfiable[203][0]=satisfiable[203][0] & ((x[203] ^ 0) | (x[ unit203_0[i][0] ] ^ unit203_0[i][1]) |(x[ unit203_0[i][2] ] ^ unit203_0[i][3]));
			}
		if(X_contra>0) L[203][0]=2;
		}
	//Check all rules of unit[203][1]
	L[203][1] = LargeX[203][0]>0 ? 1 : 0;
	satisfiable[203][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit203_1[i][0] ][ unit203_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit203_1[i][2] ][ unit203_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit203_1[i][4] ][ unit203_1[i][5] ] >0);
		X_contra = ( LargeX[203][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit203_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[203][0]=0; L[203][1]=1;}
			satisfiable[203][1]=satisfiable[203][1] & ((x[203] ^ 1) | (x[ unit203_1[i][0] ] ^ unit203_1[i][1]) |(x[ unit203_1[i][2] ] ^ unit203_1[i][3]));
			}
		if(X_contra>0) L[203][1]=2;
		}
	//Check all rules of unit[204][0]
	L[204][0] = LargeX[204][1]>0 ? 1 : 0;
	satisfiable[204][0]=1; 
	for(int i=0;i<38;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit204_0[i][0] ][ unit204_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit204_0[i][2] ][ unit204_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit204_0[i][4] ][ unit204_0[i][5] ] >0);
		X_contra = ( LargeX[204][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit204_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[204][1]=0; L[204][0]=1;}
			satisfiable[204][0]=satisfiable[204][0] & ((x[204] ^ 0) | (x[ unit204_0[i][0] ] ^ unit204_0[i][1]) |(x[ unit204_0[i][2] ] ^ unit204_0[i][3]));
			}
		if(X_contra>0) L[204][0]=2;
		}
	//Check all rules of unit[204][1]
	L[204][1] = LargeX[204][0]>0 ? 1 : 0;
	satisfiable[204][1]=1; 
	for(int i=0;i<15;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit204_1[i][0] ][ unit204_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit204_1[i][2] ][ unit204_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit204_1[i][4] ][ unit204_1[i][5] ] >0);
		X_contra = ( LargeX[204][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit204_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[204][0]=0; L[204][1]=1;}
			satisfiable[204][1]=satisfiable[204][1] & ((x[204] ^ 1) | (x[ unit204_1[i][0] ] ^ unit204_1[i][1]) |(x[ unit204_1[i][2] ] ^ unit204_1[i][3]));
			}
		if(X_contra>0) L[204][1]=2;
		}
	//Check all rules of unit[205][0]
	L[205][0] = LargeX[205][1]>0 ? 1 : 0;
	satisfiable[205][0]=1; 
	for(int i=0;i<34;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit205_0[i][0] ][ unit205_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit205_0[i][2] ][ unit205_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit205_0[i][4] ][ unit205_0[i][5] ] >0);
		X_contra = ( LargeX[205][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit205_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[205][1]=0; L[205][0]=1;}
			satisfiable[205][0]=satisfiable[205][0] & ((x[205] ^ 0) | (x[ unit205_0[i][0] ] ^ unit205_0[i][1]) |(x[ unit205_0[i][2] ] ^ unit205_0[i][3]));
			}
		if(X_contra>0) L[205][0]=2;
		}
	//Check all rules of unit[205][1]
	L[205][1] = LargeX[205][0]>0 ? 1 : 0;
	satisfiable[205][1]=1; 
	for(int i=0;i<15;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit205_1[i][0] ][ unit205_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit205_1[i][2] ][ unit205_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit205_1[i][4] ][ unit205_1[i][5] ] >0);
		X_contra = ( LargeX[205][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit205_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[205][0]=0; L[205][1]=1;}
			satisfiable[205][1]=satisfiable[205][1] & ((x[205] ^ 1) | (x[ unit205_1[i][0] ] ^ unit205_1[i][1]) |(x[ unit205_1[i][2] ] ^ unit205_1[i][3]));
			}
		if(X_contra>0) L[205][1]=2;
		}
	//Check all rules of unit[206][0]
	L[206][0] = LargeX[206][1]>0 ? 1 : 0;
	satisfiable[206][0]=1; 
	for(int i=0;i<88;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit206_0[i][0] ][ unit206_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit206_0[i][2] ][ unit206_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit206_0[i][4] ][ unit206_0[i][5] ] >0);
		X_contra = ( LargeX[206][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit206_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[206][1]=0; L[206][0]=1;}
			satisfiable[206][0]=satisfiable[206][0] & ((x[206] ^ 0) | (x[ unit206_0[i][0] ] ^ unit206_0[i][1]) |(x[ unit206_0[i][2] ] ^ unit206_0[i][3]));
			}
		if(X_contra>0) L[206][0]=2;
		}
	//Check all rules of unit[206][1]
	L[206][1] = LargeX[206][0]>0 ? 1 : 0;
	satisfiable[206][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit206_1[i][0] ][ unit206_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit206_1[i][2] ][ unit206_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit206_1[i][4] ][ unit206_1[i][5] ] >0);
		X_contra = ( LargeX[206][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit206_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[206][0]=0; L[206][1]=1;}
			satisfiable[206][1]=satisfiable[206][1] & ((x[206] ^ 1) | (x[ unit206_1[i][0] ] ^ unit206_1[i][1]) |(x[ unit206_1[i][2] ] ^ unit206_1[i][3]));
			}
		if(X_contra>0) L[206][1]=2;
		}
	//Check all rules of unit[207][0]
	L[207][0] = LargeX[207][1]>0 ? 1 : 0;
	satisfiable[207][0]=1; 
	for(int i=0;i<77;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit207_0[i][0] ][ unit207_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit207_0[i][2] ][ unit207_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit207_0[i][4] ][ unit207_0[i][5] ] >0);
		X_contra = ( LargeX[207][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit207_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[207][1]=0; L[207][0]=1;}
			satisfiable[207][0]=satisfiable[207][0] & ((x[207] ^ 0) | (x[ unit207_0[i][0] ] ^ unit207_0[i][1]) |(x[ unit207_0[i][2] ] ^ unit207_0[i][3]));
			}
		if(X_contra>0) L[207][0]=2;
		}
	//Check all rules of unit[207][1]
	L[207][1] = LargeX[207][0]>0 ? 1 : 0;
	satisfiable[207][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit207_1[i][0] ][ unit207_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit207_1[i][2] ][ unit207_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit207_1[i][4] ][ unit207_1[i][5] ] >0);
		X_contra = ( LargeX[207][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit207_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[207][0]=0; L[207][1]=1;}
			satisfiable[207][1]=satisfiable[207][1] & ((x[207] ^ 1) | (x[ unit207_1[i][0] ] ^ unit207_1[i][1]) |(x[ unit207_1[i][2] ] ^ unit207_1[i][3]));
			}
		if(X_contra>0) L[207][1]=2;
		}
	//Check all rules of unit[208][0]
	L[208][0] = LargeX[208][1]>0 ? 1 : 0;
	satisfiable[208][0]=1; 
	for(int i=0;i<72;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit208_0[i][0] ][ unit208_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit208_0[i][2] ][ unit208_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit208_0[i][4] ][ unit208_0[i][5] ] >0);
		X_contra = ( LargeX[208][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit208_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[208][1]=0; L[208][0]=1;}
			satisfiable[208][0]=satisfiable[208][0] & ((x[208] ^ 0) | (x[ unit208_0[i][0] ] ^ unit208_0[i][1]) |(x[ unit208_0[i][2] ] ^ unit208_0[i][3]));
			}
		if(X_contra>0) L[208][0]=2;
		}
	//Check all rules of unit[208][1]
	L[208][1] = LargeX[208][0]>0 ? 1 : 0;
	satisfiable[208][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit208_1[i][0] ][ unit208_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit208_1[i][2] ][ unit208_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit208_1[i][4] ][ unit208_1[i][5] ] >0);
		X_contra = ( LargeX[208][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit208_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[208][0]=0; L[208][1]=1;}
			satisfiable[208][1]=satisfiable[208][1] & ((x[208] ^ 1) | (x[ unit208_1[i][0] ] ^ unit208_1[i][1]) |(x[ unit208_1[i][2] ] ^ unit208_1[i][3]));
			}
		if(X_contra>0) L[208][1]=2;
		}
	//Check all rules of unit[209][0]
	L[209][0] = LargeX[209][1]>0 ? 1 : 0;
	satisfiable[209][0]=1; 
	for(int i=0;i<64;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit209_0[i][0] ][ unit209_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit209_0[i][2] ][ unit209_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit209_0[i][4] ][ unit209_0[i][5] ] >0);
		X_contra = ( LargeX[209][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit209_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[209][1]=0; L[209][0]=1;}
			satisfiable[209][0]=satisfiable[209][0] & ((x[209] ^ 0) | (x[ unit209_0[i][0] ] ^ unit209_0[i][1]) |(x[ unit209_0[i][2] ] ^ unit209_0[i][3]));
			}
		if(X_contra>0) L[209][0]=2;
		}
	//Check all rules of unit[209][1]
	L[209][1] = LargeX[209][0]>0 ? 1 : 0;
	satisfiable[209][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit209_1[i][0] ][ unit209_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit209_1[i][2] ][ unit209_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit209_1[i][4] ][ unit209_1[i][5] ] >0);
		X_contra = ( LargeX[209][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit209_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[209][0]=0; L[209][1]=1;}
			satisfiable[209][1]=satisfiable[209][1] & ((x[209] ^ 1) | (x[ unit209_1[i][0] ] ^ unit209_1[i][1]) |(x[ unit209_1[i][2] ] ^ unit209_1[i][3]));
			}
		if(X_contra>0) L[209][1]=2;
		}
	//Check all rules of unit[210][0]
	L[210][0] = LargeX[210][1]>0 ? 1 : 0;
	satisfiable[210][0]=1; 
	for(int i=0;i<52;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit210_0[i][0] ][ unit210_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit210_0[i][2] ][ unit210_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit210_0[i][4] ][ unit210_0[i][5] ] >0);
		X_contra = ( LargeX[210][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit210_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[210][1]=0; L[210][0]=1;}
			satisfiable[210][0]=satisfiable[210][0] & ((x[210] ^ 0) | (x[ unit210_0[i][0] ] ^ unit210_0[i][1]) |(x[ unit210_0[i][2] ] ^ unit210_0[i][3]));
			}
		if(X_contra>0) L[210][0]=2;
		}
	//Check all rules of unit[210][1]
	L[210][1] = LargeX[210][0]>0 ? 1 : 0;
	satisfiable[210][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit210_1[i][0] ][ unit210_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit210_1[i][2] ][ unit210_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit210_1[i][4] ][ unit210_1[i][5] ] >0);
		X_contra = ( LargeX[210][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit210_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[210][0]=0; L[210][1]=1;}
			satisfiable[210][1]=satisfiable[210][1] & ((x[210] ^ 1) | (x[ unit210_1[i][0] ] ^ unit210_1[i][1]) |(x[ unit210_1[i][2] ] ^ unit210_1[i][3]));
			}
		if(X_contra>0) L[210][1]=2;
		}
	//Check all rules of unit[211][0]
	L[211][0] = LargeX[211][1]>0 ? 1 : 0;
	satisfiable[211][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit211_0[i][0] ][ unit211_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit211_0[i][2] ][ unit211_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit211_0[i][4] ][ unit211_0[i][5] ] >0);
		X_contra = ( LargeX[211][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit211_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[211][1]=0; L[211][0]=1;}
			satisfiable[211][0]=satisfiable[211][0] & ((x[211] ^ 0) | (x[ unit211_0[i][0] ] ^ unit211_0[i][1]) |(x[ unit211_0[i][2] ] ^ unit211_0[i][3]));
			}
		if(X_contra>0) L[211][0]=2;
		}
	//Check all rules of unit[211][1]
	L[211][1] = LargeX[211][0]>0 ? 1 : 0;
	satisfiable[211][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit211_1[i][0] ][ unit211_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit211_1[i][2] ][ unit211_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit211_1[i][4] ][ unit211_1[i][5] ] >0);
		X_contra = ( LargeX[211][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit211_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[211][0]=0; L[211][1]=1;}
			satisfiable[211][1]=satisfiable[211][1] & ((x[211] ^ 1) | (x[ unit211_1[i][0] ] ^ unit211_1[i][1]) |(x[ unit211_1[i][2] ] ^ unit211_1[i][3]));
			}
		if(X_contra>0) L[211][1]=2;
		}
	//Check all rules of unit[212][0]
	L[212][0] = LargeX[212][1]>0 ? 1 : 0;
	satisfiable[212][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit212_0[i][0] ][ unit212_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit212_0[i][2] ][ unit212_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit212_0[i][4] ][ unit212_0[i][5] ] >0);
		X_contra = ( LargeX[212][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit212_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[212][1]=0; L[212][0]=1;}
			satisfiable[212][0]=satisfiable[212][0] & ((x[212] ^ 0) | (x[ unit212_0[i][0] ] ^ unit212_0[i][1]) |(x[ unit212_0[i][2] ] ^ unit212_0[i][3]));
			}
		if(X_contra>0) L[212][0]=2;
		}
	//Check all rules of unit[212][1]
	L[212][1] = LargeX[212][0]>0 ? 1 : 0;
	satisfiable[212][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit212_1[i][0] ][ unit212_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit212_1[i][2] ][ unit212_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit212_1[i][4] ][ unit212_1[i][5] ] >0);
		X_contra = ( LargeX[212][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit212_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[212][0]=0; L[212][1]=1;}
			satisfiable[212][1]=satisfiable[212][1] & ((x[212] ^ 1) | (x[ unit212_1[i][0] ] ^ unit212_1[i][1]) |(x[ unit212_1[i][2] ] ^ unit212_1[i][3]));
			}
		if(X_contra>0) L[212][1]=2;
		}
	//Check all rules of unit[213][0]
	L[213][0] = LargeX[213][1]>0 ? 1 : 0;
	satisfiable[213][0]=1; 
	for(int i=0;i<35;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit213_0[i][0] ][ unit213_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit213_0[i][2] ][ unit213_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit213_0[i][4] ][ unit213_0[i][5] ] >0);
		X_contra = ( LargeX[213][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit213_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[213][1]=0; L[213][0]=1;}
			satisfiable[213][0]=satisfiable[213][0] & ((x[213] ^ 0) | (x[ unit213_0[i][0] ] ^ unit213_0[i][1]) |(x[ unit213_0[i][2] ] ^ unit213_0[i][3]));
			}
		if(X_contra>0) L[213][0]=2;
		}
	//Check all rules of unit[213][1]
	L[213][1] = LargeX[213][0]>0 ? 1 : 0;
	satisfiable[213][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit213_1[i][0] ][ unit213_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit213_1[i][2] ][ unit213_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit213_1[i][4] ][ unit213_1[i][5] ] >0);
		X_contra = ( LargeX[213][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit213_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[213][0]=0; L[213][1]=1;}
			satisfiable[213][1]=satisfiable[213][1] & ((x[213] ^ 1) | (x[ unit213_1[i][0] ] ^ unit213_1[i][1]) |(x[ unit213_1[i][2] ] ^ unit213_1[i][3]));
			}
		if(X_contra>0) L[213][1]=2;
		}
	//Check all rules of unit[214][0]
	L[214][0] = LargeX[214][1]>0 ? 1 : 0;
	satisfiable[214][0]=1; 
	for(int i=0;i<45;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit214_0[i][0] ][ unit214_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit214_0[i][2] ][ unit214_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit214_0[i][4] ][ unit214_0[i][5] ] >0);
		X_contra = ( LargeX[214][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit214_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[214][1]=0; L[214][0]=1;}
			satisfiable[214][0]=satisfiable[214][0] & ((x[214] ^ 0) | (x[ unit214_0[i][0] ] ^ unit214_0[i][1]) |(x[ unit214_0[i][2] ] ^ unit214_0[i][3]));
			}
		if(X_contra>0) L[214][0]=2;
		}
	//Check all rules of unit[214][1]
	L[214][1] = LargeX[214][0]>0 ? 1 : 0;
	satisfiable[214][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit214_1[i][0] ][ unit214_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit214_1[i][2] ][ unit214_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit214_1[i][4] ][ unit214_1[i][5] ] >0);
		X_contra = ( LargeX[214][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit214_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[214][0]=0; L[214][1]=1;}
			satisfiable[214][1]=satisfiable[214][1] & ((x[214] ^ 1) | (x[ unit214_1[i][0] ] ^ unit214_1[i][1]) |(x[ unit214_1[i][2] ] ^ unit214_1[i][3]));
			}
		if(X_contra>0) L[214][1]=2;
		}
	//Check all rules of unit[215][0]
	L[215][0] = LargeX[215][1]>0 ? 1 : 0;
	satisfiable[215][0]=1; 
	for(int i=0;i<59;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit215_0[i][0] ][ unit215_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit215_0[i][2] ][ unit215_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit215_0[i][4] ][ unit215_0[i][5] ] >0);
		X_contra = ( LargeX[215][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit215_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[215][1]=0; L[215][0]=1;}
			satisfiable[215][0]=satisfiable[215][0] & ((x[215] ^ 0) | (x[ unit215_0[i][0] ] ^ unit215_0[i][1]) |(x[ unit215_0[i][2] ] ^ unit215_0[i][3]));
			}
		if(X_contra>0) L[215][0]=2;
		}
	//Check all rules of unit[215][1]
	L[215][1] = LargeX[215][0]>0 ? 1 : 0;
	satisfiable[215][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit215_1[i][0] ][ unit215_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit215_1[i][2] ][ unit215_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit215_1[i][4] ][ unit215_1[i][5] ] >0);
		X_contra = ( LargeX[215][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit215_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[215][0]=0; L[215][1]=1;}
			satisfiable[215][1]=satisfiable[215][1] & ((x[215] ^ 1) | (x[ unit215_1[i][0] ] ^ unit215_1[i][1]) |(x[ unit215_1[i][2] ] ^ unit215_1[i][3]));
			}
		if(X_contra>0) L[215][1]=2;
		}
	//Check all rules of unit[216][0]
	L[216][0] = LargeX[216][1]>0 ? 1 : 0;
	satisfiable[216][0]=1; 
	for(int i=0;i<69;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit216_0[i][0] ][ unit216_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit216_0[i][2] ][ unit216_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit216_0[i][4] ][ unit216_0[i][5] ] >0);
		X_contra = ( LargeX[216][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit216_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[216][1]=0; L[216][0]=1;}
			satisfiable[216][0]=satisfiable[216][0] & ((x[216] ^ 0) | (x[ unit216_0[i][0] ] ^ unit216_0[i][1]) |(x[ unit216_0[i][2] ] ^ unit216_0[i][3]));
			}
		if(X_contra>0) L[216][0]=2;
		}
	//Check all rules of unit[216][1]
	L[216][1] = LargeX[216][0]>0 ? 1 : 0;
	satisfiable[216][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit216_1[i][0] ][ unit216_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit216_1[i][2] ][ unit216_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit216_1[i][4] ][ unit216_1[i][5] ] >0);
		X_contra = ( LargeX[216][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit216_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[216][0]=0; L[216][1]=1;}
			satisfiable[216][1]=satisfiable[216][1] & ((x[216] ^ 1) | (x[ unit216_1[i][0] ] ^ unit216_1[i][1]) |(x[ unit216_1[i][2] ] ^ unit216_1[i][3]));
			}
		if(X_contra>0) L[216][1]=2;
		}
	//Check all rules of unit[217][0]
	L[217][0] = LargeX[217][1]>0 ? 1 : 0;
	satisfiable[217][0]=1; 
	for(int i=0;i<78;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit217_0[i][0] ][ unit217_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit217_0[i][2] ][ unit217_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit217_0[i][4] ][ unit217_0[i][5] ] >0);
		X_contra = ( LargeX[217][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit217_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[217][1]=0; L[217][0]=1;}
			satisfiable[217][0]=satisfiable[217][0] & ((x[217] ^ 0) | (x[ unit217_0[i][0] ] ^ unit217_0[i][1]) |(x[ unit217_0[i][2] ] ^ unit217_0[i][3]));
			}
		if(X_contra>0) L[217][0]=2;
		}
	//Check all rules of unit[217][1]
	L[217][1] = LargeX[217][0]>0 ? 1 : 0;
	satisfiable[217][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit217_1[i][0] ][ unit217_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit217_1[i][2] ][ unit217_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit217_1[i][4] ][ unit217_1[i][5] ] >0);
		X_contra = ( LargeX[217][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit217_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[217][0]=0; L[217][1]=1;}
			satisfiable[217][1]=satisfiable[217][1] & ((x[217] ^ 1) | (x[ unit217_1[i][0] ] ^ unit217_1[i][1]) |(x[ unit217_1[i][2] ] ^ unit217_1[i][3]));
			}
		if(X_contra>0) L[217][1]=2;
		}
	//Check all rules of unit[218][0]
	L[218][0] = LargeX[218][1]>0 ? 1 : 0;
	satisfiable[218][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit218_0[i][0] ][ unit218_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit218_0[i][2] ][ unit218_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit218_0[i][4] ][ unit218_0[i][5] ] >0);
		X_contra = ( LargeX[218][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit218_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[218][1]=0; L[218][0]=1;}
			satisfiable[218][0]=satisfiable[218][0] & ((x[218] ^ 0) | (x[ unit218_0[i][0] ] ^ unit218_0[i][1]) |(x[ unit218_0[i][2] ] ^ unit218_0[i][3]));
			}
		if(X_contra>0) L[218][0]=2;
		}
	//Check all rules of unit[218][1]
	L[218][1] = LargeX[218][0]>0 ? 1 : 0;
	satisfiable[218][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit218_1[i][0] ][ unit218_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit218_1[i][2] ][ unit218_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit218_1[i][4] ][ unit218_1[i][5] ] >0);
		X_contra = ( LargeX[218][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit218_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[218][0]=0; L[218][1]=1;}
			satisfiable[218][1]=satisfiable[218][1] & ((x[218] ^ 1) | (x[ unit218_1[i][0] ] ^ unit218_1[i][1]) |(x[ unit218_1[i][2] ] ^ unit218_1[i][3]));
			}
		if(X_contra>0) L[218][1]=2;
		}
	//Check all rules of unit[219][0]
	L[219][0] = LargeX[219][1]>0 ? 1 : 0;
	satisfiable[219][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit219_0[i][0] ][ unit219_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit219_0[i][2] ][ unit219_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit219_0[i][4] ][ unit219_0[i][5] ] >0);
		X_contra = ( LargeX[219][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit219_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[219][1]=0; L[219][0]=1;}
			satisfiable[219][0]=satisfiable[219][0] & ((x[219] ^ 0) | (x[ unit219_0[i][0] ] ^ unit219_0[i][1]) |(x[ unit219_0[i][2] ] ^ unit219_0[i][3]));
			}
		if(X_contra>0) L[219][0]=2;
		}
	//Check all rules of unit[219][1]
	L[219][1] = LargeX[219][0]>0 ? 1 : 0;
	satisfiable[219][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit219_1[i][0] ][ unit219_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit219_1[i][2] ][ unit219_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit219_1[i][4] ][ unit219_1[i][5] ] >0);
		X_contra = ( LargeX[219][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit219_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[219][0]=0; L[219][1]=1;}
			satisfiable[219][1]=satisfiable[219][1] & ((x[219] ^ 1) | (x[ unit219_1[i][0] ] ^ unit219_1[i][1]) |(x[ unit219_1[i][2] ] ^ unit219_1[i][3]));
			}
		if(X_contra>0) L[219][1]=2;
		}
	//Check all rules of unit[220][0]
	L[220][0] = LargeX[220][1]>0 ? 1 : 0;
	satisfiable[220][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit220_0[i][0] ][ unit220_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit220_0[i][2] ][ unit220_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit220_0[i][4] ][ unit220_0[i][5] ] >0);
		X_contra = ( LargeX[220][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit220_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[220][1]=0; L[220][0]=1;}
			satisfiable[220][0]=satisfiable[220][0] & ((x[220] ^ 0) | (x[ unit220_0[i][0] ] ^ unit220_0[i][1]) |(x[ unit220_0[i][2] ] ^ unit220_0[i][3]));
			}
		if(X_contra>0) L[220][0]=2;
		}
	//Check all rules of unit[220][1]
	L[220][1] = LargeX[220][0]>0 ? 1 : 0;
	satisfiable[220][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit220_1[i][0] ][ unit220_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit220_1[i][2] ][ unit220_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit220_1[i][4] ][ unit220_1[i][5] ] >0);
		X_contra = ( LargeX[220][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit220_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[220][0]=0; L[220][1]=1;}
			satisfiable[220][1]=satisfiable[220][1] & ((x[220] ^ 1) | (x[ unit220_1[i][0] ] ^ unit220_1[i][1]) |(x[ unit220_1[i][2] ] ^ unit220_1[i][3]));
			}
		if(X_contra>0) L[220][1]=2;
		}
	//Check all rules of unit[221][0]
	L[221][0] = LargeX[221][1]>0 ? 1 : 0;
	satisfiable[221][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit221_0[i][0] ][ unit221_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit221_0[i][2] ][ unit221_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit221_0[i][4] ][ unit221_0[i][5] ] >0);
		X_contra = ( LargeX[221][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit221_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[221][1]=0; L[221][0]=1;}
			satisfiable[221][0]=satisfiable[221][0] & ((x[221] ^ 0) | (x[ unit221_0[i][0] ] ^ unit221_0[i][1]) |(x[ unit221_0[i][2] ] ^ unit221_0[i][3]));
			}
		if(X_contra>0) L[221][0]=2;
		}
	//Check all rules of unit[221][1]
	L[221][1] = LargeX[221][0]>0 ? 1 : 0;
	satisfiable[221][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit221_1[i][0] ][ unit221_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit221_1[i][2] ][ unit221_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit221_1[i][4] ][ unit221_1[i][5] ] >0);
		X_contra = ( LargeX[221][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit221_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[221][0]=0; L[221][1]=1;}
			satisfiable[221][1]=satisfiable[221][1] & ((x[221] ^ 1) | (x[ unit221_1[i][0] ] ^ unit221_1[i][1]) |(x[ unit221_1[i][2] ] ^ unit221_1[i][3]));
			}
		if(X_contra>0) L[221][1]=2;
		}
	//Check all rules of unit[222][0]
	L[222][0] = LargeX[222][1]>0 ? 1 : 0;
	satisfiable[222][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit222_0[i][0] ][ unit222_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit222_0[i][2] ][ unit222_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit222_0[i][4] ][ unit222_0[i][5] ] >0);
		X_contra = ( LargeX[222][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit222_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[222][1]=0; L[222][0]=1;}
			satisfiable[222][0]=satisfiable[222][0] & ((x[222] ^ 0) | (x[ unit222_0[i][0] ] ^ unit222_0[i][1]) |(x[ unit222_0[i][2] ] ^ unit222_0[i][3]));
			}
		if(X_contra>0) L[222][0]=2;
		}
	//Check all rules of unit[222][1]
	L[222][1] = LargeX[222][0]>0 ? 1 : 0;
	satisfiable[222][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit222_1[i][0] ][ unit222_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit222_1[i][2] ][ unit222_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit222_1[i][4] ][ unit222_1[i][5] ] >0);
		X_contra = ( LargeX[222][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit222_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[222][0]=0; L[222][1]=1;}
			satisfiable[222][1]=satisfiable[222][1] & ((x[222] ^ 1) | (x[ unit222_1[i][0] ] ^ unit222_1[i][1]) |(x[ unit222_1[i][2] ] ^ unit222_1[i][3]));
			}
		if(X_contra>0) L[222][1]=2;
		}
	//Check all rules of unit[223][0]
	L[223][0] = LargeX[223][1]>0 ? 1 : 0;
	satisfiable[223][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit223_0[i][0] ][ unit223_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit223_0[i][2] ][ unit223_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit223_0[i][4] ][ unit223_0[i][5] ] >0);
		X_contra = ( LargeX[223][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit223_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[223][1]=0; L[223][0]=1;}
			satisfiable[223][0]=satisfiable[223][0] & ((x[223] ^ 0) | (x[ unit223_0[i][0] ] ^ unit223_0[i][1]) |(x[ unit223_0[i][2] ] ^ unit223_0[i][3]));
			}
		if(X_contra>0) L[223][0]=2;
		}
	//Check all rules of unit[223][1]
	L[223][1] = LargeX[223][0]>0 ? 1 : 0;
	satisfiable[223][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit223_1[i][0] ][ unit223_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit223_1[i][2] ][ unit223_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit223_1[i][4] ][ unit223_1[i][5] ] >0);
		X_contra = ( LargeX[223][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit223_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[223][0]=0; L[223][1]=1;}
			satisfiable[223][1]=satisfiable[223][1] & ((x[223] ^ 1) | (x[ unit223_1[i][0] ] ^ unit223_1[i][1]) |(x[ unit223_1[i][2] ] ^ unit223_1[i][3]));
			}
		if(X_contra>0) L[223][1]=2;
		}
	//Check all rules of unit[224][0]
	L[224][0] = LargeX[224][1]>0 ? 1 : 0;
	satisfiable[224][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit224_0[i][0] ][ unit224_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit224_0[i][2] ][ unit224_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit224_0[i][4] ][ unit224_0[i][5] ] >0);
		X_contra = ( LargeX[224][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit224_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[224][1]=0; L[224][0]=1;}
			satisfiable[224][0]=satisfiable[224][0] & ((x[224] ^ 0) | (x[ unit224_0[i][0] ] ^ unit224_0[i][1]) |(x[ unit224_0[i][2] ] ^ unit224_0[i][3]));
			}
		if(X_contra>0) L[224][0]=2;
		}
	//Check all rules of unit[224][1]
	L[224][1] = LargeX[224][0]>0 ? 1 : 0;
	satisfiable[224][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit224_1[i][0] ][ unit224_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit224_1[i][2] ][ unit224_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit224_1[i][4] ][ unit224_1[i][5] ] >0);
		X_contra = ( LargeX[224][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit224_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[224][0]=0; L[224][1]=1;}
			satisfiable[224][1]=satisfiable[224][1] & ((x[224] ^ 1) | (x[ unit224_1[i][0] ] ^ unit224_1[i][1]) |(x[ unit224_1[i][2] ] ^ unit224_1[i][3]));
			}
		if(X_contra>0) L[224][1]=2;
		}
	//Check all rules of unit[225][0]
	L[225][0] = LargeX[225][1]>0 ? 1 : 0;
	satisfiable[225][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit225_0[i][0] ][ unit225_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit225_0[i][2] ][ unit225_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit225_0[i][4] ][ unit225_0[i][5] ] >0);
		X_contra = ( LargeX[225][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit225_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[225][1]=0; L[225][0]=1;}
			satisfiable[225][0]=satisfiable[225][0] & ((x[225] ^ 0) | (x[ unit225_0[i][0] ] ^ unit225_0[i][1]) |(x[ unit225_0[i][2] ] ^ unit225_0[i][3]));
			}
		if(X_contra>0) L[225][0]=2;
		}
	//Check all rules of unit[225][1]
	L[225][1] = LargeX[225][0]>0 ? 1 : 0;
	satisfiable[225][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit225_1[i][0] ][ unit225_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit225_1[i][2] ][ unit225_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit225_1[i][4] ][ unit225_1[i][5] ] >0);
		X_contra = ( LargeX[225][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit225_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[225][0]=0; L[225][1]=1;}
			satisfiable[225][1]=satisfiable[225][1] & ((x[225] ^ 1) | (x[ unit225_1[i][0] ] ^ unit225_1[i][1]) |(x[ unit225_1[i][2] ] ^ unit225_1[i][3]));
			}
		if(X_contra>0) L[225][1]=2;
		}
	//Check all rules of unit[226][0]
	L[226][0] = LargeX[226][1]>0 ? 1 : 0;
	satisfiable[226][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit226_0[i][0] ][ unit226_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit226_0[i][2] ][ unit226_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit226_0[i][4] ][ unit226_0[i][5] ] >0);
		X_contra = ( LargeX[226][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit226_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[226][1]=0; L[226][0]=1;}
			satisfiable[226][0]=satisfiable[226][0] & ((x[226] ^ 0) | (x[ unit226_0[i][0] ] ^ unit226_0[i][1]) |(x[ unit226_0[i][2] ] ^ unit226_0[i][3]));
			}
		if(X_contra>0) L[226][0]=2;
		}
	//Check all rules of unit[226][1]
	L[226][1] = LargeX[226][0]>0 ? 1 : 0;
	satisfiable[226][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit226_1[i][0] ][ unit226_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit226_1[i][2] ][ unit226_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit226_1[i][4] ][ unit226_1[i][5] ] >0);
		X_contra = ( LargeX[226][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit226_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[226][0]=0; L[226][1]=1;}
			satisfiable[226][1]=satisfiable[226][1] & ((x[226] ^ 1) | (x[ unit226_1[i][0] ] ^ unit226_1[i][1]) |(x[ unit226_1[i][2] ] ^ unit226_1[i][3]));
			}
		if(X_contra>0) L[226][1]=2;
		}
	//Check all rules of unit[227][0]
	L[227][0] = LargeX[227][1]>0 ? 1 : 0;
	satisfiable[227][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit227_0[i][0] ][ unit227_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit227_0[i][2] ][ unit227_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit227_0[i][4] ][ unit227_0[i][5] ] >0);
		X_contra = ( LargeX[227][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit227_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[227][1]=0; L[227][0]=1;}
			satisfiable[227][0]=satisfiable[227][0] & ((x[227] ^ 0) | (x[ unit227_0[i][0] ] ^ unit227_0[i][1]) |(x[ unit227_0[i][2] ] ^ unit227_0[i][3]));
			}
		if(X_contra>0) L[227][0]=2;
		}
	//Check all rules of unit[227][1]
	L[227][1] = LargeX[227][0]>0 ? 1 : 0;
	satisfiable[227][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit227_1[i][0] ][ unit227_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit227_1[i][2] ][ unit227_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit227_1[i][4] ][ unit227_1[i][5] ] >0);
		X_contra = ( LargeX[227][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit227_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[227][0]=0; L[227][1]=1;}
			satisfiable[227][1]=satisfiable[227][1] & ((x[227] ^ 1) | (x[ unit227_1[i][0] ] ^ unit227_1[i][1]) |(x[ unit227_1[i][2] ] ^ unit227_1[i][3]));
			}
		if(X_contra>0) L[227][1]=2;
		}
	//Check all rules of unit[228][0]
	L[228][0] = LargeX[228][1]>0 ? 1 : 0;
	satisfiable[228][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit228_0[i][0] ][ unit228_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit228_0[i][2] ][ unit228_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit228_0[i][4] ][ unit228_0[i][5] ] >0);
		X_contra = ( LargeX[228][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit228_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[228][1]=0; L[228][0]=1;}
			satisfiable[228][0]=satisfiable[228][0] & ((x[228] ^ 0) | (x[ unit228_0[i][0] ] ^ unit228_0[i][1]) |(x[ unit228_0[i][2] ] ^ unit228_0[i][3]));
			}
		if(X_contra>0) L[228][0]=2;
		}
	//Check all rules of unit[228][1]
	L[228][1] = LargeX[228][0]>0 ? 1 : 0;
	satisfiable[228][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit228_1[i][0] ][ unit228_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit228_1[i][2] ][ unit228_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit228_1[i][4] ][ unit228_1[i][5] ] >0);
		X_contra = ( LargeX[228][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit228_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[228][0]=0; L[228][1]=1;}
			satisfiable[228][1]=satisfiable[228][1] & ((x[228] ^ 1) | (x[ unit228_1[i][0] ] ^ unit228_1[i][1]) |(x[ unit228_1[i][2] ] ^ unit228_1[i][3]));
			}
		if(X_contra>0) L[228][1]=2;
		}
	//Check all rules of unit[229][0]
	L[229][0] = LargeX[229][1]>0 ? 1 : 0;
	satisfiable[229][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit229_0[i][0] ][ unit229_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit229_0[i][2] ][ unit229_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit229_0[i][4] ][ unit229_0[i][5] ] >0);
		X_contra = ( LargeX[229][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit229_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[229][1]=0; L[229][0]=1;}
			satisfiable[229][0]=satisfiable[229][0] & ((x[229] ^ 0) | (x[ unit229_0[i][0] ] ^ unit229_0[i][1]) |(x[ unit229_0[i][2] ] ^ unit229_0[i][3]));
			}
		if(X_contra>0) L[229][0]=2;
		}
	//Check all rules of unit[229][1]
	L[229][1] = LargeX[229][0]>0 ? 1 : 0;
	satisfiable[229][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit229_1[i][0] ][ unit229_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit229_1[i][2] ][ unit229_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit229_1[i][4] ][ unit229_1[i][5] ] >0);
		X_contra = ( LargeX[229][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit229_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[229][0]=0; L[229][1]=1;}
			satisfiable[229][1]=satisfiable[229][1] & ((x[229] ^ 1) | (x[ unit229_1[i][0] ] ^ unit229_1[i][1]) |(x[ unit229_1[i][2] ] ^ unit229_1[i][3]));
			}
		if(X_contra>0) L[229][1]=2;
		}
	//Check all rules of unit[230][0]
	L[230][0] = LargeX[230][1]>0 ? 1 : 0;
	satisfiable[230][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit230_0[i][0] ][ unit230_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit230_0[i][2] ][ unit230_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit230_0[i][4] ][ unit230_0[i][5] ] >0);
		X_contra = ( LargeX[230][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit230_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[230][1]=0; L[230][0]=1;}
			satisfiable[230][0]=satisfiable[230][0] & ((x[230] ^ 0) | (x[ unit230_0[i][0] ] ^ unit230_0[i][1]) |(x[ unit230_0[i][2] ] ^ unit230_0[i][3]));
			}
		if(X_contra>0) L[230][0]=2;
		}
	//Check all rules of unit[230][1]
	L[230][1] = LargeX[230][0]>0 ? 1 : 0;
	satisfiable[230][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit230_1[i][0] ][ unit230_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit230_1[i][2] ][ unit230_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit230_1[i][4] ][ unit230_1[i][5] ] >0);
		X_contra = ( LargeX[230][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit230_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[230][0]=0; L[230][1]=1;}
			satisfiable[230][1]=satisfiable[230][1] & ((x[230] ^ 1) | (x[ unit230_1[i][0] ] ^ unit230_1[i][1]) |(x[ unit230_1[i][2] ] ^ unit230_1[i][3]));
			}
		if(X_contra>0) L[230][1]=2;
		}
	//Check all rules of unit[231][0]
	L[231][0] = LargeX[231][1]>0 ? 1 : 0;
	satisfiable[231][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit231_0[i][0] ][ unit231_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit231_0[i][2] ][ unit231_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit231_0[i][4] ][ unit231_0[i][5] ] >0);
		X_contra = ( LargeX[231][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit231_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[231][1]=0; L[231][0]=1;}
			satisfiable[231][0]=satisfiable[231][0] & ((x[231] ^ 0) | (x[ unit231_0[i][0] ] ^ unit231_0[i][1]) |(x[ unit231_0[i][2] ] ^ unit231_0[i][3]));
			}
		if(X_contra>0) L[231][0]=2;
		}
	//Check all rules of unit[231][1]
	L[231][1] = LargeX[231][0]>0 ? 1 : 0;
	satisfiable[231][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit231_1[i][0] ][ unit231_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit231_1[i][2] ][ unit231_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit231_1[i][4] ][ unit231_1[i][5] ] >0);
		X_contra = ( LargeX[231][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit231_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[231][0]=0; L[231][1]=1;}
			satisfiable[231][1]=satisfiable[231][1] & ((x[231] ^ 1) | (x[ unit231_1[i][0] ] ^ unit231_1[i][1]) |(x[ unit231_1[i][2] ] ^ unit231_1[i][3]));
			}
		if(X_contra>0) L[231][1]=2;
		}
	//Check all rules of unit[232][0]
	L[232][0] = LargeX[232][1]>0 ? 1 : 0;
	satisfiable[232][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit232_0[i][0] ][ unit232_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit232_0[i][2] ][ unit232_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit232_0[i][4] ][ unit232_0[i][5] ] >0);
		X_contra = ( LargeX[232][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit232_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[232][1]=0; L[232][0]=1;}
			satisfiable[232][0]=satisfiable[232][0] & ((x[232] ^ 0) | (x[ unit232_0[i][0] ] ^ unit232_0[i][1]) |(x[ unit232_0[i][2] ] ^ unit232_0[i][3]));
			}
		if(X_contra>0) L[232][0]=2;
		}
	//Check all rules of unit[232][1]
	L[232][1] = LargeX[232][0]>0 ? 1 : 0;
	satisfiable[232][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit232_1[i][0] ][ unit232_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit232_1[i][2] ][ unit232_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit232_1[i][4] ][ unit232_1[i][5] ] >0);
		X_contra = ( LargeX[232][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit232_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[232][0]=0; L[232][1]=1;}
			satisfiable[232][1]=satisfiable[232][1] & ((x[232] ^ 1) | (x[ unit232_1[i][0] ] ^ unit232_1[i][1]) |(x[ unit232_1[i][2] ] ^ unit232_1[i][3]));
			}
		if(X_contra>0) L[232][1]=2;
		}
	//Check all rules of unit[233][0]
	L[233][0] = LargeX[233][1]>0 ? 1 : 0;
	satisfiable[233][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit233_0[i][0] ][ unit233_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit233_0[i][2] ][ unit233_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit233_0[i][4] ][ unit233_0[i][5] ] >0);
		X_contra = ( LargeX[233][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit233_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[233][1]=0; L[233][0]=1;}
			satisfiable[233][0]=satisfiable[233][0] & ((x[233] ^ 0) | (x[ unit233_0[i][0] ] ^ unit233_0[i][1]) |(x[ unit233_0[i][2] ] ^ unit233_0[i][3]));
			}
		if(X_contra>0) L[233][0]=2;
		}
	//Check all rules of unit[233][1]
	L[233][1] = LargeX[233][0]>0 ? 1 : 0;
	satisfiable[233][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit233_1[i][0] ][ unit233_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit233_1[i][2] ][ unit233_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit233_1[i][4] ][ unit233_1[i][5] ] >0);
		X_contra = ( LargeX[233][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit233_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[233][0]=0; L[233][1]=1;}
			satisfiable[233][1]=satisfiable[233][1] & ((x[233] ^ 1) | (x[ unit233_1[i][0] ] ^ unit233_1[i][1]) |(x[ unit233_1[i][2] ] ^ unit233_1[i][3]));
			}
		if(X_contra>0) L[233][1]=2;
		}
	//Check all rules of unit[234][0]
	L[234][0] = LargeX[234][1]>0 ? 1 : 0;
	satisfiable[234][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit234_0[i][0] ][ unit234_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit234_0[i][2] ][ unit234_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit234_0[i][4] ][ unit234_0[i][5] ] >0);
		X_contra = ( LargeX[234][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit234_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[234][1]=0; L[234][0]=1;}
			satisfiable[234][0]=satisfiable[234][0] & ((x[234] ^ 0) | (x[ unit234_0[i][0] ] ^ unit234_0[i][1]) |(x[ unit234_0[i][2] ] ^ unit234_0[i][3]));
			}
		if(X_contra>0) L[234][0]=2;
		}
	//Check all rules of unit[234][1]
	L[234][1] = LargeX[234][0]>0 ? 1 : 0;
	satisfiable[234][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit234_1[i][0] ][ unit234_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit234_1[i][2] ][ unit234_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit234_1[i][4] ][ unit234_1[i][5] ] >0);
		X_contra = ( LargeX[234][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit234_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[234][0]=0; L[234][1]=1;}
			satisfiable[234][1]=satisfiable[234][1] & ((x[234] ^ 1) | (x[ unit234_1[i][0] ] ^ unit234_1[i][1]) |(x[ unit234_1[i][2] ] ^ unit234_1[i][3]));
			}
		if(X_contra>0) L[234][1]=2;
		}
	//Check all rules of unit[235][0]
	L[235][0] = LargeX[235][1]>0 ? 1 : 0;
	satisfiable[235][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit235_0[i][0] ][ unit235_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit235_0[i][2] ][ unit235_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit235_0[i][4] ][ unit235_0[i][5] ] >0);
		X_contra = ( LargeX[235][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit235_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[235][1]=0; L[235][0]=1;}
			satisfiable[235][0]=satisfiable[235][0] & ((x[235] ^ 0) | (x[ unit235_0[i][0] ] ^ unit235_0[i][1]) |(x[ unit235_0[i][2] ] ^ unit235_0[i][3]));
			}
		if(X_contra>0) L[235][0]=2;
		}
	//Check all rules of unit[235][1]
	L[235][1] = LargeX[235][0]>0 ? 1 : 0;
	satisfiable[235][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit235_1[i][0] ][ unit235_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit235_1[i][2] ][ unit235_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit235_1[i][4] ][ unit235_1[i][5] ] >0);
		X_contra = ( LargeX[235][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit235_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[235][0]=0; L[235][1]=1;}
			satisfiable[235][1]=satisfiable[235][1] & ((x[235] ^ 1) | (x[ unit235_1[i][0] ] ^ unit235_1[i][1]) |(x[ unit235_1[i][2] ] ^ unit235_1[i][3]));
			}
		if(X_contra>0) L[235][1]=2;
		}
	//Check all rules of unit[236][0]
	L[236][0] = LargeX[236][1]>0 ? 1 : 0;
	satisfiable[236][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit236_0[i][0] ][ unit236_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit236_0[i][2] ][ unit236_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit236_0[i][4] ][ unit236_0[i][5] ] >0);
		X_contra = ( LargeX[236][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit236_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[236][1]=0; L[236][0]=1;}
			satisfiable[236][0]=satisfiable[236][0] & ((x[236] ^ 0) | (x[ unit236_0[i][0] ] ^ unit236_0[i][1]) |(x[ unit236_0[i][2] ] ^ unit236_0[i][3]));
			}
		if(X_contra>0) L[236][0]=2;
		}
	//Check all rules of unit[236][1]
	L[236][1] = LargeX[236][0]>0 ? 1 : 0;
	satisfiable[236][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit236_1[i][0] ][ unit236_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit236_1[i][2] ][ unit236_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit236_1[i][4] ][ unit236_1[i][5] ] >0);
		X_contra = ( LargeX[236][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit236_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[236][0]=0; L[236][1]=1;}
			satisfiable[236][1]=satisfiable[236][1] & ((x[236] ^ 1) | (x[ unit236_1[i][0] ] ^ unit236_1[i][1]) |(x[ unit236_1[i][2] ] ^ unit236_1[i][3]));
			}
		if(X_contra>0) L[236][1]=2;
		}
	//Check all rules of unit[237][0]
	L[237][0] = LargeX[237][1]>0 ? 1 : 0;
	satisfiable[237][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit237_0[i][0] ][ unit237_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit237_0[i][2] ][ unit237_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit237_0[i][4] ][ unit237_0[i][5] ] >0);
		X_contra = ( LargeX[237][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit237_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[237][1]=0; L[237][0]=1;}
			satisfiable[237][0]=satisfiable[237][0] & ((x[237] ^ 0) | (x[ unit237_0[i][0] ] ^ unit237_0[i][1]) |(x[ unit237_0[i][2] ] ^ unit237_0[i][3]));
			}
		if(X_contra>0) L[237][0]=2;
		}
	//Check all rules of unit[237][1]
	L[237][1] = LargeX[237][0]>0 ? 1 : 0;
	satisfiable[237][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit237_1[i][0] ][ unit237_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit237_1[i][2] ][ unit237_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit237_1[i][4] ][ unit237_1[i][5] ] >0);
		X_contra = ( LargeX[237][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit237_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[237][0]=0; L[237][1]=1;}
			satisfiable[237][1]=satisfiable[237][1] & ((x[237] ^ 1) | (x[ unit237_1[i][0] ] ^ unit237_1[i][1]) |(x[ unit237_1[i][2] ] ^ unit237_1[i][3]));
			}
		if(X_contra>0) L[237][1]=2;
		}
	//Check all rules of unit[238][0]
	L[238][0] = LargeX[238][1]>0 ? 1 : 0;
	satisfiable[238][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit238_0[i][0] ][ unit238_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit238_0[i][2] ][ unit238_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit238_0[i][4] ][ unit238_0[i][5] ] >0);
		X_contra = ( LargeX[238][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit238_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[238][1]=0; L[238][0]=1;}
			satisfiable[238][0]=satisfiable[238][0] & ((x[238] ^ 0) | (x[ unit238_0[i][0] ] ^ unit238_0[i][1]) |(x[ unit238_0[i][2] ] ^ unit238_0[i][3]));
			}
		if(X_contra>0) L[238][0]=2;
		}
	//Check all rules of unit[238][1]
	L[238][1] = LargeX[238][0]>0 ? 1 : 0;
	satisfiable[238][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit238_1[i][0] ][ unit238_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit238_1[i][2] ][ unit238_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit238_1[i][4] ][ unit238_1[i][5] ] >0);
		X_contra = ( LargeX[238][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit238_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[238][0]=0; L[238][1]=1;}
			satisfiable[238][1]=satisfiable[238][1] & ((x[238] ^ 1) | (x[ unit238_1[i][0] ] ^ unit238_1[i][1]) |(x[ unit238_1[i][2] ] ^ unit238_1[i][3]));
			}
		if(X_contra>0) L[238][1]=2;
		}
	//Check all rules of unit[239][0]
	L[239][0] = LargeX[239][1]>0 ? 1 : 0;
	satisfiable[239][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit239_0[i][0] ][ unit239_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit239_0[i][2] ][ unit239_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit239_0[i][4] ][ unit239_0[i][5] ] >0);
		X_contra = ( LargeX[239][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit239_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[239][1]=0; L[239][0]=1;}
			satisfiable[239][0]=satisfiable[239][0] & ((x[239] ^ 0) | (x[ unit239_0[i][0] ] ^ unit239_0[i][1]) |(x[ unit239_0[i][2] ] ^ unit239_0[i][3]));
			}
		if(X_contra>0) L[239][0]=2;
		}
	//Check all rules of unit[239][1]
	L[239][1] = LargeX[239][0]>0 ? 1 : 0;
	satisfiable[239][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit239_1[i][0] ][ unit239_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit239_1[i][2] ][ unit239_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit239_1[i][4] ][ unit239_1[i][5] ] >0);
		X_contra = ( LargeX[239][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit239_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[239][0]=0; L[239][1]=1;}
			satisfiable[239][1]=satisfiable[239][1] & ((x[239] ^ 1) | (x[ unit239_1[i][0] ] ^ unit239_1[i][1]) |(x[ unit239_1[i][2] ] ^ unit239_1[i][3]));
			}
		if(X_contra>0) L[239][1]=2;
		}
	//Check all rules of unit[240][0]
	L[240][0] = LargeX[240][1]>0 ? 1 : 0;
	satisfiable[240][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit240_0[i][0] ][ unit240_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit240_0[i][2] ][ unit240_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit240_0[i][4] ][ unit240_0[i][5] ] >0);
		X_contra = ( LargeX[240][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit240_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[240][1]=0; L[240][0]=1;}
			satisfiable[240][0]=satisfiable[240][0] & ((x[240] ^ 0) | (x[ unit240_0[i][0] ] ^ unit240_0[i][1]) |(x[ unit240_0[i][2] ] ^ unit240_0[i][3]));
			}
		if(X_contra>0) L[240][0]=2;
		}
	//Check all rules of unit[240][1]
	L[240][1] = LargeX[240][0]>0 ? 1 : 0;
	satisfiable[240][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit240_1[i][0] ][ unit240_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit240_1[i][2] ][ unit240_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit240_1[i][4] ][ unit240_1[i][5] ] >0);
		X_contra = ( LargeX[240][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit240_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[240][0]=0; L[240][1]=1;}
			satisfiable[240][1]=satisfiable[240][1] & ((x[240] ^ 1) | (x[ unit240_1[i][0] ] ^ unit240_1[i][1]) |(x[ unit240_1[i][2] ] ^ unit240_1[i][3]));
			}
		if(X_contra>0) L[240][1]=2;
		}
	//Check all rules of unit[241][0]
	L[241][0] = LargeX[241][1]>0 ? 1 : 0;
	satisfiable[241][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit241_0[i][0] ][ unit241_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit241_0[i][2] ][ unit241_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit241_0[i][4] ][ unit241_0[i][5] ] >0);
		X_contra = ( LargeX[241][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit241_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[241][1]=0; L[241][0]=1;}
			satisfiable[241][0]=satisfiable[241][0] & ((x[241] ^ 0) | (x[ unit241_0[i][0] ] ^ unit241_0[i][1]) |(x[ unit241_0[i][2] ] ^ unit241_0[i][3]));
			}
		if(X_contra>0) L[241][0]=2;
		}
	//Check all rules of unit[241][1]
	L[241][1] = LargeX[241][0]>0 ? 1 : 0;
	satisfiable[241][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit241_1[i][0] ][ unit241_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit241_1[i][2] ][ unit241_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit241_1[i][4] ][ unit241_1[i][5] ] >0);
		X_contra = ( LargeX[241][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit241_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[241][0]=0; L[241][1]=1;}
			satisfiable[241][1]=satisfiable[241][1] & ((x[241] ^ 1) | (x[ unit241_1[i][0] ] ^ unit241_1[i][1]) |(x[ unit241_1[i][2] ] ^ unit241_1[i][3]));
			}
		if(X_contra>0) L[241][1]=2;
		}
	//Check all rules of unit[242][0]
	L[242][0] = LargeX[242][1]>0 ? 1 : 0;
	satisfiable[242][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit242_0[i][0] ][ unit242_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit242_0[i][2] ][ unit242_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit242_0[i][4] ][ unit242_0[i][5] ] >0);
		X_contra = ( LargeX[242][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit242_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[242][1]=0; L[242][0]=1;}
			satisfiable[242][0]=satisfiable[242][0] & ((x[242] ^ 0) | (x[ unit242_0[i][0] ] ^ unit242_0[i][1]) |(x[ unit242_0[i][2] ] ^ unit242_0[i][3]));
			}
		if(X_contra>0) L[242][0]=2;
		}
	//Check all rules of unit[242][1]
	L[242][1] = LargeX[242][0]>0 ? 1 : 0;
	satisfiable[242][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit242_1[i][0] ][ unit242_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit242_1[i][2] ][ unit242_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit242_1[i][4] ][ unit242_1[i][5] ] >0);
		X_contra = ( LargeX[242][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit242_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[242][0]=0; L[242][1]=1;}
			satisfiable[242][1]=satisfiable[242][1] & ((x[242] ^ 1) | (x[ unit242_1[i][0] ] ^ unit242_1[i][1]) |(x[ unit242_1[i][2] ] ^ unit242_1[i][3]));
			}
		if(X_contra>0) L[242][1]=2;
		}
	//Check all rules of unit[243][0]
	L[243][0] = LargeX[243][1]>0 ? 1 : 0;
	satisfiable[243][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit243_0[i][0] ][ unit243_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit243_0[i][2] ][ unit243_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit243_0[i][4] ][ unit243_0[i][5] ] >0);
		X_contra = ( LargeX[243][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit243_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[243][1]=0; L[243][0]=1;}
			satisfiable[243][0]=satisfiable[243][0] & ((x[243] ^ 0) | (x[ unit243_0[i][0] ] ^ unit243_0[i][1]) |(x[ unit243_0[i][2] ] ^ unit243_0[i][3]));
			}
		if(X_contra>0) L[243][0]=2;
		}
	//Check all rules of unit[243][1]
	L[243][1] = LargeX[243][0]>0 ? 1 : 0;
	satisfiable[243][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit243_1[i][0] ][ unit243_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit243_1[i][2] ][ unit243_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit243_1[i][4] ][ unit243_1[i][5] ] >0);
		X_contra = ( LargeX[243][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit243_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[243][0]=0; L[243][1]=1;}
			satisfiable[243][1]=satisfiable[243][1] & ((x[243] ^ 1) | (x[ unit243_1[i][0] ] ^ unit243_1[i][1]) |(x[ unit243_1[i][2] ] ^ unit243_1[i][3]));
			}
		if(X_contra>0) L[243][1]=2;
		}
	//Check all rules of unit[244][0]
	L[244][0] = LargeX[244][1]>0 ? 1 : 0;
	satisfiable[244][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit244_0[i][0] ][ unit244_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit244_0[i][2] ][ unit244_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit244_0[i][4] ][ unit244_0[i][5] ] >0);
		X_contra = ( LargeX[244][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit244_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[244][1]=0; L[244][0]=1;}
			satisfiable[244][0]=satisfiable[244][0] & ((x[244] ^ 0) | (x[ unit244_0[i][0] ] ^ unit244_0[i][1]) |(x[ unit244_0[i][2] ] ^ unit244_0[i][3]));
			}
		if(X_contra>0) L[244][0]=2;
		}
	//Check all rules of unit[244][1]
	L[244][1] = LargeX[244][0]>0 ? 1 : 0;
	satisfiable[244][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit244_1[i][0] ][ unit244_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit244_1[i][2] ][ unit244_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit244_1[i][4] ][ unit244_1[i][5] ] >0);
		X_contra = ( LargeX[244][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit244_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[244][0]=0; L[244][1]=1;}
			satisfiable[244][1]=satisfiable[244][1] & ((x[244] ^ 1) | (x[ unit244_1[i][0] ] ^ unit244_1[i][1]) |(x[ unit244_1[i][2] ] ^ unit244_1[i][3]));
			}
		if(X_contra>0) L[244][1]=2;
		}
	//Check all rules of unit[245][0]
	L[245][0] = LargeX[245][1]>0 ? 1 : 0;
	satisfiable[245][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit245_0[i][0] ][ unit245_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit245_0[i][2] ][ unit245_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit245_0[i][4] ][ unit245_0[i][5] ] >0);
		X_contra = ( LargeX[245][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit245_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[245][1]=0; L[245][0]=1;}
			satisfiable[245][0]=satisfiable[245][0] & ((x[245] ^ 0) | (x[ unit245_0[i][0] ] ^ unit245_0[i][1]) |(x[ unit245_0[i][2] ] ^ unit245_0[i][3]));
			}
		if(X_contra>0) L[245][0]=2;
		}
	//Check all rules of unit[245][1]
	L[245][1] = LargeX[245][0]>0 ? 1 : 0;
	satisfiable[245][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit245_1[i][0] ][ unit245_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit245_1[i][2] ][ unit245_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit245_1[i][4] ][ unit245_1[i][5] ] >0);
		X_contra = ( LargeX[245][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit245_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[245][0]=0; L[245][1]=1;}
			satisfiable[245][1]=satisfiable[245][1] & ((x[245] ^ 1) | (x[ unit245_1[i][0] ] ^ unit245_1[i][1]) |(x[ unit245_1[i][2] ] ^ unit245_1[i][3]));
			}
		if(X_contra>0) L[245][1]=2;
		}
	//Check all rules of unit[246][0]
	L[246][0] = LargeX[246][1]>0 ? 1 : 0;
	satisfiable[246][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit246_0[i][0] ][ unit246_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit246_0[i][2] ][ unit246_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit246_0[i][4] ][ unit246_0[i][5] ] >0);
		X_contra = ( LargeX[246][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit246_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[246][1]=0; L[246][0]=1;}
			satisfiable[246][0]=satisfiable[246][0] & ((x[246] ^ 0) | (x[ unit246_0[i][0] ] ^ unit246_0[i][1]) |(x[ unit246_0[i][2] ] ^ unit246_0[i][3]));
			}
		if(X_contra>0) L[246][0]=2;
		}
	//Check all rules of unit[246][1]
	L[246][1] = LargeX[246][0]>0 ? 1 : 0;
	satisfiable[246][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit246_1[i][0] ][ unit246_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit246_1[i][2] ][ unit246_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit246_1[i][4] ][ unit246_1[i][5] ] >0);
		X_contra = ( LargeX[246][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit246_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[246][0]=0; L[246][1]=1;}
			satisfiable[246][1]=satisfiable[246][1] & ((x[246] ^ 1) | (x[ unit246_1[i][0] ] ^ unit246_1[i][1]) |(x[ unit246_1[i][2] ] ^ unit246_1[i][3]));
			}
		if(X_contra>0) L[246][1]=2;
		}
	//Check all rules of unit[247][0]
	L[247][0] = LargeX[247][1]>0 ? 1 : 0;
	satisfiable[247][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit247_0[i][0] ][ unit247_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit247_0[i][2] ][ unit247_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit247_0[i][4] ][ unit247_0[i][5] ] >0);
		X_contra = ( LargeX[247][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit247_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[247][1]=0; L[247][0]=1;}
			satisfiable[247][0]=satisfiable[247][0] & ((x[247] ^ 0) | (x[ unit247_0[i][0] ] ^ unit247_0[i][1]) |(x[ unit247_0[i][2] ] ^ unit247_0[i][3]));
			}
		if(X_contra>0) L[247][0]=2;
		}
	//Check all rules of unit[247][1]
	L[247][1] = LargeX[247][0]>0 ? 1 : 0;
	satisfiable[247][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit247_1[i][0] ][ unit247_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit247_1[i][2] ][ unit247_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit247_1[i][4] ][ unit247_1[i][5] ] >0);
		X_contra = ( LargeX[247][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit247_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[247][0]=0; L[247][1]=1;}
			satisfiable[247][1]=satisfiable[247][1] & ((x[247] ^ 1) | (x[ unit247_1[i][0] ] ^ unit247_1[i][1]) |(x[ unit247_1[i][2] ] ^ unit247_1[i][3]));
			}
		if(X_contra>0) L[247][1]=2;
		}
	//Check all rules of unit[248][0]
	L[248][0] = LargeX[248][1]>0 ? 1 : 0;
	satisfiable[248][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit248_0[i][0] ][ unit248_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit248_0[i][2] ][ unit248_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit248_0[i][4] ][ unit248_0[i][5] ] >0);
		X_contra = ( LargeX[248][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit248_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[248][1]=0; L[248][0]=1;}
			satisfiable[248][0]=satisfiable[248][0] & ((x[248] ^ 0) | (x[ unit248_0[i][0] ] ^ unit248_0[i][1]) |(x[ unit248_0[i][2] ] ^ unit248_0[i][3]));
			}
		if(X_contra>0) L[248][0]=2;
		}
	//Check all rules of unit[248][1]
	L[248][1] = LargeX[248][0]>0 ? 1 : 0;
	satisfiable[248][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit248_1[i][0] ][ unit248_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit248_1[i][2] ][ unit248_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit248_1[i][4] ][ unit248_1[i][5] ] >0);
		X_contra = ( LargeX[248][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit248_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[248][0]=0; L[248][1]=1;}
			satisfiable[248][1]=satisfiable[248][1] & ((x[248] ^ 1) | (x[ unit248_1[i][0] ] ^ unit248_1[i][1]) |(x[ unit248_1[i][2] ] ^ unit248_1[i][3]));
			}
		if(X_contra>0) L[248][1]=2;
		}
	//Check all rules of unit[249][0]
	L[249][0] = LargeX[249][1]>0 ? 1 : 0;
	satisfiable[249][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit249_0[i][0] ][ unit249_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit249_0[i][2] ][ unit249_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit249_0[i][4] ][ unit249_0[i][5] ] >0);
		X_contra = ( LargeX[249][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit249_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[249][1]=0; L[249][0]=1;}
			satisfiable[249][0]=satisfiable[249][0] & ((x[249] ^ 0) | (x[ unit249_0[i][0] ] ^ unit249_0[i][1]) |(x[ unit249_0[i][2] ] ^ unit249_0[i][3]));
			}
		if(X_contra>0) L[249][0]=2;
		}
	//Check all rules of unit[249][1]
	L[249][1] = LargeX[249][0]>0 ? 1 : 0;
	satisfiable[249][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit249_1[i][0] ][ unit249_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit249_1[i][2] ][ unit249_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit249_1[i][4] ][ unit249_1[i][5] ] >0);
		X_contra = ( LargeX[249][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit249_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[249][0]=0; L[249][1]=1;}
			satisfiable[249][1]=satisfiable[249][1] & ((x[249] ^ 1) | (x[ unit249_1[i][0] ] ^ unit249_1[i][1]) |(x[ unit249_1[i][2] ] ^ unit249_1[i][3]));
			}
		if(X_contra>0) L[249][1]=2;
		}
	//Check all rules of unit[250][0]
	L[250][0] = LargeX[250][1]>0 ? 1 : 0;
	satisfiable[250][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit250_0[i][0] ][ unit250_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit250_0[i][2] ][ unit250_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit250_0[i][4] ][ unit250_0[i][5] ] >0);
		X_contra = ( LargeX[250][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit250_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[250][1]=0; L[250][0]=1;}
			satisfiable[250][0]=satisfiable[250][0] & ((x[250] ^ 0) | (x[ unit250_0[i][0] ] ^ unit250_0[i][1]) |(x[ unit250_0[i][2] ] ^ unit250_0[i][3]));
			}
		if(X_contra>0) L[250][0]=2;
		}
	//Check all rules of unit[250][1]
	L[250][1] = LargeX[250][0]>0 ? 1 : 0;
	satisfiable[250][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit250_1[i][0] ][ unit250_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit250_1[i][2] ][ unit250_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit250_1[i][4] ][ unit250_1[i][5] ] >0);
		X_contra = ( LargeX[250][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit250_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[250][0]=0; L[250][1]=1;}
			satisfiable[250][1]=satisfiable[250][1] & ((x[250] ^ 1) | (x[ unit250_1[i][0] ] ^ unit250_1[i][1]) |(x[ unit250_1[i][2] ] ^ unit250_1[i][3]));
			}
		if(X_contra>0) L[250][1]=2;
		}
	//Check all rules of unit[251][0]
	L[251][0] = LargeX[251][1]>0 ? 1 : 0;
	satisfiable[251][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit251_0[i][0] ][ unit251_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit251_0[i][2] ][ unit251_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit251_0[i][4] ][ unit251_0[i][5] ] >0);
		X_contra = ( LargeX[251][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit251_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[251][1]=0; L[251][0]=1;}
			satisfiable[251][0]=satisfiable[251][0] & ((x[251] ^ 0) | (x[ unit251_0[i][0] ] ^ unit251_0[i][1]) |(x[ unit251_0[i][2] ] ^ unit251_0[i][3]));
			}
		if(X_contra>0) L[251][0]=2;
		}
	//Check all rules of unit[251][1]
	L[251][1] = LargeX[251][0]>0 ? 1 : 0;
	satisfiable[251][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit251_1[i][0] ][ unit251_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit251_1[i][2] ][ unit251_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit251_1[i][4] ][ unit251_1[i][5] ] >0);
		X_contra = ( LargeX[251][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit251_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[251][0]=0; L[251][1]=1;}
			satisfiable[251][1]=satisfiable[251][1] & ((x[251] ^ 1) | (x[ unit251_1[i][0] ] ^ unit251_1[i][1]) |(x[ unit251_1[i][2] ] ^ unit251_1[i][3]));
			}
		if(X_contra>0) L[251][1]=2;
		}
	//Check all rules of unit[252][0]
	L[252][0] = LargeX[252][1]>0 ? 1 : 0;
	satisfiable[252][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit252_0[i][0] ][ unit252_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit252_0[i][2] ][ unit252_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit252_0[i][4] ][ unit252_0[i][5] ] >0);
		X_contra = ( LargeX[252][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit252_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[252][1]=0; L[252][0]=1;}
			satisfiable[252][0]=satisfiable[252][0] & ((x[252] ^ 0) | (x[ unit252_0[i][0] ] ^ unit252_0[i][1]) |(x[ unit252_0[i][2] ] ^ unit252_0[i][3]));
			}
		if(X_contra>0) L[252][0]=2;
		}
	//Check all rules of unit[252][1]
	L[252][1] = LargeX[252][0]>0 ? 1 : 0;
	satisfiable[252][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit252_1[i][0] ][ unit252_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit252_1[i][2] ][ unit252_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit252_1[i][4] ][ unit252_1[i][5] ] >0);
		X_contra = ( LargeX[252][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit252_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[252][0]=0; L[252][1]=1;}
			satisfiable[252][1]=satisfiable[252][1] & ((x[252] ^ 1) | (x[ unit252_1[i][0] ] ^ unit252_1[i][1]) |(x[ unit252_1[i][2] ] ^ unit252_1[i][3]));
			}
		if(X_contra>0) L[252][1]=2;
		}
	//Check all rules of unit[253][0]
	L[253][0] = LargeX[253][1]>0 ? 1 : 0;
	satisfiable[253][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit253_0[i][0] ][ unit253_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit253_0[i][2] ][ unit253_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit253_0[i][4] ][ unit253_0[i][5] ] >0);
		X_contra = ( LargeX[253][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit253_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[253][1]=0; L[253][0]=1;}
			satisfiable[253][0]=satisfiable[253][0] & ((x[253] ^ 0) | (x[ unit253_0[i][0] ] ^ unit253_0[i][1]) |(x[ unit253_0[i][2] ] ^ unit253_0[i][3]));
			}
		if(X_contra>0) L[253][0]=2;
		}
	//Check all rules of unit[253][1]
	L[253][1] = LargeX[253][0]>0 ? 1 : 0;
	satisfiable[253][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit253_1[i][0] ][ unit253_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit253_1[i][2] ][ unit253_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit253_1[i][4] ][ unit253_1[i][5] ] >0);
		X_contra = ( LargeX[253][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit253_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[253][0]=0; L[253][1]=1;}
			satisfiable[253][1]=satisfiable[253][1] & ((x[253] ^ 1) | (x[ unit253_1[i][0] ] ^ unit253_1[i][1]) |(x[ unit253_1[i][2] ] ^ unit253_1[i][3]));
			}
		if(X_contra>0) L[253][1]=2;
		}
	//Check all rules of unit[254][0]
	L[254][0] = LargeX[254][1]>0 ? 1 : 0;
	satisfiable[254][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit254_0[i][0] ][ unit254_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit254_0[i][2] ][ unit254_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit254_0[i][4] ][ unit254_0[i][5] ] >0);
		X_contra = ( LargeX[254][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit254_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[254][1]=0; L[254][0]=1;}
			satisfiable[254][0]=satisfiable[254][0] & ((x[254] ^ 0) | (x[ unit254_0[i][0] ] ^ unit254_0[i][1]) |(x[ unit254_0[i][2] ] ^ unit254_0[i][3]));
			}
		if(X_contra>0) L[254][0]=2;
		}
	//Check all rules of unit[254][1]
	L[254][1] = LargeX[254][0]>0 ? 1 : 0;
	satisfiable[254][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit254_1[i][0] ][ unit254_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit254_1[i][2] ][ unit254_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit254_1[i][4] ][ unit254_1[i][5] ] >0);
		X_contra = ( LargeX[254][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit254_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[254][0]=0; L[254][1]=1;}
			satisfiable[254][1]=satisfiable[254][1] & ((x[254] ^ 1) | (x[ unit254_1[i][0] ] ^ unit254_1[i][1]) |(x[ unit254_1[i][2] ] ^ unit254_1[i][3]));
			}
		if(X_contra>0) L[254][1]=2;
		}
	//Check all rules of unit[255][0]
	L[255][0] = LargeX[255][1]>0 ? 1 : 0;
	satisfiable[255][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit255_0[i][0] ][ unit255_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit255_0[i][2] ][ unit255_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit255_0[i][4] ][ unit255_0[i][5] ] >0);
		X_contra = ( LargeX[255][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit255_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[255][1]=0; L[255][0]=1;}
			satisfiable[255][0]=satisfiable[255][0] & ((x[255] ^ 0) | (x[ unit255_0[i][0] ] ^ unit255_0[i][1]) |(x[ unit255_0[i][2] ] ^ unit255_0[i][3]));
			}
		if(X_contra>0) L[255][0]=2;
		}
	//Check all rules of unit[255][1]
	L[255][1] = LargeX[255][0]>0 ? 1 : 0;
	satisfiable[255][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit255_1[i][0] ][ unit255_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit255_1[i][2] ][ unit255_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit255_1[i][4] ][ unit255_1[i][5] ] >0);
		X_contra = ( LargeX[255][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit255_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[255][0]=0; L[255][1]=1;}
			satisfiable[255][1]=satisfiable[255][1] & ((x[255] ^ 1) | (x[ unit255_1[i][0] ] ^ unit255_1[i][1]) |(x[ unit255_1[i][2] ] ^ unit255_1[i][3]));
			}
		if(X_contra>0) L[255][1]=2;
		}
	//Check all rules of unit[256][0]
	L[256][0] = LargeX[256][1]>0 ? 1 : 0;
	satisfiable[256][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit256_0[i][0] ][ unit256_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit256_0[i][2] ][ unit256_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit256_0[i][4] ][ unit256_0[i][5] ] >0);
		X_contra = ( LargeX[256][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit256_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[256][1]=0; L[256][0]=1;}
			satisfiable[256][0]=satisfiable[256][0] & ((x[256] ^ 0) | (x[ unit256_0[i][0] ] ^ unit256_0[i][1]) |(x[ unit256_0[i][2] ] ^ unit256_0[i][3]));
			}
		if(X_contra>0) L[256][0]=2;
		}
	//Check all rules of unit[256][1]
	L[256][1] = LargeX[256][0]>0 ? 1 : 0;
	satisfiable[256][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit256_1[i][0] ][ unit256_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit256_1[i][2] ][ unit256_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit256_1[i][4] ][ unit256_1[i][5] ] >0);
		X_contra = ( LargeX[256][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit256_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[256][0]=0; L[256][1]=1;}
			satisfiable[256][1]=satisfiable[256][1] & ((x[256] ^ 1) | (x[ unit256_1[i][0] ] ^ unit256_1[i][1]) |(x[ unit256_1[i][2] ] ^ unit256_1[i][3]));
			}
		if(X_contra>0) L[256][1]=2;
		}
	//Check all rules of unit[257][0]
	L[257][0] = LargeX[257][1]>0 ? 1 : 0;
	satisfiable[257][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit257_0[i][0] ][ unit257_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit257_0[i][2] ][ unit257_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit257_0[i][4] ][ unit257_0[i][5] ] >0);
		X_contra = ( LargeX[257][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit257_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[257][1]=0; L[257][0]=1;}
			satisfiable[257][0]=satisfiable[257][0] & ((x[257] ^ 0) | (x[ unit257_0[i][0] ] ^ unit257_0[i][1]) |(x[ unit257_0[i][2] ] ^ unit257_0[i][3]));
			}
		if(X_contra>0) L[257][0]=2;
		}
	//Check all rules of unit[257][1]
	L[257][1] = LargeX[257][0]>0 ? 1 : 0;
	satisfiable[257][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit257_1[i][0] ][ unit257_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit257_1[i][2] ][ unit257_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit257_1[i][4] ][ unit257_1[i][5] ] >0);
		X_contra = ( LargeX[257][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit257_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[257][0]=0; L[257][1]=1;}
			satisfiable[257][1]=satisfiable[257][1] & ((x[257] ^ 1) | (x[ unit257_1[i][0] ] ^ unit257_1[i][1]) |(x[ unit257_1[i][2] ] ^ unit257_1[i][3]));
			}
		if(X_contra>0) L[257][1]=2;
		}
	//Check all rules of unit[258][0]
	L[258][0] = LargeX[258][1]>0 ? 1 : 0;
	satisfiable[258][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit258_0[i][0] ][ unit258_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit258_0[i][2] ][ unit258_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit258_0[i][4] ][ unit258_0[i][5] ] >0);
		X_contra = ( LargeX[258][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit258_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[258][1]=0; L[258][0]=1;}
			satisfiable[258][0]=satisfiable[258][0] & ((x[258] ^ 0) | (x[ unit258_0[i][0] ] ^ unit258_0[i][1]) |(x[ unit258_0[i][2] ] ^ unit258_0[i][3]));
			}
		if(X_contra>0) L[258][0]=2;
		}
	//Check all rules of unit[258][1]
	L[258][1] = LargeX[258][0]>0 ? 1 : 0;
	satisfiable[258][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit258_1[i][0] ][ unit258_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit258_1[i][2] ][ unit258_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit258_1[i][4] ][ unit258_1[i][5] ] >0);
		X_contra = ( LargeX[258][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit258_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[258][0]=0; L[258][1]=1;}
			satisfiable[258][1]=satisfiable[258][1] & ((x[258] ^ 1) | (x[ unit258_1[i][0] ] ^ unit258_1[i][1]) |(x[ unit258_1[i][2] ] ^ unit258_1[i][3]));
			}
		if(X_contra>0) L[258][1]=2;
		}
	//Check all rules of unit[259][0]
	L[259][0] = LargeX[259][1]>0 ? 1 : 0;
	satisfiable[259][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit259_0[i][0] ][ unit259_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit259_0[i][2] ][ unit259_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit259_0[i][4] ][ unit259_0[i][5] ] >0);
		X_contra = ( LargeX[259][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit259_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[259][1]=0; L[259][0]=1;}
			satisfiable[259][0]=satisfiable[259][0] & ((x[259] ^ 0) | (x[ unit259_0[i][0] ] ^ unit259_0[i][1]) |(x[ unit259_0[i][2] ] ^ unit259_0[i][3]));
			}
		if(X_contra>0) L[259][0]=2;
		}
	//Check all rules of unit[259][1]
	L[259][1] = LargeX[259][0]>0 ? 1 : 0;
	satisfiable[259][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit259_1[i][0] ][ unit259_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit259_1[i][2] ][ unit259_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit259_1[i][4] ][ unit259_1[i][5] ] >0);
		X_contra = ( LargeX[259][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit259_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[259][0]=0; L[259][1]=1;}
			satisfiable[259][1]=satisfiable[259][1] & ((x[259] ^ 1) | (x[ unit259_1[i][0] ] ^ unit259_1[i][1]) |(x[ unit259_1[i][2] ] ^ unit259_1[i][3]));
			}
		if(X_contra>0) L[259][1]=2;
		}
	//Check all rules of unit[260][0]
	L[260][0] = LargeX[260][1]>0 ? 1 : 0;
	satisfiable[260][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit260_0[i][0] ][ unit260_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit260_0[i][2] ][ unit260_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit260_0[i][4] ][ unit260_0[i][5] ] >0);
		X_contra = ( LargeX[260][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit260_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[260][1]=0; L[260][0]=1;}
			satisfiable[260][0]=satisfiable[260][0] & ((x[260] ^ 0) | (x[ unit260_0[i][0] ] ^ unit260_0[i][1]) |(x[ unit260_0[i][2] ] ^ unit260_0[i][3]));
			}
		if(X_contra>0) L[260][0]=2;
		}
	//Check all rules of unit[260][1]
	L[260][1] = LargeX[260][0]>0 ? 1 : 0;
	satisfiable[260][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit260_1[i][0] ][ unit260_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit260_1[i][2] ][ unit260_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit260_1[i][4] ][ unit260_1[i][5] ] >0);
		X_contra = ( LargeX[260][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit260_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[260][0]=0; L[260][1]=1;}
			satisfiable[260][1]=satisfiable[260][1] & ((x[260] ^ 1) | (x[ unit260_1[i][0] ] ^ unit260_1[i][1]) |(x[ unit260_1[i][2] ] ^ unit260_1[i][3]));
			}
		if(X_contra>0) L[260][1]=2;
		}
	//Check all rules of unit[261][0]
	L[261][0] = LargeX[261][1]>0 ? 1 : 0;
	satisfiable[261][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit261_0[i][0] ][ unit261_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit261_0[i][2] ][ unit261_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit261_0[i][4] ][ unit261_0[i][5] ] >0);
		X_contra = ( LargeX[261][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit261_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[261][1]=0; L[261][0]=1;}
			satisfiable[261][0]=satisfiable[261][0] & ((x[261] ^ 0) | (x[ unit261_0[i][0] ] ^ unit261_0[i][1]) |(x[ unit261_0[i][2] ] ^ unit261_0[i][3]));
			}
		if(X_contra>0) L[261][0]=2;
		}
	//Check all rules of unit[261][1]
	L[261][1] = LargeX[261][0]>0 ? 1 : 0;
	satisfiable[261][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit261_1[i][0] ][ unit261_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit261_1[i][2] ][ unit261_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit261_1[i][4] ][ unit261_1[i][5] ] >0);
		X_contra = ( LargeX[261][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit261_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[261][0]=0; L[261][1]=1;}
			satisfiable[261][1]=satisfiable[261][1] & ((x[261] ^ 1) | (x[ unit261_1[i][0] ] ^ unit261_1[i][1]) |(x[ unit261_1[i][2] ] ^ unit261_1[i][3]));
			}
		if(X_contra>0) L[261][1]=2;
		}
	//Check all rules of unit[262][0]
	L[262][0] = LargeX[262][1]>0 ? 1 : 0;
	satisfiable[262][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit262_0[i][0] ][ unit262_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit262_0[i][2] ][ unit262_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit262_0[i][4] ][ unit262_0[i][5] ] >0);
		X_contra = ( LargeX[262][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit262_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[262][1]=0; L[262][0]=1;}
			satisfiable[262][0]=satisfiable[262][0] & ((x[262] ^ 0) | (x[ unit262_0[i][0] ] ^ unit262_0[i][1]) |(x[ unit262_0[i][2] ] ^ unit262_0[i][3]));
			}
		if(X_contra>0) L[262][0]=2;
		}
	//Check all rules of unit[262][1]
	L[262][1] = LargeX[262][0]>0 ? 1 : 0;
	satisfiable[262][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit262_1[i][0] ][ unit262_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit262_1[i][2] ][ unit262_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit262_1[i][4] ][ unit262_1[i][5] ] >0);
		X_contra = ( LargeX[262][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit262_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[262][0]=0; L[262][1]=1;}
			satisfiable[262][1]=satisfiable[262][1] & ((x[262] ^ 1) | (x[ unit262_1[i][0] ] ^ unit262_1[i][1]) |(x[ unit262_1[i][2] ] ^ unit262_1[i][3]));
			}
		if(X_contra>0) L[262][1]=2;
		}
	//Check all rules of unit[263][0]
	L[263][0] = LargeX[263][1]>0 ? 1 : 0;
	satisfiable[263][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit263_0[i][0] ][ unit263_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit263_0[i][2] ][ unit263_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit263_0[i][4] ][ unit263_0[i][5] ] >0);
		X_contra = ( LargeX[263][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit263_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[263][1]=0; L[263][0]=1;}
			satisfiable[263][0]=satisfiable[263][0] & ((x[263] ^ 0) | (x[ unit263_0[i][0] ] ^ unit263_0[i][1]) |(x[ unit263_0[i][2] ] ^ unit263_0[i][3]));
			}
		if(X_contra>0) L[263][0]=2;
		}
	//Check all rules of unit[263][1]
	L[263][1] = LargeX[263][0]>0 ? 1 : 0;
	satisfiable[263][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit263_1[i][0] ][ unit263_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit263_1[i][2] ][ unit263_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit263_1[i][4] ][ unit263_1[i][5] ] >0);
		X_contra = ( LargeX[263][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit263_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[263][0]=0; L[263][1]=1;}
			satisfiable[263][1]=satisfiable[263][1] & ((x[263] ^ 1) | (x[ unit263_1[i][0] ] ^ unit263_1[i][1]) |(x[ unit263_1[i][2] ] ^ unit263_1[i][3]));
			}
		if(X_contra>0) L[263][1]=2;
		}
	//Check all rules of unit[264][0]
	L[264][0] = LargeX[264][1]>0 ? 1 : 0;
	satisfiable[264][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit264_0[i][0] ][ unit264_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit264_0[i][2] ][ unit264_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit264_0[i][4] ][ unit264_0[i][5] ] >0);
		X_contra = ( LargeX[264][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit264_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[264][1]=0; L[264][0]=1;}
			satisfiable[264][0]=satisfiable[264][0] & ((x[264] ^ 0) | (x[ unit264_0[i][0] ] ^ unit264_0[i][1]) |(x[ unit264_0[i][2] ] ^ unit264_0[i][3]));
			}
		if(X_contra>0) L[264][0]=2;
		}
	//Check all rules of unit[264][1]
	L[264][1] = LargeX[264][0]>0 ? 1 : 0;
	satisfiable[264][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit264_1[i][0] ][ unit264_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit264_1[i][2] ][ unit264_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit264_1[i][4] ][ unit264_1[i][5] ] >0);
		X_contra = ( LargeX[264][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit264_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[264][0]=0; L[264][1]=1;}
			satisfiable[264][1]=satisfiable[264][1] & ((x[264] ^ 1) | (x[ unit264_1[i][0] ] ^ unit264_1[i][1]) |(x[ unit264_1[i][2] ] ^ unit264_1[i][3]));
			}
		if(X_contra>0) L[264][1]=2;
		}
	//Check all rules of unit[265][0]
	L[265][0] = LargeX[265][1]>0 ? 1 : 0;
	satisfiable[265][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit265_0[i][0] ][ unit265_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit265_0[i][2] ][ unit265_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit265_0[i][4] ][ unit265_0[i][5] ] >0);
		X_contra = ( LargeX[265][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit265_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[265][1]=0; L[265][0]=1;}
			satisfiable[265][0]=satisfiable[265][0] & ((x[265] ^ 0) | (x[ unit265_0[i][0] ] ^ unit265_0[i][1]) |(x[ unit265_0[i][2] ] ^ unit265_0[i][3]));
			}
		if(X_contra>0) L[265][0]=2;
		}
	//Check all rules of unit[265][1]
	L[265][1] = LargeX[265][0]>0 ? 1 : 0;
	satisfiable[265][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit265_1[i][0] ][ unit265_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit265_1[i][2] ][ unit265_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit265_1[i][4] ][ unit265_1[i][5] ] >0);
		X_contra = ( LargeX[265][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit265_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[265][0]=0; L[265][1]=1;}
			satisfiable[265][1]=satisfiable[265][1] & ((x[265] ^ 1) | (x[ unit265_1[i][0] ] ^ unit265_1[i][1]) |(x[ unit265_1[i][2] ] ^ unit265_1[i][3]));
			}
		if(X_contra>0) L[265][1]=2;
		}
	//Check all rules of unit[266][0]
	L[266][0] = LargeX[266][1]>0 ? 1 : 0;
	satisfiable[266][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit266_0[i][0] ][ unit266_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit266_0[i][2] ][ unit266_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit266_0[i][4] ][ unit266_0[i][5] ] >0);
		X_contra = ( LargeX[266][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit266_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[266][1]=0; L[266][0]=1;}
			satisfiable[266][0]=satisfiable[266][0] & ((x[266] ^ 0) | (x[ unit266_0[i][0] ] ^ unit266_0[i][1]) |(x[ unit266_0[i][2] ] ^ unit266_0[i][3]));
			}
		if(X_contra>0) L[266][0]=2;
		}
	//Check all rules of unit[266][1]
	L[266][1] = LargeX[266][0]>0 ? 1 : 0;
	satisfiable[266][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit266_1[i][0] ][ unit266_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit266_1[i][2] ][ unit266_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit266_1[i][4] ][ unit266_1[i][5] ] >0);
		X_contra = ( LargeX[266][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit266_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[266][0]=0; L[266][1]=1;}
			satisfiable[266][1]=satisfiable[266][1] & ((x[266] ^ 1) | (x[ unit266_1[i][0] ] ^ unit266_1[i][1]) |(x[ unit266_1[i][2] ] ^ unit266_1[i][3]));
			}
		if(X_contra>0) L[266][1]=2;
		}
	//Check all rules of unit[267][0]
	L[267][0] = LargeX[267][1]>0 ? 1 : 0;
	satisfiable[267][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit267_0[i][0] ][ unit267_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit267_0[i][2] ][ unit267_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit267_0[i][4] ][ unit267_0[i][5] ] >0);
		X_contra = ( LargeX[267][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit267_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[267][1]=0; L[267][0]=1;}
			satisfiable[267][0]=satisfiable[267][0] & ((x[267] ^ 0) | (x[ unit267_0[i][0] ] ^ unit267_0[i][1]) |(x[ unit267_0[i][2] ] ^ unit267_0[i][3]));
			}
		if(X_contra>0) L[267][0]=2;
		}
	//Check all rules of unit[267][1]
	L[267][1] = LargeX[267][0]>0 ? 1 : 0;
	satisfiable[267][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit267_1[i][0] ][ unit267_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit267_1[i][2] ][ unit267_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit267_1[i][4] ][ unit267_1[i][5] ] >0);
		X_contra = ( LargeX[267][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit267_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[267][0]=0; L[267][1]=1;}
			satisfiable[267][1]=satisfiable[267][1] & ((x[267] ^ 1) | (x[ unit267_1[i][0] ] ^ unit267_1[i][1]) |(x[ unit267_1[i][2] ] ^ unit267_1[i][3]));
			}
		if(X_contra>0) L[267][1]=2;
		}
	//Check all rules of unit[268][0]
	L[268][0] = LargeX[268][1]>0 ? 1 : 0;
	satisfiable[268][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit268_0[i][0] ][ unit268_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit268_0[i][2] ][ unit268_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit268_0[i][4] ][ unit268_0[i][5] ] >0);
		X_contra = ( LargeX[268][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit268_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[268][1]=0; L[268][0]=1;}
			satisfiable[268][0]=satisfiable[268][0] & ((x[268] ^ 0) | (x[ unit268_0[i][0] ] ^ unit268_0[i][1]) |(x[ unit268_0[i][2] ] ^ unit268_0[i][3]));
			}
		if(X_contra>0) L[268][0]=2;
		}
	//Check all rules of unit[268][1]
	L[268][1] = LargeX[268][0]>0 ? 1 : 0;
	satisfiable[268][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit268_1[i][0] ][ unit268_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit268_1[i][2] ][ unit268_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit268_1[i][4] ][ unit268_1[i][5] ] >0);
		X_contra = ( LargeX[268][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit268_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[268][0]=0; L[268][1]=1;}
			satisfiable[268][1]=satisfiable[268][1] & ((x[268] ^ 1) | (x[ unit268_1[i][0] ] ^ unit268_1[i][1]) |(x[ unit268_1[i][2] ] ^ unit268_1[i][3]));
			}
		if(X_contra>0) L[268][1]=2;
		}
	//Check all rules of unit[269][0]
	L[269][0] = LargeX[269][1]>0 ? 1 : 0;
	satisfiable[269][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit269_0[i][0] ][ unit269_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit269_0[i][2] ][ unit269_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit269_0[i][4] ][ unit269_0[i][5] ] >0);
		X_contra = ( LargeX[269][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit269_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[269][1]=0; L[269][0]=1;}
			satisfiable[269][0]=satisfiable[269][0] & ((x[269] ^ 0) | (x[ unit269_0[i][0] ] ^ unit269_0[i][1]) |(x[ unit269_0[i][2] ] ^ unit269_0[i][3]));
			}
		if(X_contra>0) L[269][0]=2;
		}
	//Check all rules of unit[269][1]
	L[269][1] = LargeX[269][0]>0 ? 1 : 0;
	satisfiable[269][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit269_1[i][0] ][ unit269_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit269_1[i][2] ][ unit269_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit269_1[i][4] ][ unit269_1[i][5] ] >0);
		X_contra = ( LargeX[269][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit269_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[269][0]=0; L[269][1]=1;}
			satisfiable[269][1]=satisfiable[269][1] & ((x[269] ^ 1) | (x[ unit269_1[i][0] ] ^ unit269_1[i][1]) |(x[ unit269_1[i][2] ] ^ unit269_1[i][3]));
			}
		if(X_contra>0) L[269][1]=2;
		}
	//Check all rules of unit[270][0]
	L[270][0] = LargeX[270][1]>0 ? 1 : 0;
	satisfiable[270][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit270_0[i][0] ][ unit270_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit270_0[i][2] ][ unit270_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit270_0[i][4] ][ unit270_0[i][5] ] >0);
		X_contra = ( LargeX[270][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit270_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[270][1]=0; L[270][0]=1;}
			satisfiable[270][0]=satisfiable[270][0] & ((x[270] ^ 0) | (x[ unit270_0[i][0] ] ^ unit270_0[i][1]) |(x[ unit270_0[i][2] ] ^ unit270_0[i][3]));
			}
		if(X_contra>0) L[270][0]=2;
		}
	//Check all rules of unit[270][1]
	L[270][1] = LargeX[270][0]>0 ? 1 : 0;
	satisfiable[270][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit270_1[i][0] ][ unit270_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit270_1[i][2] ][ unit270_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit270_1[i][4] ][ unit270_1[i][5] ] >0);
		X_contra = ( LargeX[270][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit270_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[270][0]=0; L[270][1]=1;}
			satisfiable[270][1]=satisfiable[270][1] & ((x[270] ^ 1) | (x[ unit270_1[i][0] ] ^ unit270_1[i][1]) |(x[ unit270_1[i][2] ] ^ unit270_1[i][3]));
			}
		if(X_contra>0) L[270][1]=2;
		}
	//Check all rules of unit[271][0]
	L[271][0] = LargeX[271][1]>0 ? 1 : 0;
	satisfiable[271][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit271_0[i][0] ][ unit271_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit271_0[i][2] ][ unit271_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit271_0[i][4] ][ unit271_0[i][5] ] >0);
		X_contra = ( LargeX[271][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit271_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[271][1]=0; L[271][0]=1;}
			satisfiable[271][0]=satisfiable[271][0] & ((x[271] ^ 0) | (x[ unit271_0[i][0] ] ^ unit271_0[i][1]) |(x[ unit271_0[i][2] ] ^ unit271_0[i][3]));
			}
		if(X_contra>0) L[271][0]=2;
		}
	//Check all rules of unit[271][1]
	L[271][1] = LargeX[271][0]>0 ? 1 : 0;
	satisfiable[271][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit271_1[i][0] ][ unit271_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit271_1[i][2] ][ unit271_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit271_1[i][4] ][ unit271_1[i][5] ] >0);
		X_contra = ( LargeX[271][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit271_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[271][0]=0; L[271][1]=1;}
			satisfiable[271][1]=satisfiable[271][1] & ((x[271] ^ 1) | (x[ unit271_1[i][0] ] ^ unit271_1[i][1]) |(x[ unit271_1[i][2] ] ^ unit271_1[i][3]));
			}
		if(X_contra>0) L[271][1]=2;
		}
	//Check all rules of unit[272][0]
	L[272][0] = LargeX[272][1]>0 ? 1 : 0;
	satisfiable[272][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit272_0[i][0] ][ unit272_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit272_0[i][2] ][ unit272_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit272_0[i][4] ][ unit272_0[i][5] ] >0);
		X_contra = ( LargeX[272][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit272_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[272][1]=0; L[272][0]=1;}
			satisfiable[272][0]=satisfiable[272][0] & ((x[272] ^ 0) | (x[ unit272_0[i][0] ] ^ unit272_0[i][1]) |(x[ unit272_0[i][2] ] ^ unit272_0[i][3]));
			}
		if(X_contra>0) L[272][0]=2;
		}
	//Check all rules of unit[272][1]
	L[272][1] = LargeX[272][0]>0 ? 1 : 0;
	satisfiable[272][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit272_1[i][0] ][ unit272_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit272_1[i][2] ][ unit272_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit272_1[i][4] ][ unit272_1[i][5] ] >0);
		X_contra = ( LargeX[272][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit272_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[272][0]=0; L[272][1]=1;}
			satisfiable[272][1]=satisfiable[272][1] & ((x[272] ^ 1) | (x[ unit272_1[i][0] ] ^ unit272_1[i][1]) |(x[ unit272_1[i][2] ] ^ unit272_1[i][3]));
			}
		if(X_contra>0) L[272][1]=2;
		}
	//Check all rules of unit[273][0]
	L[273][0] = LargeX[273][1]>0 ? 1 : 0;
	satisfiable[273][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit273_0[i][0] ][ unit273_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit273_0[i][2] ][ unit273_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit273_0[i][4] ][ unit273_0[i][5] ] >0);
		X_contra = ( LargeX[273][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit273_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[273][1]=0; L[273][0]=1;}
			satisfiable[273][0]=satisfiable[273][0] & ((x[273] ^ 0) | (x[ unit273_0[i][0] ] ^ unit273_0[i][1]) |(x[ unit273_0[i][2] ] ^ unit273_0[i][3]));
			}
		if(X_contra>0) L[273][0]=2;
		}
	//Check all rules of unit[273][1]
	L[273][1] = LargeX[273][0]>0 ? 1 : 0;
	satisfiable[273][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit273_1[i][0] ][ unit273_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit273_1[i][2] ][ unit273_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit273_1[i][4] ][ unit273_1[i][5] ] >0);
		X_contra = ( LargeX[273][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit273_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[273][0]=0; L[273][1]=1;}
			satisfiable[273][1]=satisfiable[273][1] & ((x[273] ^ 1) | (x[ unit273_1[i][0] ] ^ unit273_1[i][1]) |(x[ unit273_1[i][2] ] ^ unit273_1[i][3]));
			}
		if(X_contra>0) L[273][1]=2;
		}
	//Check all rules of unit[274][0]
	L[274][0] = LargeX[274][1]>0 ? 1 : 0;
	satisfiable[274][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit274_0[i][0] ][ unit274_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit274_0[i][2] ][ unit274_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit274_0[i][4] ][ unit274_0[i][5] ] >0);
		X_contra = ( LargeX[274][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit274_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[274][1]=0; L[274][0]=1;}
			satisfiable[274][0]=satisfiable[274][0] & ((x[274] ^ 0) | (x[ unit274_0[i][0] ] ^ unit274_0[i][1]) |(x[ unit274_0[i][2] ] ^ unit274_0[i][3]));
			}
		if(X_contra>0) L[274][0]=2;
		}
	//Check all rules of unit[274][1]
	L[274][1] = LargeX[274][0]>0 ? 1 : 0;
	satisfiable[274][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit274_1[i][0] ][ unit274_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit274_1[i][2] ][ unit274_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit274_1[i][4] ][ unit274_1[i][5] ] >0);
		X_contra = ( LargeX[274][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit274_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[274][0]=0; L[274][1]=1;}
			satisfiable[274][1]=satisfiable[274][1] & ((x[274] ^ 1) | (x[ unit274_1[i][0] ] ^ unit274_1[i][1]) |(x[ unit274_1[i][2] ] ^ unit274_1[i][3]));
			}
		if(X_contra>0) L[274][1]=2;
		}
	//Check all rules of unit[275][0]
	L[275][0] = LargeX[275][1]>0 ? 1 : 0;
	satisfiable[275][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit275_0[i][0] ][ unit275_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit275_0[i][2] ][ unit275_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit275_0[i][4] ][ unit275_0[i][5] ] >0);
		X_contra = ( LargeX[275][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit275_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[275][1]=0; L[275][0]=1;}
			satisfiable[275][0]=satisfiable[275][0] & ((x[275] ^ 0) | (x[ unit275_0[i][0] ] ^ unit275_0[i][1]) |(x[ unit275_0[i][2] ] ^ unit275_0[i][3]));
			}
		if(X_contra>0) L[275][0]=2;
		}
	//Check all rules of unit[275][1]
	L[275][1] = LargeX[275][0]>0 ? 1 : 0;
	satisfiable[275][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit275_1[i][0] ][ unit275_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit275_1[i][2] ][ unit275_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit275_1[i][4] ][ unit275_1[i][5] ] >0);
		X_contra = ( LargeX[275][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit275_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[275][0]=0; L[275][1]=1;}
			satisfiable[275][1]=satisfiable[275][1] & ((x[275] ^ 1) | (x[ unit275_1[i][0] ] ^ unit275_1[i][1]) |(x[ unit275_1[i][2] ] ^ unit275_1[i][3]));
			}
		if(X_contra>0) L[275][1]=2;
		}
	//Check all rules of unit[276][0]
	L[276][0] = LargeX[276][1]>0 ? 1 : 0;
	satisfiable[276][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit276_0[i][0] ][ unit276_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit276_0[i][2] ][ unit276_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit276_0[i][4] ][ unit276_0[i][5] ] >0);
		X_contra = ( LargeX[276][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit276_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[276][1]=0; L[276][0]=1;}
			satisfiable[276][0]=satisfiable[276][0] & ((x[276] ^ 0) | (x[ unit276_0[i][0] ] ^ unit276_0[i][1]) |(x[ unit276_0[i][2] ] ^ unit276_0[i][3]));
			}
		if(X_contra>0) L[276][0]=2;
		}
	//Check all rules of unit[276][1]
	L[276][1] = LargeX[276][0]>0 ? 1 : 0;
	satisfiable[276][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit276_1[i][0] ][ unit276_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit276_1[i][2] ][ unit276_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit276_1[i][4] ][ unit276_1[i][5] ] >0);
		X_contra = ( LargeX[276][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit276_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[276][0]=0; L[276][1]=1;}
			satisfiable[276][1]=satisfiable[276][1] & ((x[276] ^ 1) | (x[ unit276_1[i][0] ] ^ unit276_1[i][1]) |(x[ unit276_1[i][2] ] ^ unit276_1[i][3]));
			}
		if(X_contra>0) L[276][1]=2;
		}
	//Check all rules of unit[277][0]
	L[277][0] = LargeX[277][1]>0 ? 1 : 0;
	satisfiable[277][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit277_0[i][0] ][ unit277_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit277_0[i][2] ][ unit277_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit277_0[i][4] ][ unit277_0[i][5] ] >0);
		X_contra = ( LargeX[277][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit277_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[277][1]=0; L[277][0]=1;}
			satisfiable[277][0]=satisfiable[277][0] & ((x[277] ^ 0) | (x[ unit277_0[i][0] ] ^ unit277_0[i][1]) |(x[ unit277_0[i][2] ] ^ unit277_0[i][3]));
			}
		if(X_contra>0) L[277][0]=2;
		}
	//Check all rules of unit[277][1]
	L[277][1] = LargeX[277][0]>0 ? 1 : 0;
	satisfiable[277][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit277_1[i][0] ][ unit277_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit277_1[i][2] ][ unit277_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit277_1[i][4] ][ unit277_1[i][5] ] >0);
		X_contra = ( LargeX[277][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit277_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[277][0]=0; L[277][1]=1;}
			satisfiable[277][1]=satisfiable[277][1] & ((x[277] ^ 1) | (x[ unit277_1[i][0] ] ^ unit277_1[i][1]) |(x[ unit277_1[i][2] ] ^ unit277_1[i][3]));
			}
		if(X_contra>0) L[277][1]=2;
		}
	//Check all rules of unit[278][0]
	L[278][0] = LargeX[278][1]>0 ? 1 : 0;
	satisfiable[278][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit278_0[i][0] ][ unit278_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit278_0[i][2] ][ unit278_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit278_0[i][4] ][ unit278_0[i][5] ] >0);
		X_contra = ( LargeX[278][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit278_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[278][1]=0; L[278][0]=1;}
			satisfiable[278][0]=satisfiable[278][0] & ((x[278] ^ 0) | (x[ unit278_0[i][0] ] ^ unit278_0[i][1]) |(x[ unit278_0[i][2] ] ^ unit278_0[i][3]));
			}
		if(X_contra>0) L[278][0]=2;
		}
	//Check all rules of unit[278][1]
	L[278][1] = LargeX[278][0]>0 ? 1 : 0;
	satisfiable[278][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit278_1[i][0] ][ unit278_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit278_1[i][2] ][ unit278_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit278_1[i][4] ][ unit278_1[i][5] ] >0);
		X_contra = ( LargeX[278][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit278_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[278][0]=0; L[278][1]=1;}
			satisfiable[278][1]=satisfiable[278][1] & ((x[278] ^ 1) | (x[ unit278_1[i][0] ] ^ unit278_1[i][1]) |(x[ unit278_1[i][2] ] ^ unit278_1[i][3]));
			}
		if(X_contra>0) L[278][1]=2;
		}
	//Check all rules of unit[279][0]
	L[279][0] = LargeX[279][1]>0 ? 1 : 0;
	satisfiable[279][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit279_0[i][0] ][ unit279_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit279_0[i][2] ][ unit279_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit279_0[i][4] ][ unit279_0[i][5] ] >0);
		X_contra = ( LargeX[279][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit279_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[279][1]=0; L[279][0]=1;}
			satisfiable[279][0]=satisfiable[279][0] & ((x[279] ^ 0) | (x[ unit279_0[i][0] ] ^ unit279_0[i][1]) |(x[ unit279_0[i][2] ] ^ unit279_0[i][3]));
			}
		if(X_contra>0) L[279][0]=2;
		}
	//Check all rules of unit[279][1]
	L[279][1] = LargeX[279][0]>0 ? 1 : 0;
	satisfiable[279][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit279_1[i][0] ][ unit279_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit279_1[i][2] ][ unit279_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit279_1[i][4] ][ unit279_1[i][5] ] >0);
		X_contra = ( LargeX[279][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit279_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[279][0]=0; L[279][1]=1;}
			satisfiable[279][1]=satisfiable[279][1] & ((x[279] ^ 1) | (x[ unit279_1[i][0] ] ^ unit279_1[i][1]) |(x[ unit279_1[i][2] ] ^ unit279_1[i][3]));
			}
		if(X_contra>0) L[279][1]=2;
		}
	//Check all rules of unit[280][0]
	L[280][0] = LargeX[280][1]>0 ? 1 : 0;
	satisfiable[280][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit280_0[i][0] ][ unit280_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit280_0[i][2] ][ unit280_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit280_0[i][4] ][ unit280_0[i][5] ] >0);
		X_contra = ( LargeX[280][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit280_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[280][1]=0; L[280][0]=1;}
			satisfiable[280][0]=satisfiable[280][0] & ((x[280] ^ 0) | (x[ unit280_0[i][0] ] ^ unit280_0[i][1]) |(x[ unit280_0[i][2] ] ^ unit280_0[i][3]));
			}
		if(X_contra>0) L[280][0]=2;
		}
	//Check all rules of unit[280][1]
	L[280][1] = LargeX[280][0]>0 ? 1 : 0;
	satisfiable[280][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit280_1[i][0] ][ unit280_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit280_1[i][2] ][ unit280_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit280_1[i][4] ][ unit280_1[i][5] ] >0);
		X_contra = ( LargeX[280][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit280_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[280][0]=0; L[280][1]=1;}
			satisfiable[280][1]=satisfiable[280][1] & ((x[280] ^ 1) | (x[ unit280_1[i][0] ] ^ unit280_1[i][1]) |(x[ unit280_1[i][2] ] ^ unit280_1[i][3]));
			}
		if(X_contra>0) L[280][1]=2;
		}
	//Check all rules of unit[281][0]
	L[281][0] = LargeX[281][1]>0 ? 1 : 0;
	satisfiable[281][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit281_0[i][0] ][ unit281_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit281_0[i][2] ][ unit281_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit281_0[i][4] ][ unit281_0[i][5] ] >0);
		X_contra = ( LargeX[281][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit281_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[281][1]=0; L[281][0]=1;}
			satisfiable[281][0]=satisfiable[281][0] & ((x[281] ^ 0) | (x[ unit281_0[i][0] ] ^ unit281_0[i][1]) |(x[ unit281_0[i][2] ] ^ unit281_0[i][3]));
			}
		if(X_contra>0) L[281][0]=2;
		}
	//Check all rules of unit[281][1]
	L[281][1] = LargeX[281][0]>0 ? 1 : 0;
	satisfiable[281][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit281_1[i][0] ][ unit281_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit281_1[i][2] ][ unit281_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit281_1[i][4] ][ unit281_1[i][5] ] >0);
		X_contra = ( LargeX[281][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit281_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[281][0]=0; L[281][1]=1;}
			satisfiable[281][1]=satisfiable[281][1] & ((x[281] ^ 1) | (x[ unit281_1[i][0] ] ^ unit281_1[i][1]) |(x[ unit281_1[i][2] ] ^ unit281_1[i][3]));
			}
		if(X_contra>0) L[281][1]=2;
		}
	//Check all rules of unit[282][0]
	L[282][0] = LargeX[282][1]>0 ? 1 : 0;
	satisfiable[282][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit282_0[i][0] ][ unit282_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit282_0[i][2] ][ unit282_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit282_0[i][4] ][ unit282_0[i][5] ] >0);
		X_contra = ( LargeX[282][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit282_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[282][1]=0; L[282][0]=1;}
			satisfiable[282][0]=satisfiable[282][0] & ((x[282] ^ 0) | (x[ unit282_0[i][0] ] ^ unit282_0[i][1]) |(x[ unit282_0[i][2] ] ^ unit282_0[i][3]));
			}
		if(X_contra>0) L[282][0]=2;
		}
	//Check all rules of unit[282][1]
	L[282][1] = LargeX[282][0]>0 ? 1 : 0;
	satisfiable[282][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit282_1[i][0] ][ unit282_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit282_1[i][2] ][ unit282_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit282_1[i][4] ][ unit282_1[i][5] ] >0);
		X_contra = ( LargeX[282][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit282_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[282][0]=0; L[282][1]=1;}
			satisfiable[282][1]=satisfiable[282][1] & ((x[282] ^ 1) | (x[ unit282_1[i][0] ] ^ unit282_1[i][1]) |(x[ unit282_1[i][2] ] ^ unit282_1[i][3]));
			}
		if(X_contra>0) L[282][1]=2;
		}
	//Check all rules of unit[283][0]
	L[283][0] = LargeX[283][1]>0 ? 1 : 0;
	satisfiable[283][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit283_0[i][0] ][ unit283_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit283_0[i][2] ][ unit283_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit283_0[i][4] ][ unit283_0[i][5] ] >0);
		X_contra = ( LargeX[283][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit283_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[283][1]=0; L[283][0]=1;}
			satisfiable[283][0]=satisfiable[283][0] & ((x[283] ^ 0) | (x[ unit283_0[i][0] ] ^ unit283_0[i][1]) |(x[ unit283_0[i][2] ] ^ unit283_0[i][3]));
			}
		if(X_contra>0) L[283][0]=2;
		}
	//Check all rules of unit[283][1]
	L[283][1] = LargeX[283][0]>0 ? 1 : 0;
	satisfiable[283][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit283_1[i][0] ][ unit283_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit283_1[i][2] ][ unit283_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit283_1[i][4] ][ unit283_1[i][5] ] >0);
		X_contra = ( LargeX[283][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit283_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[283][0]=0; L[283][1]=1;}
			satisfiable[283][1]=satisfiable[283][1] & ((x[283] ^ 1) | (x[ unit283_1[i][0] ] ^ unit283_1[i][1]) |(x[ unit283_1[i][2] ] ^ unit283_1[i][3]));
			}
		if(X_contra>0) L[283][1]=2;
		}
	//Check all rules of unit[284][0]
	L[284][0] = LargeX[284][1]>0 ? 1 : 0;
	satisfiable[284][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit284_0[i][0] ][ unit284_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit284_0[i][2] ][ unit284_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit284_0[i][4] ][ unit284_0[i][5] ] >0);
		X_contra = ( LargeX[284][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit284_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[284][1]=0; L[284][0]=1;}
			satisfiable[284][0]=satisfiable[284][0] & ((x[284] ^ 0) | (x[ unit284_0[i][0] ] ^ unit284_0[i][1]) |(x[ unit284_0[i][2] ] ^ unit284_0[i][3]));
			}
		if(X_contra>0) L[284][0]=2;
		}
	//Check all rules of unit[284][1]
	L[284][1] = LargeX[284][0]>0 ? 1 : 0;
	satisfiable[284][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit284_1[i][0] ][ unit284_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit284_1[i][2] ][ unit284_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit284_1[i][4] ][ unit284_1[i][5] ] >0);
		X_contra = ( LargeX[284][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit284_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[284][0]=0; L[284][1]=1;}
			satisfiable[284][1]=satisfiable[284][1] & ((x[284] ^ 1) | (x[ unit284_1[i][0] ] ^ unit284_1[i][1]) |(x[ unit284_1[i][2] ] ^ unit284_1[i][3]));
			}
		if(X_contra>0) L[284][1]=2;
		}
	//Check all rules of unit[285][0]
	L[285][0] = LargeX[285][1]>0 ? 1 : 0;
	satisfiable[285][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit285_0[i][0] ][ unit285_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit285_0[i][2] ][ unit285_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit285_0[i][4] ][ unit285_0[i][5] ] >0);
		X_contra = ( LargeX[285][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit285_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[285][1]=0; L[285][0]=1;}
			satisfiable[285][0]=satisfiable[285][0] & ((x[285] ^ 0) | (x[ unit285_0[i][0] ] ^ unit285_0[i][1]) |(x[ unit285_0[i][2] ] ^ unit285_0[i][3]));
			}
		if(X_contra>0) L[285][0]=2;
		}
	//Check all rules of unit[285][1]
	L[285][1] = LargeX[285][0]>0 ? 1 : 0;
	satisfiable[285][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit285_1[i][0] ][ unit285_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit285_1[i][2] ][ unit285_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit285_1[i][4] ][ unit285_1[i][5] ] >0);
		X_contra = ( LargeX[285][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit285_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[285][0]=0; L[285][1]=1;}
			satisfiable[285][1]=satisfiable[285][1] & ((x[285] ^ 1) | (x[ unit285_1[i][0] ] ^ unit285_1[i][1]) |(x[ unit285_1[i][2] ] ^ unit285_1[i][3]));
			}
		if(X_contra>0) L[285][1]=2;
		}
	//Check all rules of unit[286][0]
	L[286][0] = LargeX[286][1]>0 ? 1 : 0;
	satisfiable[286][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit286_0[i][0] ][ unit286_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit286_0[i][2] ][ unit286_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit286_0[i][4] ][ unit286_0[i][5] ] >0);
		X_contra = ( LargeX[286][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit286_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[286][1]=0; L[286][0]=1;}
			satisfiable[286][0]=satisfiable[286][0] & ((x[286] ^ 0) | (x[ unit286_0[i][0] ] ^ unit286_0[i][1]) |(x[ unit286_0[i][2] ] ^ unit286_0[i][3]));
			}
		if(X_contra>0) L[286][0]=2;
		}
	//Check all rules of unit[286][1]
	L[286][1] = LargeX[286][0]>0 ? 1 : 0;
	satisfiable[286][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit286_1[i][0] ][ unit286_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit286_1[i][2] ][ unit286_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit286_1[i][4] ][ unit286_1[i][5] ] >0);
		X_contra = ( LargeX[286][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit286_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[286][0]=0; L[286][1]=1;}
			satisfiable[286][1]=satisfiable[286][1] & ((x[286] ^ 1) | (x[ unit286_1[i][0] ] ^ unit286_1[i][1]) |(x[ unit286_1[i][2] ] ^ unit286_1[i][3]));
			}
		if(X_contra>0) L[286][1]=2;
		}
	//Check all rules of unit[287][0]
	L[287][0] = LargeX[287][1]>0 ? 1 : 0;
	satisfiable[287][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit287_0[i][0] ][ unit287_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit287_0[i][2] ][ unit287_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit287_0[i][4] ][ unit287_0[i][5] ] >0);
		X_contra = ( LargeX[287][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit287_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[287][1]=0; L[287][0]=1;}
			satisfiable[287][0]=satisfiable[287][0] & ((x[287] ^ 0) | (x[ unit287_0[i][0] ] ^ unit287_0[i][1]) |(x[ unit287_0[i][2] ] ^ unit287_0[i][3]));
			}
		if(X_contra>0) L[287][0]=2;
		}
	//Check all rules of unit[287][1]
	L[287][1] = LargeX[287][0]>0 ? 1 : 0;
	satisfiable[287][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit287_1[i][0] ][ unit287_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit287_1[i][2] ][ unit287_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit287_1[i][4] ][ unit287_1[i][5] ] >0);
		X_contra = ( LargeX[287][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit287_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[287][0]=0; L[287][1]=1;}
			satisfiable[287][1]=satisfiable[287][1] & ((x[287] ^ 1) | (x[ unit287_1[i][0] ] ^ unit287_1[i][1]) |(x[ unit287_1[i][2] ] ^ unit287_1[i][3]));
			}
		if(X_contra>0) L[287][1]=2;
		}
	//Check all rules of unit[288][0]
	L[288][0] = LargeX[288][1]>0 ? 1 : 0;
	satisfiable[288][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit288_0[i][0] ][ unit288_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit288_0[i][2] ][ unit288_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit288_0[i][4] ][ unit288_0[i][5] ] >0);
		X_contra = ( LargeX[288][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit288_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[288][1]=0; L[288][0]=1;}
			satisfiable[288][0]=satisfiable[288][0] & ((x[288] ^ 0) | (x[ unit288_0[i][0] ] ^ unit288_0[i][1]) |(x[ unit288_0[i][2] ] ^ unit288_0[i][3]));
			}
		if(X_contra>0) L[288][0]=2;
		}
	//Check all rules of unit[288][1]
	L[288][1] = LargeX[288][0]>0 ? 1 : 0;
	satisfiable[288][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit288_1[i][0] ][ unit288_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit288_1[i][2] ][ unit288_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit288_1[i][4] ][ unit288_1[i][5] ] >0);
		X_contra = ( LargeX[288][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit288_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[288][0]=0; L[288][1]=1;}
			satisfiable[288][1]=satisfiable[288][1] & ((x[288] ^ 1) | (x[ unit288_1[i][0] ] ^ unit288_1[i][1]) |(x[ unit288_1[i][2] ] ^ unit288_1[i][3]));
			}
		if(X_contra>0) L[288][1]=2;
		}
	//Check all rules of unit[289][0]
	L[289][0] = LargeX[289][1]>0 ? 1 : 0;
	satisfiable[289][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit289_0[i][0] ][ unit289_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit289_0[i][2] ][ unit289_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit289_0[i][4] ][ unit289_0[i][5] ] >0);
		X_contra = ( LargeX[289][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit289_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[289][1]=0; L[289][0]=1;}
			satisfiable[289][0]=satisfiable[289][0] & ((x[289] ^ 0) | (x[ unit289_0[i][0] ] ^ unit289_0[i][1]) |(x[ unit289_0[i][2] ] ^ unit289_0[i][3]));
			}
		if(X_contra>0) L[289][0]=2;
		}
	//Check all rules of unit[289][1]
	L[289][1] = LargeX[289][0]>0 ? 1 : 0;
	satisfiable[289][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit289_1[i][0] ][ unit289_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit289_1[i][2] ][ unit289_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit289_1[i][4] ][ unit289_1[i][5] ] >0);
		X_contra = ( LargeX[289][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit289_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[289][0]=0; L[289][1]=1;}
			satisfiable[289][1]=satisfiable[289][1] & ((x[289] ^ 1) | (x[ unit289_1[i][0] ] ^ unit289_1[i][1]) |(x[ unit289_1[i][2] ] ^ unit289_1[i][3]));
			}
		if(X_contra>0) L[289][1]=2;
		}
	//Check all rules of unit[290][0]
	L[290][0] = LargeX[290][1]>0 ? 1 : 0;
	satisfiable[290][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit290_0[i][0] ][ unit290_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit290_0[i][2] ][ unit290_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit290_0[i][4] ][ unit290_0[i][5] ] >0);
		X_contra = ( LargeX[290][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit290_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[290][1]=0; L[290][0]=1;}
			satisfiable[290][0]=satisfiable[290][0] & ((x[290] ^ 0) | (x[ unit290_0[i][0] ] ^ unit290_0[i][1]) |(x[ unit290_0[i][2] ] ^ unit290_0[i][3]));
			}
		if(X_contra>0) L[290][0]=2;
		}
	//Check all rules of unit[290][1]
	L[290][1] = LargeX[290][0]>0 ? 1 : 0;
	satisfiable[290][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit290_1[i][0] ][ unit290_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit290_1[i][2] ][ unit290_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit290_1[i][4] ][ unit290_1[i][5] ] >0);
		X_contra = ( LargeX[290][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit290_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[290][0]=0; L[290][1]=1;}
			satisfiable[290][1]=satisfiable[290][1] & ((x[290] ^ 1) | (x[ unit290_1[i][0] ] ^ unit290_1[i][1]) |(x[ unit290_1[i][2] ] ^ unit290_1[i][3]));
			}
		if(X_contra>0) L[290][1]=2;
		}
	//Check all rules of unit[291][0]
	L[291][0] = LargeX[291][1]>0 ? 1 : 0;
	satisfiable[291][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit291_0[i][0] ][ unit291_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit291_0[i][2] ][ unit291_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit291_0[i][4] ][ unit291_0[i][5] ] >0);
		X_contra = ( LargeX[291][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit291_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[291][1]=0; L[291][0]=1;}
			satisfiable[291][0]=satisfiable[291][0] & ((x[291] ^ 0) | (x[ unit291_0[i][0] ] ^ unit291_0[i][1]) |(x[ unit291_0[i][2] ] ^ unit291_0[i][3]));
			}
		if(X_contra>0) L[291][0]=2;
		}
	//Check all rules of unit[291][1]
	L[291][1] = LargeX[291][0]>0 ? 1 : 0;
	satisfiable[291][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit291_1[i][0] ][ unit291_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit291_1[i][2] ][ unit291_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit291_1[i][4] ][ unit291_1[i][5] ] >0);
		X_contra = ( LargeX[291][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit291_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[291][0]=0; L[291][1]=1;}
			satisfiable[291][1]=satisfiable[291][1] & ((x[291] ^ 1) | (x[ unit291_1[i][0] ] ^ unit291_1[i][1]) |(x[ unit291_1[i][2] ] ^ unit291_1[i][3]));
			}
		if(X_contra>0) L[291][1]=2;
		}
	//Check all rules of unit[292][0]
	L[292][0] = LargeX[292][1]>0 ? 1 : 0;
	satisfiable[292][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit292_0[i][0] ][ unit292_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit292_0[i][2] ][ unit292_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit292_0[i][4] ][ unit292_0[i][5] ] >0);
		X_contra = ( LargeX[292][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit292_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[292][1]=0; L[292][0]=1;}
			satisfiable[292][0]=satisfiable[292][0] & ((x[292] ^ 0) | (x[ unit292_0[i][0] ] ^ unit292_0[i][1]) |(x[ unit292_0[i][2] ] ^ unit292_0[i][3]));
			}
		if(X_contra>0) L[292][0]=2;
		}
	//Check all rules of unit[292][1]
	L[292][1] = LargeX[292][0]>0 ? 1 : 0;
	satisfiable[292][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit292_1[i][0] ][ unit292_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit292_1[i][2] ][ unit292_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit292_1[i][4] ][ unit292_1[i][5] ] >0);
		X_contra = ( LargeX[292][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit292_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[292][0]=0; L[292][1]=1;}
			satisfiable[292][1]=satisfiable[292][1] & ((x[292] ^ 1) | (x[ unit292_1[i][0] ] ^ unit292_1[i][1]) |(x[ unit292_1[i][2] ] ^ unit292_1[i][3]));
			}
		if(X_contra>0) L[292][1]=2;
		}
	//Check all rules of unit[293][0]
	L[293][0] = LargeX[293][1]>0 ? 1 : 0;
	satisfiable[293][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit293_0[i][0] ][ unit293_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit293_0[i][2] ][ unit293_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit293_0[i][4] ][ unit293_0[i][5] ] >0);
		X_contra = ( LargeX[293][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit293_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[293][1]=0; L[293][0]=1;}
			satisfiable[293][0]=satisfiable[293][0] & ((x[293] ^ 0) | (x[ unit293_0[i][0] ] ^ unit293_0[i][1]) |(x[ unit293_0[i][2] ] ^ unit293_0[i][3]));
			}
		if(X_contra>0) L[293][0]=2;
		}
	//Check all rules of unit[293][1]
	L[293][1] = LargeX[293][0]>0 ? 1 : 0;
	satisfiable[293][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit293_1[i][0] ][ unit293_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit293_1[i][2] ][ unit293_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit293_1[i][4] ][ unit293_1[i][5] ] >0);
		X_contra = ( LargeX[293][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit293_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[293][0]=0; L[293][1]=1;}
			satisfiable[293][1]=satisfiable[293][1] & ((x[293] ^ 1) | (x[ unit293_1[i][0] ] ^ unit293_1[i][1]) |(x[ unit293_1[i][2] ] ^ unit293_1[i][3]));
			}
		if(X_contra>0) L[293][1]=2;
		}
	//Check all rules of unit[294][0]
	L[294][0] = LargeX[294][1]>0 ? 1 : 0;
	satisfiable[294][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit294_0[i][0] ][ unit294_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit294_0[i][2] ][ unit294_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit294_0[i][4] ][ unit294_0[i][5] ] >0);
		X_contra = ( LargeX[294][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit294_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[294][1]=0; L[294][0]=1;}
			satisfiable[294][0]=satisfiable[294][0] & ((x[294] ^ 0) | (x[ unit294_0[i][0] ] ^ unit294_0[i][1]) |(x[ unit294_0[i][2] ] ^ unit294_0[i][3]));
			}
		if(X_contra>0) L[294][0]=2;
		}
	//Check all rules of unit[294][1]
	L[294][1] = LargeX[294][0]>0 ? 1 : 0;
	satisfiable[294][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit294_1[i][0] ][ unit294_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit294_1[i][2] ][ unit294_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit294_1[i][4] ][ unit294_1[i][5] ] >0);
		X_contra = ( LargeX[294][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit294_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[294][0]=0; L[294][1]=1;}
			satisfiable[294][1]=satisfiable[294][1] & ((x[294] ^ 1) | (x[ unit294_1[i][0] ] ^ unit294_1[i][1]) |(x[ unit294_1[i][2] ] ^ unit294_1[i][3]));
			}
		if(X_contra>0) L[294][1]=2;
		}
	//Check all rules of unit[295][0]
	L[295][0] = LargeX[295][1]>0 ? 1 : 0;
	satisfiable[295][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit295_0[i][0] ][ unit295_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit295_0[i][2] ][ unit295_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit295_0[i][4] ][ unit295_0[i][5] ] >0);
		X_contra = ( LargeX[295][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit295_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[295][1]=0; L[295][0]=1;}
			satisfiable[295][0]=satisfiable[295][0] & ((x[295] ^ 0) | (x[ unit295_0[i][0] ] ^ unit295_0[i][1]) |(x[ unit295_0[i][2] ] ^ unit295_0[i][3]));
			}
		if(X_contra>0) L[295][0]=2;
		}
	//Check all rules of unit[295][1]
	L[295][1] = LargeX[295][0]>0 ? 1 : 0;
	satisfiable[295][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit295_1[i][0] ][ unit295_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit295_1[i][2] ][ unit295_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit295_1[i][4] ][ unit295_1[i][5] ] >0);
		X_contra = ( LargeX[295][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit295_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[295][0]=0; L[295][1]=1;}
			satisfiable[295][1]=satisfiable[295][1] & ((x[295] ^ 1) | (x[ unit295_1[i][0] ] ^ unit295_1[i][1]) |(x[ unit295_1[i][2] ] ^ unit295_1[i][3]));
			}
		if(X_contra>0) L[295][1]=2;
		}
	//Check all rules of unit[296][0]
	L[296][0] = LargeX[296][1]>0 ? 1 : 0;
	satisfiable[296][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit296_0[i][0] ][ unit296_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit296_0[i][2] ][ unit296_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit296_0[i][4] ][ unit296_0[i][5] ] >0);
		X_contra = ( LargeX[296][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit296_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[296][1]=0; L[296][0]=1;}
			satisfiable[296][0]=satisfiable[296][0] & ((x[296] ^ 0) | (x[ unit296_0[i][0] ] ^ unit296_0[i][1]) |(x[ unit296_0[i][2] ] ^ unit296_0[i][3]));
			}
		if(X_contra>0) L[296][0]=2;
		}
	//Check all rules of unit[296][1]
	L[296][1] = LargeX[296][0]>0 ? 1 : 0;
	satisfiable[296][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit296_1[i][0] ][ unit296_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit296_1[i][2] ][ unit296_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit296_1[i][4] ][ unit296_1[i][5] ] >0);
		X_contra = ( LargeX[296][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit296_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[296][0]=0; L[296][1]=1;}
			satisfiable[296][1]=satisfiable[296][1] & ((x[296] ^ 1) | (x[ unit296_1[i][0] ] ^ unit296_1[i][1]) |(x[ unit296_1[i][2] ] ^ unit296_1[i][3]));
			}
		if(X_contra>0) L[296][1]=2;
		}
	//Check all rules of unit[297][0]
	L[297][0] = LargeX[297][1]>0 ? 1 : 0;
	satisfiable[297][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit297_0[i][0] ][ unit297_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit297_0[i][2] ][ unit297_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit297_0[i][4] ][ unit297_0[i][5] ] >0);
		X_contra = ( LargeX[297][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit297_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[297][1]=0; L[297][0]=1;}
			satisfiable[297][0]=satisfiable[297][0] & ((x[297] ^ 0) | (x[ unit297_0[i][0] ] ^ unit297_0[i][1]) |(x[ unit297_0[i][2] ] ^ unit297_0[i][3]));
			}
		if(X_contra>0) L[297][0]=2;
		}
	//Check all rules of unit[297][1]
	L[297][1] = LargeX[297][0]>0 ? 1 : 0;
	satisfiable[297][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit297_1[i][0] ][ unit297_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit297_1[i][2] ][ unit297_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit297_1[i][4] ][ unit297_1[i][5] ] >0);
		X_contra = ( LargeX[297][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit297_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[297][0]=0; L[297][1]=1;}
			satisfiable[297][1]=satisfiable[297][1] & ((x[297] ^ 1) | (x[ unit297_1[i][0] ] ^ unit297_1[i][1]) |(x[ unit297_1[i][2] ] ^ unit297_1[i][3]));
			}
		if(X_contra>0) L[297][1]=2;
		}
	//Check all rules of unit[298][0]
	L[298][0] = LargeX[298][1]>0 ? 1 : 0;
	satisfiable[298][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit298_0[i][0] ][ unit298_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit298_0[i][2] ][ unit298_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit298_0[i][4] ][ unit298_0[i][5] ] >0);
		X_contra = ( LargeX[298][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit298_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[298][1]=0; L[298][0]=1;}
			satisfiable[298][0]=satisfiable[298][0] & ((x[298] ^ 0) | (x[ unit298_0[i][0] ] ^ unit298_0[i][1]) |(x[ unit298_0[i][2] ] ^ unit298_0[i][3]));
			}
		if(X_contra>0) L[298][0]=2;
		}
	//Check all rules of unit[298][1]
	L[298][1] = LargeX[298][0]>0 ? 1 : 0;
	satisfiable[298][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit298_1[i][0] ][ unit298_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit298_1[i][2] ][ unit298_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit298_1[i][4] ][ unit298_1[i][5] ] >0);
		X_contra = ( LargeX[298][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit298_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[298][0]=0; L[298][1]=1;}
			satisfiable[298][1]=satisfiable[298][1] & ((x[298] ^ 1) | (x[ unit298_1[i][0] ] ^ unit298_1[i][1]) |(x[ unit298_1[i][2] ] ^ unit298_1[i][3]));
			}
		if(X_contra>0) L[298][1]=2;
		}
	//Check all rules of unit[299][0]
	L[299][0] = LargeX[299][1]>0 ? 1 : 0;
	satisfiable[299][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit299_0[i][0] ][ unit299_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit299_0[i][2] ][ unit299_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit299_0[i][4] ][ unit299_0[i][5] ] >0);
		X_contra = ( LargeX[299][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit299_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[299][1]=0; L[299][0]=1;}
			satisfiable[299][0]=satisfiable[299][0] & ((x[299] ^ 0) | (x[ unit299_0[i][0] ] ^ unit299_0[i][1]) |(x[ unit299_0[i][2] ] ^ unit299_0[i][3]));
			}
		if(X_contra>0) L[299][0]=2;
		}
	//Check all rules of unit[299][1]
	L[299][1] = LargeX[299][0]>0 ? 1 : 0;
	satisfiable[299][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit299_1[i][0] ][ unit299_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit299_1[i][2] ][ unit299_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit299_1[i][4] ][ unit299_1[i][5] ] >0);
		X_contra = ( LargeX[299][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit299_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[299][0]=0; L[299][1]=1;}
			satisfiable[299][1]=satisfiable[299][1] & ((x[299] ^ 1) | (x[ unit299_1[i][0] ] ^ unit299_1[i][1]) |(x[ unit299_1[i][2] ] ^ unit299_1[i][3]));
			}
		if(X_contra>0) L[299][1]=2;
		}
	//Check all rules of unit[300][0]
	L[300][0] = LargeX[300][1]>0 ? 1 : 0;
	satisfiable[300][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit300_0[i][0] ][ unit300_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit300_0[i][2] ][ unit300_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit300_0[i][4] ][ unit300_0[i][5] ] >0);
		X_contra = ( LargeX[300][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit300_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[300][1]=0; L[300][0]=1;}
			satisfiable[300][0]=satisfiable[300][0] & ((x[300] ^ 0) | (x[ unit300_0[i][0] ] ^ unit300_0[i][1]) |(x[ unit300_0[i][2] ] ^ unit300_0[i][3]));
			}
		if(X_contra>0) L[300][0]=2;
		}
	//Check all rules of unit[300][1]
	L[300][1] = LargeX[300][0]>0 ? 1 : 0;
	satisfiable[300][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit300_1[i][0] ][ unit300_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit300_1[i][2] ][ unit300_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit300_1[i][4] ][ unit300_1[i][5] ] >0);
		X_contra = ( LargeX[300][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit300_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[300][0]=0; L[300][1]=1;}
			satisfiable[300][1]=satisfiable[300][1] & ((x[300] ^ 1) | (x[ unit300_1[i][0] ] ^ unit300_1[i][1]) |(x[ unit300_1[i][2] ] ^ unit300_1[i][3]));
			}
		if(X_contra>0) L[300][1]=2;
		}
	//Check all rules of unit[301][0]
	L[301][0] = LargeX[301][1]>0 ? 1 : 0;
	satisfiable[301][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit301_0[i][0] ][ unit301_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit301_0[i][2] ][ unit301_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit301_0[i][4] ][ unit301_0[i][5] ] >0);
		X_contra = ( LargeX[301][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit301_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[301][1]=0; L[301][0]=1;}
			satisfiable[301][0]=satisfiable[301][0] & ((x[301] ^ 0) | (x[ unit301_0[i][0] ] ^ unit301_0[i][1]) |(x[ unit301_0[i][2] ] ^ unit301_0[i][3]));
			}
		if(X_contra>0) L[301][0]=2;
		}
	//Check all rules of unit[301][1]
	L[301][1] = LargeX[301][0]>0 ? 1 : 0;
	satisfiable[301][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit301_1[i][0] ][ unit301_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit301_1[i][2] ][ unit301_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit301_1[i][4] ][ unit301_1[i][5] ] >0);
		X_contra = ( LargeX[301][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit301_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[301][0]=0; L[301][1]=1;}
			satisfiable[301][1]=satisfiable[301][1] & ((x[301] ^ 1) | (x[ unit301_1[i][0] ] ^ unit301_1[i][1]) |(x[ unit301_1[i][2] ] ^ unit301_1[i][3]));
			}
		if(X_contra>0) L[301][1]=2;
		}
	//Check all rules of unit[302][0]
	L[302][0] = LargeX[302][1]>0 ? 1 : 0;
	satisfiable[302][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit302_0[i][0] ][ unit302_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit302_0[i][2] ][ unit302_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit302_0[i][4] ][ unit302_0[i][5] ] >0);
		X_contra = ( LargeX[302][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit302_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[302][1]=0; L[302][0]=1;}
			satisfiable[302][0]=satisfiable[302][0] & ((x[302] ^ 0) | (x[ unit302_0[i][0] ] ^ unit302_0[i][1]) |(x[ unit302_0[i][2] ] ^ unit302_0[i][3]));
			}
		if(X_contra>0) L[302][0]=2;
		}
	//Check all rules of unit[302][1]
	L[302][1] = LargeX[302][0]>0 ? 1 : 0;
	satisfiable[302][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit302_1[i][0] ][ unit302_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit302_1[i][2] ][ unit302_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit302_1[i][4] ][ unit302_1[i][5] ] >0);
		X_contra = ( LargeX[302][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit302_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[302][0]=0; L[302][1]=1;}
			satisfiable[302][1]=satisfiable[302][1] & ((x[302] ^ 1) | (x[ unit302_1[i][0] ] ^ unit302_1[i][1]) |(x[ unit302_1[i][2] ] ^ unit302_1[i][3]));
			}
		if(X_contra>0) L[302][1]=2;
		}
	//Check all rules of unit[303][0]
	L[303][0] = LargeX[303][1]>0 ? 1 : 0;
	satisfiable[303][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit303_0[i][0] ][ unit303_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit303_0[i][2] ][ unit303_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit303_0[i][4] ][ unit303_0[i][5] ] >0);
		X_contra = ( LargeX[303][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit303_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[303][1]=0; L[303][0]=1;}
			satisfiable[303][0]=satisfiable[303][0] & ((x[303] ^ 0) | (x[ unit303_0[i][0] ] ^ unit303_0[i][1]) |(x[ unit303_0[i][2] ] ^ unit303_0[i][3]));
			}
		if(X_contra>0) L[303][0]=2;
		}
	//Check all rules of unit[303][1]
	L[303][1] = LargeX[303][0]>0 ? 1 : 0;
	satisfiable[303][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit303_1[i][0] ][ unit303_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit303_1[i][2] ][ unit303_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit303_1[i][4] ][ unit303_1[i][5] ] >0);
		X_contra = ( LargeX[303][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit303_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[303][0]=0; L[303][1]=1;}
			satisfiable[303][1]=satisfiable[303][1] & ((x[303] ^ 1) | (x[ unit303_1[i][0] ] ^ unit303_1[i][1]) |(x[ unit303_1[i][2] ] ^ unit303_1[i][3]));
			}
		if(X_contra>0) L[303][1]=2;
		}
	//Check all rules of unit[304][0]
	L[304][0] = LargeX[304][1]>0 ? 1 : 0;
	satisfiable[304][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit304_0[i][0] ][ unit304_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit304_0[i][2] ][ unit304_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit304_0[i][4] ][ unit304_0[i][5] ] >0);
		X_contra = ( LargeX[304][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit304_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[304][1]=0; L[304][0]=1;}
			satisfiable[304][0]=satisfiable[304][0] & ((x[304] ^ 0) | (x[ unit304_0[i][0] ] ^ unit304_0[i][1]) |(x[ unit304_0[i][2] ] ^ unit304_0[i][3]));
			}
		if(X_contra>0) L[304][0]=2;
		}
	//Check all rules of unit[304][1]
	L[304][1] = LargeX[304][0]>0 ? 1 : 0;
	satisfiable[304][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit304_1[i][0] ][ unit304_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit304_1[i][2] ][ unit304_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit304_1[i][4] ][ unit304_1[i][5] ] >0);
		X_contra = ( LargeX[304][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit304_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[304][0]=0; L[304][1]=1;}
			satisfiable[304][1]=satisfiable[304][1] & ((x[304] ^ 1) | (x[ unit304_1[i][0] ] ^ unit304_1[i][1]) |(x[ unit304_1[i][2] ] ^ unit304_1[i][3]));
			}
		if(X_contra>0) L[304][1]=2;
		}
	//Check all rules of unit[305][0]
	L[305][0] = LargeX[305][1]>0 ? 1 : 0;
	satisfiable[305][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit305_0[i][0] ][ unit305_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit305_0[i][2] ][ unit305_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit305_0[i][4] ][ unit305_0[i][5] ] >0);
		X_contra = ( LargeX[305][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit305_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[305][1]=0; L[305][0]=1;}
			satisfiable[305][0]=satisfiable[305][0] & ((x[305] ^ 0) | (x[ unit305_0[i][0] ] ^ unit305_0[i][1]) |(x[ unit305_0[i][2] ] ^ unit305_0[i][3]));
			}
		if(X_contra>0) L[305][0]=2;
		}
	//Check all rules of unit[305][1]
	L[305][1] = LargeX[305][0]>0 ? 1 : 0;
	satisfiable[305][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit305_1[i][0] ][ unit305_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit305_1[i][2] ][ unit305_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit305_1[i][4] ][ unit305_1[i][5] ] >0);
		X_contra = ( LargeX[305][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit305_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[305][0]=0; L[305][1]=1;}
			satisfiable[305][1]=satisfiable[305][1] & ((x[305] ^ 1) | (x[ unit305_1[i][0] ] ^ unit305_1[i][1]) |(x[ unit305_1[i][2] ] ^ unit305_1[i][3]));
			}
		if(X_contra>0) L[305][1]=2;
		}
	//Check all rules of unit[306][0]
	L[306][0] = LargeX[306][1]>0 ? 1 : 0;
	satisfiable[306][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit306_0[i][0] ][ unit306_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit306_0[i][2] ][ unit306_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit306_0[i][4] ][ unit306_0[i][5] ] >0);
		X_contra = ( LargeX[306][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit306_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[306][1]=0; L[306][0]=1;}
			satisfiable[306][0]=satisfiable[306][0] & ((x[306] ^ 0) | (x[ unit306_0[i][0] ] ^ unit306_0[i][1]) |(x[ unit306_0[i][2] ] ^ unit306_0[i][3]));
			}
		if(X_contra>0) L[306][0]=2;
		}
	//Check all rules of unit[306][1]
	L[306][1] = LargeX[306][0]>0 ? 1 : 0;
	satisfiable[306][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit306_1[i][0] ][ unit306_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit306_1[i][2] ][ unit306_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit306_1[i][4] ][ unit306_1[i][5] ] >0);
		X_contra = ( LargeX[306][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit306_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[306][0]=0; L[306][1]=1;}
			satisfiable[306][1]=satisfiable[306][1] & ((x[306] ^ 1) | (x[ unit306_1[i][0] ] ^ unit306_1[i][1]) |(x[ unit306_1[i][2] ] ^ unit306_1[i][3]));
			}
		if(X_contra>0) L[306][1]=2;
		}
	//Check all rules of unit[307][0]
	L[307][0] = LargeX[307][1]>0 ? 1 : 0;
	satisfiable[307][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit307_0[i][0] ][ unit307_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit307_0[i][2] ][ unit307_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit307_0[i][4] ][ unit307_0[i][5] ] >0);
		X_contra = ( LargeX[307][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit307_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[307][1]=0; L[307][0]=1;}
			satisfiable[307][0]=satisfiable[307][0] & ((x[307] ^ 0) | (x[ unit307_0[i][0] ] ^ unit307_0[i][1]) |(x[ unit307_0[i][2] ] ^ unit307_0[i][3]));
			}
		if(X_contra>0) L[307][0]=2;
		}
	//Check all rules of unit[307][1]
	L[307][1] = LargeX[307][0]>0 ? 1 : 0;
	satisfiable[307][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit307_1[i][0] ][ unit307_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit307_1[i][2] ][ unit307_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit307_1[i][4] ][ unit307_1[i][5] ] >0);
		X_contra = ( LargeX[307][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit307_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[307][0]=0; L[307][1]=1;}
			satisfiable[307][1]=satisfiable[307][1] & ((x[307] ^ 1) | (x[ unit307_1[i][0] ] ^ unit307_1[i][1]) |(x[ unit307_1[i][2] ] ^ unit307_1[i][3]));
			}
		if(X_contra>0) L[307][1]=2;
		}
	//Check all rules of unit[308][0]
	L[308][0] = LargeX[308][1]>0 ? 1 : 0;
	satisfiable[308][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit308_0[i][0] ][ unit308_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit308_0[i][2] ][ unit308_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit308_0[i][4] ][ unit308_0[i][5] ] >0);
		X_contra = ( LargeX[308][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit308_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[308][1]=0; L[308][0]=1;}
			satisfiable[308][0]=satisfiable[308][0] & ((x[308] ^ 0) | (x[ unit308_0[i][0] ] ^ unit308_0[i][1]) |(x[ unit308_0[i][2] ] ^ unit308_0[i][3]));
			}
		if(X_contra>0) L[308][0]=2;
		}
	//Check all rules of unit[308][1]
	L[308][1] = LargeX[308][0]>0 ? 1 : 0;
	satisfiable[308][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit308_1[i][0] ][ unit308_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit308_1[i][2] ][ unit308_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit308_1[i][4] ][ unit308_1[i][5] ] >0);
		X_contra = ( LargeX[308][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit308_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[308][0]=0; L[308][1]=1;}
			satisfiable[308][1]=satisfiable[308][1] & ((x[308] ^ 1) | (x[ unit308_1[i][0] ] ^ unit308_1[i][1]) |(x[ unit308_1[i][2] ] ^ unit308_1[i][3]));
			}
		if(X_contra>0) L[308][1]=2;
		}
	//Check all rules of unit[309][0]
	L[309][0] = LargeX[309][1]>0 ? 1 : 0;
	satisfiable[309][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit309_0[i][0] ][ unit309_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit309_0[i][2] ][ unit309_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit309_0[i][4] ][ unit309_0[i][5] ] >0);
		X_contra = ( LargeX[309][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit309_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[309][1]=0; L[309][0]=1;}
			satisfiable[309][0]=satisfiable[309][0] & ((x[309] ^ 0) | (x[ unit309_0[i][0] ] ^ unit309_0[i][1]) |(x[ unit309_0[i][2] ] ^ unit309_0[i][3]));
			}
		if(X_contra>0) L[309][0]=2;
		}
	//Check all rules of unit[309][1]
	L[309][1] = LargeX[309][0]>0 ? 1 : 0;
	satisfiable[309][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit309_1[i][0] ][ unit309_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit309_1[i][2] ][ unit309_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit309_1[i][4] ][ unit309_1[i][5] ] >0);
		X_contra = ( LargeX[309][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit309_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[309][0]=0; L[309][1]=1;}
			satisfiable[309][1]=satisfiable[309][1] & ((x[309] ^ 1) | (x[ unit309_1[i][0] ] ^ unit309_1[i][1]) |(x[ unit309_1[i][2] ] ^ unit309_1[i][3]));
			}
		if(X_contra>0) L[309][1]=2;
		}
	//Check all rules of unit[310][0]
	L[310][0] = LargeX[310][1]>0 ? 1 : 0;
	satisfiable[310][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit310_0[i][0] ][ unit310_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit310_0[i][2] ][ unit310_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit310_0[i][4] ][ unit310_0[i][5] ] >0);
		X_contra = ( LargeX[310][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit310_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[310][1]=0; L[310][0]=1;}
			satisfiable[310][0]=satisfiable[310][0] & ((x[310] ^ 0) | (x[ unit310_0[i][0] ] ^ unit310_0[i][1]) |(x[ unit310_0[i][2] ] ^ unit310_0[i][3]));
			}
		if(X_contra>0) L[310][0]=2;
		}
	//Check all rules of unit[310][1]
	L[310][1] = LargeX[310][0]>0 ? 1 : 0;
	satisfiable[310][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit310_1[i][0] ][ unit310_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit310_1[i][2] ][ unit310_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit310_1[i][4] ][ unit310_1[i][5] ] >0);
		X_contra = ( LargeX[310][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit310_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[310][0]=0; L[310][1]=1;}
			satisfiable[310][1]=satisfiable[310][1] & ((x[310] ^ 1) | (x[ unit310_1[i][0] ] ^ unit310_1[i][1]) |(x[ unit310_1[i][2] ] ^ unit310_1[i][3]));
			}
		if(X_contra>0) L[310][1]=2;
		}
	//Check all rules of unit[311][0]
	L[311][0] = LargeX[311][1]>0 ? 1 : 0;
	satisfiable[311][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit311_0[i][0] ][ unit311_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit311_0[i][2] ][ unit311_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit311_0[i][4] ][ unit311_0[i][5] ] >0);
		X_contra = ( LargeX[311][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit311_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[311][1]=0; L[311][0]=1;}
			satisfiable[311][0]=satisfiable[311][0] & ((x[311] ^ 0) | (x[ unit311_0[i][0] ] ^ unit311_0[i][1]) |(x[ unit311_0[i][2] ] ^ unit311_0[i][3]));
			}
		if(X_contra>0) L[311][0]=2;
		}
	//Check all rules of unit[311][1]
	L[311][1] = LargeX[311][0]>0 ? 1 : 0;
	satisfiable[311][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit311_1[i][0] ][ unit311_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit311_1[i][2] ][ unit311_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit311_1[i][4] ][ unit311_1[i][5] ] >0);
		X_contra = ( LargeX[311][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit311_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[311][0]=0; L[311][1]=1;}
			satisfiable[311][1]=satisfiable[311][1] & ((x[311] ^ 1) | (x[ unit311_1[i][0] ] ^ unit311_1[i][1]) |(x[ unit311_1[i][2] ] ^ unit311_1[i][3]));
			}
		if(X_contra>0) L[311][1]=2;
		}
	//Check all rules of unit[312][0]
	L[312][0] = LargeX[312][1]>0 ? 1 : 0;
	satisfiable[312][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit312_0[i][0] ][ unit312_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit312_0[i][2] ][ unit312_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit312_0[i][4] ][ unit312_0[i][5] ] >0);
		X_contra = ( LargeX[312][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit312_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[312][1]=0; L[312][0]=1;}
			satisfiable[312][0]=satisfiable[312][0] & ((x[312] ^ 0) | (x[ unit312_0[i][0] ] ^ unit312_0[i][1]) |(x[ unit312_0[i][2] ] ^ unit312_0[i][3]));
			}
		if(X_contra>0) L[312][0]=2;
		}
	//Check all rules of unit[312][1]
	L[312][1] = LargeX[312][0]>0 ? 1 : 0;
	satisfiable[312][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit312_1[i][0] ][ unit312_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit312_1[i][2] ][ unit312_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit312_1[i][4] ][ unit312_1[i][5] ] >0);
		X_contra = ( LargeX[312][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit312_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[312][0]=0; L[312][1]=1;}
			satisfiable[312][1]=satisfiable[312][1] & ((x[312] ^ 1) | (x[ unit312_1[i][0] ] ^ unit312_1[i][1]) |(x[ unit312_1[i][2] ] ^ unit312_1[i][3]));
			}
		if(X_contra>0) L[312][1]=2;
		}
	//Check all rules of unit[313][0]
	L[313][0] = LargeX[313][1]>0 ? 1 : 0;
	satisfiable[313][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit313_0[i][0] ][ unit313_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit313_0[i][2] ][ unit313_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit313_0[i][4] ][ unit313_0[i][5] ] >0);
		X_contra = ( LargeX[313][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit313_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[313][1]=0; L[313][0]=1;}
			satisfiable[313][0]=satisfiable[313][0] & ((x[313] ^ 0) | (x[ unit313_0[i][0] ] ^ unit313_0[i][1]) |(x[ unit313_0[i][2] ] ^ unit313_0[i][3]));
			}
		if(X_contra>0) L[313][0]=2;
		}
	//Check all rules of unit[313][1]
	L[313][1] = LargeX[313][0]>0 ? 1 : 0;
	satisfiable[313][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit313_1[i][0] ][ unit313_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit313_1[i][2] ][ unit313_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit313_1[i][4] ][ unit313_1[i][5] ] >0);
		X_contra = ( LargeX[313][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit313_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[313][0]=0; L[313][1]=1;}
			satisfiable[313][1]=satisfiable[313][1] & ((x[313] ^ 1) | (x[ unit313_1[i][0] ] ^ unit313_1[i][1]) |(x[ unit313_1[i][2] ] ^ unit313_1[i][3]));
			}
		if(X_contra>0) L[313][1]=2;
		}
	//Check all rules of unit[314][0]
	L[314][0] = LargeX[314][1]>0 ? 1 : 0;
	satisfiable[314][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit314_0[i][0] ][ unit314_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit314_0[i][2] ][ unit314_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit314_0[i][4] ][ unit314_0[i][5] ] >0);
		X_contra = ( LargeX[314][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit314_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[314][1]=0; L[314][0]=1;}
			satisfiable[314][0]=satisfiable[314][0] & ((x[314] ^ 0) | (x[ unit314_0[i][0] ] ^ unit314_0[i][1]) |(x[ unit314_0[i][2] ] ^ unit314_0[i][3]));
			}
		if(X_contra>0) L[314][0]=2;
		}
	//Check all rules of unit[314][1]
	L[314][1] = LargeX[314][0]>0 ? 1 : 0;
	satisfiable[314][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit314_1[i][0] ][ unit314_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit314_1[i][2] ][ unit314_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit314_1[i][4] ][ unit314_1[i][5] ] >0);
		X_contra = ( LargeX[314][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit314_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[314][0]=0; L[314][1]=1;}
			satisfiable[314][1]=satisfiable[314][1] & ((x[314] ^ 1) | (x[ unit314_1[i][0] ] ^ unit314_1[i][1]) |(x[ unit314_1[i][2] ] ^ unit314_1[i][3]));
			}
		if(X_contra>0) L[314][1]=2;
		}
	//Check all rules of unit[315][0]
	L[315][0] = LargeX[315][1]>0 ? 1 : 0;
	satisfiable[315][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit315_0[i][0] ][ unit315_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit315_0[i][2] ][ unit315_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit315_0[i][4] ][ unit315_0[i][5] ] >0);
		X_contra = ( LargeX[315][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit315_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[315][1]=0; L[315][0]=1;}
			satisfiable[315][0]=satisfiable[315][0] & ((x[315] ^ 0) | (x[ unit315_0[i][0] ] ^ unit315_0[i][1]) |(x[ unit315_0[i][2] ] ^ unit315_0[i][3]));
			}
		if(X_contra>0) L[315][0]=2;
		}
	//Check all rules of unit[315][1]
	L[315][1] = LargeX[315][0]>0 ? 1 : 0;
	satisfiable[315][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit315_1[i][0] ][ unit315_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit315_1[i][2] ][ unit315_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit315_1[i][4] ][ unit315_1[i][5] ] >0);
		X_contra = ( LargeX[315][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit315_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[315][0]=0; L[315][1]=1;}
			satisfiable[315][1]=satisfiable[315][1] & ((x[315] ^ 1) | (x[ unit315_1[i][0] ] ^ unit315_1[i][1]) |(x[ unit315_1[i][2] ] ^ unit315_1[i][3]));
			}
		if(X_contra>0) L[315][1]=2;
		}
	//Check all rules of unit[316][0]
	L[316][0] = LargeX[316][1]>0 ? 1 : 0;
	satisfiable[316][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit316_0[i][0] ][ unit316_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit316_0[i][2] ][ unit316_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit316_0[i][4] ][ unit316_0[i][5] ] >0);
		X_contra = ( LargeX[316][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit316_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[316][1]=0; L[316][0]=1;}
			satisfiable[316][0]=satisfiable[316][0] & ((x[316] ^ 0) | (x[ unit316_0[i][0] ] ^ unit316_0[i][1]) |(x[ unit316_0[i][2] ] ^ unit316_0[i][3]));
			}
		if(X_contra>0) L[316][0]=2;
		}
	//Check all rules of unit[316][1]
	L[316][1] = LargeX[316][0]>0 ? 1 : 0;
	satisfiable[316][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit316_1[i][0] ][ unit316_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit316_1[i][2] ][ unit316_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit316_1[i][4] ][ unit316_1[i][5] ] >0);
		X_contra = ( LargeX[316][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit316_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[316][0]=0; L[316][1]=1;}
			satisfiable[316][1]=satisfiable[316][1] & ((x[316] ^ 1) | (x[ unit316_1[i][0] ] ^ unit316_1[i][1]) |(x[ unit316_1[i][2] ] ^ unit316_1[i][3]));
			}
		if(X_contra>0) L[316][1]=2;
		}
	//Check all rules of unit[317][0]
	L[317][0] = LargeX[317][1]>0 ? 1 : 0;
	satisfiable[317][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit317_0[i][0] ][ unit317_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit317_0[i][2] ][ unit317_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit317_0[i][4] ][ unit317_0[i][5] ] >0);
		X_contra = ( LargeX[317][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit317_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[317][1]=0; L[317][0]=1;}
			satisfiable[317][0]=satisfiable[317][0] & ((x[317] ^ 0) | (x[ unit317_0[i][0] ] ^ unit317_0[i][1]) |(x[ unit317_0[i][2] ] ^ unit317_0[i][3]));
			}
		if(X_contra>0) L[317][0]=2;
		}
	//Check all rules of unit[317][1]
	L[317][1] = LargeX[317][0]>0 ? 1 : 0;
	satisfiable[317][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit317_1[i][0] ][ unit317_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit317_1[i][2] ][ unit317_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit317_1[i][4] ][ unit317_1[i][5] ] >0);
		X_contra = ( LargeX[317][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit317_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[317][0]=0; L[317][1]=1;}
			satisfiable[317][1]=satisfiable[317][1] & ((x[317] ^ 1) | (x[ unit317_1[i][0] ] ^ unit317_1[i][1]) |(x[ unit317_1[i][2] ] ^ unit317_1[i][3]));
			}
		if(X_contra>0) L[317][1]=2;
		}
	//Check all rules of unit[318][0]
	L[318][0] = LargeX[318][1]>0 ? 1 : 0;
	satisfiable[318][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit318_0[i][0] ][ unit318_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit318_0[i][2] ][ unit318_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit318_0[i][4] ][ unit318_0[i][5] ] >0);
		X_contra = ( LargeX[318][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit318_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[318][1]=0; L[318][0]=1;}
			satisfiable[318][0]=satisfiable[318][0] & ((x[318] ^ 0) | (x[ unit318_0[i][0] ] ^ unit318_0[i][1]) |(x[ unit318_0[i][2] ] ^ unit318_0[i][3]));
			}
		if(X_contra>0) L[318][0]=2;
		}
	//Check all rules of unit[318][1]
	L[318][1] = LargeX[318][0]>0 ? 1 : 0;
	satisfiable[318][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit318_1[i][0] ][ unit318_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit318_1[i][2] ][ unit318_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit318_1[i][4] ][ unit318_1[i][5] ] >0);
		X_contra = ( LargeX[318][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit318_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[318][0]=0; L[318][1]=1;}
			satisfiable[318][1]=satisfiable[318][1] & ((x[318] ^ 1) | (x[ unit318_1[i][0] ] ^ unit318_1[i][1]) |(x[ unit318_1[i][2] ] ^ unit318_1[i][3]));
			}
		if(X_contra>0) L[318][1]=2;
		}
	//Check all rules of unit[319][0]
	L[319][0] = LargeX[319][1]>0 ? 1 : 0;
	satisfiable[319][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit319_0[i][0] ][ unit319_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit319_0[i][2] ][ unit319_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit319_0[i][4] ][ unit319_0[i][5] ] >0);
		X_contra = ( LargeX[319][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit319_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[319][1]=0; L[319][0]=1;}
			satisfiable[319][0]=satisfiable[319][0] & ((x[319] ^ 0) | (x[ unit319_0[i][0] ] ^ unit319_0[i][1]) |(x[ unit319_0[i][2] ] ^ unit319_0[i][3]));
			}
		if(X_contra>0) L[319][0]=2;
		}
	//Check all rules of unit[319][1]
	L[319][1] = LargeX[319][0]>0 ? 1 : 0;
	satisfiable[319][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit319_1[i][0] ][ unit319_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit319_1[i][2] ][ unit319_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit319_1[i][4] ][ unit319_1[i][5] ] >0);
		X_contra = ( LargeX[319][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit319_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[319][0]=0; L[319][1]=1;}
			satisfiable[319][1]=satisfiable[319][1] & ((x[319] ^ 1) | (x[ unit319_1[i][0] ] ^ unit319_1[i][1]) |(x[ unit319_1[i][2] ] ^ unit319_1[i][3]));
			}
		if(X_contra>0) L[319][1]=2;
		}
	//Check all rules of unit[320][0]
	L[320][0] = LargeX[320][1]>0 ? 1 : 0;
	satisfiable[320][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit320_0[i][0] ][ unit320_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit320_0[i][2] ][ unit320_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit320_0[i][4] ][ unit320_0[i][5] ] >0);
		X_contra = ( LargeX[320][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit320_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[320][1]=0; L[320][0]=1;}
			satisfiable[320][0]=satisfiable[320][0] & ((x[320] ^ 0) | (x[ unit320_0[i][0] ] ^ unit320_0[i][1]) |(x[ unit320_0[i][2] ] ^ unit320_0[i][3]));
			}
		if(X_contra>0) L[320][0]=2;
		}
	//Check all rules of unit[320][1]
	L[320][1] = LargeX[320][0]>0 ? 1 : 0;
	satisfiable[320][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit320_1[i][0] ][ unit320_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit320_1[i][2] ][ unit320_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit320_1[i][4] ][ unit320_1[i][5] ] >0);
		X_contra = ( LargeX[320][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit320_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[320][0]=0; L[320][1]=1;}
			satisfiable[320][1]=satisfiable[320][1] & ((x[320] ^ 1) | (x[ unit320_1[i][0] ] ^ unit320_1[i][1]) |(x[ unit320_1[i][2] ] ^ unit320_1[i][3]));
			}
		if(X_contra>0) L[320][1]=2;
		}
	//Check all rules of unit[321][0]
	L[321][0] = LargeX[321][1]>0 ? 1 : 0;
	satisfiable[321][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit321_0[i][0] ][ unit321_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit321_0[i][2] ][ unit321_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit321_0[i][4] ][ unit321_0[i][5] ] >0);
		X_contra = ( LargeX[321][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit321_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[321][1]=0; L[321][0]=1;}
			satisfiable[321][0]=satisfiable[321][0] & ((x[321] ^ 0) | (x[ unit321_0[i][0] ] ^ unit321_0[i][1]) |(x[ unit321_0[i][2] ] ^ unit321_0[i][3]));
			}
		if(X_contra>0) L[321][0]=2;
		}
	//Check all rules of unit[321][1]
	L[321][1] = LargeX[321][0]>0 ? 1 : 0;
	satisfiable[321][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit321_1[i][0] ][ unit321_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit321_1[i][2] ][ unit321_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit321_1[i][4] ][ unit321_1[i][5] ] >0);
		X_contra = ( LargeX[321][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit321_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[321][0]=0; L[321][1]=1;}
			satisfiable[321][1]=satisfiable[321][1] & ((x[321] ^ 1) | (x[ unit321_1[i][0] ] ^ unit321_1[i][1]) |(x[ unit321_1[i][2] ] ^ unit321_1[i][3]));
			}
		if(X_contra>0) L[321][1]=2;
		}
	//Check all rules of unit[322][0]
	L[322][0] = LargeX[322][1]>0 ? 1 : 0;
	satisfiable[322][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit322_0[i][0] ][ unit322_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit322_0[i][2] ][ unit322_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit322_0[i][4] ][ unit322_0[i][5] ] >0);
		X_contra = ( LargeX[322][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit322_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[322][1]=0; L[322][0]=1;}
			satisfiable[322][0]=satisfiable[322][0] & ((x[322] ^ 0) | (x[ unit322_0[i][0] ] ^ unit322_0[i][1]) |(x[ unit322_0[i][2] ] ^ unit322_0[i][3]));
			}
		if(X_contra>0) L[322][0]=2;
		}
	//Check all rules of unit[322][1]
	L[322][1] = LargeX[322][0]>0 ? 1 : 0;
	satisfiable[322][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit322_1[i][0] ][ unit322_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit322_1[i][2] ][ unit322_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit322_1[i][4] ][ unit322_1[i][5] ] >0);
		X_contra = ( LargeX[322][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit322_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[322][0]=0; L[322][1]=1;}
			satisfiable[322][1]=satisfiable[322][1] & ((x[322] ^ 1) | (x[ unit322_1[i][0] ] ^ unit322_1[i][1]) |(x[ unit322_1[i][2] ] ^ unit322_1[i][3]));
			}
		if(X_contra>0) L[322][1]=2;
		}
	//Check all rules of unit[323][0]
	L[323][0] = LargeX[323][1]>0 ? 1 : 0;
	satisfiable[323][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit323_0[i][0] ][ unit323_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit323_0[i][2] ][ unit323_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit323_0[i][4] ][ unit323_0[i][5] ] >0);
		X_contra = ( LargeX[323][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit323_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[323][1]=0; L[323][0]=1;}
			satisfiable[323][0]=satisfiable[323][0] & ((x[323] ^ 0) | (x[ unit323_0[i][0] ] ^ unit323_0[i][1]) |(x[ unit323_0[i][2] ] ^ unit323_0[i][3]));
			}
		if(X_contra>0) L[323][0]=2;
		}
	//Check all rules of unit[323][1]
	L[323][1] = LargeX[323][0]>0 ? 1 : 0;
	satisfiable[323][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit323_1[i][0] ][ unit323_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit323_1[i][2] ][ unit323_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit323_1[i][4] ][ unit323_1[i][5] ] >0);
		X_contra = ( LargeX[323][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit323_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[323][0]=0; L[323][1]=1;}
			satisfiable[323][1]=satisfiable[323][1] & ((x[323] ^ 1) | (x[ unit323_1[i][0] ] ^ unit323_1[i][1]) |(x[ unit323_1[i][2] ] ^ unit323_1[i][3]));
			}
		if(X_contra>0) L[323][1]=2;
		}
	//Check all rules of unit[324][0]
	L[324][0] = LargeX[324][1]>0 ? 1 : 0;
	satisfiable[324][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit324_0[i][0] ][ unit324_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit324_0[i][2] ][ unit324_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit324_0[i][4] ][ unit324_0[i][5] ] >0);
		X_contra = ( LargeX[324][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit324_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[324][1]=0; L[324][0]=1;}
			satisfiable[324][0]=satisfiable[324][0] & ((x[324] ^ 0) | (x[ unit324_0[i][0] ] ^ unit324_0[i][1]) |(x[ unit324_0[i][2] ] ^ unit324_0[i][3]));
			}
		if(X_contra>0) L[324][0]=2;
		}
	//Check all rules of unit[324][1]
	L[324][1] = LargeX[324][0]>0 ? 1 : 0;
	satisfiable[324][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit324_1[i][0] ][ unit324_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit324_1[i][2] ][ unit324_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit324_1[i][4] ][ unit324_1[i][5] ] >0);
		X_contra = ( LargeX[324][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit324_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[324][0]=0; L[324][1]=1;}
			satisfiable[324][1]=satisfiable[324][1] & ((x[324] ^ 1) | (x[ unit324_1[i][0] ] ^ unit324_1[i][1]) |(x[ unit324_1[i][2] ] ^ unit324_1[i][3]));
			}
		if(X_contra>0) L[324][1]=2;
		}
	//Check all rules of unit[325][0]
	L[325][0] = LargeX[325][1]>0 ? 1 : 0;
	satisfiable[325][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit325_0[i][0] ][ unit325_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit325_0[i][2] ][ unit325_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit325_0[i][4] ][ unit325_0[i][5] ] >0);
		X_contra = ( LargeX[325][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit325_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[325][1]=0; L[325][0]=1;}
			satisfiable[325][0]=satisfiable[325][0] & ((x[325] ^ 0) | (x[ unit325_0[i][0] ] ^ unit325_0[i][1]) |(x[ unit325_0[i][2] ] ^ unit325_0[i][3]));
			}
		if(X_contra>0) L[325][0]=2;
		}
	//Check all rules of unit[325][1]
	L[325][1] = LargeX[325][0]>0 ? 1 : 0;
	satisfiable[325][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit325_1[i][0] ][ unit325_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit325_1[i][2] ][ unit325_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit325_1[i][4] ][ unit325_1[i][5] ] >0);
		X_contra = ( LargeX[325][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit325_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[325][0]=0; L[325][1]=1;}
			satisfiable[325][1]=satisfiable[325][1] & ((x[325] ^ 1) | (x[ unit325_1[i][0] ] ^ unit325_1[i][1]) |(x[ unit325_1[i][2] ] ^ unit325_1[i][3]));
			}
		if(X_contra>0) L[325][1]=2;
		}
	//Check all rules of unit[326][0]
	L[326][0] = LargeX[326][1]>0 ? 1 : 0;
	satisfiable[326][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit326_0[i][0] ][ unit326_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit326_0[i][2] ][ unit326_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit326_0[i][4] ][ unit326_0[i][5] ] >0);
		X_contra = ( LargeX[326][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit326_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[326][1]=0; L[326][0]=1;}
			satisfiable[326][0]=satisfiable[326][0] & ((x[326] ^ 0) | (x[ unit326_0[i][0] ] ^ unit326_0[i][1]) |(x[ unit326_0[i][2] ] ^ unit326_0[i][3]));
			}
		if(X_contra>0) L[326][0]=2;
		}
	//Check all rules of unit[326][1]
	L[326][1] = LargeX[326][0]>0 ? 1 : 0;
	satisfiable[326][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit326_1[i][0] ][ unit326_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit326_1[i][2] ][ unit326_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit326_1[i][4] ][ unit326_1[i][5] ] >0);
		X_contra = ( LargeX[326][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit326_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[326][0]=0; L[326][1]=1;}
			satisfiable[326][1]=satisfiable[326][1] & ((x[326] ^ 1) | (x[ unit326_1[i][0] ] ^ unit326_1[i][1]) |(x[ unit326_1[i][2] ] ^ unit326_1[i][3]));
			}
		if(X_contra>0) L[326][1]=2;
		}
	//Check all rules of unit[327][0]
	L[327][0] = LargeX[327][1]>0 ? 1 : 0;
	satisfiable[327][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit327_0[i][0] ][ unit327_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit327_0[i][2] ][ unit327_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit327_0[i][4] ][ unit327_0[i][5] ] >0);
		X_contra = ( LargeX[327][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit327_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[327][1]=0; L[327][0]=1;}
			satisfiable[327][0]=satisfiable[327][0] & ((x[327] ^ 0) | (x[ unit327_0[i][0] ] ^ unit327_0[i][1]) |(x[ unit327_0[i][2] ] ^ unit327_0[i][3]));
			}
		if(X_contra>0) L[327][0]=2;
		}
	//Check all rules of unit[327][1]
	L[327][1] = LargeX[327][0]>0 ? 1 : 0;
	satisfiable[327][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit327_1[i][0] ][ unit327_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit327_1[i][2] ][ unit327_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit327_1[i][4] ][ unit327_1[i][5] ] >0);
		X_contra = ( LargeX[327][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit327_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[327][0]=0; L[327][1]=1;}
			satisfiable[327][1]=satisfiable[327][1] & ((x[327] ^ 1) | (x[ unit327_1[i][0] ] ^ unit327_1[i][1]) |(x[ unit327_1[i][2] ] ^ unit327_1[i][3]));
			}
		if(X_contra>0) L[327][1]=2;
		}
	//Check all rules of unit[328][0]
	L[328][0] = LargeX[328][1]>0 ? 1 : 0;
	satisfiable[328][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit328_0[i][0] ][ unit328_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit328_0[i][2] ][ unit328_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit328_0[i][4] ][ unit328_0[i][5] ] >0);
		X_contra = ( LargeX[328][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit328_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[328][1]=0; L[328][0]=1;}
			satisfiable[328][0]=satisfiable[328][0] & ((x[328] ^ 0) | (x[ unit328_0[i][0] ] ^ unit328_0[i][1]) |(x[ unit328_0[i][2] ] ^ unit328_0[i][3]));
			}
		if(X_contra>0) L[328][0]=2;
		}
	//Check all rules of unit[328][1]
	L[328][1] = LargeX[328][0]>0 ? 1 : 0;
	satisfiable[328][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit328_1[i][0] ][ unit328_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit328_1[i][2] ][ unit328_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit328_1[i][4] ][ unit328_1[i][5] ] >0);
		X_contra = ( LargeX[328][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit328_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[328][0]=0; L[328][1]=1;}
			satisfiable[328][1]=satisfiable[328][1] & ((x[328] ^ 1) | (x[ unit328_1[i][0] ] ^ unit328_1[i][1]) |(x[ unit328_1[i][2] ] ^ unit328_1[i][3]));
			}
		if(X_contra>0) L[328][1]=2;
		}
	//Check all rules of unit[329][0]
	L[329][0] = LargeX[329][1]>0 ? 1 : 0;
	satisfiable[329][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit329_0[i][0] ][ unit329_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit329_0[i][2] ][ unit329_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit329_0[i][4] ][ unit329_0[i][5] ] >0);
		X_contra = ( LargeX[329][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit329_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[329][1]=0; L[329][0]=1;}
			satisfiable[329][0]=satisfiable[329][0] & ((x[329] ^ 0) | (x[ unit329_0[i][0] ] ^ unit329_0[i][1]) |(x[ unit329_0[i][2] ] ^ unit329_0[i][3]));
			}
		if(X_contra>0) L[329][0]=2;
		}
	//Check all rules of unit[329][1]
	L[329][1] = LargeX[329][0]>0 ? 1 : 0;
	satisfiable[329][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit329_1[i][0] ][ unit329_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit329_1[i][2] ][ unit329_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit329_1[i][4] ][ unit329_1[i][5] ] >0);
		X_contra = ( LargeX[329][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit329_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[329][0]=0; L[329][1]=1;}
			satisfiable[329][1]=satisfiable[329][1] & ((x[329] ^ 1) | (x[ unit329_1[i][0] ] ^ unit329_1[i][1]) |(x[ unit329_1[i][2] ] ^ unit329_1[i][3]));
			}
		if(X_contra>0) L[329][1]=2;
		}
	//Check all rules of unit[330][0]
	L[330][0] = LargeX[330][1]>0 ? 1 : 0;
	satisfiable[330][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit330_0[i][0] ][ unit330_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit330_0[i][2] ][ unit330_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit330_0[i][4] ][ unit330_0[i][5] ] >0);
		X_contra = ( LargeX[330][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit330_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[330][1]=0; L[330][0]=1;}
			satisfiable[330][0]=satisfiable[330][0] & ((x[330] ^ 0) | (x[ unit330_0[i][0] ] ^ unit330_0[i][1]) |(x[ unit330_0[i][2] ] ^ unit330_0[i][3]));
			}
		if(X_contra>0) L[330][0]=2;
		}
	//Check all rules of unit[330][1]
	L[330][1] = LargeX[330][0]>0 ? 1 : 0;
	satisfiable[330][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit330_1[i][0] ][ unit330_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit330_1[i][2] ][ unit330_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit330_1[i][4] ][ unit330_1[i][5] ] >0);
		X_contra = ( LargeX[330][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit330_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[330][0]=0; L[330][1]=1;}
			satisfiable[330][1]=satisfiable[330][1] & ((x[330] ^ 1) | (x[ unit330_1[i][0] ] ^ unit330_1[i][1]) |(x[ unit330_1[i][2] ] ^ unit330_1[i][3]));
			}
		if(X_contra>0) L[330][1]=2;
		}
	//Check all rules of unit[331][0]
	L[331][0] = LargeX[331][1]>0 ? 1 : 0;
	satisfiable[331][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit331_0[i][0] ][ unit331_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit331_0[i][2] ][ unit331_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit331_0[i][4] ][ unit331_0[i][5] ] >0);
		X_contra = ( LargeX[331][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit331_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[331][1]=0; L[331][0]=1;}
			satisfiable[331][0]=satisfiable[331][0] & ((x[331] ^ 0) | (x[ unit331_0[i][0] ] ^ unit331_0[i][1]) |(x[ unit331_0[i][2] ] ^ unit331_0[i][3]));
			}
		if(X_contra>0) L[331][0]=2;
		}
	//Check all rules of unit[331][1]
	L[331][1] = LargeX[331][0]>0 ? 1 : 0;
	satisfiable[331][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit331_1[i][0] ][ unit331_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit331_1[i][2] ][ unit331_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit331_1[i][4] ][ unit331_1[i][5] ] >0);
		X_contra = ( LargeX[331][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit331_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[331][0]=0; L[331][1]=1;}
			satisfiable[331][1]=satisfiable[331][1] & ((x[331] ^ 1) | (x[ unit331_1[i][0] ] ^ unit331_1[i][1]) |(x[ unit331_1[i][2] ] ^ unit331_1[i][3]));
			}
		if(X_contra>0) L[331][1]=2;
		}
	//Check all rules of unit[332][0]
	L[332][0] = LargeX[332][1]>0 ? 1 : 0;
	satisfiable[332][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit332_0[i][0] ][ unit332_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit332_0[i][2] ][ unit332_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit332_0[i][4] ][ unit332_0[i][5] ] >0);
		X_contra = ( LargeX[332][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit332_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[332][1]=0; L[332][0]=1;}
			satisfiable[332][0]=satisfiable[332][0] & ((x[332] ^ 0) | (x[ unit332_0[i][0] ] ^ unit332_0[i][1]) |(x[ unit332_0[i][2] ] ^ unit332_0[i][3]));
			}
		if(X_contra>0) L[332][0]=2;
		}
	//Check all rules of unit[332][1]
	L[332][1] = LargeX[332][0]>0 ? 1 : 0;
	satisfiable[332][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit332_1[i][0] ][ unit332_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit332_1[i][2] ][ unit332_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit332_1[i][4] ][ unit332_1[i][5] ] >0);
		X_contra = ( LargeX[332][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit332_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[332][0]=0; L[332][1]=1;}
			satisfiable[332][1]=satisfiable[332][1] & ((x[332] ^ 1) | (x[ unit332_1[i][0] ] ^ unit332_1[i][1]) |(x[ unit332_1[i][2] ] ^ unit332_1[i][3]));
			}
		if(X_contra>0) L[332][1]=2;
		}
	//Check all rules of unit[333][0]
	L[333][0] = LargeX[333][1]>0 ? 1 : 0;
	satisfiable[333][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit333_0[i][0] ][ unit333_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit333_0[i][2] ][ unit333_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit333_0[i][4] ][ unit333_0[i][5] ] >0);
		X_contra = ( LargeX[333][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit333_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[333][1]=0; L[333][0]=1;}
			satisfiable[333][0]=satisfiable[333][0] & ((x[333] ^ 0) | (x[ unit333_0[i][0] ] ^ unit333_0[i][1]) |(x[ unit333_0[i][2] ] ^ unit333_0[i][3]));
			}
		if(X_contra>0) L[333][0]=2;
		}
	//Check all rules of unit[333][1]
	L[333][1] = LargeX[333][0]>0 ? 1 : 0;
	satisfiable[333][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit333_1[i][0] ][ unit333_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit333_1[i][2] ][ unit333_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit333_1[i][4] ][ unit333_1[i][5] ] >0);
		X_contra = ( LargeX[333][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit333_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[333][0]=0; L[333][1]=1;}
			satisfiable[333][1]=satisfiable[333][1] & ((x[333] ^ 1) | (x[ unit333_1[i][0] ] ^ unit333_1[i][1]) |(x[ unit333_1[i][2] ] ^ unit333_1[i][3]));
			}
		if(X_contra>0) L[333][1]=2;
		}
	//Check all rules of unit[334][0]
	L[334][0] = LargeX[334][1]>0 ? 1 : 0;
	satisfiable[334][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit334_0[i][0] ][ unit334_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit334_0[i][2] ][ unit334_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit334_0[i][4] ][ unit334_0[i][5] ] >0);
		X_contra = ( LargeX[334][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit334_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[334][1]=0; L[334][0]=1;}
			satisfiable[334][0]=satisfiable[334][0] & ((x[334] ^ 0) | (x[ unit334_0[i][0] ] ^ unit334_0[i][1]) |(x[ unit334_0[i][2] ] ^ unit334_0[i][3]));
			}
		if(X_contra>0) L[334][0]=2;
		}
	//Check all rules of unit[334][1]
	L[334][1] = LargeX[334][0]>0 ? 1 : 0;
	satisfiable[334][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit334_1[i][0] ][ unit334_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit334_1[i][2] ][ unit334_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit334_1[i][4] ][ unit334_1[i][5] ] >0);
		X_contra = ( LargeX[334][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit334_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[334][0]=0; L[334][1]=1;}
			satisfiable[334][1]=satisfiable[334][1] & ((x[334] ^ 1) | (x[ unit334_1[i][0] ] ^ unit334_1[i][1]) |(x[ unit334_1[i][2] ] ^ unit334_1[i][3]));
			}
		if(X_contra>0) L[334][1]=2;
		}
	//Check all rules of unit[335][0]
	L[335][0] = LargeX[335][1]>0 ? 1 : 0;
	satisfiable[335][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit335_0[i][0] ][ unit335_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit335_0[i][2] ][ unit335_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit335_0[i][4] ][ unit335_0[i][5] ] >0);
		X_contra = ( LargeX[335][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit335_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[335][1]=0; L[335][0]=1;}
			satisfiable[335][0]=satisfiable[335][0] & ((x[335] ^ 0) | (x[ unit335_0[i][0] ] ^ unit335_0[i][1]) |(x[ unit335_0[i][2] ] ^ unit335_0[i][3]));
			}
		if(X_contra>0) L[335][0]=2;
		}
	//Check all rules of unit[335][1]
	L[335][1] = LargeX[335][0]>0 ? 1 : 0;
	satisfiable[335][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit335_1[i][0] ][ unit335_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit335_1[i][2] ][ unit335_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit335_1[i][4] ][ unit335_1[i][5] ] >0);
		X_contra = ( LargeX[335][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit335_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[335][0]=0; L[335][1]=1;}
			satisfiable[335][1]=satisfiable[335][1] & ((x[335] ^ 1) | (x[ unit335_1[i][0] ] ^ unit335_1[i][1]) |(x[ unit335_1[i][2] ] ^ unit335_1[i][3]));
			}
		if(X_contra>0) L[335][1]=2;
		}
	//Check all rules of unit[336][0]
	L[336][0] = LargeX[336][1]>0 ? 1 : 0;
	satisfiable[336][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit336_0[i][0] ][ unit336_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit336_0[i][2] ][ unit336_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit336_0[i][4] ][ unit336_0[i][5] ] >0);
		X_contra = ( LargeX[336][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit336_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[336][1]=0; L[336][0]=1;}
			satisfiable[336][0]=satisfiable[336][0] & ((x[336] ^ 0) | (x[ unit336_0[i][0] ] ^ unit336_0[i][1]) |(x[ unit336_0[i][2] ] ^ unit336_0[i][3]));
			}
		if(X_contra>0) L[336][0]=2;
		}
	//Check all rules of unit[336][1]
	L[336][1] = LargeX[336][0]>0 ? 1 : 0;
	satisfiable[336][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit336_1[i][0] ][ unit336_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit336_1[i][2] ][ unit336_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit336_1[i][4] ][ unit336_1[i][5] ] >0);
		X_contra = ( LargeX[336][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit336_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[336][0]=0; L[336][1]=1;}
			satisfiable[336][1]=satisfiable[336][1] & ((x[336] ^ 1) | (x[ unit336_1[i][0] ] ^ unit336_1[i][1]) |(x[ unit336_1[i][2] ] ^ unit336_1[i][3]));
			}
		if(X_contra>0) L[336][1]=2;
		}
	//Check all rules of unit[337][0]
	L[337][0] = LargeX[337][1]>0 ? 1 : 0;
	satisfiable[337][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit337_0[i][0] ][ unit337_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit337_0[i][2] ][ unit337_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit337_0[i][4] ][ unit337_0[i][5] ] >0);
		X_contra = ( LargeX[337][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit337_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[337][1]=0; L[337][0]=1;}
			satisfiable[337][0]=satisfiable[337][0] & ((x[337] ^ 0) | (x[ unit337_0[i][0] ] ^ unit337_0[i][1]) |(x[ unit337_0[i][2] ] ^ unit337_0[i][3]));
			}
		if(X_contra>0) L[337][0]=2;
		}
	//Check all rules of unit[337][1]
	L[337][1] = LargeX[337][0]>0 ? 1 : 0;
	satisfiable[337][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit337_1[i][0] ][ unit337_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit337_1[i][2] ][ unit337_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit337_1[i][4] ][ unit337_1[i][5] ] >0);
		X_contra = ( LargeX[337][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit337_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[337][0]=0; L[337][1]=1;}
			satisfiable[337][1]=satisfiable[337][1] & ((x[337] ^ 1) | (x[ unit337_1[i][0] ] ^ unit337_1[i][1]) |(x[ unit337_1[i][2] ] ^ unit337_1[i][3]));
			}
		if(X_contra>0) L[337][1]=2;
		}
	//Check all rules of unit[338][0]
	L[338][0] = LargeX[338][1]>0 ? 1 : 0;
	satisfiable[338][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit338_0[i][0] ][ unit338_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit338_0[i][2] ][ unit338_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit338_0[i][4] ][ unit338_0[i][5] ] >0);
		X_contra = ( LargeX[338][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit338_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[338][1]=0; L[338][0]=1;}
			satisfiable[338][0]=satisfiable[338][0] & ((x[338] ^ 0) | (x[ unit338_0[i][0] ] ^ unit338_0[i][1]) |(x[ unit338_0[i][2] ] ^ unit338_0[i][3]));
			}
		if(X_contra>0) L[338][0]=2;
		}
	//Check all rules of unit[338][1]
	L[338][1] = LargeX[338][0]>0 ? 1 : 0;
	satisfiable[338][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit338_1[i][0] ][ unit338_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit338_1[i][2] ][ unit338_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit338_1[i][4] ][ unit338_1[i][5] ] >0);
		X_contra = ( LargeX[338][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit338_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[338][0]=0; L[338][1]=1;}
			satisfiable[338][1]=satisfiable[338][1] & ((x[338] ^ 1) | (x[ unit338_1[i][0] ] ^ unit338_1[i][1]) |(x[ unit338_1[i][2] ] ^ unit338_1[i][3]));
			}
		if(X_contra>0) L[338][1]=2;
		}
	//Check all rules of unit[339][0]
	L[339][0] = LargeX[339][1]>0 ? 1 : 0;
	satisfiable[339][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit339_0[i][0] ][ unit339_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit339_0[i][2] ][ unit339_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit339_0[i][4] ][ unit339_0[i][5] ] >0);
		X_contra = ( LargeX[339][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit339_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[339][1]=0; L[339][0]=1;}
			satisfiable[339][0]=satisfiable[339][0] & ((x[339] ^ 0) | (x[ unit339_0[i][0] ] ^ unit339_0[i][1]) |(x[ unit339_0[i][2] ] ^ unit339_0[i][3]));
			}
		if(X_contra>0) L[339][0]=2;
		}
	//Check all rules of unit[339][1]
	L[339][1] = LargeX[339][0]>0 ? 1 : 0;
	satisfiable[339][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit339_1[i][0] ][ unit339_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit339_1[i][2] ][ unit339_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit339_1[i][4] ][ unit339_1[i][5] ] >0);
		X_contra = ( LargeX[339][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit339_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[339][0]=0; L[339][1]=1;}
			satisfiable[339][1]=satisfiable[339][1] & ((x[339] ^ 1) | (x[ unit339_1[i][0] ] ^ unit339_1[i][1]) |(x[ unit339_1[i][2] ] ^ unit339_1[i][3]));
			}
		if(X_contra>0) L[339][1]=2;
		}
	//Check all rules of unit[340][0]
	L[340][0] = LargeX[340][1]>0 ? 1 : 0;
	satisfiable[340][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit340_0[i][0] ][ unit340_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit340_0[i][2] ][ unit340_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit340_0[i][4] ][ unit340_0[i][5] ] >0);
		X_contra = ( LargeX[340][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit340_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[340][1]=0; L[340][0]=1;}
			satisfiable[340][0]=satisfiable[340][0] & ((x[340] ^ 0) | (x[ unit340_0[i][0] ] ^ unit340_0[i][1]) |(x[ unit340_0[i][2] ] ^ unit340_0[i][3]));
			}
		if(X_contra>0) L[340][0]=2;
		}
	//Check all rules of unit[340][1]
	L[340][1] = LargeX[340][0]>0 ? 1 : 0;
	satisfiable[340][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit340_1[i][0] ][ unit340_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit340_1[i][2] ][ unit340_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit340_1[i][4] ][ unit340_1[i][5] ] >0);
		X_contra = ( LargeX[340][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit340_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[340][0]=0; L[340][1]=1;}
			satisfiable[340][1]=satisfiable[340][1] & ((x[340] ^ 1) | (x[ unit340_1[i][0] ] ^ unit340_1[i][1]) |(x[ unit340_1[i][2] ] ^ unit340_1[i][3]));
			}
		if(X_contra>0) L[340][1]=2;
		}
	//Check all rules of unit[341][0]
	L[341][0] = LargeX[341][1]>0 ? 1 : 0;
	satisfiable[341][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit341_0[i][0] ][ unit341_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit341_0[i][2] ][ unit341_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit341_0[i][4] ][ unit341_0[i][5] ] >0);
		X_contra = ( LargeX[341][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit341_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[341][1]=0; L[341][0]=1;}
			satisfiable[341][0]=satisfiable[341][0] & ((x[341] ^ 0) | (x[ unit341_0[i][0] ] ^ unit341_0[i][1]) |(x[ unit341_0[i][2] ] ^ unit341_0[i][3]));
			}
		if(X_contra>0) L[341][0]=2;
		}
	//Check all rules of unit[341][1]
	L[341][1] = LargeX[341][0]>0 ? 1 : 0;
	satisfiable[341][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit341_1[i][0] ][ unit341_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit341_1[i][2] ][ unit341_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit341_1[i][4] ][ unit341_1[i][5] ] >0);
		X_contra = ( LargeX[341][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit341_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[341][0]=0; L[341][1]=1;}
			satisfiable[341][1]=satisfiable[341][1] & ((x[341] ^ 1) | (x[ unit341_1[i][0] ] ^ unit341_1[i][1]) |(x[ unit341_1[i][2] ] ^ unit341_1[i][3]));
			}
		if(X_contra>0) L[341][1]=2;
		}
	//Check all rules of unit[342][0]
	L[342][0] = LargeX[342][1]>0 ? 1 : 0;
	satisfiable[342][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit342_0[i][0] ][ unit342_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit342_0[i][2] ][ unit342_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit342_0[i][4] ][ unit342_0[i][5] ] >0);
		X_contra = ( LargeX[342][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit342_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[342][1]=0; L[342][0]=1;}
			satisfiable[342][0]=satisfiable[342][0] & ((x[342] ^ 0) | (x[ unit342_0[i][0] ] ^ unit342_0[i][1]) |(x[ unit342_0[i][2] ] ^ unit342_0[i][3]));
			}
		if(X_contra>0) L[342][0]=2;
		}
	//Check all rules of unit[342][1]
	L[342][1] = LargeX[342][0]>0 ? 1 : 0;
	satisfiable[342][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit342_1[i][0] ][ unit342_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit342_1[i][2] ][ unit342_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit342_1[i][4] ][ unit342_1[i][5] ] >0);
		X_contra = ( LargeX[342][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit342_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[342][0]=0; L[342][1]=1;}
			satisfiable[342][1]=satisfiable[342][1] & ((x[342] ^ 1) | (x[ unit342_1[i][0] ] ^ unit342_1[i][1]) |(x[ unit342_1[i][2] ] ^ unit342_1[i][3]));
			}
		if(X_contra>0) L[342][1]=2;
		}
	//Check all rules of unit[343][0]
	L[343][0] = LargeX[343][1]>0 ? 1 : 0;
	satisfiable[343][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit343_0[i][0] ][ unit343_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit343_0[i][2] ][ unit343_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit343_0[i][4] ][ unit343_0[i][5] ] >0);
		X_contra = ( LargeX[343][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit343_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[343][1]=0; L[343][0]=1;}
			satisfiable[343][0]=satisfiable[343][0] & ((x[343] ^ 0) | (x[ unit343_0[i][0] ] ^ unit343_0[i][1]) |(x[ unit343_0[i][2] ] ^ unit343_0[i][3]));
			}
		if(X_contra>0) L[343][0]=2;
		}
	//Check all rules of unit[343][1]
	L[343][1] = LargeX[343][0]>0 ? 1 : 0;
	satisfiable[343][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit343_1[i][0] ][ unit343_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit343_1[i][2] ][ unit343_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit343_1[i][4] ][ unit343_1[i][5] ] >0);
		X_contra = ( LargeX[343][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit343_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[343][0]=0; L[343][1]=1;}
			satisfiable[343][1]=satisfiable[343][1] & ((x[343] ^ 1) | (x[ unit343_1[i][0] ] ^ unit343_1[i][1]) |(x[ unit343_1[i][2] ] ^ unit343_1[i][3]));
			}
		if(X_contra>0) L[343][1]=2;
		}
	//Check all rules of unit[344][0]
	L[344][0] = LargeX[344][1]>0 ? 1 : 0;
	satisfiable[344][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit344_0[i][0] ][ unit344_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit344_0[i][2] ][ unit344_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit344_0[i][4] ][ unit344_0[i][5] ] >0);
		X_contra = ( LargeX[344][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit344_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[344][1]=0; L[344][0]=1;}
			satisfiable[344][0]=satisfiable[344][0] & ((x[344] ^ 0) | (x[ unit344_0[i][0] ] ^ unit344_0[i][1]) |(x[ unit344_0[i][2] ] ^ unit344_0[i][3]));
			}
		if(X_contra>0) L[344][0]=2;
		}
	//Check all rules of unit[344][1]
	L[344][1] = LargeX[344][0]>0 ? 1 : 0;
	satisfiable[344][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit344_1[i][0] ][ unit344_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit344_1[i][2] ][ unit344_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit344_1[i][4] ][ unit344_1[i][5] ] >0);
		X_contra = ( LargeX[344][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit344_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[344][0]=0; L[344][1]=1;}
			satisfiable[344][1]=satisfiable[344][1] & ((x[344] ^ 1) | (x[ unit344_1[i][0] ] ^ unit344_1[i][1]) |(x[ unit344_1[i][2] ] ^ unit344_1[i][3]));
			}
		if(X_contra>0) L[344][1]=2;
		}
	//Check all rules of unit[345][0]
	L[345][0] = LargeX[345][1]>0 ? 1 : 0;
	satisfiable[345][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit345_0[i][0] ][ unit345_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit345_0[i][2] ][ unit345_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit345_0[i][4] ][ unit345_0[i][5] ] >0);
		X_contra = ( LargeX[345][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit345_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[345][1]=0; L[345][0]=1;}
			satisfiable[345][0]=satisfiable[345][0] & ((x[345] ^ 0) | (x[ unit345_0[i][0] ] ^ unit345_0[i][1]) |(x[ unit345_0[i][2] ] ^ unit345_0[i][3]));
			}
		if(X_contra>0) L[345][0]=2;
		}
	//Check all rules of unit[345][1]
	L[345][1] = LargeX[345][0]>0 ? 1 : 0;
	satisfiable[345][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit345_1[i][0] ][ unit345_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit345_1[i][2] ][ unit345_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit345_1[i][4] ][ unit345_1[i][5] ] >0);
		X_contra = ( LargeX[345][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit345_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[345][0]=0; L[345][1]=1;}
			satisfiable[345][1]=satisfiable[345][1] & ((x[345] ^ 1) | (x[ unit345_1[i][0] ] ^ unit345_1[i][1]) |(x[ unit345_1[i][2] ] ^ unit345_1[i][3]));
			}
		if(X_contra>0) L[345][1]=2;
		}
	//Check all rules of unit[346][0]
	L[346][0] = LargeX[346][1]>0 ? 1 : 0;
	satisfiable[346][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit346_0[i][0] ][ unit346_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit346_0[i][2] ][ unit346_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit346_0[i][4] ][ unit346_0[i][5] ] >0);
		X_contra = ( LargeX[346][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit346_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[346][1]=0; L[346][0]=1;}
			satisfiable[346][0]=satisfiable[346][0] & ((x[346] ^ 0) | (x[ unit346_0[i][0] ] ^ unit346_0[i][1]) |(x[ unit346_0[i][2] ] ^ unit346_0[i][3]));
			}
		if(X_contra>0) L[346][0]=2;
		}
	//Check all rules of unit[346][1]
	L[346][1] = LargeX[346][0]>0 ? 1 : 0;
	satisfiable[346][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit346_1[i][0] ][ unit346_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit346_1[i][2] ][ unit346_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit346_1[i][4] ][ unit346_1[i][5] ] >0);
		X_contra = ( LargeX[346][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit346_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[346][0]=0; L[346][1]=1;}
			satisfiable[346][1]=satisfiable[346][1] & ((x[346] ^ 1) | (x[ unit346_1[i][0] ] ^ unit346_1[i][1]) |(x[ unit346_1[i][2] ] ^ unit346_1[i][3]));
			}
		if(X_contra>0) L[346][1]=2;
		}
	//Check all rules of unit[347][0]
	L[347][0] = LargeX[347][1]>0 ? 1 : 0;
	satisfiable[347][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit347_0[i][0] ][ unit347_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit347_0[i][2] ][ unit347_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit347_0[i][4] ][ unit347_0[i][5] ] >0);
		X_contra = ( LargeX[347][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit347_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[347][1]=0; L[347][0]=1;}
			satisfiable[347][0]=satisfiable[347][0] & ((x[347] ^ 0) | (x[ unit347_0[i][0] ] ^ unit347_0[i][1]) |(x[ unit347_0[i][2] ] ^ unit347_0[i][3]));
			}
		if(X_contra>0) L[347][0]=2;
		}
	//Check all rules of unit[347][1]
	L[347][1] = LargeX[347][0]>0 ? 1 : 0;
	satisfiable[347][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit347_1[i][0] ][ unit347_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit347_1[i][2] ][ unit347_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit347_1[i][4] ][ unit347_1[i][5] ] >0);
		X_contra = ( LargeX[347][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit347_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[347][0]=0; L[347][1]=1;}
			satisfiable[347][1]=satisfiable[347][1] & ((x[347] ^ 1) | (x[ unit347_1[i][0] ] ^ unit347_1[i][1]) |(x[ unit347_1[i][2] ] ^ unit347_1[i][3]));
			}
		if(X_contra>0) L[347][1]=2;
		}
	//Check all rules of unit[348][0]
	L[348][0] = LargeX[348][1]>0 ? 1 : 0;
	satisfiable[348][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit348_0[i][0] ][ unit348_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit348_0[i][2] ][ unit348_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit348_0[i][4] ][ unit348_0[i][5] ] >0);
		X_contra = ( LargeX[348][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit348_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[348][1]=0; L[348][0]=1;}
			satisfiable[348][0]=satisfiable[348][0] & ((x[348] ^ 0) | (x[ unit348_0[i][0] ] ^ unit348_0[i][1]) |(x[ unit348_0[i][2] ] ^ unit348_0[i][3]));
			}
		if(X_contra>0) L[348][0]=2;
		}
	//Check all rules of unit[348][1]
	L[348][1] = LargeX[348][0]>0 ? 1 : 0;
	satisfiable[348][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit348_1[i][0] ][ unit348_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit348_1[i][2] ][ unit348_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit348_1[i][4] ][ unit348_1[i][5] ] >0);
		X_contra = ( LargeX[348][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit348_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[348][0]=0; L[348][1]=1;}
			satisfiable[348][1]=satisfiable[348][1] & ((x[348] ^ 1) | (x[ unit348_1[i][0] ] ^ unit348_1[i][1]) |(x[ unit348_1[i][2] ] ^ unit348_1[i][3]));
			}
		if(X_contra>0) L[348][1]=2;
		}
	//Check all rules of unit[349][0]
	L[349][0] = LargeX[349][1]>0 ? 1 : 0;
	satisfiable[349][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit349_0[i][0] ][ unit349_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit349_0[i][2] ][ unit349_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit349_0[i][4] ][ unit349_0[i][5] ] >0);
		X_contra = ( LargeX[349][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit349_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[349][1]=0; L[349][0]=1;}
			satisfiable[349][0]=satisfiable[349][0] & ((x[349] ^ 0) | (x[ unit349_0[i][0] ] ^ unit349_0[i][1]) |(x[ unit349_0[i][2] ] ^ unit349_0[i][3]));
			}
		if(X_contra>0) L[349][0]=2;
		}
	//Check all rules of unit[349][1]
	L[349][1] = LargeX[349][0]>0 ? 1 : 0;
	satisfiable[349][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit349_1[i][0] ][ unit349_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit349_1[i][2] ][ unit349_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit349_1[i][4] ][ unit349_1[i][5] ] >0);
		X_contra = ( LargeX[349][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit349_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[349][0]=0; L[349][1]=1;}
			satisfiable[349][1]=satisfiable[349][1] & ((x[349] ^ 1) | (x[ unit349_1[i][0] ] ^ unit349_1[i][1]) |(x[ unit349_1[i][2] ] ^ unit349_1[i][3]));
			}
		if(X_contra>0) L[349][1]=2;
		}
	//Check all rules of unit[350][0]
	L[350][0] = LargeX[350][1]>0 ? 1 : 0;
	satisfiable[350][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit350_0[i][0] ][ unit350_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit350_0[i][2] ][ unit350_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit350_0[i][4] ][ unit350_0[i][5] ] >0);
		X_contra = ( LargeX[350][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit350_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[350][1]=0; L[350][0]=1;}
			satisfiable[350][0]=satisfiable[350][0] & ((x[350] ^ 0) | (x[ unit350_0[i][0] ] ^ unit350_0[i][1]) |(x[ unit350_0[i][2] ] ^ unit350_0[i][3]));
			}
		if(X_contra>0) L[350][0]=2;
		}
	//Check all rules of unit[350][1]
	L[350][1] = LargeX[350][0]>0 ? 1 : 0;
	satisfiable[350][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit350_1[i][0] ][ unit350_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit350_1[i][2] ][ unit350_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit350_1[i][4] ][ unit350_1[i][5] ] >0);
		X_contra = ( LargeX[350][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit350_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[350][0]=0; L[350][1]=1;}
			satisfiable[350][1]=satisfiable[350][1] & ((x[350] ^ 1) | (x[ unit350_1[i][0] ] ^ unit350_1[i][1]) |(x[ unit350_1[i][2] ] ^ unit350_1[i][3]));
			}
		if(X_contra>0) L[350][1]=2;
		}
	//Check all rules of unit[351][0]
	L[351][0] = LargeX[351][1]>0 ? 1 : 0;
	satisfiable[351][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit351_0[i][0] ][ unit351_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit351_0[i][2] ][ unit351_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit351_0[i][4] ][ unit351_0[i][5] ] >0);
		X_contra = ( LargeX[351][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit351_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[351][1]=0; L[351][0]=1;}
			satisfiable[351][0]=satisfiable[351][0] & ((x[351] ^ 0) | (x[ unit351_0[i][0] ] ^ unit351_0[i][1]) |(x[ unit351_0[i][2] ] ^ unit351_0[i][3]));
			}
		if(X_contra>0) L[351][0]=2;
		}
	//Check all rules of unit[351][1]
	L[351][1] = LargeX[351][0]>0 ? 1 : 0;
	satisfiable[351][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit351_1[i][0] ][ unit351_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit351_1[i][2] ][ unit351_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit351_1[i][4] ][ unit351_1[i][5] ] >0);
		X_contra = ( LargeX[351][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit351_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[351][0]=0; L[351][1]=1;}
			satisfiable[351][1]=satisfiable[351][1] & ((x[351] ^ 1) | (x[ unit351_1[i][0] ] ^ unit351_1[i][1]) |(x[ unit351_1[i][2] ] ^ unit351_1[i][3]));
			}
		if(X_contra>0) L[351][1]=2;
		}
	//Check all rules of unit[352][0]
	L[352][0] = LargeX[352][1]>0 ? 1 : 0;
	satisfiable[352][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit352_0[i][0] ][ unit352_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit352_0[i][2] ][ unit352_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit352_0[i][4] ][ unit352_0[i][5] ] >0);
		X_contra = ( LargeX[352][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit352_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[352][1]=0; L[352][0]=1;}
			satisfiable[352][0]=satisfiable[352][0] & ((x[352] ^ 0) | (x[ unit352_0[i][0] ] ^ unit352_0[i][1]) |(x[ unit352_0[i][2] ] ^ unit352_0[i][3]));
			}
		if(X_contra>0) L[352][0]=2;
		}
	//Check all rules of unit[352][1]
	L[352][1] = LargeX[352][0]>0 ? 1 : 0;
	satisfiable[352][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit352_1[i][0] ][ unit352_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit352_1[i][2] ][ unit352_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit352_1[i][4] ][ unit352_1[i][5] ] >0);
		X_contra = ( LargeX[352][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit352_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[352][0]=0; L[352][1]=1;}
			satisfiable[352][1]=satisfiable[352][1] & ((x[352] ^ 1) | (x[ unit352_1[i][0] ] ^ unit352_1[i][1]) |(x[ unit352_1[i][2] ] ^ unit352_1[i][3]));
			}
		if(X_contra>0) L[352][1]=2;
		}
	//Check all rules of unit[353][0]
	L[353][0] = LargeX[353][1]>0 ? 1 : 0;
	satisfiable[353][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit353_0[i][0] ][ unit353_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit353_0[i][2] ][ unit353_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit353_0[i][4] ][ unit353_0[i][5] ] >0);
		X_contra = ( LargeX[353][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit353_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[353][1]=0; L[353][0]=1;}
			satisfiable[353][0]=satisfiable[353][0] & ((x[353] ^ 0) | (x[ unit353_0[i][0] ] ^ unit353_0[i][1]) |(x[ unit353_0[i][2] ] ^ unit353_0[i][3]));
			}
		if(X_contra>0) L[353][0]=2;
		}
	//Check all rules of unit[353][1]
	L[353][1] = LargeX[353][0]>0 ? 1 : 0;
	satisfiable[353][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit353_1[i][0] ][ unit353_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit353_1[i][2] ][ unit353_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit353_1[i][4] ][ unit353_1[i][5] ] >0);
		X_contra = ( LargeX[353][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit353_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[353][0]=0; L[353][1]=1;}
			satisfiable[353][1]=satisfiable[353][1] & ((x[353] ^ 1) | (x[ unit353_1[i][0] ] ^ unit353_1[i][1]) |(x[ unit353_1[i][2] ] ^ unit353_1[i][3]));
			}
		if(X_contra>0) L[353][1]=2;
		}
	//Check all rules of unit[354][0]
	L[354][0] = LargeX[354][1]>0 ? 1 : 0;
	satisfiable[354][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit354_0[i][0] ][ unit354_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit354_0[i][2] ][ unit354_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit354_0[i][4] ][ unit354_0[i][5] ] >0);
		X_contra = ( LargeX[354][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit354_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[354][1]=0; L[354][0]=1;}
			satisfiable[354][0]=satisfiable[354][0] & ((x[354] ^ 0) | (x[ unit354_0[i][0] ] ^ unit354_0[i][1]) |(x[ unit354_0[i][2] ] ^ unit354_0[i][3]));
			}
		if(X_contra>0) L[354][0]=2;
		}
	//Check all rules of unit[354][1]
	L[354][1] = LargeX[354][0]>0 ? 1 : 0;
	satisfiable[354][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit354_1[i][0] ][ unit354_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit354_1[i][2] ][ unit354_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit354_1[i][4] ][ unit354_1[i][5] ] >0);
		X_contra = ( LargeX[354][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit354_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[354][0]=0; L[354][1]=1;}
			satisfiable[354][1]=satisfiable[354][1] & ((x[354] ^ 1) | (x[ unit354_1[i][0] ] ^ unit354_1[i][1]) |(x[ unit354_1[i][2] ] ^ unit354_1[i][3]));
			}
		if(X_contra>0) L[354][1]=2;
		}
	//Check all rules of unit[355][0]
	L[355][0] = LargeX[355][1]>0 ? 1 : 0;
	satisfiable[355][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit355_0[i][0] ][ unit355_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit355_0[i][2] ][ unit355_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit355_0[i][4] ][ unit355_0[i][5] ] >0);
		X_contra = ( LargeX[355][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit355_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[355][1]=0; L[355][0]=1;}
			satisfiable[355][0]=satisfiable[355][0] & ((x[355] ^ 0) | (x[ unit355_0[i][0] ] ^ unit355_0[i][1]) |(x[ unit355_0[i][2] ] ^ unit355_0[i][3]));
			}
		if(X_contra>0) L[355][0]=2;
		}
	//Check all rules of unit[355][1]
	L[355][1] = LargeX[355][0]>0 ? 1 : 0;
	satisfiable[355][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit355_1[i][0] ][ unit355_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit355_1[i][2] ][ unit355_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit355_1[i][4] ][ unit355_1[i][5] ] >0);
		X_contra = ( LargeX[355][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit355_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[355][0]=0; L[355][1]=1;}
			satisfiable[355][1]=satisfiable[355][1] & ((x[355] ^ 1) | (x[ unit355_1[i][0] ] ^ unit355_1[i][1]) |(x[ unit355_1[i][2] ] ^ unit355_1[i][3]));
			}
		if(X_contra>0) L[355][1]=2;
		}
	//Check all rules of unit[356][0]
	L[356][0] = LargeX[356][1]>0 ? 1 : 0;
	satisfiable[356][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit356_0[i][0] ][ unit356_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit356_0[i][2] ][ unit356_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit356_0[i][4] ][ unit356_0[i][5] ] >0);
		X_contra = ( LargeX[356][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit356_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[356][1]=0; L[356][0]=1;}
			satisfiable[356][0]=satisfiable[356][0] & ((x[356] ^ 0) | (x[ unit356_0[i][0] ] ^ unit356_0[i][1]) |(x[ unit356_0[i][2] ] ^ unit356_0[i][3]));
			}
		if(X_contra>0) L[356][0]=2;
		}
	//Check all rules of unit[356][1]
	L[356][1] = LargeX[356][0]>0 ? 1 : 0;
	satisfiable[356][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit356_1[i][0] ][ unit356_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit356_1[i][2] ][ unit356_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit356_1[i][4] ][ unit356_1[i][5] ] >0);
		X_contra = ( LargeX[356][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit356_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[356][0]=0; L[356][1]=1;}
			satisfiable[356][1]=satisfiable[356][1] & ((x[356] ^ 1) | (x[ unit356_1[i][0] ] ^ unit356_1[i][1]) |(x[ unit356_1[i][2] ] ^ unit356_1[i][3]));
			}
		if(X_contra>0) L[356][1]=2;
		}
	//Check all rules of unit[357][0]
	L[357][0] = LargeX[357][1]>0 ? 1 : 0;
	satisfiable[357][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit357_0[i][0] ][ unit357_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit357_0[i][2] ][ unit357_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit357_0[i][4] ][ unit357_0[i][5] ] >0);
		X_contra = ( LargeX[357][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit357_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[357][1]=0; L[357][0]=1;}
			satisfiable[357][0]=satisfiable[357][0] & ((x[357] ^ 0) | (x[ unit357_0[i][0] ] ^ unit357_0[i][1]) |(x[ unit357_0[i][2] ] ^ unit357_0[i][3]));
			}
		if(X_contra>0) L[357][0]=2;
		}
	//Check all rules of unit[357][1]
	L[357][1] = LargeX[357][0]>0 ? 1 : 0;
	satisfiable[357][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit357_1[i][0] ][ unit357_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit357_1[i][2] ][ unit357_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit357_1[i][4] ][ unit357_1[i][5] ] >0);
		X_contra = ( LargeX[357][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit357_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[357][0]=0; L[357][1]=1;}
			satisfiable[357][1]=satisfiable[357][1] & ((x[357] ^ 1) | (x[ unit357_1[i][0] ] ^ unit357_1[i][1]) |(x[ unit357_1[i][2] ] ^ unit357_1[i][3]));
			}
		if(X_contra>0) L[357][1]=2;
		}
	//Check all rules of unit[358][0]
	L[358][0] = LargeX[358][1]>0 ? 1 : 0;
	satisfiable[358][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit358_0[i][0] ][ unit358_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit358_0[i][2] ][ unit358_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit358_0[i][4] ][ unit358_0[i][5] ] >0);
		X_contra = ( LargeX[358][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit358_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[358][1]=0; L[358][0]=1;}
			satisfiable[358][0]=satisfiable[358][0] & ((x[358] ^ 0) | (x[ unit358_0[i][0] ] ^ unit358_0[i][1]) |(x[ unit358_0[i][2] ] ^ unit358_0[i][3]));
			}
		if(X_contra>0) L[358][0]=2;
		}
	//Check all rules of unit[358][1]
	L[358][1] = LargeX[358][0]>0 ? 1 : 0;
	satisfiable[358][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit358_1[i][0] ][ unit358_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit358_1[i][2] ][ unit358_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit358_1[i][4] ][ unit358_1[i][5] ] >0);
		X_contra = ( LargeX[358][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit358_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[358][0]=0; L[358][1]=1;}
			satisfiable[358][1]=satisfiable[358][1] & ((x[358] ^ 1) | (x[ unit358_1[i][0] ] ^ unit358_1[i][1]) |(x[ unit358_1[i][2] ] ^ unit358_1[i][3]));
			}
		if(X_contra>0) L[358][1]=2;
		}
	//Check all rules of unit[359][0]
	L[359][0] = LargeX[359][1]>0 ? 1 : 0;
	satisfiable[359][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit359_0[i][0] ][ unit359_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit359_0[i][2] ][ unit359_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit359_0[i][4] ][ unit359_0[i][5] ] >0);
		X_contra = ( LargeX[359][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit359_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[359][1]=0; L[359][0]=1;}
			satisfiable[359][0]=satisfiable[359][0] & ((x[359] ^ 0) | (x[ unit359_0[i][0] ] ^ unit359_0[i][1]) |(x[ unit359_0[i][2] ] ^ unit359_0[i][3]));
			}
		if(X_contra>0) L[359][0]=2;
		}
	//Check all rules of unit[359][1]
	L[359][1] = LargeX[359][0]>0 ? 1 : 0;
	satisfiable[359][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit359_1[i][0] ][ unit359_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit359_1[i][2] ][ unit359_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit359_1[i][4] ][ unit359_1[i][5] ] >0);
		X_contra = ( LargeX[359][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit359_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[359][0]=0; L[359][1]=1;}
			satisfiable[359][1]=satisfiable[359][1] & ((x[359] ^ 1) | (x[ unit359_1[i][0] ] ^ unit359_1[i][1]) |(x[ unit359_1[i][2] ] ^ unit359_1[i][3]));
			}
		if(X_contra>0) L[359][1]=2;
		}
	//Check all rules of unit[360][0]
	L[360][0] = LargeX[360][1]>0 ? 1 : 0;
	satisfiable[360][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit360_0[i][0] ][ unit360_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit360_0[i][2] ][ unit360_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit360_0[i][4] ][ unit360_0[i][5] ] >0);
		X_contra = ( LargeX[360][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit360_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[360][1]=0; L[360][0]=1;}
			satisfiable[360][0]=satisfiable[360][0] & ((x[360] ^ 0) | (x[ unit360_0[i][0] ] ^ unit360_0[i][1]) |(x[ unit360_0[i][2] ] ^ unit360_0[i][3]));
			}
		if(X_contra>0) L[360][0]=2;
		}
	//Check all rules of unit[360][1]
	L[360][1] = LargeX[360][0]>0 ? 1 : 0;
	satisfiable[360][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit360_1[i][0] ][ unit360_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit360_1[i][2] ][ unit360_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit360_1[i][4] ][ unit360_1[i][5] ] >0);
		X_contra = ( LargeX[360][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit360_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[360][0]=0; L[360][1]=1;}
			satisfiable[360][1]=satisfiable[360][1] & ((x[360] ^ 1) | (x[ unit360_1[i][0] ] ^ unit360_1[i][1]) |(x[ unit360_1[i][2] ] ^ unit360_1[i][3]));
			}
		if(X_contra>0) L[360][1]=2;
		}
	//Check all rules of unit[361][0]
	L[361][0] = LargeX[361][1]>0 ? 1 : 0;
	satisfiable[361][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit361_0[i][0] ][ unit361_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit361_0[i][2] ][ unit361_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit361_0[i][4] ][ unit361_0[i][5] ] >0);
		X_contra = ( LargeX[361][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit361_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[361][1]=0; L[361][0]=1;}
			satisfiable[361][0]=satisfiable[361][0] & ((x[361] ^ 0) | (x[ unit361_0[i][0] ] ^ unit361_0[i][1]) |(x[ unit361_0[i][2] ] ^ unit361_0[i][3]));
			}
		if(X_contra>0) L[361][0]=2;
		}
	//Check all rules of unit[361][1]
	L[361][1] = LargeX[361][0]>0 ? 1 : 0;
	satisfiable[361][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit361_1[i][0] ][ unit361_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit361_1[i][2] ][ unit361_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit361_1[i][4] ][ unit361_1[i][5] ] >0);
		X_contra = ( LargeX[361][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit361_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[361][0]=0; L[361][1]=1;}
			satisfiable[361][1]=satisfiable[361][1] & ((x[361] ^ 1) | (x[ unit361_1[i][0] ] ^ unit361_1[i][1]) |(x[ unit361_1[i][2] ] ^ unit361_1[i][3]));
			}
		if(X_contra>0) L[361][1]=2;
		}
	//Check all rules of unit[362][0]
	L[362][0] = LargeX[362][1]>0 ? 1 : 0;
	satisfiable[362][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit362_0[i][0] ][ unit362_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit362_0[i][2] ][ unit362_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit362_0[i][4] ][ unit362_0[i][5] ] >0);
		X_contra = ( LargeX[362][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit362_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[362][1]=0; L[362][0]=1;}
			satisfiable[362][0]=satisfiable[362][0] & ((x[362] ^ 0) | (x[ unit362_0[i][0] ] ^ unit362_0[i][1]) |(x[ unit362_0[i][2] ] ^ unit362_0[i][3]));
			}
		if(X_contra>0) L[362][0]=2;
		}
	//Check all rules of unit[362][1]
	L[362][1] = LargeX[362][0]>0 ? 1 : 0;
	satisfiable[362][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit362_1[i][0] ][ unit362_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit362_1[i][2] ][ unit362_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit362_1[i][4] ][ unit362_1[i][5] ] >0);
		X_contra = ( LargeX[362][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit362_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[362][0]=0; L[362][1]=1;}
			satisfiable[362][1]=satisfiable[362][1] & ((x[362] ^ 1) | (x[ unit362_1[i][0] ] ^ unit362_1[i][1]) |(x[ unit362_1[i][2] ] ^ unit362_1[i][3]));
			}
		if(X_contra>0) L[362][1]=2;
		}
	//Check all rules of unit[363][0]
	L[363][0] = LargeX[363][1]>0 ? 1 : 0;
	satisfiable[363][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit363_0[i][0] ][ unit363_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit363_0[i][2] ][ unit363_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit363_0[i][4] ][ unit363_0[i][5] ] >0);
		X_contra = ( LargeX[363][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit363_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[363][1]=0; L[363][0]=1;}
			satisfiable[363][0]=satisfiable[363][0] & ((x[363] ^ 0) | (x[ unit363_0[i][0] ] ^ unit363_0[i][1]) |(x[ unit363_0[i][2] ] ^ unit363_0[i][3]));
			}
		if(X_contra>0) L[363][0]=2;
		}
	//Check all rules of unit[363][1]
	L[363][1] = LargeX[363][0]>0 ? 1 : 0;
	satisfiable[363][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit363_1[i][0] ][ unit363_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit363_1[i][2] ][ unit363_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit363_1[i][4] ][ unit363_1[i][5] ] >0);
		X_contra = ( LargeX[363][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit363_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[363][0]=0; L[363][1]=1;}
			satisfiable[363][1]=satisfiable[363][1] & ((x[363] ^ 1) | (x[ unit363_1[i][0] ] ^ unit363_1[i][1]) |(x[ unit363_1[i][2] ] ^ unit363_1[i][3]));
			}
		if(X_contra>0) L[363][1]=2;
		}
	//Check all rules of unit[364][0]
	L[364][0] = LargeX[364][1]>0 ? 1 : 0;
	satisfiable[364][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit364_0[i][0] ][ unit364_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit364_0[i][2] ][ unit364_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit364_0[i][4] ][ unit364_0[i][5] ] >0);
		X_contra = ( LargeX[364][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit364_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[364][1]=0; L[364][0]=1;}
			satisfiable[364][0]=satisfiable[364][0] & ((x[364] ^ 0) | (x[ unit364_0[i][0] ] ^ unit364_0[i][1]) |(x[ unit364_0[i][2] ] ^ unit364_0[i][3]));
			}
		if(X_contra>0) L[364][0]=2;
		}
	//Check all rules of unit[364][1]
	L[364][1] = LargeX[364][0]>0 ? 1 : 0;
	satisfiable[364][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit364_1[i][0] ][ unit364_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit364_1[i][2] ][ unit364_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit364_1[i][4] ][ unit364_1[i][5] ] >0);
		X_contra = ( LargeX[364][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit364_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[364][0]=0; L[364][1]=1;}
			satisfiable[364][1]=satisfiable[364][1] & ((x[364] ^ 1) | (x[ unit364_1[i][0] ] ^ unit364_1[i][1]) |(x[ unit364_1[i][2] ] ^ unit364_1[i][3]));
			}
		if(X_contra>0) L[364][1]=2;
		}
	//Check all rules of unit[365][0]
	L[365][0] = LargeX[365][1]>0 ? 1 : 0;
	satisfiable[365][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit365_0[i][0] ][ unit365_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit365_0[i][2] ][ unit365_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit365_0[i][4] ][ unit365_0[i][5] ] >0);
		X_contra = ( LargeX[365][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit365_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[365][1]=0; L[365][0]=1;}
			satisfiable[365][0]=satisfiable[365][0] & ((x[365] ^ 0) | (x[ unit365_0[i][0] ] ^ unit365_0[i][1]) |(x[ unit365_0[i][2] ] ^ unit365_0[i][3]));
			}
		if(X_contra>0) L[365][0]=2;
		}
	//Check all rules of unit[365][1]
	L[365][1] = LargeX[365][0]>0 ? 1 : 0;
	satisfiable[365][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit365_1[i][0] ][ unit365_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit365_1[i][2] ][ unit365_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit365_1[i][4] ][ unit365_1[i][5] ] >0);
		X_contra = ( LargeX[365][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit365_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[365][0]=0; L[365][1]=1;}
			satisfiable[365][1]=satisfiable[365][1] & ((x[365] ^ 1) | (x[ unit365_1[i][0] ] ^ unit365_1[i][1]) |(x[ unit365_1[i][2] ] ^ unit365_1[i][3]));
			}
		if(X_contra>0) L[365][1]=2;
		}
	//Check all rules of unit[366][0]
	L[366][0] = LargeX[366][1]>0 ? 1 : 0;
	satisfiable[366][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit366_0[i][0] ][ unit366_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit366_0[i][2] ][ unit366_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit366_0[i][4] ][ unit366_0[i][5] ] >0);
		X_contra = ( LargeX[366][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit366_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[366][1]=0; L[366][0]=1;}
			satisfiable[366][0]=satisfiable[366][0] & ((x[366] ^ 0) | (x[ unit366_0[i][0] ] ^ unit366_0[i][1]) |(x[ unit366_0[i][2] ] ^ unit366_0[i][3]));
			}
		if(X_contra>0) L[366][0]=2;
		}
	//Check all rules of unit[366][1]
	L[366][1] = LargeX[366][0]>0 ? 1 : 0;
	satisfiable[366][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit366_1[i][0] ][ unit366_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit366_1[i][2] ][ unit366_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit366_1[i][4] ][ unit366_1[i][5] ] >0);
		X_contra = ( LargeX[366][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit366_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[366][0]=0; L[366][1]=1;}
			satisfiable[366][1]=satisfiable[366][1] & ((x[366] ^ 1) | (x[ unit366_1[i][0] ] ^ unit366_1[i][1]) |(x[ unit366_1[i][2] ] ^ unit366_1[i][3]));
			}
		if(X_contra>0) L[366][1]=2;
		}
	//Check all rules of unit[367][0]
	L[367][0] = LargeX[367][1]>0 ? 1 : 0;
	satisfiable[367][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit367_0[i][0] ][ unit367_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit367_0[i][2] ][ unit367_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit367_0[i][4] ][ unit367_0[i][5] ] >0);
		X_contra = ( LargeX[367][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit367_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[367][1]=0; L[367][0]=1;}
			satisfiable[367][0]=satisfiable[367][0] & ((x[367] ^ 0) | (x[ unit367_0[i][0] ] ^ unit367_0[i][1]) |(x[ unit367_0[i][2] ] ^ unit367_0[i][3]));
			}
		if(X_contra>0) L[367][0]=2;
		}
	//Check all rules of unit[367][1]
	L[367][1] = LargeX[367][0]>0 ? 1 : 0;
	satisfiable[367][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit367_1[i][0] ][ unit367_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit367_1[i][2] ][ unit367_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit367_1[i][4] ][ unit367_1[i][5] ] >0);
		X_contra = ( LargeX[367][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit367_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[367][0]=0; L[367][1]=1;}
			satisfiable[367][1]=satisfiable[367][1] & ((x[367] ^ 1) | (x[ unit367_1[i][0] ] ^ unit367_1[i][1]) |(x[ unit367_1[i][2] ] ^ unit367_1[i][3]));
			}
		if(X_contra>0) L[367][1]=2;
		}
	//Check all rules of unit[368][0]
	L[368][0] = LargeX[368][1]>0 ? 1 : 0;
	satisfiable[368][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit368_0[i][0] ][ unit368_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit368_0[i][2] ][ unit368_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit368_0[i][4] ][ unit368_0[i][5] ] >0);
		X_contra = ( LargeX[368][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit368_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[368][1]=0; L[368][0]=1;}
			satisfiable[368][0]=satisfiable[368][0] & ((x[368] ^ 0) | (x[ unit368_0[i][0] ] ^ unit368_0[i][1]) |(x[ unit368_0[i][2] ] ^ unit368_0[i][3]));
			}
		if(X_contra>0) L[368][0]=2;
		}
	//Check all rules of unit[368][1]
	L[368][1] = LargeX[368][0]>0 ? 1 : 0;
	satisfiable[368][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit368_1[i][0] ][ unit368_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit368_1[i][2] ][ unit368_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit368_1[i][4] ][ unit368_1[i][5] ] >0);
		X_contra = ( LargeX[368][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit368_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[368][0]=0; L[368][1]=1;}
			satisfiable[368][1]=satisfiable[368][1] & ((x[368] ^ 1) | (x[ unit368_1[i][0] ] ^ unit368_1[i][1]) |(x[ unit368_1[i][2] ] ^ unit368_1[i][3]));
			}
		if(X_contra>0) L[368][1]=2;
		}
	//Check all rules of unit[369][0]
	L[369][0] = LargeX[369][1]>0 ? 1 : 0;
	satisfiable[369][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit369_0[i][0] ][ unit369_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit369_0[i][2] ][ unit369_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit369_0[i][4] ][ unit369_0[i][5] ] >0);
		X_contra = ( LargeX[369][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit369_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[369][1]=0; L[369][0]=1;}
			satisfiable[369][0]=satisfiable[369][0] & ((x[369] ^ 0) | (x[ unit369_0[i][0] ] ^ unit369_0[i][1]) |(x[ unit369_0[i][2] ] ^ unit369_0[i][3]));
			}
		if(X_contra>0) L[369][0]=2;
		}
	//Check all rules of unit[369][1]
	L[369][1] = LargeX[369][0]>0 ? 1 : 0;
	satisfiable[369][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit369_1[i][0] ][ unit369_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit369_1[i][2] ][ unit369_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit369_1[i][4] ][ unit369_1[i][5] ] >0);
		X_contra = ( LargeX[369][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit369_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[369][0]=0; L[369][1]=1;}
			satisfiable[369][1]=satisfiable[369][1] & ((x[369] ^ 1) | (x[ unit369_1[i][0] ] ^ unit369_1[i][1]) |(x[ unit369_1[i][2] ] ^ unit369_1[i][3]));
			}
		if(X_contra>0) L[369][1]=2;
		}
	//Check all rules of unit[370][0]
	L[370][0] = LargeX[370][1]>0 ? 1 : 0;
	satisfiable[370][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit370_0[i][0] ][ unit370_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit370_0[i][2] ][ unit370_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit370_0[i][4] ][ unit370_0[i][5] ] >0);
		X_contra = ( LargeX[370][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit370_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[370][1]=0; L[370][0]=1;}
			satisfiable[370][0]=satisfiable[370][0] & ((x[370] ^ 0) | (x[ unit370_0[i][0] ] ^ unit370_0[i][1]) |(x[ unit370_0[i][2] ] ^ unit370_0[i][3]));
			}
		if(X_contra>0) L[370][0]=2;
		}
	//Check all rules of unit[370][1]
	L[370][1] = LargeX[370][0]>0 ? 1 : 0;
	satisfiable[370][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit370_1[i][0] ][ unit370_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit370_1[i][2] ][ unit370_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit370_1[i][4] ][ unit370_1[i][5] ] >0);
		X_contra = ( LargeX[370][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit370_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[370][0]=0; L[370][1]=1;}
			satisfiable[370][1]=satisfiable[370][1] & ((x[370] ^ 1) | (x[ unit370_1[i][0] ] ^ unit370_1[i][1]) |(x[ unit370_1[i][2] ] ^ unit370_1[i][3]));
			}
		if(X_contra>0) L[370][1]=2;
		}
	//Check all rules of unit[371][0]
	L[371][0] = LargeX[371][1]>0 ? 1 : 0;
	satisfiable[371][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit371_0[i][0] ][ unit371_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit371_0[i][2] ][ unit371_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit371_0[i][4] ][ unit371_0[i][5] ] >0);
		X_contra = ( LargeX[371][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit371_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[371][1]=0; L[371][0]=1;}
			satisfiable[371][0]=satisfiable[371][0] & ((x[371] ^ 0) | (x[ unit371_0[i][0] ] ^ unit371_0[i][1]) |(x[ unit371_0[i][2] ] ^ unit371_0[i][3]));
			}
		if(X_contra>0) L[371][0]=2;
		}
	//Check all rules of unit[371][1]
	L[371][1] = LargeX[371][0]>0 ? 1 : 0;
	satisfiable[371][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit371_1[i][0] ][ unit371_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit371_1[i][2] ][ unit371_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit371_1[i][4] ][ unit371_1[i][5] ] >0);
		X_contra = ( LargeX[371][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit371_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[371][0]=0; L[371][1]=1;}
			satisfiable[371][1]=satisfiable[371][1] & ((x[371] ^ 1) | (x[ unit371_1[i][0] ] ^ unit371_1[i][1]) |(x[ unit371_1[i][2] ] ^ unit371_1[i][3]));
			}
		if(X_contra>0) L[371][1]=2;
		}
	//Check all rules of unit[372][0]
	L[372][0] = LargeX[372][1]>0 ? 1 : 0;
	satisfiable[372][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit372_0[i][0] ][ unit372_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit372_0[i][2] ][ unit372_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit372_0[i][4] ][ unit372_0[i][5] ] >0);
		X_contra = ( LargeX[372][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit372_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[372][1]=0; L[372][0]=1;}
			satisfiable[372][0]=satisfiable[372][0] & ((x[372] ^ 0) | (x[ unit372_0[i][0] ] ^ unit372_0[i][1]) |(x[ unit372_0[i][2] ] ^ unit372_0[i][3]));
			}
		if(X_contra>0) L[372][0]=2;
		}
	//Check all rules of unit[372][1]
	L[372][1] = LargeX[372][0]>0 ? 1 : 0;
	satisfiable[372][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit372_1[i][0] ][ unit372_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit372_1[i][2] ][ unit372_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit372_1[i][4] ][ unit372_1[i][5] ] >0);
		X_contra = ( LargeX[372][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit372_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[372][0]=0; L[372][1]=1;}
			satisfiable[372][1]=satisfiable[372][1] & ((x[372] ^ 1) | (x[ unit372_1[i][0] ] ^ unit372_1[i][1]) |(x[ unit372_1[i][2] ] ^ unit372_1[i][3]));
			}
		if(X_contra>0) L[372][1]=2;
		}
	//Check all rules of unit[373][0]
	L[373][0] = LargeX[373][1]>0 ? 1 : 0;
	satisfiable[373][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit373_0[i][0] ][ unit373_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit373_0[i][2] ][ unit373_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit373_0[i][4] ][ unit373_0[i][5] ] >0);
		X_contra = ( LargeX[373][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit373_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[373][1]=0; L[373][0]=1;}
			satisfiable[373][0]=satisfiable[373][0] & ((x[373] ^ 0) | (x[ unit373_0[i][0] ] ^ unit373_0[i][1]) |(x[ unit373_0[i][2] ] ^ unit373_0[i][3]));
			}
		if(X_contra>0) L[373][0]=2;
		}
	//Check all rules of unit[373][1]
	L[373][1] = LargeX[373][0]>0 ? 1 : 0;
	satisfiable[373][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit373_1[i][0] ][ unit373_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit373_1[i][2] ][ unit373_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit373_1[i][4] ][ unit373_1[i][5] ] >0);
		X_contra = ( LargeX[373][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit373_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[373][0]=0; L[373][1]=1;}
			satisfiable[373][1]=satisfiable[373][1] & ((x[373] ^ 1) | (x[ unit373_1[i][0] ] ^ unit373_1[i][1]) |(x[ unit373_1[i][2] ] ^ unit373_1[i][3]));
			}
		if(X_contra>0) L[373][1]=2;
		}
	//Check all rules of unit[374][0]
	L[374][0] = LargeX[374][1]>0 ? 1 : 0;
	satisfiable[374][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit374_0[i][0] ][ unit374_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit374_0[i][2] ][ unit374_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit374_0[i][4] ][ unit374_0[i][5] ] >0);
		X_contra = ( LargeX[374][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit374_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[374][1]=0; L[374][0]=1;}
			satisfiable[374][0]=satisfiable[374][0] & ((x[374] ^ 0) | (x[ unit374_0[i][0] ] ^ unit374_0[i][1]) |(x[ unit374_0[i][2] ] ^ unit374_0[i][3]));
			}
		if(X_contra>0) L[374][0]=2;
		}
	//Check all rules of unit[374][1]
	L[374][1] = LargeX[374][0]>0 ? 1 : 0;
	satisfiable[374][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit374_1[i][0] ][ unit374_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit374_1[i][2] ][ unit374_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit374_1[i][4] ][ unit374_1[i][5] ] >0);
		X_contra = ( LargeX[374][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit374_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[374][0]=0; L[374][1]=1;}
			satisfiable[374][1]=satisfiable[374][1] & ((x[374] ^ 1) | (x[ unit374_1[i][0] ] ^ unit374_1[i][1]) |(x[ unit374_1[i][2] ] ^ unit374_1[i][3]));
			}
		if(X_contra>0) L[374][1]=2;
		}
	//Check all rules of unit[375][0]
	L[375][0] = LargeX[375][1]>0 ? 1 : 0;
	satisfiable[375][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit375_0[i][0] ][ unit375_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit375_0[i][2] ][ unit375_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit375_0[i][4] ][ unit375_0[i][5] ] >0);
		X_contra = ( LargeX[375][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit375_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[375][1]=0; L[375][0]=1;}
			satisfiable[375][0]=satisfiable[375][0] & ((x[375] ^ 0) | (x[ unit375_0[i][0] ] ^ unit375_0[i][1]) |(x[ unit375_0[i][2] ] ^ unit375_0[i][3]));
			}
		if(X_contra>0) L[375][0]=2;
		}
	//Check all rules of unit[375][1]
	L[375][1] = LargeX[375][0]>0 ? 1 : 0;
	satisfiable[375][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit375_1[i][0] ][ unit375_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit375_1[i][2] ][ unit375_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit375_1[i][4] ][ unit375_1[i][5] ] >0);
		X_contra = ( LargeX[375][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit375_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[375][0]=0; L[375][1]=1;}
			satisfiable[375][1]=satisfiable[375][1] & ((x[375] ^ 1) | (x[ unit375_1[i][0] ] ^ unit375_1[i][1]) |(x[ unit375_1[i][2] ] ^ unit375_1[i][3]));
			}
		if(X_contra>0) L[375][1]=2;
		}
	//Check all rules of unit[376][0]
	L[376][0] = LargeX[376][1]>0 ? 1 : 0;
	satisfiable[376][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit376_0[i][0] ][ unit376_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit376_0[i][2] ][ unit376_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit376_0[i][4] ][ unit376_0[i][5] ] >0);
		X_contra = ( LargeX[376][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit376_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[376][1]=0; L[376][0]=1;}
			satisfiable[376][0]=satisfiable[376][0] & ((x[376] ^ 0) | (x[ unit376_0[i][0] ] ^ unit376_0[i][1]) |(x[ unit376_0[i][2] ] ^ unit376_0[i][3]));
			}
		if(X_contra>0) L[376][0]=2;
		}
	//Check all rules of unit[376][1]
	L[376][1] = LargeX[376][0]>0 ? 1 : 0;
	satisfiable[376][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit376_1[i][0] ][ unit376_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit376_1[i][2] ][ unit376_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit376_1[i][4] ][ unit376_1[i][5] ] >0);
		X_contra = ( LargeX[376][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit376_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[376][0]=0; L[376][1]=1;}
			satisfiable[376][1]=satisfiable[376][1] & ((x[376] ^ 1) | (x[ unit376_1[i][0] ] ^ unit376_1[i][1]) |(x[ unit376_1[i][2] ] ^ unit376_1[i][3]));
			}
		if(X_contra>0) L[376][1]=2;
		}
	//Check all rules of unit[377][0]
	L[377][0] = LargeX[377][1]>0 ? 1 : 0;
	satisfiable[377][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit377_0[i][0] ][ unit377_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit377_0[i][2] ][ unit377_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit377_0[i][4] ][ unit377_0[i][5] ] >0);
		X_contra = ( LargeX[377][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit377_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[377][1]=0; L[377][0]=1;}
			satisfiable[377][0]=satisfiable[377][0] & ((x[377] ^ 0) | (x[ unit377_0[i][0] ] ^ unit377_0[i][1]) |(x[ unit377_0[i][2] ] ^ unit377_0[i][3]));
			}
		if(X_contra>0) L[377][0]=2;
		}
	//Check all rules of unit[377][1]
	L[377][1] = LargeX[377][0]>0 ? 1 : 0;
	satisfiable[377][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit377_1[i][0] ][ unit377_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit377_1[i][2] ][ unit377_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit377_1[i][4] ][ unit377_1[i][5] ] >0);
		X_contra = ( LargeX[377][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit377_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[377][0]=0; L[377][1]=1;}
			satisfiable[377][1]=satisfiable[377][1] & ((x[377] ^ 1) | (x[ unit377_1[i][0] ] ^ unit377_1[i][1]) |(x[ unit377_1[i][2] ] ^ unit377_1[i][3]));
			}
		if(X_contra>0) L[377][1]=2;
		}
	//Check all rules of unit[378][0]
	L[378][0] = LargeX[378][1]>0 ? 1 : 0;
	satisfiable[378][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit378_0[i][0] ][ unit378_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit378_0[i][2] ][ unit378_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit378_0[i][4] ][ unit378_0[i][5] ] >0);
		X_contra = ( LargeX[378][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit378_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[378][1]=0; L[378][0]=1;}
			satisfiable[378][0]=satisfiable[378][0] & ((x[378] ^ 0) | (x[ unit378_0[i][0] ] ^ unit378_0[i][1]) |(x[ unit378_0[i][2] ] ^ unit378_0[i][3]));
			}
		if(X_contra>0) L[378][0]=2;
		}
	//Check all rules of unit[378][1]
	L[378][1] = LargeX[378][0]>0 ? 1 : 0;
	satisfiable[378][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit378_1[i][0] ][ unit378_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit378_1[i][2] ][ unit378_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit378_1[i][4] ][ unit378_1[i][5] ] >0);
		X_contra = ( LargeX[378][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit378_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[378][0]=0; L[378][1]=1;}
			satisfiable[378][1]=satisfiable[378][1] & ((x[378] ^ 1) | (x[ unit378_1[i][0] ] ^ unit378_1[i][1]) |(x[ unit378_1[i][2] ] ^ unit378_1[i][3]));
			}
		if(X_contra>0) L[378][1]=2;
		}
	//Check all rules of unit[379][0]
	L[379][0] = LargeX[379][1]>0 ? 1 : 0;
	satisfiable[379][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit379_0[i][0] ][ unit379_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit379_0[i][2] ][ unit379_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit379_0[i][4] ][ unit379_0[i][5] ] >0);
		X_contra = ( LargeX[379][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit379_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[379][1]=0; L[379][0]=1;}
			satisfiable[379][0]=satisfiable[379][0] & ((x[379] ^ 0) | (x[ unit379_0[i][0] ] ^ unit379_0[i][1]) |(x[ unit379_0[i][2] ] ^ unit379_0[i][3]));
			}
		if(X_contra>0) L[379][0]=2;
		}
	//Check all rules of unit[379][1]
	L[379][1] = LargeX[379][0]>0 ? 1 : 0;
	satisfiable[379][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit379_1[i][0] ][ unit379_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit379_1[i][2] ][ unit379_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit379_1[i][4] ][ unit379_1[i][5] ] >0);
		X_contra = ( LargeX[379][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit379_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[379][0]=0; L[379][1]=1;}
			satisfiable[379][1]=satisfiable[379][1] & ((x[379] ^ 1) | (x[ unit379_1[i][0] ] ^ unit379_1[i][1]) |(x[ unit379_1[i][2] ] ^ unit379_1[i][3]));
			}
		if(X_contra>0) L[379][1]=2;
		}
	//Check all rules of unit[380][0]
	L[380][0] = LargeX[380][1]>0 ? 1 : 0;
	satisfiable[380][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit380_0[i][0] ][ unit380_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit380_0[i][2] ][ unit380_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit380_0[i][4] ][ unit380_0[i][5] ] >0);
		X_contra = ( LargeX[380][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit380_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[380][1]=0; L[380][0]=1;}
			satisfiable[380][0]=satisfiable[380][0] & ((x[380] ^ 0) | (x[ unit380_0[i][0] ] ^ unit380_0[i][1]) |(x[ unit380_0[i][2] ] ^ unit380_0[i][3]));
			}
		if(X_contra>0) L[380][0]=2;
		}
	//Check all rules of unit[380][1]
	L[380][1] = LargeX[380][0]>0 ? 1 : 0;
	satisfiable[380][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit380_1[i][0] ][ unit380_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit380_1[i][2] ][ unit380_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit380_1[i][4] ][ unit380_1[i][5] ] >0);
		X_contra = ( LargeX[380][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit380_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[380][0]=0; L[380][1]=1;}
			satisfiable[380][1]=satisfiable[380][1] & ((x[380] ^ 1) | (x[ unit380_1[i][0] ] ^ unit380_1[i][1]) |(x[ unit380_1[i][2] ] ^ unit380_1[i][3]));
			}
		if(X_contra>0) L[380][1]=2;
		}
	//Check all rules of unit[381][0]
	L[381][0] = LargeX[381][1]>0 ? 1 : 0;
	satisfiable[381][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit381_0[i][0] ][ unit381_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit381_0[i][2] ][ unit381_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit381_0[i][4] ][ unit381_0[i][5] ] >0);
		X_contra = ( LargeX[381][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit381_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[381][1]=0; L[381][0]=1;}
			satisfiable[381][0]=satisfiable[381][0] & ((x[381] ^ 0) | (x[ unit381_0[i][0] ] ^ unit381_0[i][1]) |(x[ unit381_0[i][2] ] ^ unit381_0[i][3]));
			}
		if(X_contra>0) L[381][0]=2;
		}
	//Check all rules of unit[381][1]
	L[381][1] = LargeX[381][0]>0 ? 1 : 0;
	satisfiable[381][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit381_1[i][0] ][ unit381_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit381_1[i][2] ][ unit381_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit381_1[i][4] ][ unit381_1[i][5] ] >0);
		X_contra = ( LargeX[381][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit381_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[381][0]=0; L[381][1]=1;}
			satisfiable[381][1]=satisfiable[381][1] & ((x[381] ^ 1) | (x[ unit381_1[i][0] ] ^ unit381_1[i][1]) |(x[ unit381_1[i][2] ] ^ unit381_1[i][3]));
			}
		if(X_contra>0) L[381][1]=2;
		}
	//Check all rules of unit[382][0]
	L[382][0] = LargeX[382][1]>0 ? 1 : 0;
	satisfiable[382][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit382_0[i][0] ][ unit382_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit382_0[i][2] ][ unit382_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit382_0[i][4] ][ unit382_0[i][5] ] >0);
		X_contra = ( LargeX[382][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit382_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[382][1]=0; L[382][0]=1;}
			satisfiable[382][0]=satisfiable[382][0] & ((x[382] ^ 0) | (x[ unit382_0[i][0] ] ^ unit382_0[i][1]) |(x[ unit382_0[i][2] ] ^ unit382_0[i][3]));
			}
		if(X_contra>0) L[382][0]=2;
		}
	//Check all rules of unit[382][1]
	L[382][1] = LargeX[382][0]>0 ? 1 : 0;
	satisfiable[382][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit382_1[i][0] ][ unit382_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit382_1[i][2] ][ unit382_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit382_1[i][4] ][ unit382_1[i][5] ] >0);
		X_contra = ( LargeX[382][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit382_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[382][0]=0; L[382][1]=1;}
			satisfiable[382][1]=satisfiable[382][1] & ((x[382] ^ 1) | (x[ unit382_1[i][0] ] ^ unit382_1[i][1]) |(x[ unit382_1[i][2] ] ^ unit382_1[i][3]));
			}
		if(X_contra>0) L[382][1]=2;
		}
	//Check all rules of unit[383][0]
	L[383][0] = LargeX[383][1]>0 ? 1 : 0;
	satisfiable[383][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit383_0[i][0] ][ unit383_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit383_0[i][2] ][ unit383_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit383_0[i][4] ][ unit383_0[i][5] ] >0);
		X_contra = ( LargeX[383][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit383_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[383][1]=0; L[383][0]=1;}
			satisfiable[383][0]=satisfiable[383][0] & ((x[383] ^ 0) | (x[ unit383_0[i][0] ] ^ unit383_0[i][1]) |(x[ unit383_0[i][2] ] ^ unit383_0[i][3]));
			}
		if(X_contra>0) L[383][0]=2;
		}
	//Check all rules of unit[383][1]
	L[383][1] = LargeX[383][0]>0 ? 1 : 0;
	satisfiable[383][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit383_1[i][0] ][ unit383_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit383_1[i][2] ][ unit383_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit383_1[i][4] ][ unit383_1[i][5] ] >0);
		X_contra = ( LargeX[383][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit383_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[383][0]=0; L[383][1]=1;}
			satisfiable[383][1]=satisfiable[383][1] & ((x[383] ^ 1) | (x[ unit383_1[i][0] ] ^ unit383_1[i][1]) |(x[ unit383_1[i][2] ] ^ unit383_1[i][3]));
			}
		if(X_contra>0) L[383][1]=2;
		}
	//Check all rules of unit[384][0]
	L[384][0] = LargeX[384][1]>0 ? 1 : 0;
	satisfiable[384][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit384_0[i][0] ][ unit384_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit384_0[i][2] ][ unit384_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit384_0[i][4] ][ unit384_0[i][5] ] >0);
		X_contra = ( LargeX[384][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit384_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[384][1]=0; L[384][0]=1;}
			satisfiable[384][0]=satisfiable[384][0] & ((x[384] ^ 0) | (x[ unit384_0[i][0] ] ^ unit384_0[i][1]) |(x[ unit384_0[i][2] ] ^ unit384_0[i][3]));
			}
		if(X_contra>0) L[384][0]=2;
		}
	//Check all rules of unit[384][1]
	L[384][1] = LargeX[384][0]>0 ? 1 : 0;
	satisfiable[384][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit384_1[i][0] ][ unit384_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit384_1[i][2] ][ unit384_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit384_1[i][4] ][ unit384_1[i][5] ] >0);
		X_contra = ( LargeX[384][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit384_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[384][0]=0; L[384][1]=1;}
			satisfiable[384][1]=satisfiable[384][1] & ((x[384] ^ 1) | (x[ unit384_1[i][0] ] ^ unit384_1[i][1]) |(x[ unit384_1[i][2] ] ^ unit384_1[i][3]));
			}
		if(X_contra>0) L[384][1]=2;
		}
	//Check all rules of unit[385][0]
	L[385][0] = LargeX[385][1]>0 ? 1 : 0;
	satisfiable[385][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit385_0[i][0] ][ unit385_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit385_0[i][2] ][ unit385_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit385_0[i][4] ][ unit385_0[i][5] ] >0);
		X_contra = ( LargeX[385][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit385_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[385][1]=0; L[385][0]=1;}
			satisfiable[385][0]=satisfiable[385][0] & ((x[385] ^ 0) | (x[ unit385_0[i][0] ] ^ unit385_0[i][1]) |(x[ unit385_0[i][2] ] ^ unit385_0[i][3]));
			}
		if(X_contra>0) L[385][0]=2;
		}
	//Check all rules of unit[385][1]
	L[385][1] = LargeX[385][0]>0 ? 1 : 0;
	satisfiable[385][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit385_1[i][0] ][ unit385_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit385_1[i][2] ][ unit385_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit385_1[i][4] ][ unit385_1[i][5] ] >0);
		X_contra = ( LargeX[385][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit385_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[385][0]=0; L[385][1]=1;}
			satisfiable[385][1]=satisfiable[385][1] & ((x[385] ^ 1) | (x[ unit385_1[i][0] ] ^ unit385_1[i][1]) |(x[ unit385_1[i][2] ] ^ unit385_1[i][3]));
			}
		if(X_contra>0) L[385][1]=2;
		}
	//Check all rules of unit[386][0]
	L[386][0] = LargeX[386][1]>0 ? 1 : 0;
	satisfiable[386][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit386_0[i][0] ][ unit386_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit386_0[i][2] ][ unit386_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit386_0[i][4] ][ unit386_0[i][5] ] >0);
		X_contra = ( LargeX[386][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit386_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[386][1]=0; L[386][0]=1;}
			satisfiable[386][0]=satisfiable[386][0] & ((x[386] ^ 0) | (x[ unit386_0[i][0] ] ^ unit386_0[i][1]) |(x[ unit386_0[i][2] ] ^ unit386_0[i][3]));
			}
		if(X_contra>0) L[386][0]=2;
		}
	//Check all rules of unit[386][1]
	L[386][1] = LargeX[386][0]>0 ? 1 : 0;
	satisfiable[386][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit386_1[i][0] ][ unit386_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit386_1[i][2] ][ unit386_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit386_1[i][4] ][ unit386_1[i][5] ] >0);
		X_contra = ( LargeX[386][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit386_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[386][0]=0; L[386][1]=1;}
			satisfiable[386][1]=satisfiable[386][1] & ((x[386] ^ 1) | (x[ unit386_1[i][0] ] ^ unit386_1[i][1]) |(x[ unit386_1[i][2] ] ^ unit386_1[i][3]));
			}
		if(X_contra>0) L[386][1]=2;
		}
	//Check all rules of unit[387][0]
	L[387][0] = LargeX[387][1]>0 ? 1 : 0;
	satisfiable[387][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit387_0[i][0] ][ unit387_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit387_0[i][2] ][ unit387_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit387_0[i][4] ][ unit387_0[i][5] ] >0);
		X_contra = ( LargeX[387][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit387_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[387][1]=0; L[387][0]=1;}
			satisfiable[387][0]=satisfiable[387][0] & ((x[387] ^ 0) | (x[ unit387_0[i][0] ] ^ unit387_0[i][1]) |(x[ unit387_0[i][2] ] ^ unit387_0[i][3]));
			}
		if(X_contra>0) L[387][0]=2;
		}
	//Check all rules of unit[387][1]
	L[387][1] = LargeX[387][0]>0 ? 1 : 0;
	satisfiable[387][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit387_1[i][0] ][ unit387_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit387_1[i][2] ][ unit387_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit387_1[i][4] ][ unit387_1[i][5] ] >0);
		X_contra = ( LargeX[387][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit387_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[387][0]=0; L[387][1]=1;}
			satisfiable[387][1]=satisfiable[387][1] & ((x[387] ^ 1) | (x[ unit387_1[i][0] ] ^ unit387_1[i][1]) |(x[ unit387_1[i][2] ] ^ unit387_1[i][3]));
			}
		if(X_contra>0) L[387][1]=2;
		}
	//Check all rules of unit[388][0]
	L[388][0] = LargeX[388][1]>0 ? 1 : 0;
	satisfiable[388][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit388_0[i][0] ][ unit388_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit388_0[i][2] ][ unit388_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit388_0[i][4] ][ unit388_0[i][5] ] >0);
		X_contra = ( LargeX[388][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit388_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[388][1]=0; L[388][0]=1;}
			satisfiable[388][0]=satisfiable[388][0] & ((x[388] ^ 0) | (x[ unit388_0[i][0] ] ^ unit388_0[i][1]) |(x[ unit388_0[i][2] ] ^ unit388_0[i][3]));
			}
		if(X_contra>0) L[388][0]=2;
		}
	//Check all rules of unit[388][1]
	L[388][1] = LargeX[388][0]>0 ? 1 : 0;
	satisfiable[388][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit388_1[i][0] ][ unit388_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit388_1[i][2] ][ unit388_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit388_1[i][4] ][ unit388_1[i][5] ] >0);
		X_contra = ( LargeX[388][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit388_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[388][0]=0; L[388][1]=1;}
			satisfiable[388][1]=satisfiable[388][1] & ((x[388] ^ 1) | (x[ unit388_1[i][0] ] ^ unit388_1[i][1]) |(x[ unit388_1[i][2] ] ^ unit388_1[i][3]));
			}
		if(X_contra>0) L[388][1]=2;
		}
	//Check all rules of unit[389][0]
	L[389][0] = LargeX[389][1]>0 ? 1 : 0;
	satisfiable[389][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit389_0[i][0] ][ unit389_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit389_0[i][2] ][ unit389_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit389_0[i][4] ][ unit389_0[i][5] ] >0);
		X_contra = ( LargeX[389][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit389_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[389][1]=0; L[389][0]=1;}
			satisfiable[389][0]=satisfiable[389][0] & ((x[389] ^ 0) | (x[ unit389_0[i][0] ] ^ unit389_0[i][1]) |(x[ unit389_0[i][2] ] ^ unit389_0[i][3]));
			}
		if(X_contra>0) L[389][0]=2;
		}
	//Check all rules of unit[389][1]
	L[389][1] = LargeX[389][0]>0 ? 1 : 0;
	satisfiable[389][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit389_1[i][0] ][ unit389_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit389_1[i][2] ][ unit389_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit389_1[i][4] ][ unit389_1[i][5] ] >0);
		X_contra = ( LargeX[389][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit389_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[389][0]=0; L[389][1]=1;}
			satisfiable[389][1]=satisfiable[389][1] & ((x[389] ^ 1) | (x[ unit389_1[i][0] ] ^ unit389_1[i][1]) |(x[ unit389_1[i][2] ] ^ unit389_1[i][3]));
			}
		if(X_contra>0) L[389][1]=2;
		}
	//Check all rules of unit[390][0]
	L[390][0] = LargeX[390][1]>0 ? 1 : 0;
	satisfiable[390][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit390_0[i][0] ][ unit390_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit390_0[i][2] ][ unit390_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit390_0[i][4] ][ unit390_0[i][5] ] >0);
		X_contra = ( LargeX[390][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit390_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[390][1]=0; L[390][0]=1;}
			satisfiable[390][0]=satisfiable[390][0] & ((x[390] ^ 0) | (x[ unit390_0[i][0] ] ^ unit390_0[i][1]) |(x[ unit390_0[i][2] ] ^ unit390_0[i][3]));
			}
		if(X_contra>0) L[390][0]=2;
		}
	//Check all rules of unit[390][1]
	L[390][1] = LargeX[390][0]>0 ? 1 : 0;
	satisfiable[390][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit390_1[i][0] ][ unit390_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit390_1[i][2] ][ unit390_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit390_1[i][4] ][ unit390_1[i][5] ] >0);
		X_contra = ( LargeX[390][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit390_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[390][0]=0; L[390][1]=1;}
			satisfiable[390][1]=satisfiable[390][1] & ((x[390] ^ 1) | (x[ unit390_1[i][0] ] ^ unit390_1[i][1]) |(x[ unit390_1[i][2] ] ^ unit390_1[i][3]));
			}
		if(X_contra>0) L[390][1]=2;
		}
	//Check all rules of unit[391][0]
	L[391][0] = LargeX[391][1]>0 ? 1 : 0;
	satisfiable[391][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit391_0[i][0] ][ unit391_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit391_0[i][2] ][ unit391_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit391_0[i][4] ][ unit391_0[i][5] ] >0);
		X_contra = ( LargeX[391][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit391_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[391][1]=0; L[391][0]=1;}
			satisfiable[391][0]=satisfiable[391][0] & ((x[391] ^ 0) | (x[ unit391_0[i][0] ] ^ unit391_0[i][1]) |(x[ unit391_0[i][2] ] ^ unit391_0[i][3]));
			}
		if(X_contra>0) L[391][0]=2;
		}
	//Check all rules of unit[391][1]
	L[391][1] = LargeX[391][0]>0 ? 1 : 0;
	satisfiable[391][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit391_1[i][0] ][ unit391_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit391_1[i][2] ][ unit391_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit391_1[i][4] ][ unit391_1[i][5] ] >0);
		X_contra = ( LargeX[391][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit391_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[391][0]=0; L[391][1]=1;}
			satisfiable[391][1]=satisfiable[391][1] & ((x[391] ^ 1) | (x[ unit391_1[i][0] ] ^ unit391_1[i][1]) |(x[ unit391_1[i][2] ] ^ unit391_1[i][3]));
			}
		if(X_contra>0) L[391][1]=2;
		}
	//Check all rules of unit[392][0]
	L[392][0] = LargeX[392][1]>0 ? 1 : 0;
	satisfiable[392][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit392_0[i][0] ][ unit392_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit392_0[i][2] ][ unit392_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit392_0[i][4] ][ unit392_0[i][5] ] >0);
		X_contra = ( LargeX[392][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit392_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[392][1]=0; L[392][0]=1;}
			satisfiable[392][0]=satisfiable[392][0] & ((x[392] ^ 0) | (x[ unit392_0[i][0] ] ^ unit392_0[i][1]) |(x[ unit392_0[i][2] ] ^ unit392_0[i][3]));
			}
		if(X_contra>0) L[392][0]=2;
		}
	//Check all rules of unit[392][1]
	L[392][1] = LargeX[392][0]>0 ? 1 : 0;
	satisfiable[392][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit392_1[i][0] ][ unit392_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit392_1[i][2] ][ unit392_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit392_1[i][4] ][ unit392_1[i][5] ] >0);
		X_contra = ( LargeX[392][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit392_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[392][0]=0; L[392][1]=1;}
			satisfiable[392][1]=satisfiable[392][1] & ((x[392] ^ 1) | (x[ unit392_1[i][0] ] ^ unit392_1[i][1]) |(x[ unit392_1[i][2] ] ^ unit392_1[i][3]));
			}
		if(X_contra>0) L[392][1]=2;
		}
	//Check all rules of unit[393][0]
	L[393][0] = LargeX[393][1]>0 ? 1 : 0;
	satisfiable[393][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit393_0[i][0] ][ unit393_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit393_0[i][2] ][ unit393_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit393_0[i][4] ][ unit393_0[i][5] ] >0);
		X_contra = ( LargeX[393][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit393_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[393][1]=0; L[393][0]=1;}
			satisfiable[393][0]=satisfiable[393][0] & ((x[393] ^ 0) | (x[ unit393_0[i][0] ] ^ unit393_0[i][1]) |(x[ unit393_0[i][2] ] ^ unit393_0[i][3]));
			}
		if(X_contra>0) L[393][0]=2;
		}
	//Check all rules of unit[393][1]
	L[393][1] = LargeX[393][0]>0 ? 1 : 0;
	satisfiable[393][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit393_1[i][0] ][ unit393_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit393_1[i][2] ][ unit393_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit393_1[i][4] ][ unit393_1[i][5] ] >0);
		X_contra = ( LargeX[393][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit393_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[393][0]=0; L[393][1]=1;}
			satisfiable[393][1]=satisfiable[393][1] & ((x[393] ^ 1) | (x[ unit393_1[i][0] ] ^ unit393_1[i][1]) |(x[ unit393_1[i][2] ] ^ unit393_1[i][3]));
			}
		if(X_contra>0) L[393][1]=2;
		}
	//Check all rules of unit[394][0]
	L[394][0] = LargeX[394][1]>0 ? 1 : 0;
	satisfiable[394][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit394_0[i][0] ][ unit394_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit394_0[i][2] ][ unit394_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit394_0[i][4] ][ unit394_0[i][5] ] >0);
		X_contra = ( LargeX[394][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit394_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[394][1]=0; L[394][0]=1;}
			satisfiable[394][0]=satisfiable[394][0] & ((x[394] ^ 0) | (x[ unit394_0[i][0] ] ^ unit394_0[i][1]) |(x[ unit394_0[i][2] ] ^ unit394_0[i][3]));
			}
		if(X_contra>0) L[394][0]=2;
		}
	//Check all rules of unit[394][1]
	L[394][1] = LargeX[394][0]>0 ? 1 : 0;
	satisfiable[394][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit394_1[i][0] ][ unit394_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit394_1[i][2] ][ unit394_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit394_1[i][4] ][ unit394_1[i][5] ] >0);
		X_contra = ( LargeX[394][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit394_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[394][0]=0; L[394][1]=1;}
			satisfiable[394][1]=satisfiable[394][1] & ((x[394] ^ 1) | (x[ unit394_1[i][0] ] ^ unit394_1[i][1]) |(x[ unit394_1[i][2] ] ^ unit394_1[i][3]));
			}
		if(X_contra>0) L[394][1]=2;
		}
	//Check all rules of unit[395][0]
	L[395][0] = LargeX[395][1]>0 ? 1 : 0;
	satisfiable[395][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit395_0[i][0] ][ unit395_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit395_0[i][2] ][ unit395_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit395_0[i][4] ][ unit395_0[i][5] ] >0);
		X_contra = ( LargeX[395][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit395_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[395][1]=0; L[395][0]=1;}
			satisfiable[395][0]=satisfiable[395][0] & ((x[395] ^ 0) | (x[ unit395_0[i][0] ] ^ unit395_0[i][1]) |(x[ unit395_0[i][2] ] ^ unit395_0[i][3]));
			}
		if(X_contra>0) L[395][0]=2;
		}
	//Check all rules of unit[395][1]
	L[395][1] = LargeX[395][0]>0 ? 1 : 0;
	satisfiable[395][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit395_1[i][0] ][ unit395_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit395_1[i][2] ][ unit395_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit395_1[i][4] ][ unit395_1[i][5] ] >0);
		X_contra = ( LargeX[395][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit395_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[395][0]=0; L[395][1]=1;}
			satisfiable[395][1]=satisfiable[395][1] & ((x[395] ^ 1) | (x[ unit395_1[i][0] ] ^ unit395_1[i][1]) |(x[ unit395_1[i][2] ] ^ unit395_1[i][3]));
			}
		if(X_contra>0) L[395][1]=2;
		}
	//Check all rules of unit[396][0]
	L[396][0] = LargeX[396][1]>0 ? 1 : 0;
	satisfiable[396][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit396_0[i][0] ][ unit396_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit396_0[i][2] ][ unit396_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit396_0[i][4] ][ unit396_0[i][5] ] >0);
		X_contra = ( LargeX[396][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit396_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[396][1]=0; L[396][0]=1;}
			satisfiable[396][0]=satisfiable[396][0] & ((x[396] ^ 0) | (x[ unit396_0[i][0] ] ^ unit396_0[i][1]) |(x[ unit396_0[i][2] ] ^ unit396_0[i][3]));
			}
		if(X_contra>0) L[396][0]=2;
		}
	//Check all rules of unit[396][1]
	L[396][1] = LargeX[396][0]>0 ? 1 : 0;
	satisfiable[396][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit396_1[i][0] ][ unit396_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit396_1[i][2] ][ unit396_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit396_1[i][4] ][ unit396_1[i][5] ] >0);
		X_contra = ( LargeX[396][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit396_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[396][0]=0; L[396][1]=1;}
			satisfiable[396][1]=satisfiable[396][1] & ((x[396] ^ 1) | (x[ unit396_1[i][0] ] ^ unit396_1[i][1]) |(x[ unit396_1[i][2] ] ^ unit396_1[i][3]));
			}
		if(X_contra>0) L[396][1]=2;
		}
	//Check all rules of unit[397][0]
	L[397][0] = LargeX[397][1]>0 ? 1 : 0;
	satisfiable[397][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit397_0[i][0] ][ unit397_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit397_0[i][2] ][ unit397_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit397_0[i][4] ][ unit397_0[i][5] ] >0);
		X_contra = ( LargeX[397][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit397_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[397][1]=0; L[397][0]=1;}
			satisfiable[397][0]=satisfiable[397][0] & ((x[397] ^ 0) | (x[ unit397_0[i][0] ] ^ unit397_0[i][1]) |(x[ unit397_0[i][2] ] ^ unit397_0[i][3]));
			}
		if(X_contra>0) L[397][0]=2;
		}
	//Check all rules of unit[397][1]
	L[397][1] = LargeX[397][0]>0 ? 1 : 0;
	satisfiable[397][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit397_1[i][0] ][ unit397_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit397_1[i][2] ][ unit397_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit397_1[i][4] ][ unit397_1[i][5] ] >0);
		X_contra = ( LargeX[397][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit397_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[397][0]=0; L[397][1]=1;}
			satisfiable[397][1]=satisfiable[397][1] & ((x[397] ^ 1) | (x[ unit397_1[i][0] ] ^ unit397_1[i][1]) |(x[ unit397_1[i][2] ] ^ unit397_1[i][3]));
			}
		if(X_contra>0) L[397][1]=2;
		}
	//Check all rules of unit[398][0]
	L[398][0] = LargeX[398][1]>0 ? 1 : 0;
	satisfiable[398][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit398_0[i][0] ][ unit398_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit398_0[i][2] ][ unit398_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit398_0[i][4] ][ unit398_0[i][5] ] >0);
		X_contra = ( LargeX[398][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit398_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[398][1]=0; L[398][0]=1;}
			satisfiable[398][0]=satisfiable[398][0] & ((x[398] ^ 0) | (x[ unit398_0[i][0] ] ^ unit398_0[i][1]) |(x[ unit398_0[i][2] ] ^ unit398_0[i][3]));
			}
		if(X_contra>0) L[398][0]=2;
		}
	//Check all rules of unit[398][1]
	L[398][1] = LargeX[398][0]>0 ? 1 : 0;
	satisfiable[398][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit398_1[i][0] ][ unit398_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit398_1[i][2] ][ unit398_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit398_1[i][4] ][ unit398_1[i][5] ] >0);
		X_contra = ( LargeX[398][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit398_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[398][0]=0; L[398][1]=1;}
			satisfiable[398][1]=satisfiable[398][1] & ((x[398] ^ 1) | (x[ unit398_1[i][0] ] ^ unit398_1[i][1]) |(x[ unit398_1[i][2] ] ^ unit398_1[i][3]));
			}
		if(X_contra>0) L[398][1]=2;
		}
	//Check all rules of unit[399][0]
	L[399][0] = LargeX[399][1]>0 ? 1 : 0;
	satisfiable[399][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit399_0[i][0] ][ unit399_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit399_0[i][2] ][ unit399_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit399_0[i][4] ][ unit399_0[i][5] ] >0);
		X_contra = ( LargeX[399][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit399_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[399][1]=0; L[399][0]=1;}
			satisfiable[399][0]=satisfiable[399][0] & ((x[399] ^ 0) | (x[ unit399_0[i][0] ] ^ unit399_0[i][1]) |(x[ unit399_0[i][2] ] ^ unit399_0[i][3]));
			}
		if(X_contra>0) L[399][0]=2;
		}
	//Check all rules of unit[399][1]
	L[399][1] = LargeX[399][0]>0 ? 1 : 0;
	satisfiable[399][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit399_1[i][0] ][ unit399_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit399_1[i][2] ][ unit399_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit399_1[i][4] ][ unit399_1[i][5] ] >0);
		X_contra = ( LargeX[399][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit399_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[399][0]=0; L[399][1]=1;}
			satisfiable[399][1]=satisfiable[399][1] & ((x[399] ^ 1) | (x[ unit399_1[i][0] ] ^ unit399_1[i][1]) |(x[ unit399_1[i][2] ] ^ unit399_1[i][3]));
			}
		if(X_contra>0) L[399][1]=2;
		}
	//Check all rules of unit[400][0]
	L[400][0] = LargeX[400][1]>0 ? 1 : 0;
	satisfiable[400][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit400_0[i][0] ][ unit400_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit400_0[i][2] ][ unit400_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit400_0[i][4] ][ unit400_0[i][5] ] >0);
		X_contra = ( LargeX[400][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit400_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[400][1]=0; L[400][0]=1;}
			satisfiable[400][0]=satisfiable[400][0] & ((x[400] ^ 0) | (x[ unit400_0[i][0] ] ^ unit400_0[i][1]) |(x[ unit400_0[i][2] ] ^ unit400_0[i][3]));
			}
		if(X_contra>0) L[400][0]=2;
		}
	//Check all rules of unit[400][1]
	L[400][1] = LargeX[400][0]>0 ? 1 : 0;
	satisfiable[400][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit400_1[i][0] ][ unit400_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit400_1[i][2] ][ unit400_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit400_1[i][4] ][ unit400_1[i][5] ] >0);
		X_contra = ( LargeX[400][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit400_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[400][0]=0; L[400][1]=1;}
			satisfiable[400][1]=satisfiable[400][1] & ((x[400] ^ 1) | (x[ unit400_1[i][0] ] ^ unit400_1[i][1]) |(x[ unit400_1[i][2] ] ^ unit400_1[i][3]));
			}
		if(X_contra>0) L[400][1]=2;
		}
	//Check all rules of unit[401][0]
	L[401][0] = LargeX[401][1]>0 ? 1 : 0;
	satisfiable[401][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit401_0[i][0] ][ unit401_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit401_0[i][2] ][ unit401_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit401_0[i][4] ][ unit401_0[i][5] ] >0);
		X_contra = ( LargeX[401][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit401_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[401][1]=0; L[401][0]=1;}
			satisfiable[401][0]=satisfiable[401][0] & ((x[401] ^ 0) | (x[ unit401_0[i][0] ] ^ unit401_0[i][1]) |(x[ unit401_0[i][2] ] ^ unit401_0[i][3]));
			}
		if(X_contra>0) L[401][0]=2;
		}
	//Check all rules of unit[401][1]
	L[401][1] = LargeX[401][0]>0 ? 1 : 0;
	satisfiable[401][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit401_1[i][0] ][ unit401_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit401_1[i][2] ][ unit401_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit401_1[i][4] ][ unit401_1[i][5] ] >0);
		X_contra = ( LargeX[401][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit401_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[401][0]=0; L[401][1]=1;}
			satisfiable[401][1]=satisfiable[401][1] & ((x[401] ^ 1) | (x[ unit401_1[i][0] ] ^ unit401_1[i][1]) |(x[ unit401_1[i][2] ] ^ unit401_1[i][3]));
			}
		if(X_contra>0) L[401][1]=2;
		}
	//Check all rules of unit[402][0]
	L[402][0] = LargeX[402][1]>0 ? 1 : 0;
	satisfiable[402][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit402_0[i][0] ][ unit402_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit402_0[i][2] ][ unit402_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit402_0[i][4] ][ unit402_0[i][5] ] >0);
		X_contra = ( LargeX[402][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit402_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[402][1]=0; L[402][0]=1;}
			satisfiable[402][0]=satisfiable[402][0] & ((x[402] ^ 0) | (x[ unit402_0[i][0] ] ^ unit402_0[i][1]) |(x[ unit402_0[i][2] ] ^ unit402_0[i][3]));
			}
		if(X_contra>0) L[402][0]=2;
		}
	//Check all rules of unit[402][1]
	L[402][1] = LargeX[402][0]>0 ? 1 : 0;
	satisfiable[402][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit402_1[i][0] ][ unit402_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit402_1[i][2] ][ unit402_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit402_1[i][4] ][ unit402_1[i][5] ] >0);
		X_contra = ( LargeX[402][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit402_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[402][0]=0; L[402][1]=1;}
			satisfiable[402][1]=satisfiable[402][1] & ((x[402] ^ 1) | (x[ unit402_1[i][0] ] ^ unit402_1[i][1]) |(x[ unit402_1[i][2] ] ^ unit402_1[i][3]));
			}
		if(X_contra>0) L[402][1]=2;
		}
	//Check all rules of unit[403][0]
	L[403][0] = LargeX[403][1]>0 ? 1 : 0;
	satisfiable[403][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit403_0[i][0] ][ unit403_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit403_0[i][2] ][ unit403_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit403_0[i][4] ][ unit403_0[i][5] ] >0);
		X_contra = ( LargeX[403][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit403_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[403][1]=0; L[403][0]=1;}
			satisfiable[403][0]=satisfiable[403][0] & ((x[403] ^ 0) | (x[ unit403_0[i][0] ] ^ unit403_0[i][1]) |(x[ unit403_0[i][2] ] ^ unit403_0[i][3]));
			}
		if(X_contra>0) L[403][0]=2;
		}
	//Check all rules of unit[403][1]
	L[403][1] = LargeX[403][0]>0 ? 1 : 0;
	satisfiable[403][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit403_1[i][0] ][ unit403_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit403_1[i][2] ][ unit403_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit403_1[i][4] ][ unit403_1[i][5] ] >0);
		X_contra = ( LargeX[403][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit403_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[403][0]=0; L[403][1]=1;}
			satisfiable[403][1]=satisfiable[403][1] & ((x[403] ^ 1) | (x[ unit403_1[i][0] ] ^ unit403_1[i][1]) |(x[ unit403_1[i][2] ] ^ unit403_1[i][3]));
			}
		if(X_contra>0) L[403][1]=2;
		}
	//Check all rules of unit[404][0]
	L[404][0] = LargeX[404][1]>0 ? 1 : 0;
	satisfiable[404][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit404_0[i][0] ][ unit404_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit404_0[i][2] ][ unit404_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit404_0[i][4] ][ unit404_0[i][5] ] >0);
		X_contra = ( LargeX[404][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit404_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[404][1]=0; L[404][0]=1;}
			satisfiable[404][0]=satisfiable[404][0] & ((x[404] ^ 0) | (x[ unit404_0[i][0] ] ^ unit404_0[i][1]) |(x[ unit404_0[i][2] ] ^ unit404_0[i][3]));
			}
		if(X_contra>0) L[404][0]=2;
		}
	//Check all rules of unit[404][1]
	L[404][1] = LargeX[404][0]>0 ? 1 : 0;
	satisfiable[404][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit404_1[i][0] ][ unit404_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit404_1[i][2] ][ unit404_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit404_1[i][4] ][ unit404_1[i][5] ] >0);
		X_contra = ( LargeX[404][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit404_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[404][0]=0; L[404][1]=1;}
			satisfiable[404][1]=satisfiable[404][1] & ((x[404] ^ 1) | (x[ unit404_1[i][0] ] ^ unit404_1[i][1]) |(x[ unit404_1[i][2] ] ^ unit404_1[i][3]));
			}
		if(X_contra>0) L[404][1]=2;
		}
	//Check all rules of unit[405][0]
	L[405][0] = LargeX[405][1]>0 ? 1 : 0;
	satisfiable[405][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit405_0[i][0] ][ unit405_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit405_0[i][2] ][ unit405_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit405_0[i][4] ][ unit405_0[i][5] ] >0);
		X_contra = ( LargeX[405][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit405_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[405][1]=0; L[405][0]=1;}
			satisfiable[405][0]=satisfiable[405][0] & ((x[405] ^ 0) | (x[ unit405_0[i][0] ] ^ unit405_0[i][1]) |(x[ unit405_0[i][2] ] ^ unit405_0[i][3]));
			}
		if(X_contra>0) L[405][0]=2;
		}
	//Check all rules of unit[405][1]
	L[405][1] = LargeX[405][0]>0 ? 1 : 0;
	satisfiable[405][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit405_1[i][0] ][ unit405_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit405_1[i][2] ][ unit405_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit405_1[i][4] ][ unit405_1[i][5] ] >0);
		X_contra = ( LargeX[405][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit405_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[405][0]=0; L[405][1]=1;}
			satisfiable[405][1]=satisfiable[405][1] & ((x[405] ^ 1) | (x[ unit405_1[i][0] ] ^ unit405_1[i][1]) |(x[ unit405_1[i][2] ] ^ unit405_1[i][3]));
			}
		if(X_contra>0) L[405][1]=2;
		}
	//Check all rules of unit[406][0]
	L[406][0] = LargeX[406][1]>0 ? 1 : 0;
	satisfiable[406][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit406_0[i][0] ][ unit406_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit406_0[i][2] ][ unit406_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit406_0[i][4] ][ unit406_0[i][5] ] >0);
		X_contra = ( LargeX[406][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit406_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[406][1]=0; L[406][0]=1;}
			satisfiable[406][0]=satisfiable[406][0] & ((x[406] ^ 0) | (x[ unit406_0[i][0] ] ^ unit406_0[i][1]) |(x[ unit406_0[i][2] ] ^ unit406_0[i][3]));
			}
		if(X_contra>0) L[406][0]=2;
		}
	//Check all rules of unit[406][1]
	L[406][1] = LargeX[406][0]>0 ? 1 : 0;
	satisfiable[406][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit406_1[i][0] ][ unit406_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit406_1[i][2] ][ unit406_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit406_1[i][4] ][ unit406_1[i][5] ] >0);
		X_contra = ( LargeX[406][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit406_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[406][0]=0; L[406][1]=1;}
			satisfiable[406][1]=satisfiable[406][1] & ((x[406] ^ 1) | (x[ unit406_1[i][0] ] ^ unit406_1[i][1]) |(x[ unit406_1[i][2] ] ^ unit406_1[i][3]));
			}
		if(X_contra>0) L[406][1]=2;
		}
	//Check all rules of unit[407][0]
	L[407][0] = LargeX[407][1]>0 ? 1 : 0;
	satisfiable[407][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit407_0[i][0] ][ unit407_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit407_0[i][2] ][ unit407_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit407_0[i][4] ][ unit407_0[i][5] ] >0);
		X_contra = ( LargeX[407][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit407_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[407][1]=0; L[407][0]=1;}
			satisfiable[407][0]=satisfiable[407][0] & ((x[407] ^ 0) | (x[ unit407_0[i][0] ] ^ unit407_0[i][1]) |(x[ unit407_0[i][2] ] ^ unit407_0[i][3]));
			}
		if(X_contra>0) L[407][0]=2;
		}
	//Check all rules of unit[407][1]
	L[407][1] = LargeX[407][0]>0 ? 1 : 0;
	satisfiable[407][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit407_1[i][0] ][ unit407_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit407_1[i][2] ][ unit407_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit407_1[i][4] ][ unit407_1[i][5] ] >0);
		X_contra = ( LargeX[407][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit407_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[407][0]=0; L[407][1]=1;}
			satisfiable[407][1]=satisfiable[407][1] & ((x[407] ^ 1) | (x[ unit407_1[i][0] ] ^ unit407_1[i][1]) |(x[ unit407_1[i][2] ] ^ unit407_1[i][3]));
			}
		if(X_contra>0) L[407][1]=2;
		}
	//Check all rules of unit[408][0]
	L[408][0] = LargeX[408][1]>0 ? 1 : 0;
	satisfiable[408][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit408_0[i][0] ][ unit408_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit408_0[i][2] ][ unit408_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit408_0[i][4] ][ unit408_0[i][5] ] >0);
		X_contra = ( LargeX[408][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit408_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[408][1]=0; L[408][0]=1;}
			satisfiable[408][0]=satisfiable[408][0] & ((x[408] ^ 0) | (x[ unit408_0[i][0] ] ^ unit408_0[i][1]) |(x[ unit408_0[i][2] ] ^ unit408_0[i][3]));
			}
		if(X_contra>0) L[408][0]=2;
		}
	//Check all rules of unit[408][1]
	L[408][1] = LargeX[408][0]>0 ? 1 : 0;
	satisfiable[408][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit408_1[i][0] ][ unit408_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit408_1[i][2] ][ unit408_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit408_1[i][4] ][ unit408_1[i][5] ] >0);
		X_contra = ( LargeX[408][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit408_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[408][0]=0; L[408][1]=1;}
			satisfiable[408][1]=satisfiable[408][1] & ((x[408] ^ 1) | (x[ unit408_1[i][0] ] ^ unit408_1[i][1]) |(x[ unit408_1[i][2] ] ^ unit408_1[i][3]));
			}
		if(X_contra>0) L[408][1]=2;
		}
	//Check all rules of unit[409][0]
	L[409][0] = LargeX[409][1]>0 ? 1 : 0;
	satisfiable[409][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit409_0[i][0] ][ unit409_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit409_0[i][2] ][ unit409_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit409_0[i][4] ][ unit409_0[i][5] ] >0);
		X_contra = ( LargeX[409][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit409_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[409][1]=0; L[409][0]=1;}
			satisfiable[409][0]=satisfiable[409][0] & ((x[409] ^ 0) | (x[ unit409_0[i][0] ] ^ unit409_0[i][1]) |(x[ unit409_0[i][2] ] ^ unit409_0[i][3]));
			}
		if(X_contra>0) L[409][0]=2;
		}
	//Check all rules of unit[409][1]
	L[409][1] = LargeX[409][0]>0 ? 1 : 0;
	satisfiable[409][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit409_1[i][0] ][ unit409_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit409_1[i][2] ][ unit409_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit409_1[i][4] ][ unit409_1[i][5] ] >0);
		X_contra = ( LargeX[409][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit409_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[409][0]=0; L[409][1]=1;}
			satisfiable[409][1]=satisfiable[409][1] & ((x[409] ^ 1) | (x[ unit409_1[i][0] ] ^ unit409_1[i][1]) |(x[ unit409_1[i][2] ] ^ unit409_1[i][3]));
			}
		if(X_contra>0) L[409][1]=2;
		}
	//Check all rules of unit[410][0]
	L[410][0] = LargeX[410][1]>0 ? 1 : 0;
	satisfiable[410][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit410_0[i][0] ][ unit410_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit410_0[i][2] ][ unit410_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit410_0[i][4] ][ unit410_0[i][5] ] >0);
		X_contra = ( LargeX[410][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit410_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[410][1]=0; L[410][0]=1;}
			satisfiable[410][0]=satisfiable[410][0] & ((x[410] ^ 0) | (x[ unit410_0[i][0] ] ^ unit410_0[i][1]) |(x[ unit410_0[i][2] ] ^ unit410_0[i][3]));
			}
		if(X_contra>0) L[410][0]=2;
		}
	//Check all rules of unit[410][1]
	L[410][1] = LargeX[410][0]>0 ? 1 : 0;
	satisfiable[410][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit410_1[i][0] ][ unit410_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit410_1[i][2] ][ unit410_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit410_1[i][4] ][ unit410_1[i][5] ] >0);
		X_contra = ( LargeX[410][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit410_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[410][0]=0; L[410][1]=1;}
			satisfiable[410][1]=satisfiable[410][1] & ((x[410] ^ 1) | (x[ unit410_1[i][0] ] ^ unit410_1[i][1]) |(x[ unit410_1[i][2] ] ^ unit410_1[i][3]));
			}
		if(X_contra>0) L[410][1]=2;
		}
	//Check all rules of unit[411][0]
	L[411][0] = LargeX[411][1]>0 ? 1 : 0;
	satisfiable[411][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit411_0[i][0] ][ unit411_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit411_0[i][2] ][ unit411_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit411_0[i][4] ][ unit411_0[i][5] ] >0);
		X_contra = ( LargeX[411][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit411_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[411][1]=0; L[411][0]=1;}
			satisfiable[411][0]=satisfiable[411][0] & ((x[411] ^ 0) | (x[ unit411_0[i][0] ] ^ unit411_0[i][1]) |(x[ unit411_0[i][2] ] ^ unit411_0[i][3]));
			}
		if(X_contra>0) L[411][0]=2;
		}
	//Check all rules of unit[411][1]
	L[411][1] = LargeX[411][0]>0 ? 1 : 0;
	satisfiable[411][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit411_1[i][0] ][ unit411_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit411_1[i][2] ][ unit411_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit411_1[i][4] ][ unit411_1[i][5] ] >0);
		X_contra = ( LargeX[411][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit411_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[411][0]=0; L[411][1]=1;}
			satisfiable[411][1]=satisfiable[411][1] & ((x[411] ^ 1) | (x[ unit411_1[i][0] ] ^ unit411_1[i][1]) |(x[ unit411_1[i][2] ] ^ unit411_1[i][3]));
			}
		if(X_contra>0) L[411][1]=2;
		}
	//Check all rules of unit[412][0]
	L[412][0] = LargeX[412][1]>0 ? 1 : 0;
	satisfiable[412][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit412_0[i][0] ][ unit412_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit412_0[i][2] ][ unit412_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit412_0[i][4] ][ unit412_0[i][5] ] >0);
		X_contra = ( LargeX[412][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit412_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[412][1]=0; L[412][0]=1;}
			satisfiable[412][0]=satisfiable[412][0] & ((x[412] ^ 0) | (x[ unit412_0[i][0] ] ^ unit412_0[i][1]) |(x[ unit412_0[i][2] ] ^ unit412_0[i][3]));
			}
		if(X_contra>0) L[412][0]=2;
		}
	//Check all rules of unit[412][1]
	L[412][1] = LargeX[412][0]>0 ? 1 : 0;
	satisfiable[412][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit412_1[i][0] ][ unit412_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit412_1[i][2] ][ unit412_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit412_1[i][4] ][ unit412_1[i][5] ] >0);
		X_contra = ( LargeX[412][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit412_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[412][0]=0; L[412][1]=1;}
			satisfiable[412][1]=satisfiable[412][1] & ((x[412] ^ 1) | (x[ unit412_1[i][0] ] ^ unit412_1[i][1]) |(x[ unit412_1[i][2] ] ^ unit412_1[i][3]));
			}
		if(X_contra>0) L[412][1]=2;
		}
	//Check all rules of unit[413][0]
	L[413][0] = LargeX[413][1]>0 ? 1 : 0;
	satisfiable[413][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit413_0[i][0] ][ unit413_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit413_0[i][2] ][ unit413_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit413_0[i][4] ][ unit413_0[i][5] ] >0);
		X_contra = ( LargeX[413][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit413_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[413][1]=0; L[413][0]=1;}
			satisfiable[413][0]=satisfiable[413][0] & ((x[413] ^ 0) | (x[ unit413_0[i][0] ] ^ unit413_0[i][1]) |(x[ unit413_0[i][2] ] ^ unit413_0[i][3]));
			}
		if(X_contra>0) L[413][0]=2;
		}
	//Check all rules of unit[413][1]
	L[413][1] = LargeX[413][0]>0 ? 1 : 0;
	satisfiable[413][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit413_1[i][0] ][ unit413_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit413_1[i][2] ][ unit413_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit413_1[i][4] ][ unit413_1[i][5] ] >0);
		X_contra = ( LargeX[413][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit413_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[413][0]=0; L[413][1]=1;}
			satisfiable[413][1]=satisfiable[413][1] & ((x[413] ^ 1) | (x[ unit413_1[i][0] ] ^ unit413_1[i][1]) |(x[ unit413_1[i][2] ] ^ unit413_1[i][3]));
			}
		if(X_contra>0) L[413][1]=2;
		}
	//Check all rules of unit[414][0]
	L[414][0] = LargeX[414][1]>0 ? 1 : 0;
	satisfiable[414][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit414_0[i][0] ][ unit414_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit414_0[i][2] ][ unit414_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit414_0[i][4] ][ unit414_0[i][5] ] >0);
		X_contra = ( LargeX[414][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit414_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[414][1]=0; L[414][0]=1;}
			satisfiable[414][0]=satisfiable[414][0] & ((x[414] ^ 0) | (x[ unit414_0[i][0] ] ^ unit414_0[i][1]) |(x[ unit414_0[i][2] ] ^ unit414_0[i][3]));
			}
		if(X_contra>0) L[414][0]=2;
		}
	//Check all rules of unit[414][1]
	L[414][1] = LargeX[414][0]>0 ? 1 : 0;
	satisfiable[414][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit414_1[i][0] ][ unit414_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit414_1[i][2] ][ unit414_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit414_1[i][4] ][ unit414_1[i][5] ] >0);
		X_contra = ( LargeX[414][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit414_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[414][0]=0; L[414][1]=1;}
			satisfiable[414][1]=satisfiable[414][1] & ((x[414] ^ 1) | (x[ unit414_1[i][0] ] ^ unit414_1[i][1]) |(x[ unit414_1[i][2] ] ^ unit414_1[i][3]));
			}
		if(X_contra>0) L[414][1]=2;
		}
	//Check all rules of unit[415][0]
	L[415][0] = LargeX[415][1]>0 ? 1 : 0;
	satisfiable[415][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit415_0[i][0] ][ unit415_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit415_0[i][2] ][ unit415_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit415_0[i][4] ][ unit415_0[i][5] ] >0);
		X_contra = ( LargeX[415][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit415_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[415][1]=0; L[415][0]=1;}
			satisfiable[415][0]=satisfiable[415][0] & ((x[415] ^ 0) | (x[ unit415_0[i][0] ] ^ unit415_0[i][1]) |(x[ unit415_0[i][2] ] ^ unit415_0[i][3]));
			}
		if(X_contra>0) L[415][0]=2;
		}
	//Check all rules of unit[415][1]
	L[415][1] = LargeX[415][0]>0 ? 1 : 0;
	satisfiable[415][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit415_1[i][0] ][ unit415_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit415_1[i][2] ][ unit415_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit415_1[i][4] ][ unit415_1[i][5] ] >0);
		X_contra = ( LargeX[415][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit415_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[415][0]=0; L[415][1]=1;}
			satisfiable[415][1]=satisfiable[415][1] & ((x[415] ^ 1) | (x[ unit415_1[i][0] ] ^ unit415_1[i][1]) |(x[ unit415_1[i][2] ] ^ unit415_1[i][3]));
			}
		if(X_contra>0) L[415][1]=2;
		}
	//Check all rules of unit[416][0]
	L[416][0] = LargeX[416][1]>0 ? 1 : 0;
	satisfiable[416][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit416_0[i][0] ][ unit416_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit416_0[i][2] ][ unit416_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit416_0[i][4] ][ unit416_0[i][5] ] >0);
		X_contra = ( LargeX[416][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit416_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[416][1]=0; L[416][0]=1;}
			satisfiable[416][0]=satisfiable[416][0] & ((x[416] ^ 0) | (x[ unit416_0[i][0] ] ^ unit416_0[i][1]) |(x[ unit416_0[i][2] ] ^ unit416_0[i][3]));
			}
		if(X_contra>0) L[416][0]=2;
		}
	//Check all rules of unit[416][1]
	L[416][1] = LargeX[416][0]>0 ? 1 : 0;
	satisfiable[416][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit416_1[i][0] ][ unit416_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit416_1[i][2] ][ unit416_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit416_1[i][4] ][ unit416_1[i][5] ] >0);
		X_contra = ( LargeX[416][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit416_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[416][0]=0; L[416][1]=1;}
			satisfiable[416][1]=satisfiable[416][1] & ((x[416] ^ 1) | (x[ unit416_1[i][0] ] ^ unit416_1[i][1]) |(x[ unit416_1[i][2] ] ^ unit416_1[i][3]));
			}
		if(X_contra>0) L[416][1]=2;
		}
	//Check all rules of unit[417][0]
	L[417][0] = LargeX[417][1]>0 ? 1 : 0;
	satisfiable[417][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit417_0[i][0] ][ unit417_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit417_0[i][2] ][ unit417_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit417_0[i][4] ][ unit417_0[i][5] ] >0);
		X_contra = ( LargeX[417][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit417_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[417][1]=0; L[417][0]=1;}
			satisfiable[417][0]=satisfiable[417][0] & ((x[417] ^ 0) | (x[ unit417_0[i][0] ] ^ unit417_0[i][1]) |(x[ unit417_0[i][2] ] ^ unit417_0[i][3]));
			}
		if(X_contra>0) L[417][0]=2;
		}
	//Check all rules of unit[417][1]
	L[417][1] = LargeX[417][0]>0 ? 1 : 0;
	satisfiable[417][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit417_1[i][0] ][ unit417_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit417_1[i][2] ][ unit417_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit417_1[i][4] ][ unit417_1[i][5] ] >0);
		X_contra = ( LargeX[417][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit417_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[417][0]=0; L[417][1]=1;}
			satisfiable[417][1]=satisfiable[417][1] & ((x[417] ^ 1) | (x[ unit417_1[i][0] ] ^ unit417_1[i][1]) |(x[ unit417_1[i][2] ] ^ unit417_1[i][3]));
			}
		if(X_contra>0) L[417][1]=2;
		}
	//Check all rules of unit[418][0]
	L[418][0] = LargeX[418][1]>0 ? 1 : 0;
	satisfiable[418][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit418_0[i][0] ][ unit418_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit418_0[i][2] ][ unit418_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit418_0[i][4] ][ unit418_0[i][5] ] >0);
		X_contra = ( LargeX[418][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit418_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[418][1]=0; L[418][0]=1;}
			satisfiable[418][0]=satisfiable[418][0] & ((x[418] ^ 0) | (x[ unit418_0[i][0] ] ^ unit418_0[i][1]) |(x[ unit418_0[i][2] ] ^ unit418_0[i][3]));
			}
		if(X_contra>0) L[418][0]=2;
		}
	//Check all rules of unit[418][1]
	L[418][1] = LargeX[418][0]>0 ? 1 : 0;
	satisfiable[418][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit418_1[i][0] ][ unit418_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit418_1[i][2] ][ unit418_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit418_1[i][4] ][ unit418_1[i][5] ] >0);
		X_contra = ( LargeX[418][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit418_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[418][0]=0; L[418][1]=1;}
			satisfiable[418][1]=satisfiable[418][1] & ((x[418] ^ 1) | (x[ unit418_1[i][0] ] ^ unit418_1[i][1]) |(x[ unit418_1[i][2] ] ^ unit418_1[i][3]));
			}
		if(X_contra>0) L[418][1]=2;
		}
	//Check all rules of unit[419][0]
	L[419][0] = LargeX[419][1]>0 ? 1 : 0;
	satisfiable[419][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit419_0[i][0] ][ unit419_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit419_0[i][2] ][ unit419_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit419_0[i][4] ][ unit419_0[i][5] ] >0);
		X_contra = ( LargeX[419][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit419_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[419][1]=0; L[419][0]=1;}
			satisfiable[419][0]=satisfiable[419][0] & ((x[419] ^ 0) | (x[ unit419_0[i][0] ] ^ unit419_0[i][1]) |(x[ unit419_0[i][2] ] ^ unit419_0[i][3]));
			}
		if(X_contra>0) L[419][0]=2;
		}
	//Check all rules of unit[419][1]
	L[419][1] = LargeX[419][0]>0 ? 1 : 0;
	satisfiable[419][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit419_1[i][0] ][ unit419_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit419_1[i][2] ][ unit419_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit419_1[i][4] ][ unit419_1[i][5] ] >0);
		X_contra = ( LargeX[419][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit419_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[419][0]=0; L[419][1]=1;}
			satisfiable[419][1]=satisfiable[419][1] & ((x[419] ^ 1) | (x[ unit419_1[i][0] ] ^ unit419_1[i][1]) |(x[ unit419_1[i][2] ] ^ unit419_1[i][3]));
			}
		if(X_contra>0) L[419][1]=2;
		}
	//Check all rules of unit[420][0]
	L[420][0] = LargeX[420][1]>0 ? 1 : 0;
	satisfiable[420][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit420_0[i][0] ][ unit420_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit420_0[i][2] ][ unit420_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit420_0[i][4] ][ unit420_0[i][5] ] >0);
		X_contra = ( LargeX[420][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit420_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[420][1]=0; L[420][0]=1;}
			satisfiable[420][0]=satisfiable[420][0] & ((x[420] ^ 0) | (x[ unit420_0[i][0] ] ^ unit420_0[i][1]) |(x[ unit420_0[i][2] ] ^ unit420_0[i][3]));
			}
		if(X_contra>0) L[420][0]=2;
		}
	//Check all rules of unit[420][1]
	L[420][1] = LargeX[420][0]>0 ? 1 : 0;
	satisfiable[420][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit420_1[i][0] ][ unit420_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit420_1[i][2] ][ unit420_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit420_1[i][4] ][ unit420_1[i][5] ] >0);
		X_contra = ( LargeX[420][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit420_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[420][0]=0; L[420][1]=1;}
			satisfiable[420][1]=satisfiable[420][1] & ((x[420] ^ 1) | (x[ unit420_1[i][0] ] ^ unit420_1[i][1]) |(x[ unit420_1[i][2] ] ^ unit420_1[i][3]));
			}
		if(X_contra>0) L[420][1]=2;
		}
	//Check all rules of unit[421][0]
	L[421][0] = LargeX[421][1]>0 ? 1 : 0;
	satisfiable[421][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit421_0[i][0] ][ unit421_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit421_0[i][2] ][ unit421_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit421_0[i][4] ][ unit421_0[i][5] ] >0);
		X_contra = ( LargeX[421][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit421_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[421][1]=0; L[421][0]=1;}
			satisfiable[421][0]=satisfiable[421][0] & ((x[421] ^ 0) | (x[ unit421_0[i][0] ] ^ unit421_0[i][1]) |(x[ unit421_0[i][2] ] ^ unit421_0[i][3]));
			}
		if(X_contra>0) L[421][0]=2;
		}
	//Check all rules of unit[421][1]
	L[421][1] = LargeX[421][0]>0 ? 1 : 0;
	satisfiable[421][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit421_1[i][0] ][ unit421_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit421_1[i][2] ][ unit421_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit421_1[i][4] ][ unit421_1[i][5] ] >0);
		X_contra = ( LargeX[421][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit421_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[421][0]=0; L[421][1]=1;}
			satisfiable[421][1]=satisfiable[421][1] & ((x[421] ^ 1) | (x[ unit421_1[i][0] ] ^ unit421_1[i][1]) |(x[ unit421_1[i][2] ] ^ unit421_1[i][3]));
			}
		if(X_contra>0) L[421][1]=2;
		}
	//Check all rules of unit[422][0]
	L[422][0] = LargeX[422][1]>0 ? 1 : 0;
	satisfiable[422][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit422_0[i][0] ][ unit422_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit422_0[i][2] ][ unit422_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit422_0[i][4] ][ unit422_0[i][5] ] >0);
		X_contra = ( LargeX[422][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit422_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[422][1]=0; L[422][0]=1;}
			satisfiable[422][0]=satisfiable[422][0] & ((x[422] ^ 0) | (x[ unit422_0[i][0] ] ^ unit422_0[i][1]) |(x[ unit422_0[i][2] ] ^ unit422_0[i][3]));
			}
		if(X_contra>0) L[422][0]=2;
		}
	//Check all rules of unit[422][1]
	L[422][1] = LargeX[422][0]>0 ? 1 : 0;
	satisfiable[422][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit422_1[i][0] ][ unit422_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit422_1[i][2] ][ unit422_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit422_1[i][4] ][ unit422_1[i][5] ] >0);
		X_contra = ( LargeX[422][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit422_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[422][0]=0; L[422][1]=1;}
			satisfiable[422][1]=satisfiable[422][1] & ((x[422] ^ 1) | (x[ unit422_1[i][0] ] ^ unit422_1[i][1]) |(x[ unit422_1[i][2] ] ^ unit422_1[i][3]));
			}
		if(X_contra>0) L[422][1]=2;
		}
	//Check all rules of unit[423][0]
	L[423][0] = LargeX[423][1]>0 ? 1 : 0;
	satisfiable[423][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit423_0[i][0] ][ unit423_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit423_0[i][2] ][ unit423_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit423_0[i][4] ][ unit423_0[i][5] ] >0);
		X_contra = ( LargeX[423][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit423_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[423][1]=0; L[423][0]=1;}
			satisfiable[423][0]=satisfiable[423][0] & ((x[423] ^ 0) | (x[ unit423_0[i][0] ] ^ unit423_0[i][1]) |(x[ unit423_0[i][2] ] ^ unit423_0[i][3]));
			}
		if(X_contra>0) L[423][0]=2;
		}
	//Check all rules of unit[423][1]
	L[423][1] = LargeX[423][0]>0 ? 1 : 0;
	satisfiable[423][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit423_1[i][0] ][ unit423_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit423_1[i][2] ][ unit423_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit423_1[i][4] ][ unit423_1[i][5] ] >0);
		X_contra = ( LargeX[423][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit423_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[423][0]=0; L[423][1]=1;}
			satisfiable[423][1]=satisfiable[423][1] & ((x[423] ^ 1) | (x[ unit423_1[i][0] ] ^ unit423_1[i][1]) |(x[ unit423_1[i][2] ] ^ unit423_1[i][3]));
			}
		if(X_contra>0) L[423][1]=2;
		}
	//Check all rules of unit[424][0]
	L[424][0] = LargeX[424][1]>0 ? 1 : 0;
	satisfiable[424][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit424_0[i][0] ][ unit424_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit424_0[i][2] ][ unit424_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit424_0[i][4] ][ unit424_0[i][5] ] >0);
		X_contra = ( LargeX[424][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit424_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[424][1]=0; L[424][0]=1;}
			satisfiable[424][0]=satisfiable[424][0] & ((x[424] ^ 0) | (x[ unit424_0[i][0] ] ^ unit424_0[i][1]) |(x[ unit424_0[i][2] ] ^ unit424_0[i][3]));
			}
		if(X_contra>0) L[424][0]=2;
		}
	//Check all rules of unit[424][1]
	L[424][1] = LargeX[424][0]>0 ? 1 : 0;
	satisfiable[424][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit424_1[i][0] ][ unit424_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit424_1[i][2] ][ unit424_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit424_1[i][4] ][ unit424_1[i][5] ] >0);
		X_contra = ( LargeX[424][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit424_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[424][0]=0; L[424][1]=1;}
			satisfiable[424][1]=satisfiable[424][1] & ((x[424] ^ 1) | (x[ unit424_1[i][0] ] ^ unit424_1[i][1]) |(x[ unit424_1[i][2] ] ^ unit424_1[i][3]));
			}
		if(X_contra>0) L[424][1]=2;
		}
	//Check all rules of unit[425][0]
	L[425][0] = LargeX[425][1]>0 ? 1 : 0;
	satisfiable[425][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit425_0[i][0] ][ unit425_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit425_0[i][2] ][ unit425_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit425_0[i][4] ][ unit425_0[i][5] ] >0);
		X_contra = ( LargeX[425][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit425_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[425][1]=0; L[425][0]=1;}
			satisfiable[425][0]=satisfiable[425][0] & ((x[425] ^ 0) | (x[ unit425_0[i][0] ] ^ unit425_0[i][1]) |(x[ unit425_0[i][2] ] ^ unit425_0[i][3]));
			}
		if(X_contra>0) L[425][0]=2;
		}
	//Check all rules of unit[425][1]
	L[425][1] = LargeX[425][0]>0 ? 1 : 0;
	satisfiable[425][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit425_1[i][0] ][ unit425_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit425_1[i][2] ][ unit425_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit425_1[i][4] ][ unit425_1[i][5] ] >0);
		X_contra = ( LargeX[425][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit425_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[425][0]=0; L[425][1]=1;}
			satisfiable[425][1]=satisfiable[425][1] & ((x[425] ^ 1) | (x[ unit425_1[i][0] ] ^ unit425_1[i][1]) |(x[ unit425_1[i][2] ] ^ unit425_1[i][3]));
			}
		if(X_contra>0) L[425][1]=2;
		}
	//Check all rules of unit[426][0]
	L[426][0] = LargeX[426][1]>0 ? 1 : 0;
	satisfiable[426][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit426_0[i][0] ][ unit426_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit426_0[i][2] ][ unit426_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit426_0[i][4] ][ unit426_0[i][5] ] >0);
		X_contra = ( LargeX[426][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit426_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[426][1]=0; L[426][0]=1;}
			satisfiable[426][0]=satisfiable[426][0] & ((x[426] ^ 0) | (x[ unit426_0[i][0] ] ^ unit426_0[i][1]) |(x[ unit426_0[i][2] ] ^ unit426_0[i][3]));
			}
		if(X_contra>0) L[426][0]=2;
		}
	//Check all rules of unit[426][1]
	L[426][1] = LargeX[426][0]>0 ? 1 : 0;
	satisfiable[426][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit426_1[i][0] ][ unit426_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit426_1[i][2] ][ unit426_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit426_1[i][4] ][ unit426_1[i][5] ] >0);
		X_contra = ( LargeX[426][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit426_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[426][0]=0; L[426][1]=1;}
			satisfiable[426][1]=satisfiable[426][1] & ((x[426] ^ 1) | (x[ unit426_1[i][0] ] ^ unit426_1[i][1]) |(x[ unit426_1[i][2] ] ^ unit426_1[i][3]));
			}
		if(X_contra>0) L[426][1]=2;
		}
	//Check all rules of unit[427][0]
	L[427][0] = LargeX[427][1]>0 ? 1 : 0;
	satisfiable[427][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit427_0[i][0] ][ unit427_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit427_0[i][2] ][ unit427_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit427_0[i][4] ][ unit427_0[i][5] ] >0);
		X_contra = ( LargeX[427][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit427_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[427][1]=0; L[427][0]=1;}
			satisfiable[427][0]=satisfiable[427][0] & ((x[427] ^ 0) | (x[ unit427_0[i][0] ] ^ unit427_0[i][1]) |(x[ unit427_0[i][2] ] ^ unit427_0[i][3]));
			}
		if(X_contra>0) L[427][0]=2;
		}
	//Check all rules of unit[427][1]
	L[427][1] = LargeX[427][0]>0 ? 1 : 0;
	satisfiable[427][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit427_1[i][0] ][ unit427_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit427_1[i][2] ][ unit427_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit427_1[i][4] ][ unit427_1[i][5] ] >0);
		X_contra = ( LargeX[427][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit427_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[427][0]=0; L[427][1]=1;}
			satisfiable[427][1]=satisfiable[427][1] & ((x[427] ^ 1) | (x[ unit427_1[i][0] ] ^ unit427_1[i][1]) |(x[ unit427_1[i][2] ] ^ unit427_1[i][3]));
			}
		if(X_contra>0) L[427][1]=2;
		}
	//Check all rules of unit[428][0]
	L[428][0] = LargeX[428][1]>0 ? 1 : 0;
	satisfiable[428][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit428_0[i][0] ][ unit428_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit428_0[i][2] ][ unit428_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit428_0[i][4] ][ unit428_0[i][5] ] >0);
		X_contra = ( LargeX[428][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit428_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[428][1]=0; L[428][0]=1;}
			satisfiable[428][0]=satisfiable[428][0] & ((x[428] ^ 0) | (x[ unit428_0[i][0] ] ^ unit428_0[i][1]) |(x[ unit428_0[i][2] ] ^ unit428_0[i][3]));
			}
		if(X_contra>0) L[428][0]=2;
		}
	//Check all rules of unit[428][1]
	L[428][1] = LargeX[428][0]>0 ? 1 : 0;
	satisfiable[428][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit428_1[i][0] ][ unit428_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit428_1[i][2] ][ unit428_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit428_1[i][4] ][ unit428_1[i][5] ] >0);
		X_contra = ( LargeX[428][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit428_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[428][0]=0; L[428][1]=1;}
			satisfiable[428][1]=satisfiable[428][1] & ((x[428] ^ 1) | (x[ unit428_1[i][0] ] ^ unit428_1[i][1]) |(x[ unit428_1[i][2] ] ^ unit428_1[i][3]));
			}
		if(X_contra>0) L[428][1]=2;
		}
	//Check all rules of unit[429][0]
	L[429][0] = LargeX[429][1]>0 ? 1 : 0;
	satisfiable[429][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit429_0[i][0] ][ unit429_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit429_0[i][2] ][ unit429_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit429_0[i][4] ][ unit429_0[i][5] ] >0);
		X_contra = ( LargeX[429][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit429_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[429][1]=0; L[429][0]=1;}
			satisfiable[429][0]=satisfiable[429][0] & ((x[429] ^ 0) | (x[ unit429_0[i][0] ] ^ unit429_0[i][1]) |(x[ unit429_0[i][2] ] ^ unit429_0[i][3]));
			}
		if(X_contra>0) L[429][0]=2;
		}
	//Check all rules of unit[429][1]
	L[429][1] = LargeX[429][0]>0 ? 1 : 0;
	satisfiable[429][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit429_1[i][0] ][ unit429_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit429_1[i][2] ][ unit429_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit429_1[i][4] ][ unit429_1[i][5] ] >0);
		X_contra = ( LargeX[429][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit429_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[429][0]=0; L[429][1]=1;}
			satisfiable[429][1]=satisfiable[429][1] & ((x[429] ^ 1) | (x[ unit429_1[i][0] ] ^ unit429_1[i][1]) |(x[ unit429_1[i][2] ] ^ unit429_1[i][3]));
			}
		if(X_contra>0) L[429][1]=2;
		}
	//Check all rules of unit[430][0]
	L[430][0] = LargeX[430][1]>0 ? 1 : 0;
	satisfiable[430][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit430_0[i][0] ][ unit430_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit430_0[i][2] ][ unit430_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit430_0[i][4] ][ unit430_0[i][5] ] >0);
		X_contra = ( LargeX[430][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit430_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[430][1]=0; L[430][0]=1;}
			satisfiable[430][0]=satisfiable[430][0] & ((x[430] ^ 0) | (x[ unit430_0[i][0] ] ^ unit430_0[i][1]) |(x[ unit430_0[i][2] ] ^ unit430_0[i][3]));
			}
		if(X_contra>0) L[430][0]=2;
		}
	//Check all rules of unit[430][1]
	L[430][1] = LargeX[430][0]>0 ? 1 : 0;
	satisfiable[430][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit430_1[i][0] ][ unit430_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit430_1[i][2] ][ unit430_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit430_1[i][4] ][ unit430_1[i][5] ] >0);
		X_contra = ( LargeX[430][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit430_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[430][0]=0; L[430][1]=1;}
			satisfiable[430][1]=satisfiable[430][1] & ((x[430] ^ 1) | (x[ unit430_1[i][0] ] ^ unit430_1[i][1]) |(x[ unit430_1[i][2] ] ^ unit430_1[i][3]));
			}
		if(X_contra>0) L[430][1]=2;
		}
	//Check all rules of unit[431][0]
	L[431][0] = LargeX[431][1]>0 ? 1 : 0;
	satisfiable[431][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit431_0[i][0] ][ unit431_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit431_0[i][2] ][ unit431_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit431_0[i][4] ][ unit431_0[i][5] ] >0);
		X_contra = ( LargeX[431][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit431_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[431][1]=0; L[431][0]=1;}
			satisfiable[431][0]=satisfiable[431][0] & ((x[431] ^ 0) | (x[ unit431_0[i][0] ] ^ unit431_0[i][1]) |(x[ unit431_0[i][2] ] ^ unit431_0[i][3]));
			}
		if(X_contra>0) L[431][0]=2;
		}
	//Check all rules of unit[431][1]
	L[431][1] = LargeX[431][0]>0 ? 1 : 0;
	satisfiable[431][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit431_1[i][0] ][ unit431_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit431_1[i][2] ][ unit431_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit431_1[i][4] ][ unit431_1[i][5] ] >0);
		X_contra = ( LargeX[431][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit431_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[431][0]=0; L[431][1]=1;}
			satisfiable[431][1]=satisfiable[431][1] & ((x[431] ^ 1) | (x[ unit431_1[i][0] ] ^ unit431_1[i][1]) |(x[ unit431_1[i][2] ] ^ unit431_1[i][3]));
			}
		if(X_contra>0) L[431][1]=2;
		}
	//Check all rules of unit[432][0]
	L[432][0] = LargeX[432][1]>0 ? 1 : 0;
	satisfiable[432][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit432_0[i][0] ][ unit432_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit432_0[i][2] ][ unit432_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit432_0[i][4] ][ unit432_0[i][5] ] >0);
		X_contra = ( LargeX[432][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit432_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[432][1]=0; L[432][0]=1;}
			satisfiable[432][0]=satisfiable[432][0] & ((x[432] ^ 0) | (x[ unit432_0[i][0] ] ^ unit432_0[i][1]) |(x[ unit432_0[i][2] ] ^ unit432_0[i][3]));
			}
		if(X_contra>0) L[432][0]=2;
		}
	//Check all rules of unit[432][1]
	L[432][1] = LargeX[432][0]>0 ? 1 : 0;
	satisfiable[432][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit432_1[i][0] ][ unit432_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit432_1[i][2] ][ unit432_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit432_1[i][4] ][ unit432_1[i][5] ] >0);
		X_contra = ( LargeX[432][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit432_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[432][0]=0; L[432][1]=1;}
			satisfiable[432][1]=satisfiable[432][1] & ((x[432] ^ 1) | (x[ unit432_1[i][0] ] ^ unit432_1[i][1]) |(x[ unit432_1[i][2] ] ^ unit432_1[i][3]));
			}
		if(X_contra>0) L[432][1]=2;
		}
	//Check all rules of unit[433][0]
	L[433][0] = LargeX[433][1]>0 ? 1 : 0;
	satisfiable[433][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit433_0[i][0] ][ unit433_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit433_0[i][2] ][ unit433_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit433_0[i][4] ][ unit433_0[i][5] ] >0);
		X_contra = ( LargeX[433][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit433_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[433][1]=0; L[433][0]=1;}
			satisfiable[433][0]=satisfiable[433][0] & ((x[433] ^ 0) | (x[ unit433_0[i][0] ] ^ unit433_0[i][1]) |(x[ unit433_0[i][2] ] ^ unit433_0[i][3]));
			}
		if(X_contra>0) L[433][0]=2;
		}
	//Check all rules of unit[433][1]
	L[433][1] = LargeX[433][0]>0 ? 1 : 0;
	satisfiable[433][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit433_1[i][0] ][ unit433_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit433_1[i][2] ][ unit433_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit433_1[i][4] ][ unit433_1[i][5] ] >0);
		X_contra = ( LargeX[433][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit433_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[433][0]=0; L[433][1]=1;}
			satisfiable[433][1]=satisfiable[433][1] & ((x[433] ^ 1) | (x[ unit433_1[i][0] ] ^ unit433_1[i][1]) |(x[ unit433_1[i][2] ] ^ unit433_1[i][3]));
			}
		if(X_contra>0) L[433][1]=2;
		}
	//Check all rules of unit[434][0]
	L[434][0] = LargeX[434][1]>0 ? 1 : 0;
	satisfiable[434][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit434_0[i][0] ][ unit434_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit434_0[i][2] ][ unit434_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit434_0[i][4] ][ unit434_0[i][5] ] >0);
		X_contra = ( LargeX[434][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit434_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[434][1]=0; L[434][0]=1;}
			satisfiable[434][0]=satisfiable[434][0] & ((x[434] ^ 0) | (x[ unit434_0[i][0] ] ^ unit434_0[i][1]) |(x[ unit434_0[i][2] ] ^ unit434_0[i][3]));
			}
		if(X_contra>0) L[434][0]=2;
		}
	//Check all rules of unit[434][1]
	L[434][1] = LargeX[434][0]>0 ? 1 : 0;
	satisfiable[434][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit434_1[i][0] ][ unit434_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit434_1[i][2] ][ unit434_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit434_1[i][4] ][ unit434_1[i][5] ] >0);
		X_contra = ( LargeX[434][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit434_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[434][0]=0; L[434][1]=1;}
			satisfiable[434][1]=satisfiable[434][1] & ((x[434] ^ 1) | (x[ unit434_1[i][0] ] ^ unit434_1[i][1]) |(x[ unit434_1[i][2] ] ^ unit434_1[i][3]));
			}
		if(X_contra>0) L[434][1]=2;
		}
	//Check all rules of unit[435][0]
	L[435][0] = LargeX[435][1]>0 ? 1 : 0;
	satisfiable[435][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit435_0[i][0] ][ unit435_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit435_0[i][2] ][ unit435_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit435_0[i][4] ][ unit435_0[i][5] ] >0);
		X_contra = ( LargeX[435][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit435_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[435][1]=0; L[435][0]=1;}
			satisfiable[435][0]=satisfiable[435][0] & ((x[435] ^ 0) | (x[ unit435_0[i][0] ] ^ unit435_0[i][1]) |(x[ unit435_0[i][2] ] ^ unit435_0[i][3]));
			}
		if(X_contra>0) L[435][0]=2;
		}
	//Check all rules of unit[435][1]
	L[435][1] = LargeX[435][0]>0 ? 1 : 0;
	satisfiable[435][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit435_1[i][0] ][ unit435_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit435_1[i][2] ][ unit435_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit435_1[i][4] ][ unit435_1[i][5] ] >0);
		X_contra = ( LargeX[435][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit435_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[435][0]=0; L[435][1]=1;}
			satisfiable[435][1]=satisfiable[435][1] & ((x[435] ^ 1) | (x[ unit435_1[i][0] ] ^ unit435_1[i][1]) |(x[ unit435_1[i][2] ] ^ unit435_1[i][3]));
			}
		if(X_contra>0) L[435][1]=2;
		}
	//Check all rules of unit[436][0]
	L[436][0] = LargeX[436][1]>0 ? 1 : 0;
	satisfiable[436][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit436_0[i][0] ][ unit436_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit436_0[i][2] ][ unit436_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit436_0[i][4] ][ unit436_0[i][5] ] >0);
		X_contra = ( LargeX[436][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit436_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[436][1]=0; L[436][0]=1;}
			satisfiable[436][0]=satisfiable[436][0] & ((x[436] ^ 0) | (x[ unit436_0[i][0] ] ^ unit436_0[i][1]) |(x[ unit436_0[i][2] ] ^ unit436_0[i][3]));
			}
		if(X_contra>0) L[436][0]=2;
		}
	//Check all rules of unit[436][1]
	L[436][1] = LargeX[436][0]>0 ? 1 : 0;
	satisfiable[436][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit436_1[i][0] ][ unit436_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit436_1[i][2] ][ unit436_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit436_1[i][4] ][ unit436_1[i][5] ] >0);
		X_contra = ( LargeX[436][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit436_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[436][0]=0; L[436][1]=1;}
			satisfiable[436][1]=satisfiable[436][1] & ((x[436] ^ 1) | (x[ unit436_1[i][0] ] ^ unit436_1[i][1]) |(x[ unit436_1[i][2] ] ^ unit436_1[i][3]));
			}
		if(X_contra>0) L[436][1]=2;
		}
	//Check all rules of unit[437][0]
	L[437][0] = LargeX[437][1]>0 ? 1 : 0;
	satisfiable[437][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit437_0[i][0] ][ unit437_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit437_0[i][2] ][ unit437_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit437_0[i][4] ][ unit437_0[i][5] ] >0);
		X_contra = ( LargeX[437][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit437_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[437][1]=0; L[437][0]=1;}
			satisfiable[437][0]=satisfiable[437][0] & ((x[437] ^ 0) | (x[ unit437_0[i][0] ] ^ unit437_0[i][1]) |(x[ unit437_0[i][2] ] ^ unit437_0[i][3]));
			}
		if(X_contra>0) L[437][0]=2;
		}
	//Check all rules of unit[437][1]
	L[437][1] = LargeX[437][0]>0 ? 1 : 0;
	satisfiable[437][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit437_1[i][0] ][ unit437_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit437_1[i][2] ][ unit437_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit437_1[i][4] ][ unit437_1[i][5] ] >0);
		X_contra = ( LargeX[437][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit437_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[437][0]=0; L[437][1]=1;}
			satisfiable[437][1]=satisfiable[437][1] & ((x[437] ^ 1) | (x[ unit437_1[i][0] ] ^ unit437_1[i][1]) |(x[ unit437_1[i][2] ] ^ unit437_1[i][3]));
			}
		if(X_contra>0) L[437][1]=2;
		}
	//Check all rules of unit[438][0]
	L[438][0] = LargeX[438][1]>0 ? 1 : 0;
	satisfiable[438][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit438_0[i][0] ][ unit438_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit438_0[i][2] ][ unit438_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit438_0[i][4] ][ unit438_0[i][5] ] >0);
		X_contra = ( LargeX[438][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit438_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[438][1]=0; L[438][0]=1;}
			satisfiable[438][0]=satisfiable[438][0] & ((x[438] ^ 0) | (x[ unit438_0[i][0] ] ^ unit438_0[i][1]) |(x[ unit438_0[i][2] ] ^ unit438_0[i][3]));
			}
		if(X_contra>0) L[438][0]=2;
		}
	//Check all rules of unit[438][1]
	L[438][1] = LargeX[438][0]>0 ? 1 : 0;
	satisfiable[438][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit438_1[i][0] ][ unit438_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit438_1[i][2] ][ unit438_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit438_1[i][4] ][ unit438_1[i][5] ] >0);
		X_contra = ( LargeX[438][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit438_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[438][0]=0; L[438][1]=1;}
			satisfiable[438][1]=satisfiable[438][1] & ((x[438] ^ 1) | (x[ unit438_1[i][0] ] ^ unit438_1[i][1]) |(x[ unit438_1[i][2] ] ^ unit438_1[i][3]));
			}
		if(X_contra>0) L[438][1]=2;
		}
	//Check all rules of unit[439][0]
	L[439][0] = LargeX[439][1]>0 ? 1 : 0;
	satisfiable[439][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit439_0[i][0] ][ unit439_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit439_0[i][2] ][ unit439_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit439_0[i][4] ][ unit439_0[i][5] ] >0);
		X_contra = ( LargeX[439][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit439_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[439][1]=0; L[439][0]=1;}
			satisfiable[439][0]=satisfiable[439][0] & ((x[439] ^ 0) | (x[ unit439_0[i][0] ] ^ unit439_0[i][1]) |(x[ unit439_0[i][2] ] ^ unit439_0[i][3]));
			}
		if(X_contra>0) L[439][0]=2;
		}
	//Check all rules of unit[439][1]
	L[439][1] = LargeX[439][0]>0 ? 1 : 0;
	satisfiable[439][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit439_1[i][0] ][ unit439_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit439_1[i][2] ][ unit439_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit439_1[i][4] ][ unit439_1[i][5] ] >0);
		X_contra = ( LargeX[439][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit439_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[439][0]=0; L[439][1]=1;}
			satisfiable[439][1]=satisfiable[439][1] & ((x[439] ^ 1) | (x[ unit439_1[i][0] ] ^ unit439_1[i][1]) |(x[ unit439_1[i][2] ] ^ unit439_1[i][3]));
			}
		if(X_contra>0) L[439][1]=2;
		}
	//Check all rules of unit[440][0]
	L[440][0] = LargeX[440][1]>0 ? 1 : 0;
	satisfiable[440][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit440_0[i][0] ][ unit440_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit440_0[i][2] ][ unit440_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit440_0[i][4] ][ unit440_0[i][5] ] >0);
		X_contra = ( LargeX[440][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit440_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[440][1]=0; L[440][0]=1;}
			satisfiable[440][0]=satisfiable[440][0] & ((x[440] ^ 0) | (x[ unit440_0[i][0] ] ^ unit440_0[i][1]) |(x[ unit440_0[i][2] ] ^ unit440_0[i][3]));
			}
		if(X_contra>0) L[440][0]=2;
		}
	//Check all rules of unit[440][1]
	L[440][1] = LargeX[440][0]>0 ? 1 : 0;
	satisfiable[440][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit440_1[i][0] ][ unit440_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit440_1[i][2] ][ unit440_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit440_1[i][4] ][ unit440_1[i][5] ] >0);
		X_contra = ( LargeX[440][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit440_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[440][0]=0; L[440][1]=1;}
			satisfiable[440][1]=satisfiable[440][1] & ((x[440] ^ 1) | (x[ unit440_1[i][0] ] ^ unit440_1[i][1]) |(x[ unit440_1[i][2] ] ^ unit440_1[i][3]));
			}
		if(X_contra>0) L[440][1]=2;
		}
	//Check all rules of unit[441][0]
	L[441][0] = LargeX[441][1]>0 ? 1 : 0;
	satisfiable[441][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit441_0[i][0] ][ unit441_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit441_0[i][2] ][ unit441_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit441_0[i][4] ][ unit441_0[i][5] ] >0);
		X_contra = ( LargeX[441][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit441_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[441][1]=0; L[441][0]=1;}
			satisfiable[441][0]=satisfiable[441][0] & ((x[441] ^ 0) | (x[ unit441_0[i][0] ] ^ unit441_0[i][1]) |(x[ unit441_0[i][2] ] ^ unit441_0[i][3]));
			}
		if(X_contra>0) L[441][0]=2;
		}
	//Check all rules of unit[441][1]
	L[441][1] = LargeX[441][0]>0 ? 1 : 0;
	satisfiable[441][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit441_1[i][0] ][ unit441_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit441_1[i][2] ][ unit441_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit441_1[i][4] ][ unit441_1[i][5] ] >0);
		X_contra = ( LargeX[441][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit441_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[441][0]=0; L[441][1]=1;}
			satisfiable[441][1]=satisfiable[441][1] & ((x[441] ^ 1) | (x[ unit441_1[i][0] ] ^ unit441_1[i][1]) |(x[ unit441_1[i][2] ] ^ unit441_1[i][3]));
			}
		if(X_contra>0) L[441][1]=2;
		}
	//Check all rules of unit[442][0]
	L[442][0] = LargeX[442][1]>0 ? 1 : 0;
	satisfiable[442][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit442_0[i][0] ][ unit442_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit442_0[i][2] ][ unit442_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit442_0[i][4] ][ unit442_0[i][5] ] >0);
		X_contra = ( LargeX[442][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit442_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[442][1]=0; L[442][0]=1;}
			satisfiable[442][0]=satisfiable[442][0] & ((x[442] ^ 0) | (x[ unit442_0[i][0] ] ^ unit442_0[i][1]) |(x[ unit442_0[i][2] ] ^ unit442_0[i][3]));
			}
		if(X_contra>0) L[442][0]=2;
		}
	//Check all rules of unit[442][1]
	L[442][1] = LargeX[442][0]>0 ? 1 : 0;
	satisfiable[442][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit442_1[i][0] ][ unit442_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit442_1[i][2] ][ unit442_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit442_1[i][4] ][ unit442_1[i][5] ] >0);
		X_contra = ( LargeX[442][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit442_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[442][0]=0; L[442][1]=1;}
			satisfiable[442][1]=satisfiable[442][1] & ((x[442] ^ 1) | (x[ unit442_1[i][0] ] ^ unit442_1[i][1]) |(x[ unit442_1[i][2] ] ^ unit442_1[i][3]));
			}
		if(X_contra>0) L[442][1]=2;
		}
	//Check all rules of unit[443][0]
	L[443][0] = LargeX[443][1]>0 ? 1 : 0;
	satisfiable[443][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit443_0[i][0] ][ unit443_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit443_0[i][2] ][ unit443_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit443_0[i][4] ][ unit443_0[i][5] ] >0);
		X_contra = ( LargeX[443][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit443_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[443][1]=0; L[443][0]=1;}
			satisfiable[443][0]=satisfiable[443][0] & ((x[443] ^ 0) | (x[ unit443_0[i][0] ] ^ unit443_0[i][1]) |(x[ unit443_0[i][2] ] ^ unit443_0[i][3]));
			}
		if(X_contra>0) L[443][0]=2;
		}
	//Check all rules of unit[443][1]
	L[443][1] = LargeX[443][0]>0 ? 1 : 0;
	satisfiable[443][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit443_1[i][0] ][ unit443_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit443_1[i][2] ][ unit443_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit443_1[i][4] ][ unit443_1[i][5] ] >0);
		X_contra = ( LargeX[443][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit443_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[443][0]=0; L[443][1]=1;}
			satisfiable[443][1]=satisfiable[443][1] & ((x[443] ^ 1) | (x[ unit443_1[i][0] ] ^ unit443_1[i][1]) |(x[ unit443_1[i][2] ] ^ unit443_1[i][3]));
			}
		if(X_contra>0) L[443][1]=2;
		}
	//Check all rules of unit[444][0]
	L[444][0] = LargeX[444][1]>0 ? 1 : 0;
	satisfiable[444][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit444_0[i][0] ][ unit444_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit444_0[i][2] ][ unit444_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit444_0[i][4] ][ unit444_0[i][5] ] >0);
		X_contra = ( LargeX[444][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit444_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[444][1]=0; L[444][0]=1;}
			satisfiable[444][0]=satisfiable[444][0] & ((x[444] ^ 0) | (x[ unit444_0[i][0] ] ^ unit444_0[i][1]) |(x[ unit444_0[i][2] ] ^ unit444_0[i][3]));
			}
		if(X_contra>0) L[444][0]=2;
		}
	//Check all rules of unit[444][1]
	L[444][1] = LargeX[444][0]>0 ? 1 : 0;
	satisfiable[444][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit444_1[i][0] ][ unit444_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit444_1[i][2] ][ unit444_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit444_1[i][4] ][ unit444_1[i][5] ] >0);
		X_contra = ( LargeX[444][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit444_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[444][0]=0; L[444][1]=1;}
			satisfiable[444][1]=satisfiable[444][1] & ((x[444] ^ 1) | (x[ unit444_1[i][0] ] ^ unit444_1[i][1]) |(x[ unit444_1[i][2] ] ^ unit444_1[i][3]));
			}
		if(X_contra>0) L[444][1]=2;
		}
	//Check all rules of unit[445][0]
	L[445][0] = LargeX[445][1]>0 ? 1 : 0;
	satisfiable[445][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit445_0[i][0] ][ unit445_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit445_0[i][2] ][ unit445_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit445_0[i][4] ][ unit445_0[i][5] ] >0);
		X_contra = ( LargeX[445][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit445_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[445][1]=0; L[445][0]=1;}
			satisfiable[445][0]=satisfiable[445][0] & ((x[445] ^ 0) | (x[ unit445_0[i][0] ] ^ unit445_0[i][1]) |(x[ unit445_0[i][2] ] ^ unit445_0[i][3]));
			}
		if(X_contra>0) L[445][0]=2;
		}
	//Check all rules of unit[445][1]
	L[445][1] = LargeX[445][0]>0 ? 1 : 0;
	satisfiable[445][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit445_1[i][0] ][ unit445_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit445_1[i][2] ][ unit445_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit445_1[i][4] ][ unit445_1[i][5] ] >0);
		X_contra = ( LargeX[445][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit445_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[445][0]=0; L[445][1]=1;}
			satisfiable[445][1]=satisfiable[445][1] & ((x[445] ^ 1) | (x[ unit445_1[i][0] ] ^ unit445_1[i][1]) |(x[ unit445_1[i][2] ] ^ unit445_1[i][3]));
			}
		if(X_contra>0) L[445][1]=2;
		}
	//Check all rules of unit[446][0]
	L[446][0] = LargeX[446][1]>0 ? 1 : 0;
	satisfiable[446][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit446_0[i][0] ][ unit446_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit446_0[i][2] ][ unit446_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit446_0[i][4] ][ unit446_0[i][5] ] >0);
		X_contra = ( LargeX[446][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit446_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[446][1]=0; L[446][0]=1;}
			satisfiable[446][0]=satisfiable[446][0] & ((x[446] ^ 0) | (x[ unit446_0[i][0] ] ^ unit446_0[i][1]) |(x[ unit446_0[i][2] ] ^ unit446_0[i][3]));
			}
		if(X_contra>0) L[446][0]=2;
		}
	//Check all rules of unit[446][1]
	L[446][1] = LargeX[446][0]>0 ? 1 : 0;
	satisfiable[446][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit446_1[i][0] ][ unit446_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit446_1[i][2] ][ unit446_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit446_1[i][4] ][ unit446_1[i][5] ] >0);
		X_contra = ( LargeX[446][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit446_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[446][0]=0; L[446][1]=1;}
			satisfiable[446][1]=satisfiable[446][1] & ((x[446] ^ 1) | (x[ unit446_1[i][0] ] ^ unit446_1[i][1]) |(x[ unit446_1[i][2] ] ^ unit446_1[i][3]));
			}
		if(X_contra>0) L[446][1]=2;
		}
	//Check all rules of unit[447][0]
	L[447][0] = LargeX[447][1]>0 ? 1 : 0;
	satisfiable[447][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit447_0[i][0] ][ unit447_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit447_0[i][2] ][ unit447_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit447_0[i][4] ][ unit447_0[i][5] ] >0);
		X_contra = ( LargeX[447][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit447_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[447][1]=0; L[447][0]=1;}
			satisfiable[447][0]=satisfiable[447][0] & ((x[447] ^ 0) | (x[ unit447_0[i][0] ] ^ unit447_0[i][1]) |(x[ unit447_0[i][2] ] ^ unit447_0[i][3]));
			}
		if(X_contra>0) L[447][0]=2;
		}
	//Check all rules of unit[447][1]
	L[447][1] = LargeX[447][0]>0 ? 1 : 0;
	satisfiable[447][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit447_1[i][0] ][ unit447_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit447_1[i][2] ][ unit447_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit447_1[i][4] ][ unit447_1[i][5] ] >0);
		X_contra = ( LargeX[447][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit447_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[447][0]=0; L[447][1]=1;}
			satisfiable[447][1]=satisfiable[447][1] & ((x[447] ^ 1) | (x[ unit447_1[i][0] ] ^ unit447_1[i][1]) |(x[ unit447_1[i][2] ] ^ unit447_1[i][3]));
			}
		if(X_contra>0) L[447][1]=2;
		}
	//Check all rules of unit[448][0]
	L[448][0] = LargeX[448][1]>0 ? 1 : 0;
	satisfiable[448][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit448_0[i][0] ][ unit448_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit448_0[i][2] ][ unit448_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit448_0[i][4] ][ unit448_0[i][5] ] >0);
		X_contra = ( LargeX[448][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit448_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[448][1]=0; L[448][0]=1;}
			satisfiable[448][0]=satisfiable[448][0] & ((x[448] ^ 0) | (x[ unit448_0[i][0] ] ^ unit448_0[i][1]) |(x[ unit448_0[i][2] ] ^ unit448_0[i][3]));
			}
		if(X_contra>0) L[448][0]=2;
		}
	//Check all rules of unit[448][1]
	L[448][1] = LargeX[448][0]>0 ? 1 : 0;
	satisfiable[448][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit448_1[i][0] ][ unit448_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit448_1[i][2] ][ unit448_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit448_1[i][4] ][ unit448_1[i][5] ] >0);
		X_contra = ( LargeX[448][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit448_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[448][0]=0; L[448][1]=1;}
			satisfiable[448][1]=satisfiable[448][1] & ((x[448] ^ 1) | (x[ unit448_1[i][0] ] ^ unit448_1[i][1]) |(x[ unit448_1[i][2] ] ^ unit448_1[i][3]));
			}
		if(X_contra>0) L[448][1]=2;
		}
	//Check all rules of unit[449][0]
	L[449][0] = LargeX[449][1]>0 ? 1 : 0;
	satisfiable[449][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit449_0[i][0] ][ unit449_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit449_0[i][2] ][ unit449_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit449_0[i][4] ][ unit449_0[i][5] ] >0);
		X_contra = ( LargeX[449][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit449_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[449][1]=0; L[449][0]=1;}
			satisfiable[449][0]=satisfiable[449][0] & ((x[449] ^ 0) | (x[ unit449_0[i][0] ] ^ unit449_0[i][1]) |(x[ unit449_0[i][2] ] ^ unit449_0[i][3]));
			}
		if(X_contra>0) L[449][0]=2;
		}
	//Check all rules of unit[449][1]
	L[449][1] = LargeX[449][0]>0 ? 1 : 0;
	satisfiable[449][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit449_1[i][0] ][ unit449_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit449_1[i][2] ][ unit449_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit449_1[i][4] ][ unit449_1[i][5] ] >0);
		X_contra = ( LargeX[449][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit449_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[449][0]=0; L[449][1]=1;}
			satisfiable[449][1]=satisfiable[449][1] & ((x[449] ^ 1) | (x[ unit449_1[i][0] ] ^ unit449_1[i][1]) |(x[ unit449_1[i][2] ] ^ unit449_1[i][3]));
			}
		if(X_contra>0) L[449][1]=2;
		}
	//Check all rules of unit[450][0]
	L[450][0] = LargeX[450][1]>0 ? 1 : 0;
	satisfiable[450][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit450_0[i][0] ][ unit450_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit450_0[i][2] ][ unit450_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit450_0[i][4] ][ unit450_0[i][5] ] >0);
		X_contra = ( LargeX[450][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit450_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[450][1]=0; L[450][0]=1;}
			satisfiable[450][0]=satisfiable[450][0] & ((x[450] ^ 0) | (x[ unit450_0[i][0] ] ^ unit450_0[i][1]) |(x[ unit450_0[i][2] ] ^ unit450_0[i][3]));
			}
		if(X_contra>0) L[450][0]=2;
		}
	//Check all rules of unit[450][1]
	L[450][1] = LargeX[450][0]>0 ? 1 : 0;
	satisfiable[450][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit450_1[i][0] ][ unit450_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit450_1[i][2] ][ unit450_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit450_1[i][4] ][ unit450_1[i][5] ] >0);
		X_contra = ( LargeX[450][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit450_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[450][0]=0; L[450][1]=1;}
			satisfiable[450][1]=satisfiable[450][1] & ((x[450] ^ 1) | (x[ unit450_1[i][0] ] ^ unit450_1[i][1]) |(x[ unit450_1[i][2] ] ^ unit450_1[i][3]));
			}
		if(X_contra>0) L[450][1]=2;
		}
	//Check all rules of unit[451][0]
	L[451][0] = LargeX[451][1]>0 ? 1 : 0;
	satisfiable[451][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit451_0[i][0] ][ unit451_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit451_0[i][2] ][ unit451_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit451_0[i][4] ][ unit451_0[i][5] ] >0);
		X_contra = ( LargeX[451][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit451_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[451][1]=0; L[451][0]=1;}
			satisfiable[451][0]=satisfiable[451][0] & ((x[451] ^ 0) | (x[ unit451_0[i][0] ] ^ unit451_0[i][1]) |(x[ unit451_0[i][2] ] ^ unit451_0[i][3]));
			}
		if(X_contra>0) L[451][0]=2;
		}
	//Check all rules of unit[451][1]
	L[451][1] = LargeX[451][0]>0 ? 1 : 0;
	satisfiable[451][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit451_1[i][0] ][ unit451_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit451_1[i][2] ][ unit451_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit451_1[i][4] ][ unit451_1[i][5] ] >0);
		X_contra = ( LargeX[451][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit451_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[451][0]=0; L[451][1]=1;}
			satisfiable[451][1]=satisfiable[451][1] & ((x[451] ^ 1) | (x[ unit451_1[i][0] ] ^ unit451_1[i][1]) |(x[ unit451_1[i][2] ] ^ unit451_1[i][3]));
			}
		if(X_contra>0) L[451][1]=2;
		}
	//Check all rules of unit[452][0]
	L[452][0] = LargeX[452][1]>0 ? 1 : 0;
	satisfiable[452][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit452_0[i][0] ][ unit452_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit452_0[i][2] ][ unit452_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit452_0[i][4] ][ unit452_0[i][5] ] >0);
		X_contra = ( LargeX[452][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit452_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[452][1]=0; L[452][0]=1;}
			satisfiable[452][0]=satisfiable[452][0] & ((x[452] ^ 0) | (x[ unit452_0[i][0] ] ^ unit452_0[i][1]) |(x[ unit452_0[i][2] ] ^ unit452_0[i][3]));
			}
		if(X_contra>0) L[452][0]=2;
		}
	//Check all rules of unit[452][1]
	L[452][1] = LargeX[452][0]>0 ? 1 : 0;
	satisfiable[452][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit452_1[i][0] ][ unit452_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit452_1[i][2] ][ unit452_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit452_1[i][4] ][ unit452_1[i][5] ] >0);
		X_contra = ( LargeX[452][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit452_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[452][0]=0; L[452][1]=1;}
			satisfiable[452][1]=satisfiable[452][1] & ((x[452] ^ 1) | (x[ unit452_1[i][0] ] ^ unit452_1[i][1]) |(x[ unit452_1[i][2] ] ^ unit452_1[i][3]));
			}
		if(X_contra>0) L[452][1]=2;
		}
	//Check all rules of unit[453][0]
	L[453][0] = LargeX[453][1]>0 ? 1 : 0;
	satisfiable[453][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit453_0[i][0] ][ unit453_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit453_0[i][2] ][ unit453_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit453_0[i][4] ][ unit453_0[i][5] ] >0);
		X_contra = ( LargeX[453][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit453_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[453][1]=0; L[453][0]=1;}
			satisfiable[453][0]=satisfiable[453][0] & ((x[453] ^ 0) | (x[ unit453_0[i][0] ] ^ unit453_0[i][1]) |(x[ unit453_0[i][2] ] ^ unit453_0[i][3]));
			}
		if(X_contra>0) L[453][0]=2;
		}
	//Check all rules of unit[453][1]
	L[453][1] = LargeX[453][0]>0 ? 1 : 0;
	satisfiable[453][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit453_1[i][0] ][ unit453_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit453_1[i][2] ][ unit453_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit453_1[i][4] ][ unit453_1[i][5] ] >0);
		X_contra = ( LargeX[453][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit453_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[453][0]=0; L[453][1]=1;}
			satisfiable[453][1]=satisfiable[453][1] & ((x[453] ^ 1) | (x[ unit453_1[i][0] ] ^ unit453_1[i][1]) |(x[ unit453_1[i][2] ] ^ unit453_1[i][3]));
			}
		if(X_contra>0) L[453][1]=2;
		}
	//Check all rules of unit[454][0]
	L[454][0] = LargeX[454][1]>0 ? 1 : 0;
	satisfiable[454][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit454_0[i][0] ][ unit454_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit454_0[i][2] ][ unit454_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit454_0[i][4] ][ unit454_0[i][5] ] >0);
		X_contra = ( LargeX[454][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit454_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[454][1]=0; L[454][0]=1;}
			satisfiable[454][0]=satisfiable[454][0] & ((x[454] ^ 0) | (x[ unit454_0[i][0] ] ^ unit454_0[i][1]) |(x[ unit454_0[i][2] ] ^ unit454_0[i][3]));
			}
		if(X_contra>0) L[454][0]=2;
		}
	//Check all rules of unit[454][1]
	L[454][1] = LargeX[454][0]>0 ? 1 : 0;
	satisfiable[454][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit454_1[i][0] ][ unit454_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit454_1[i][2] ][ unit454_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit454_1[i][4] ][ unit454_1[i][5] ] >0);
		X_contra = ( LargeX[454][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit454_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[454][0]=0; L[454][1]=1;}
			satisfiable[454][1]=satisfiable[454][1] & ((x[454] ^ 1) | (x[ unit454_1[i][0] ] ^ unit454_1[i][1]) |(x[ unit454_1[i][2] ] ^ unit454_1[i][3]));
			}
		if(X_contra>0) L[454][1]=2;
		}
	//Check all rules of unit[455][0]
	L[455][0] = LargeX[455][1]>0 ? 1 : 0;
	satisfiable[455][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit455_0[i][0] ][ unit455_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit455_0[i][2] ][ unit455_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit455_0[i][4] ][ unit455_0[i][5] ] >0);
		X_contra = ( LargeX[455][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit455_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[455][1]=0; L[455][0]=1;}
			satisfiable[455][0]=satisfiable[455][0] & ((x[455] ^ 0) | (x[ unit455_0[i][0] ] ^ unit455_0[i][1]) |(x[ unit455_0[i][2] ] ^ unit455_0[i][3]));
			}
		if(X_contra>0) L[455][0]=2;
		}
	//Check all rules of unit[455][1]
	L[455][1] = LargeX[455][0]>0 ? 1 : 0;
	satisfiable[455][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit455_1[i][0] ][ unit455_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit455_1[i][2] ][ unit455_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit455_1[i][4] ][ unit455_1[i][5] ] >0);
		X_contra = ( LargeX[455][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit455_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[455][0]=0; L[455][1]=1;}
			satisfiable[455][1]=satisfiable[455][1] & ((x[455] ^ 1) | (x[ unit455_1[i][0] ] ^ unit455_1[i][1]) |(x[ unit455_1[i][2] ] ^ unit455_1[i][3]));
			}
		if(X_contra>0) L[455][1]=2;
		}
	//Check all rules of unit[456][0]
	L[456][0] = LargeX[456][1]>0 ? 1 : 0;
	satisfiable[456][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit456_0[i][0] ][ unit456_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit456_0[i][2] ][ unit456_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit456_0[i][4] ][ unit456_0[i][5] ] >0);
		X_contra = ( LargeX[456][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit456_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[456][1]=0; L[456][0]=1;}
			satisfiable[456][0]=satisfiable[456][0] & ((x[456] ^ 0) | (x[ unit456_0[i][0] ] ^ unit456_0[i][1]) |(x[ unit456_0[i][2] ] ^ unit456_0[i][3]));
			}
		if(X_contra>0) L[456][0]=2;
		}
	//Check all rules of unit[456][1]
	L[456][1] = LargeX[456][0]>0 ? 1 : 0;
	satisfiable[456][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit456_1[i][0] ][ unit456_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit456_1[i][2] ][ unit456_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit456_1[i][4] ][ unit456_1[i][5] ] >0);
		X_contra = ( LargeX[456][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit456_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[456][0]=0; L[456][1]=1;}
			satisfiable[456][1]=satisfiable[456][1] & ((x[456] ^ 1) | (x[ unit456_1[i][0] ] ^ unit456_1[i][1]) |(x[ unit456_1[i][2] ] ^ unit456_1[i][3]));
			}
		if(X_contra>0) L[456][1]=2;
		}
	//Check all rules of unit[457][0]
	L[457][0] = LargeX[457][1]>0 ? 1 : 0;
	satisfiable[457][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit457_0[i][0] ][ unit457_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit457_0[i][2] ][ unit457_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit457_0[i][4] ][ unit457_0[i][5] ] >0);
		X_contra = ( LargeX[457][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit457_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[457][1]=0; L[457][0]=1;}
			satisfiable[457][0]=satisfiable[457][0] & ((x[457] ^ 0) | (x[ unit457_0[i][0] ] ^ unit457_0[i][1]) |(x[ unit457_0[i][2] ] ^ unit457_0[i][3]));
			}
		if(X_contra>0) L[457][0]=2;
		}
	//Check all rules of unit[457][1]
	L[457][1] = LargeX[457][0]>0 ? 1 : 0;
	satisfiable[457][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit457_1[i][0] ][ unit457_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit457_1[i][2] ][ unit457_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit457_1[i][4] ][ unit457_1[i][5] ] >0);
		X_contra = ( LargeX[457][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit457_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[457][0]=0; L[457][1]=1;}
			satisfiable[457][1]=satisfiable[457][1] & ((x[457] ^ 1) | (x[ unit457_1[i][0] ] ^ unit457_1[i][1]) |(x[ unit457_1[i][2] ] ^ unit457_1[i][3]));
			}
		if(X_contra>0) L[457][1]=2;
		}
	//Check all rules of unit[458][0]
	L[458][0] = LargeX[458][1]>0 ? 1 : 0;
	satisfiable[458][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit458_0[i][0] ][ unit458_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit458_0[i][2] ][ unit458_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit458_0[i][4] ][ unit458_0[i][5] ] >0);
		X_contra = ( LargeX[458][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit458_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[458][1]=0; L[458][0]=1;}
			satisfiable[458][0]=satisfiable[458][0] & ((x[458] ^ 0) | (x[ unit458_0[i][0] ] ^ unit458_0[i][1]) |(x[ unit458_0[i][2] ] ^ unit458_0[i][3]));
			}
		if(X_contra>0) L[458][0]=2;
		}
	//Check all rules of unit[458][1]
	L[458][1] = LargeX[458][0]>0 ? 1 : 0;
	satisfiable[458][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit458_1[i][0] ][ unit458_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit458_1[i][2] ][ unit458_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit458_1[i][4] ][ unit458_1[i][5] ] >0);
		X_contra = ( LargeX[458][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit458_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[458][0]=0; L[458][1]=1;}
			satisfiable[458][1]=satisfiable[458][1] & ((x[458] ^ 1) | (x[ unit458_1[i][0] ] ^ unit458_1[i][1]) |(x[ unit458_1[i][2] ] ^ unit458_1[i][3]));
			}
		if(X_contra>0) L[458][1]=2;
		}
	//Check all rules of unit[459][0]
	L[459][0] = LargeX[459][1]>0 ? 1 : 0;
	satisfiable[459][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit459_0[i][0] ][ unit459_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit459_0[i][2] ][ unit459_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit459_0[i][4] ][ unit459_0[i][5] ] >0);
		X_contra = ( LargeX[459][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit459_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[459][1]=0; L[459][0]=1;}
			satisfiable[459][0]=satisfiable[459][0] & ((x[459] ^ 0) | (x[ unit459_0[i][0] ] ^ unit459_0[i][1]) |(x[ unit459_0[i][2] ] ^ unit459_0[i][3]));
			}
		if(X_contra>0) L[459][0]=2;
		}
	//Check all rules of unit[459][1]
	L[459][1] = LargeX[459][0]>0 ? 1 : 0;
	satisfiable[459][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit459_1[i][0] ][ unit459_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit459_1[i][2] ][ unit459_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit459_1[i][4] ][ unit459_1[i][5] ] >0);
		X_contra = ( LargeX[459][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit459_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[459][0]=0; L[459][1]=1;}
			satisfiable[459][1]=satisfiable[459][1] & ((x[459] ^ 1) | (x[ unit459_1[i][0] ] ^ unit459_1[i][1]) |(x[ unit459_1[i][2] ] ^ unit459_1[i][3]));
			}
		if(X_contra>0) L[459][1]=2;
		}
	//Check all rules of unit[460][0]
	L[460][0] = LargeX[460][1]>0 ? 1 : 0;
	satisfiable[460][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit460_0[i][0] ][ unit460_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit460_0[i][2] ][ unit460_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit460_0[i][4] ][ unit460_0[i][5] ] >0);
		X_contra = ( LargeX[460][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit460_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[460][1]=0; L[460][0]=1;}
			satisfiable[460][0]=satisfiable[460][0] & ((x[460] ^ 0) | (x[ unit460_0[i][0] ] ^ unit460_0[i][1]) |(x[ unit460_0[i][2] ] ^ unit460_0[i][3]));
			}
		if(X_contra>0) L[460][0]=2;
		}
	//Check all rules of unit[460][1]
	L[460][1] = LargeX[460][0]>0 ? 1 : 0;
	satisfiable[460][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit460_1[i][0] ][ unit460_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit460_1[i][2] ][ unit460_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit460_1[i][4] ][ unit460_1[i][5] ] >0);
		X_contra = ( LargeX[460][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit460_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[460][0]=0; L[460][1]=1;}
			satisfiable[460][1]=satisfiable[460][1] & ((x[460] ^ 1) | (x[ unit460_1[i][0] ] ^ unit460_1[i][1]) |(x[ unit460_1[i][2] ] ^ unit460_1[i][3]));
			}
		if(X_contra>0) L[460][1]=2;
		}
	//Check all rules of unit[461][0]
	L[461][0] = LargeX[461][1]>0 ? 1 : 0;
	satisfiable[461][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit461_0[i][0] ][ unit461_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit461_0[i][2] ][ unit461_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit461_0[i][4] ][ unit461_0[i][5] ] >0);
		X_contra = ( LargeX[461][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit461_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[461][1]=0; L[461][0]=1;}
			satisfiable[461][0]=satisfiable[461][0] & ((x[461] ^ 0) | (x[ unit461_0[i][0] ] ^ unit461_0[i][1]) |(x[ unit461_0[i][2] ] ^ unit461_0[i][3]));
			}
		if(X_contra>0) L[461][0]=2;
		}
	//Check all rules of unit[461][1]
	L[461][1] = LargeX[461][0]>0 ? 1 : 0;
	satisfiable[461][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit461_1[i][0] ][ unit461_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit461_1[i][2] ][ unit461_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit461_1[i][4] ][ unit461_1[i][5] ] >0);
		X_contra = ( LargeX[461][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit461_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[461][0]=0; L[461][1]=1;}
			satisfiable[461][1]=satisfiable[461][1] & ((x[461] ^ 1) | (x[ unit461_1[i][0] ] ^ unit461_1[i][1]) |(x[ unit461_1[i][2] ] ^ unit461_1[i][3]));
			}
		if(X_contra>0) L[461][1]=2;
		}
	//Check all rules of unit[462][0]
	L[462][0] = LargeX[462][1]>0 ? 1 : 0;
	satisfiable[462][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit462_0[i][0] ][ unit462_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit462_0[i][2] ][ unit462_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit462_0[i][4] ][ unit462_0[i][5] ] >0);
		X_contra = ( LargeX[462][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit462_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[462][1]=0; L[462][0]=1;}
			satisfiable[462][0]=satisfiable[462][0] & ((x[462] ^ 0) | (x[ unit462_0[i][0] ] ^ unit462_0[i][1]) |(x[ unit462_0[i][2] ] ^ unit462_0[i][3]));
			}
		if(X_contra>0) L[462][0]=2;
		}
	//Check all rules of unit[462][1]
	L[462][1] = LargeX[462][0]>0 ? 1 : 0;
	satisfiable[462][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit462_1[i][0] ][ unit462_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit462_1[i][2] ][ unit462_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit462_1[i][4] ][ unit462_1[i][5] ] >0);
		X_contra = ( LargeX[462][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit462_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[462][0]=0; L[462][1]=1;}
			satisfiable[462][1]=satisfiable[462][1] & ((x[462] ^ 1) | (x[ unit462_1[i][0] ] ^ unit462_1[i][1]) |(x[ unit462_1[i][2] ] ^ unit462_1[i][3]));
			}
		if(X_contra>0) L[462][1]=2;
		}
	//Check all rules of unit[463][0]
	L[463][0] = LargeX[463][1]>0 ? 1 : 0;
	satisfiable[463][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit463_0[i][0] ][ unit463_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit463_0[i][2] ][ unit463_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit463_0[i][4] ][ unit463_0[i][5] ] >0);
		X_contra = ( LargeX[463][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit463_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[463][1]=0; L[463][0]=1;}
			satisfiable[463][0]=satisfiable[463][0] & ((x[463] ^ 0) | (x[ unit463_0[i][0] ] ^ unit463_0[i][1]) |(x[ unit463_0[i][2] ] ^ unit463_0[i][3]));
			}
		if(X_contra>0) L[463][0]=2;
		}
	//Check all rules of unit[463][1]
	L[463][1] = LargeX[463][0]>0 ? 1 : 0;
	satisfiable[463][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit463_1[i][0] ][ unit463_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit463_1[i][2] ][ unit463_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit463_1[i][4] ][ unit463_1[i][5] ] >0);
		X_contra = ( LargeX[463][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit463_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[463][0]=0; L[463][1]=1;}
			satisfiable[463][1]=satisfiable[463][1] & ((x[463] ^ 1) | (x[ unit463_1[i][0] ] ^ unit463_1[i][1]) |(x[ unit463_1[i][2] ] ^ unit463_1[i][3]));
			}
		if(X_contra>0) L[463][1]=2;
		}
	//Check all rules of unit[464][0]
	L[464][0] = LargeX[464][1]>0 ? 1 : 0;
	satisfiable[464][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit464_0[i][0] ][ unit464_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit464_0[i][2] ][ unit464_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit464_0[i][4] ][ unit464_0[i][5] ] >0);
		X_contra = ( LargeX[464][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit464_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[464][1]=0; L[464][0]=1;}
			satisfiable[464][0]=satisfiable[464][0] & ((x[464] ^ 0) | (x[ unit464_0[i][0] ] ^ unit464_0[i][1]) |(x[ unit464_0[i][2] ] ^ unit464_0[i][3]));
			}
		if(X_contra>0) L[464][0]=2;
		}
	//Check all rules of unit[464][1]
	L[464][1] = LargeX[464][0]>0 ? 1 : 0;
	satisfiable[464][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit464_1[i][0] ][ unit464_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit464_1[i][2] ][ unit464_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit464_1[i][4] ][ unit464_1[i][5] ] >0);
		X_contra = ( LargeX[464][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit464_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[464][0]=0; L[464][1]=1;}
			satisfiable[464][1]=satisfiable[464][1] & ((x[464] ^ 1) | (x[ unit464_1[i][0] ] ^ unit464_1[i][1]) |(x[ unit464_1[i][2] ] ^ unit464_1[i][3]));
			}
		if(X_contra>0) L[464][1]=2;
		}
	//Check all rules of unit[465][0]
	L[465][0] = LargeX[465][1]>0 ? 1 : 0;
	satisfiable[465][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit465_0[i][0] ][ unit465_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit465_0[i][2] ][ unit465_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit465_0[i][4] ][ unit465_0[i][5] ] >0);
		X_contra = ( LargeX[465][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit465_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[465][1]=0; L[465][0]=1;}
			satisfiable[465][0]=satisfiable[465][0] & ((x[465] ^ 0) | (x[ unit465_0[i][0] ] ^ unit465_0[i][1]) |(x[ unit465_0[i][2] ] ^ unit465_0[i][3]));
			}
		if(X_contra>0) L[465][0]=2;
		}
	//Check all rules of unit[465][1]
	L[465][1] = LargeX[465][0]>0 ? 1 : 0;
	satisfiable[465][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit465_1[i][0] ][ unit465_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit465_1[i][2] ][ unit465_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit465_1[i][4] ][ unit465_1[i][5] ] >0);
		X_contra = ( LargeX[465][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit465_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[465][0]=0; L[465][1]=1;}
			satisfiable[465][1]=satisfiable[465][1] & ((x[465] ^ 1) | (x[ unit465_1[i][0] ] ^ unit465_1[i][1]) |(x[ unit465_1[i][2] ] ^ unit465_1[i][3]));
			}
		if(X_contra>0) L[465][1]=2;
		}
	//Check all rules of unit[466][0]
	L[466][0] = LargeX[466][1]>0 ? 1 : 0;
	satisfiable[466][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit466_0[i][0] ][ unit466_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit466_0[i][2] ][ unit466_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit466_0[i][4] ][ unit466_0[i][5] ] >0);
		X_contra = ( LargeX[466][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit466_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[466][1]=0; L[466][0]=1;}
			satisfiable[466][0]=satisfiable[466][0] & ((x[466] ^ 0) | (x[ unit466_0[i][0] ] ^ unit466_0[i][1]) |(x[ unit466_0[i][2] ] ^ unit466_0[i][3]));
			}
		if(X_contra>0) L[466][0]=2;
		}
	//Check all rules of unit[466][1]
	L[466][1] = LargeX[466][0]>0 ? 1 : 0;
	satisfiable[466][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit466_1[i][0] ][ unit466_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit466_1[i][2] ][ unit466_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit466_1[i][4] ][ unit466_1[i][5] ] >0);
		X_contra = ( LargeX[466][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit466_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[466][0]=0; L[466][1]=1;}
			satisfiable[466][1]=satisfiable[466][1] & ((x[466] ^ 1) | (x[ unit466_1[i][0] ] ^ unit466_1[i][1]) |(x[ unit466_1[i][2] ] ^ unit466_1[i][3]));
			}
		if(X_contra>0) L[466][1]=2;
		}
	//Check all rules of unit[467][0]
	L[467][0] = LargeX[467][1]>0 ? 1 : 0;
	satisfiable[467][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit467_0[i][0] ][ unit467_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit467_0[i][2] ][ unit467_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit467_0[i][4] ][ unit467_0[i][5] ] >0);
		X_contra = ( LargeX[467][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit467_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[467][1]=0; L[467][0]=1;}
			satisfiable[467][0]=satisfiable[467][0] & ((x[467] ^ 0) | (x[ unit467_0[i][0] ] ^ unit467_0[i][1]) |(x[ unit467_0[i][2] ] ^ unit467_0[i][3]));
			}
		if(X_contra>0) L[467][0]=2;
		}
	//Check all rules of unit[467][1]
	L[467][1] = LargeX[467][0]>0 ? 1 : 0;
	satisfiable[467][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit467_1[i][0] ][ unit467_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit467_1[i][2] ][ unit467_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit467_1[i][4] ][ unit467_1[i][5] ] >0);
		X_contra = ( LargeX[467][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit467_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[467][0]=0; L[467][1]=1;}
			satisfiable[467][1]=satisfiable[467][1] & ((x[467] ^ 1) | (x[ unit467_1[i][0] ] ^ unit467_1[i][1]) |(x[ unit467_1[i][2] ] ^ unit467_1[i][3]));
			}
		if(X_contra>0) L[467][1]=2;
		}
	//Check all rules of unit[468][0]
	L[468][0] = LargeX[468][1]>0 ? 1 : 0;
	satisfiable[468][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit468_0[i][0] ][ unit468_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit468_0[i][2] ][ unit468_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit468_0[i][4] ][ unit468_0[i][5] ] >0);
		X_contra = ( LargeX[468][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit468_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[468][1]=0; L[468][0]=1;}
			satisfiable[468][0]=satisfiable[468][0] & ((x[468] ^ 0) | (x[ unit468_0[i][0] ] ^ unit468_0[i][1]) |(x[ unit468_0[i][2] ] ^ unit468_0[i][3]));
			}
		if(X_contra>0) L[468][0]=2;
		}
	//Check all rules of unit[468][1]
	L[468][1] = LargeX[468][0]>0 ? 1 : 0;
	satisfiable[468][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit468_1[i][0] ][ unit468_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit468_1[i][2] ][ unit468_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit468_1[i][4] ][ unit468_1[i][5] ] >0);
		X_contra = ( LargeX[468][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit468_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[468][0]=0; L[468][1]=1;}
			satisfiable[468][1]=satisfiable[468][1] & ((x[468] ^ 1) | (x[ unit468_1[i][0] ] ^ unit468_1[i][1]) |(x[ unit468_1[i][2] ] ^ unit468_1[i][3]));
			}
		if(X_contra>0) L[468][1]=2;
		}
	//Check all rules of unit[469][0]
	L[469][0] = LargeX[469][1]>0 ? 1 : 0;
	satisfiable[469][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit469_0[i][0] ][ unit469_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit469_0[i][2] ][ unit469_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit469_0[i][4] ][ unit469_0[i][5] ] >0);
		X_contra = ( LargeX[469][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit469_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[469][1]=0; L[469][0]=1;}
			satisfiable[469][0]=satisfiable[469][0] & ((x[469] ^ 0) | (x[ unit469_0[i][0] ] ^ unit469_0[i][1]) |(x[ unit469_0[i][2] ] ^ unit469_0[i][3]));
			}
		if(X_contra>0) L[469][0]=2;
		}
	//Check all rules of unit[469][1]
	L[469][1] = LargeX[469][0]>0 ? 1 : 0;
	satisfiable[469][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit469_1[i][0] ][ unit469_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit469_1[i][2] ][ unit469_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit469_1[i][4] ][ unit469_1[i][5] ] >0);
		X_contra = ( LargeX[469][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit469_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[469][0]=0; L[469][1]=1;}
			satisfiable[469][1]=satisfiable[469][1] & ((x[469] ^ 1) | (x[ unit469_1[i][0] ] ^ unit469_1[i][1]) |(x[ unit469_1[i][2] ] ^ unit469_1[i][3]));
			}
		if(X_contra>0) L[469][1]=2;
		}
	//Check all rules of unit[470][0]
	L[470][0] = LargeX[470][1]>0 ? 1 : 0;
	satisfiable[470][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit470_0[i][0] ][ unit470_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit470_0[i][2] ][ unit470_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit470_0[i][4] ][ unit470_0[i][5] ] >0);
		X_contra = ( LargeX[470][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit470_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[470][1]=0; L[470][0]=1;}
			satisfiable[470][0]=satisfiable[470][0] & ((x[470] ^ 0) | (x[ unit470_0[i][0] ] ^ unit470_0[i][1]) |(x[ unit470_0[i][2] ] ^ unit470_0[i][3]));
			}
		if(X_contra>0) L[470][0]=2;
		}
	//Check all rules of unit[470][1]
	L[470][1] = LargeX[470][0]>0 ? 1 : 0;
	satisfiable[470][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit470_1[i][0] ][ unit470_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit470_1[i][2] ][ unit470_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit470_1[i][4] ][ unit470_1[i][5] ] >0);
		X_contra = ( LargeX[470][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit470_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[470][0]=0; L[470][1]=1;}
			satisfiable[470][1]=satisfiable[470][1] & ((x[470] ^ 1) | (x[ unit470_1[i][0] ] ^ unit470_1[i][1]) |(x[ unit470_1[i][2] ] ^ unit470_1[i][3]));
			}
		if(X_contra>0) L[470][1]=2;
		}
	//Check all rules of unit[471][0]
	L[471][0] = LargeX[471][1]>0 ? 1 : 0;
	satisfiable[471][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit471_0[i][0] ][ unit471_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit471_0[i][2] ][ unit471_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit471_0[i][4] ][ unit471_0[i][5] ] >0);
		X_contra = ( LargeX[471][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit471_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[471][1]=0; L[471][0]=1;}
			satisfiable[471][0]=satisfiable[471][0] & ((x[471] ^ 0) | (x[ unit471_0[i][0] ] ^ unit471_0[i][1]) |(x[ unit471_0[i][2] ] ^ unit471_0[i][3]));
			}
		if(X_contra>0) L[471][0]=2;
		}
	//Check all rules of unit[471][1]
	L[471][1] = LargeX[471][0]>0 ? 1 : 0;
	satisfiable[471][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit471_1[i][0] ][ unit471_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit471_1[i][2] ][ unit471_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit471_1[i][4] ][ unit471_1[i][5] ] >0);
		X_contra = ( LargeX[471][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit471_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[471][0]=0; L[471][1]=1;}
			satisfiable[471][1]=satisfiable[471][1] & ((x[471] ^ 1) | (x[ unit471_1[i][0] ] ^ unit471_1[i][1]) |(x[ unit471_1[i][2] ] ^ unit471_1[i][3]));
			}
		if(X_contra>0) L[471][1]=2;
		}
	//Check all rules of unit[472][0]
	L[472][0] = LargeX[472][1]>0 ? 1 : 0;
	satisfiable[472][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit472_0[i][0] ][ unit472_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit472_0[i][2] ][ unit472_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit472_0[i][4] ][ unit472_0[i][5] ] >0);
		X_contra = ( LargeX[472][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit472_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[472][1]=0; L[472][0]=1;}
			satisfiable[472][0]=satisfiable[472][0] & ((x[472] ^ 0) | (x[ unit472_0[i][0] ] ^ unit472_0[i][1]) |(x[ unit472_0[i][2] ] ^ unit472_0[i][3]));
			}
		if(X_contra>0) L[472][0]=2;
		}
	//Check all rules of unit[472][1]
	L[472][1] = LargeX[472][0]>0 ? 1 : 0;
	satisfiable[472][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit472_1[i][0] ][ unit472_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit472_1[i][2] ][ unit472_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit472_1[i][4] ][ unit472_1[i][5] ] >0);
		X_contra = ( LargeX[472][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit472_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[472][0]=0; L[472][1]=1;}
			satisfiable[472][1]=satisfiable[472][1] & ((x[472] ^ 1) | (x[ unit472_1[i][0] ] ^ unit472_1[i][1]) |(x[ unit472_1[i][2] ] ^ unit472_1[i][3]));
			}
		if(X_contra>0) L[472][1]=2;
		}
	//Check all rules of unit[473][0]
	L[473][0] = LargeX[473][1]>0 ? 1 : 0;
	satisfiable[473][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit473_0[i][0] ][ unit473_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit473_0[i][2] ][ unit473_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit473_0[i][4] ][ unit473_0[i][5] ] >0);
		X_contra = ( LargeX[473][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit473_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[473][1]=0; L[473][0]=1;}
			satisfiable[473][0]=satisfiable[473][0] & ((x[473] ^ 0) | (x[ unit473_0[i][0] ] ^ unit473_0[i][1]) |(x[ unit473_0[i][2] ] ^ unit473_0[i][3]));
			}
		if(X_contra>0) L[473][0]=2;
		}
	//Check all rules of unit[473][1]
	L[473][1] = LargeX[473][0]>0 ? 1 : 0;
	satisfiable[473][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit473_1[i][0] ][ unit473_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit473_1[i][2] ][ unit473_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit473_1[i][4] ][ unit473_1[i][5] ] >0);
		X_contra = ( LargeX[473][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit473_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[473][0]=0; L[473][1]=1;}
			satisfiable[473][1]=satisfiable[473][1] & ((x[473] ^ 1) | (x[ unit473_1[i][0] ] ^ unit473_1[i][1]) |(x[ unit473_1[i][2] ] ^ unit473_1[i][3]));
			}
		if(X_contra>0) L[473][1]=2;
		}
	//Check all rules of unit[474][0]
	L[474][0] = LargeX[474][1]>0 ? 1 : 0;
	satisfiable[474][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit474_0[i][0] ][ unit474_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit474_0[i][2] ][ unit474_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit474_0[i][4] ][ unit474_0[i][5] ] >0);
		X_contra = ( LargeX[474][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit474_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[474][1]=0; L[474][0]=1;}
			satisfiable[474][0]=satisfiable[474][0] & ((x[474] ^ 0) | (x[ unit474_0[i][0] ] ^ unit474_0[i][1]) |(x[ unit474_0[i][2] ] ^ unit474_0[i][3]));
			}
		if(X_contra>0) L[474][0]=2;
		}
	//Check all rules of unit[474][1]
	L[474][1] = LargeX[474][0]>0 ? 1 : 0;
	satisfiable[474][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit474_1[i][0] ][ unit474_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit474_1[i][2] ][ unit474_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit474_1[i][4] ][ unit474_1[i][5] ] >0);
		X_contra = ( LargeX[474][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit474_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[474][0]=0; L[474][1]=1;}
			satisfiable[474][1]=satisfiable[474][1] & ((x[474] ^ 1) | (x[ unit474_1[i][0] ] ^ unit474_1[i][1]) |(x[ unit474_1[i][2] ] ^ unit474_1[i][3]));
			}
		if(X_contra>0) L[474][1]=2;
		}
	//Check all rules of unit[475][0]
	L[475][0] = LargeX[475][1]>0 ? 1 : 0;
	satisfiable[475][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit475_0[i][0] ][ unit475_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit475_0[i][2] ][ unit475_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit475_0[i][4] ][ unit475_0[i][5] ] >0);
		X_contra = ( LargeX[475][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit475_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[475][1]=0; L[475][0]=1;}
			satisfiable[475][0]=satisfiable[475][0] & ((x[475] ^ 0) | (x[ unit475_0[i][0] ] ^ unit475_0[i][1]) |(x[ unit475_0[i][2] ] ^ unit475_0[i][3]));
			}
		if(X_contra>0) L[475][0]=2;
		}
	//Check all rules of unit[475][1]
	L[475][1] = LargeX[475][0]>0 ? 1 : 0;
	satisfiable[475][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit475_1[i][0] ][ unit475_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit475_1[i][2] ][ unit475_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit475_1[i][4] ][ unit475_1[i][5] ] >0);
		X_contra = ( LargeX[475][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit475_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[475][0]=0; L[475][1]=1;}
			satisfiable[475][1]=satisfiable[475][1] & ((x[475] ^ 1) | (x[ unit475_1[i][0] ] ^ unit475_1[i][1]) |(x[ unit475_1[i][2] ] ^ unit475_1[i][3]));
			}
		if(X_contra>0) L[475][1]=2;
		}
	//Check all rules of unit[476][0]
	L[476][0] = LargeX[476][1]>0 ? 1 : 0;
	satisfiable[476][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit476_0[i][0] ][ unit476_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit476_0[i][2] ][ unit476_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit476_0[i][4] ][ unit476_0[i][5] ] >0);
		X_contra = ( LargeX[476][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit476_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[476][1]=0; L[476][0]=1;}
			satisfiable[476][0]=satisfiable[476][0] & ((x[476] ^ 0) | (x[ unit476_0[i][0] ] ^ unit476_0[i][1]) |(x[ unit476_0[i][2] ] ^ unit476_0[i][3]));
			}
		if(X_contra>0) L[476][0]=2;
		}
	//Check all rules of unit[476][1]
	L[476][1] = LargeX[476][0]>0 ? 1 : 0;
	satisfiable[476][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit476_1[i][0] ][ unit476_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit476_1[i][2] ][ unit476_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit476_1[i][4] ][ unit476_1[i][5] ] >0);
		X_contra = ( LargeX[476][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit476_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[476][0]=0; L[476][1]=1;}
			satisfiable[476][1]=satisfiable[476][1] & ((x[476] ^ 1) | (x[ unit476_1[i][0] ] ^ unit476_1[i][1]) |(x[ unit476_1[i][2] ] ^ unit476_1[i][3]));
			}
		if(X_contra>0) L[476][1]=2;
		}
	//Check all rules of unit[477][0]
	L[477][0] = LargeX[477][1]>0 ? 1 : 0;
	satisfiable[477][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit477_0[i][0] ][ unit477_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit477_0[i][2] ][ unit477_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit477_0[i][4] ][ unit477_0[i][5] ] >0);
		X_contra = ( LargeX[477][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit477_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[477][1]=0; L[477][0]=1;}
			satisfiable[477][0]=satisfiable[477][0] & ((x[477] ^ 0) | (x[ unit477_0[i][0] ] ^ unit477_0[i][1]) |(x[ unit477_0[i][2] ] ^ unit477_0[i][3]));
			}
		if(X_contra>0) L[477][0]=2;
		}
	//Check all rules of unit[477][1]
	L[477][1] = LargeX[477][0]>0 ? 1 : 0;
	satisfiable[477][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit477_1[i][0] ][ unit477_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit477_1[i][2] ][ unit477_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit477_1[i][4] ][ unit477_1[i][5] ] >0);
		X_contra = ( LargeX[477][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit477_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[477][0]=0; L[477][1]=1;}
			satisfiable[477][1]=satisfiable[477][1] & ((x[477] ^ 1) | (x[ unit477_1[i][0] ] ^ unit477_1[i][1]) |(x[ unit477_1[i][2] ] ^ unit477_1[i][3]));
			}
		if(X_contra>0) L[477][1]=2;
		}
	//Check all rules of unit[478][0]
	L[478][0] = LargeX[478][1]>0 ? 1 : 0;
	satisfiable[478][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit478_0[i][0] ][ unit478_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit478_0[i][2] ][ unit478_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit478_0[i][4] ][ unit478_0[i][5] ] >0);
		X_contra = ( LargeX[478][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit478_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[478][1]=0; L[478][0]=1;}
			satisfiable[478][0]=satisfiable[478][0] & ((x[478] ^ 0) | (x[ unit478_0[i][0] ] ^ unit478_0[i][1]) |(x[ unit478_0[i][2] ] ^ unit478_0[i][3]));
			}
		if(X_contra>0) L[478][0]=2;
		}
	//Check all rules of unit[478][1]
	L[478][1] = LargeX[478][0]>0 ? 1 : 0;
	satisfiable[478][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit478_1[i][0] ][ unit478_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit478_1[i][2] ][ unit478_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit478_1[i][4] ][ unit478_1[i][5] ] >0);
		X_contra = ( LargeX[478][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit478_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[478][0]=0; L[478][1]=1;}
			satisfiable[478][1]=satisfiable[478][1] & ((x[478] ^ 1) | (x[ unit478_1[i][0] ] ^ unit478_1[i][1]) |(x[ unit478_1[i][2] ] ^ unit478_1[i][3]));
			}
		if(X_contra>0) L[478][1]=2;
		}
	//Check all rules of unit[479][0]
	L[479][0] = LargeX[479][1]>0 ? 1 : 0;
	satisfiable[479][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit479_0[i][0] ][ unit479_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit479_0[i][2] ][ unit479_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit479_0[i][4] ][ unit479_0[i][5] ] >0);
		X_contra = ( LargeX[479][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit479_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[479][1]=0; L[479][0]=1;}
			satisfiable[479][0]=satisfiable[479][0] & ((x[479] ^ 0) | (x[ unit479_0[i][0] ] ^ unit479_0[i][1]) |(x[ unit479_0[i][2] ] ^ unit479_0[i][3]));
			}
		if(X_contra>0) L[479][0]=2;
		}
	//Check all rules of unit[479][1]
	L[479][1] = LargeX[479][0]>0 ? 1 : 0;
	satisfiable[479][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit479_1[i][0] ][ unit479_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit479_1[i][2] ][ unit479_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit479_1[i][4] ][ unit479_1[i][5] ] >0);
		X_contra = ( LargeX[479][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit479_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[479][0]=0; L[479][1]=1;}
			satisfiable[479][1]=satisfiable[479][1] & ((x[479] ^ 1) | (x[ unit479_1[i][0] ] ^ unit479_1[i][1]) |(x[ unit479_1[i][2] ] ^ unit479_1[i][3]));
			}
		if(X_contra>0) L[479][1]=2;
		}
	//Check all rules of unit[480][0]
	L[480][0] = LargeX[480][1]>0 ? 1 : 0;
	satisfiable[480][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit480_0[i][0] ][ unit480_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit480_0[i][2] ][ unit480_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit480_0[i][4] ][ unit480_0[i][5] ] >0);
		X_contra = ( LargeX[480][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit480_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[480][1]=0; L[480][0]=1;}
			satisfiable[480][0]=satisfiable[480][0] & ((x[480] ^ 0) | (x[ unit480_0[i][0] ] ^ unit480_0[i][1]) |(x[ unit480_0[i][2] ] ^ unit480_0[i][3]));
			}
		if(X_contra>0) L[480][0]=2;
		}
	//Check all rules of unit[480][1]
	L[480][1] = LargeX[480][0]>0 ? 1 : 0;
	satisfiable[480][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit480_1[i][0] ][ unit480_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit480_1[i][2] ][ unit480_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit480_1[i][4] ][ unit480_1[i][5] ] >0);
		X_contra = ( LargeX[480][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit480_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[480][0]=0; L[480][1]=1;}
			satisfiable[480][1]=satisfiable[480][1] & ((x[480] ^ 1) | (x[ unit480_1[i][0] ] ^ unit480_1[i][1]) |(x[ unit480_1[i][2] ] ^ unit480_1[i][3]));
			}
		if(X_contra>0) L[480][1]=2;
		}
	//Check all rules of unit[481][0]
	L[481][0] = LargeX[481][1]>0 ? 1 : 0;
	satisfiable[481][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit481_0[i][0] ][ unit481_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit481_0[i][2] ][ unit481_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit481_0[i][4] ][ unit481_0[i][5] ] >0);
		X_contra = ( LargeX[481][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit481_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[481][1]=0; L[481][0]=1;}
			satisfiable[481][0]=satisfiable[481][0] & ((x[481] ^ 0) | (x[ unit481_0[i][0] ] ^ unit481_0[i][1]) |(x[ unit481_0[i][2] ] ^ unit481_0[i][3]));
			}
		if(X_contra>0) L[481][0]=2;
		}
	//Check all rules of unit[481][1]
	L[481][1] = LargeX[481][0]>0 ? 1 : 0;
	satisfiable[481][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit481_1[i][0] ][ unit481_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit481_1[i][2] ][ unit481_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit481_1[i][4] ][ unit481_1[i][5] ] >0);
		X_contra = ( LargeX[481][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit481_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[481][0]=0; L[481][1]=1;}
			satisfiable[481][1]=satisfiable[481][1] & ((x[481] ^ 1) | (x[ unit481_1[i][0] ] ^ unit481_1[i][1]) |(x[ unit481_1[i][2] ] ^ unit481_1[i][3]));
			}
		if(X_contra>0) L[481][1]=2;
		}
	//Check all rules of unit[482][0]
	L[482][0] = LargeX[482][1]>0 ? 1 : 0;
	satisfiable[482][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit482_0[i][0] ][ unit482_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit482_0[i][2] ][ unit482_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit482_0[i][4] ][ unit482_0[i][5] ] >0);
		X_contra = ( LargeX[482][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit482_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[482][1]=0; L[482][0]=1;}
			satisfiable[482][0]=satisfiable[482][0] & ((x[482] ^ 0) | (x[ unit482_0[i][0] ] ^ unit482_0[i][1]) |(x[ unit482_0[i][2] ] ^ unit482_0[i][3]));
			}
		if(X_contra>0) L[482][0]=2;
		}
	//Check all rules of unit[482][1]
	L[482][1] = LargeX[482][0]>0 ? 1 : 0;
	satisfiable[482][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit482_1[i][0] ][ unit482_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit482_1[i][2] ][ unit482_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit482_1[i][4] ][ unit482_1[i][5] ] >0);
		X_contra = ( LargeX[482][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit482_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[482][0]=0; L[482][1]=1;}
			satisfiable[482][1]=satisfiable[482][1] & ((x[482] ^ 1) | (x[ unit482_1[i][0] ] ^ unit482_1[i][1]) |(x[ unit482_1[i][2] ] ^ unit482_1[i][3]));
			}
		if(X_contra>0) L[482][1]=2;
		}
	//Check all rules of unit[483][0]
	L[483][0] = LargeX[483][1]>0 ? 1 : 0;
	satisfiable[483][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit483_0[i][0] ][ unit483_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit483_0[i][2] ][ unit483_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit483_0[i][4] ][ unit483_0[i][5] ] >0);
		X_contra = ( LargeX[483][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit483_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[483][1]=0; L[483][0]=1;}
			satisfiable[483][0]=satisfiable[483][0] & ((x[483] ^ 0) | (x[ unit483_0[i][0] ] ^ unit483_0[i][1]) |(x[ unit483_0[i][2] ] ^ unit483_0[i][3]));
			}
		if(X_contra>0) L[483][0]=2;
		}
	//Check all rules of unit[483][1]
	L[483][1] = LargeX[483][0]>0 ? 1 : 0;
	satisfiable[483][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit483_1[i][0] ][ unit483_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit483_1[i][2] ][ unit483_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit483_1[i][4] ][ unit483_1[i][5] ] >0);
		X_contra = ( LargeX[483][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit483_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[483][0]=0; L[483][1]=1;}
			satisfiable[483][1]=satisfiable[483][1] & ((x[483] ^ 1) | (x[ unit483_1[i][0] ] ^ unit483_1[i][1]) |(x[ unit483_1[i][2] ] ^ unit483_1[i][3]));
			}
		if(X_contra>0) L[483][1]=2;
		}
	//Check all rules of unit[484][0]
	L[484][0] = LargeX[484][1]>0 ? 1 : 0;
	satisfiable[484][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit484_0[i][0] ][ unit484_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit484_0[i][2] ][ unit484_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit484_0[i][4] ][ unit484_0[i][5] ] >0);
		X_contra = ( LargeX[484][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit484_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[484][1]=0; L[484][0]=1;}
			satisfiable[484][0]=satisfiable[484][0] & ((x[484] ^ 0) | (x[ unit484_0[i][0] ] ^ unit484_0[i][1]) |(x[ unit484_0[i][2] ] ^ unit484_0[i][3]));
			}
		if(X_contra>0) L[484][0]=2;
		}
	//Check all rules of unit[484][1]
	L[484][1] = LargeX[484][0]>0 ? 1 : 0;
	satisfiable[484][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit484_1[i][0] ][ unit484_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit484_1[i][2] ][ unit484_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit484_1[i][4] ][ unit484_1[i][5] ] >0);
		X_contra = ( LargeX[484][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit484_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[484][0]=0; L[484][1]=1;}
			satisfiable[484][1]=satisfiable[484][1] & ((x[484] ^ 1) | (x[ unit484_1[i][0] ] ^ unit484_1[i][1]) |(x[ unit484_1[i][2] ] ^ unit484_1[i][3]));
			}
		if(X_contra>0) L[484][1]=2;
		}
	//Check all rules of unit[485][0]
	L[485][0] = LargeX[485][1]>0 ? 1 : 0;
	satisfiable[485][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit485_0[i][0] ][ unit485_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit485_0[i][2] ][ unit485_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit485_0[i][4] ][ unit485_0[i][5] ] >0);
		X_contra = ( LargeX[485][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit485_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[485][1]=0; L[485][0]=1;}
			satisfiable[485][0]=satisfiable[485][0] & ((x[485] ^ 0) | (x[ unit485_0[i][0] ] ^ unit485_0[i][1]) |(x[ unit485_0[i][2] ] ^ unit485_0[i][3]));
			}
		if(X_contra>0) L[485][0]=2;
		}
	//Check all rules of unit[485][1]
	L[485][1] = LargeX[485][0]>0 ? 1 : 0;
	satisfiable[485][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit485_1[i][0] ][ unit485_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit485_1[i][2] ][ unit485_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit485_1[i][4] ][ unit485_1[i][5] ] >0);
		X_contra = ( LargeX[485][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit485_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[485][0]=0; L[485][1]=1;}
			satisfiable[485][1]=satisfiable[485][1] & ((x[485] ^ 1) | (x[ unit485_1[i][0] ] ^ unit485_1[i][1]) |(x[ unit485_1[i][2] ] ^ unit485_1[i][3]));
			}
		if(X_contra>0) L[485][1]=2;
		}
	//Check all rules of unit[486][0]
	L[486][0] = LargeX[486][1]>0 ? 1 : 0;
	satisfiable[486][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit486_0[i][0] ][ unit486_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit486_0[i][2] ][ unit486_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit486_0[i][4] ][ unit486_0[i][5] ] >0);
		X_contra = ( LargeX[486][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit486_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[486][1]=0; L[486][0]=1;}
			satisfiable[486][0]=satisfiable[486][0] & ((x[486] ^ 0) | (x[ unit486_0[i][0] ] ^ unit486_0[i][1]) |(x[ unit486_0[i][2] ] ^ unit486_0[i][3]));
			}
		if(X_contra>0) L[486][0]=2;
		}
	//Check all rules of unit[486][1]
	L[486][1] = LargeX[486][0]>0 ? 1 : 0;
	satisfiable[486][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit486_1[i][0] ][ unit486_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit486_1[i][2] ][ unit486_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit486_1[i][4] ][ unit486_1[i][5] ] >0);
		X_contra = ( LargeX[486][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit486_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[486][0]=0; L[486][1]=1;}
			satisfiable[486][1]=satisfiable[486][1] & ((x[486] ^ 1) | (x[ unit486_1[i][0] ] ^ unit486_1[i][1]) |(x[ unit486_1[i][2] ] ^ unit486_1[i][3]));
			}
		if(X_contra>0) L[486][1]=2;
		}
	//Check all rules of unit[487][0]
	L[487][0] = LargeX[487][1]>0 ? 1 : 0;
	satisfiable[487][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit487_0[i][0] ][ unit487_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit487_0[i][2] ][ unit487_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit487_0[i][4] ][ unit487_0[i][5] ] >0);
		X_contra = ( LargeX[487][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit487_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[487][1]=0; L[487][0]=1;}
			satisfiable[487][0]=satisfiable[487][0] & ((x[487] ^ 0) | (x[ unit487_0[i][0] ] ^ unit487_0[i][1]) |(x[ unit487_0[i][2] ] ^ unit487_0[i][3]));
			}
		if(X_contra>0) L[487][0]=2;
		}
	//Check all rules of unit[487][1]
	L[487][1] = LargeX[487][0]>0 ? 1 : 0;
	satisfiable[487][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit487_1[i][0] ][ unit487_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit487_1[i][2] ][ unit487_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit487_1[i][4] ][ unit487_1[i][5] ] >0);
		X_contra = ( LargeX[487][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit487_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[487][0]=0; L[487][1]=1;}
			satisfiable[487][1]=satisfiable[487][1] & ((x[487] ^ 1) | (x[ unit487_1[i][0] ] ^ unit487_1[i][1]) |(x[ unit487_1[i][2] ] ^ unit487_1[i][3]));
			}
		if(X_contra>0) L[487][1]=2;
		}
	//Check all rules of unit[488][0]
	L[488][0] = LargeX[488][1]>0 ? 1 : 0;
	satisfiable[488][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit488_0[i][0] ][ unit488_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit488_0[i][2] ][ unit488_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit488_0[i][4] ][ unit488_0[i][5] ] >0);
		X_contra = ( LargeX[488][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit488_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[488][1]=0; L[488][0]=1;}
			satisfiable[488][0]=satisfiable[488][0] & ((x[488] ^ 0) | (x[ unit488_0[i][0] ] ^ unit488_0[i][1]) |(x[ unit488_0[i][2] ] ^ unit488_0[i][3]));
			}
		if(X_contra>0) L[488][0]=2;
		}
	//Check all rules of unit[488][1]
	L[488][1] = LargeX[488][0]>0 ? 1 : 0;
	satisfiable[488][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit488_1[i][0] ][ unit488_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit488_1[i][2] ][ unit488_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit488_1[i][4] ][ unit488_1[i][5] ] >0);
		X_contra = ( LargeX[488][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit488_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[488][0]=0; L[488][1]=1;}
			satisfiable[488][1]=satisfiable[488][1] & ((x[488] ^ 1) | (x[ unit488_1[i][0] ] ^ unit488_1[i][1]) |(x[ unit488_1[i][2] ] ^ unit488_1[i][3]));
			}
		if(X_contra>0) L[488][1]=2;
		}
	//Check all rules of unit[489][0]
	L[489][0] = LargeX[489][1]>0 ? 1 : 0;
	satisfiable[489][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit489_0[i][0] ][ unit489_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit489_0[i][2] ][ unit489_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit489_0[i][4] ][ unit489_0[i][5] ] >0);
		X_contra = ( LargeX[489][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit489_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[489][1]=0; L[489][0]=1;}
			satisfiable[489][0]=satisfiable[489][0] & ((x[489] ^ 0) | (x[ unit489_0[i][0] ] ^ unit489_0[i][1]) |(x[ unit489_0[i][2] ] ^ unit489_0[i][3]));
			}
		if(X_contra>0) L[489][0]=2;
		}
	//Check all rules of unit[489][1]
	L[489][1] = LargeX[489][0]>0 ? 1 : 0;
	satisfiable[489][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit489_1[i][0] ][ unit489_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit489_1[i][2] ][ unit489_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit489_1[i][4] ][ unit489_1[i][5] ] >0);
		X_contra = ( LargeX[489][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit489_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[489][0]=0; L[489][1]=1;}
			satisfiable[489][1]=satisfiable[489][1] & ((x[489] ^ 1) | (x[ unit489_1[i][0] ] ^ unit489_1[i][1]) |(x[ unit489_1[i][2] ] ^ unit489_1[i][3]));
			}
		if(X_contra>0) L[489][1]=2;
		}
	//Check all rules of unit[490][0]
	L[490][0] = LargeX[490][1]>0 ? 1 : 0;
	satisfiable[490][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit490_0[i][0] ][ unit490_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit490_0[i][2] ][ unit490_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit490_0[i][4] ][ unit490_0[i][5] ] >0);
		X_contra = ( LargeX[490][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit490_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[490][1]=0; L[490][0]=1;}
			satisfiable[490][0]=satisfiable[490][0] & ((x[490] ^ 0) | (x[ unit490_0[i][0] ] ^ unit490_0[i][1]) |(x[ unit490_0[i][2] ] ^ unit490_0[i][3]));
			}
		if(X_contra>0) L[490][0]=2;
		}
	//Check all rules of unit[490][1]
	L[490][1] = LargeX[490][0]>0 ? 1 : 0;
	satisfiable[490][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit490_1[i][0] ][ unit490_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit490_1[i][2] ][ unit490_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit490_1[i][4] ][ unit490_1[i][5] ] >0);
		X_contra = ( LargeX[490][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit490_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[490][0]=0; L[490][1]=1;}
			satisfiable[490][1]=satisfiable[490][1] & ((x[490] ^ 1) | (x[ unit490_1[i][0] ] ^ unit490_1[i][1]) |(x[ unit490_1[i][2] ] ^ unit490_1[i][3]));
			}
		if(X_contra>0) L[490][1]=2;
		}
	//Check all rules of unit[491][0]
	L[491][0] = LargeX[491][1]>0 ? 1 : 0;
	satisfiable[491][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit491_0[i][0] ][ unit491_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit491_0[i][2] ][ unit491_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit491_0[i][4] ][ unit491_0[i][5] ] >0);
		X_contra = ( LargeX[491][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit491_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[491][1]=0; L[491][0]=1;}
			satisfiable[491][0]=satisfiable[491][0] & ((x[491] ^ 0) | (x[ unit491_0[i][0] ] ^ unit491_0[i][1]) |(x[ unit491_0[i][2] ] ^ unit491_0[i][3]));
			}
		if(X_contra>0) L[491][0]=2;
		}
	//Check all rules of unit[491][1]
	L[491][1] = LargeX[491][0]>0 ? 1 : 0;
	satisfiable[491][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit491_1[i][0] ][ unit491_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit491_1[i][2] ][ unit491_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit491_1[i][4] ][ unit491_1[i][5] ] >0);
		X_contra = ( LargeX[491][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit491_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[491][0]=0; L[491][1]=1;}
			satisfiable[491][1]=satisfiable[491][1] & ((x[491] ^ 1) | (x[ unit491_1[i][0] ] ^ unit491_1[i][1]) |(x[ unit491_1[i][2] ] ^ unit491_1[i][3]));
			}
		if(X_contra>0) L[491][1]=2;
		}
	//Check all rules of unit[492][0]
	L[492][0] = LargeX[492][1]>0 ? 1 : 0;
	satisfiable[492][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit492_0[i][0] ][ unit492_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit492_0[i][2] ][ unit492_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit492_0[i][4] ][ unit492_0[i][5] ] >0);
		X_contra = ( LargeX[492][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit492_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[492][1]=0; L[492][0]=1;}
			satisfiable[492][0]=satisfiable[492][0] & ((x[492] ^ 0) | (x[ unit492_0[i][0] ] ^ unit492_0[i][1]) |(x[ unit492_0[i][2] ] ^ unit492_0[i][3]));
			}
		if(X_contra>0) L[492][0]=2;
		}
	//Check all rules of unit[492][1]
	L[492][1] = LargeX[492][0]>0 ? 1 : 0;
	satisfiable[492][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit492_1[i][0] ][ unit492_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit492_1[i][2] ][ unit492_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit492_1[i][4] ][ unit492_1[i][5] ] >0);
		X_contra = ( LargeX[492][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit492_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[492][0]=0; L[492][1]=1;}
			satisfiable[492][1]=satisfiable[492][1] & ((x[492] ^ 1) | (x[ unit492_1[i][0] ] ^ unit492_1[i][1]) |(x[ unit492_1[i][2] ] ^ unit492_1[i][3]));
			}
		if(X_contra>0) L[492][1]=2;
		}
	//Check all rules of unit[493][0]
	L[493][0] = LargeX[493][1]>0 ? 1 : 0;
	satisfiable[493][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit493_0[i][0] ][ unit493_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit493_0[i][2] ][ unit493_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit493_0[i][4] ][ unit493_0[i][5] ] >0);
		X_contra = ( LargeX[493][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit493_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[493][1]=0; L[493][0]=1;}
			satisfiable[493][0]=satisfiable[493][0] & ((x[493] ^ 0) | (x[ unit493_0[i][0] ] ^ unit493_0[i][1]) |(x[ unit493_0[i][2] ] ^ unit493_0[i][3]));
			}
		if(X_contra>0) L[493][0]=2;
		}
	//Check all rules of unit[493][1]
	L[493][1] = LargeX[493][0]>0 ? 1 : 0;
	satisfiable[493][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit493_1[i][0] ][ unit493_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit493_1[i][2] ][ unit493_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit493_1[i][4] ][ unit493_1[i][5] ] >0);
		X_contra = ( LargeX[493][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit493_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[493][0]=0; L[493][1]=1;}
			satisfiable[493][1]=satisfiable[493][1] & ((x[493] ^ 1) | (x[ unit493_1[i][0] ] ^ unit493_1[i][1]) |(x[ unit493_1[i][2] ] ^ unit493_1[i][3]));
			}
		if(X_contra>0) L[493][1]=2;
		}
	//Check all rules of unit[494][0]
	L[494][0] = LargeX[494][1]>0 ? 1 : 0;
	satisfiable[494][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit494_0[i][0] ][ unit494_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit494_0[i][2] ][ unit494_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit494_0[i][4] ][ unit494_0[i][5] ] >0);
		X_contra = ( LargeX[494][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit494_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[494][1]=0; L[494][0]=1;}
			satisfiable[494][0]=satisfiable[494][0] & ((x[494] ^ 0) | (x[ unit494_0[i][0] ] ^ unit494_0[i][1]) |(x[ unit494_0[i][2] ] ^ unit494_0[i][3]));
			}
		if(X_contra>0) L[494][0]=2;
		}
	//Check all rules of unit[494][1]
	L[494][1] = LargeX[494][0]>0 ? 1 : 0;
	satisfiable[494][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit494_1[i][0] ][ unit494_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit494_1[i][2] ][ unit494_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit494_1[i][4] ][ unit494_1[i][5] ] >0);
		X_contra = ( LargeX[494][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit494_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[494][0]=0; L[494][1]=1;}
			satisfiable[494][1]=satisfiable[494][1] & ((x[494] ^ 1) | (x[ unit494_1[i][0] ] ^ unit494_1[i][1]) |(x[ unit494_1[i][2] ] ^ unit494_1[i][3]));
			}
		if(X_contra>0) L[494][1]=2;
		}
	//Check all rules of unit[495][0]
	L[495][0] = LargeX[495][1]>0 ? 1 : 0;
	satisfiable[495][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit495_0[i][0] ][ unit495_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit495_0[i][2] ][ unit495_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit495_0[i][4] ][ unit495_0[i][5] ] >0);
		X_contra = ( LargeX[495][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit495_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[495][1]=0; L[495][0]=1;}
			satisfiable[495][0]=satisfiable[495][0] & ((x[495] ^ 0) | (x[ unit495_0[i][0] ] ^ unit495_0[i][1]) |(x[ unit495_0[i][2] ] ^ unit495_0[i][3]));
			}
		if(X_contra>0) L[495][0]=2;
		}
	//Check all rules of unit[495][1]
	L[495][1] = LargeX[495][0]>0 ? 1 : 0;
	satisfiable[495][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit495_1[i][0] ][ unit495_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit495_1[i][2] ][ unit495_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit495_1[i][4] ][ unit495_1[i][5] ] >0);
		X_contra = ( LargeX[495][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit495_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[495][0]=0; L[495][1]=1;}
			satisfiable[495][1]=satisfiable[495][1] & ((x[495] ^ 1) | (x[ unit495_1[i][0] ] ^ unit495_1[i][1]) |(x[ unit495_1[i][2] ] ^ unit495_1[i][3]));
			}
		if(X_contra>0) L[495][1]=2;
		}
	//Check all rules of unit[496][0]
	L[496][0] = LargeX[496][1]>0 ? 1 : 0;
	satisfiable[496][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit496_0[i][0] ][ unit496_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit496_0[i][2] ][ unit496_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit496_0[i][4] ][ unit496_0[i][5] ] >0);
		X_contra = ( LargeX[496][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit496_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[496][1]=0; L[496][0]=1;}
			satisfiable[496][0]=satisfiable[496][0] & ((x[496] ^ 0) | (x[ unit496_0[i][0] ] ^ unit496_0[i][1]) |(x[ unit496_0[i][2] ] ^ unit496_0[i][3]));
			}
		if(X_contra>0) L[496][0]=2;
		}
	//Check all rules of unit[496][1]
	L[496][1] = LargeX[496][0]>0 ? 1 : 0;
	satisfiable[496][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit496_1[i][0] ][ unit496_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit496_1[i][2] ][ unit496_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit496_1[i][4] ][ unit496_1[i][5] ] >0);
		X_contra = ( LargeX[496][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit496_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[496][0]=0; L[496][1]=1;}
			satisfiable[496][1]=satisfiable[496][1] & ((x[496] ^ 1) | (x[ unit496_1[i][0] ] ^ unit496_1[i][1]) |(x[ unit496_1[i][2] ] ^ unit496_1[i][3]));
			}
		if(X_contra>0) L[496][1]=2;
		}
	//Check all rules of unit[497][0]
	L[497][0] = LargeX[497][1]>0 ? 1 : 0;
	satisfiable[497][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit497_0[i][0] ][ unit497_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit497_0[i][2] ][ unit497_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit497_0[i][4] ][ unit497_0[i][5] ] >0);
		X_contra = ( LargeX[497][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit497_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[497][1]=0; L[497][0]=1;}
			satisfiable[497][0]=satisfiable[497][0] & ((x[497] ^ 0) | (x[ unit497_0[i][0] ] ^ unit497_0[i][1]) |(x[ unit497_0[i][2] ] ^ unit497_0[i][3]));
			}
		if(X_contra>0) L[497][0]=2;
		}
	//Check all rules of unit[497][1]
	L[497][1] = LargeX[497][0]>0 ? 1 : 0;
	satisfiable[497][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit497_1[i][0] ][ unit497_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit497_1[i][2] ][ unit497_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit497_1[i][4] ][ unit497_1[i][5] ] >0);
		X_contra = ( LargeX[497][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit497_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[497][0]=0; L[497][1]=1;}
			satisfiable[497][1]=satisfiable[497][1] & ((x[497] ^ 1) | (x[ unit497_1[i][0] ] ^ unit497_1[i][1]) |(x[ unit497_1[i][2] ] ^ unit497_1[i][3]));
			}
		if(X_contra>0) L[497][1]=2;
		}
	//Check all rules of unit[498][0]
	L[498][0] = LargeX[498][1]>0 ? 1 : 0;
	satisfiable[498][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit498_0[i][0] ][ unit498_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit498_0[i][2] ][ unit498_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit498_0[i][4] ][ unit498_0[i][5] ] >0);
		X_contra = ( LargeX[498][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit498_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[498][1]=0; L[498][0]=1;}
			satisfiable[498][0]=satisfiable[498][0] & ((x[498] ^ 0) | (x[ unit498_0[i][0] ] ^ unit498_0[i][1]) |(x[ unit498_0[i][2] ] ^ unit498_0[i][3]));
			}
		if(X_contra>0) L[498][0]=2;
		}
	//Check all rules of unit[498][1]
	L[498][1] = LargeX[498][0]>0 ? 1 : 0;
	satisfiable[498][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit498_1[i][0] ][ unit498_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit498_1[i][2] ][ unit498_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit498_1[i][4] ][ unit498_1[i][5] ] >0);
		X_contra = ( LargeX[498][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit498_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[498][0]=0; L[498][1]=1;}
			satisfiable[498][1]=satisfiable[498][1] & ((x[498] ^ 1) | (x[ unit498_1[i][0] ] ^ unit498_1[i][1]) |(x[ unit498_1[i][2] ] ^ unit498_1[i][3]));
			}
		if(X_contra>0) L[498][1]=2;
		}
	//Check all rules of unit[499][0]
	L[499][0] = LargeX[499][1]>0 ? 1 : 0;
	satisfiable[499][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit499_0[i][0] ][ unit499_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit499_0[i][2] ][ unit499_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit499_0[i][4] ][ unit499_0[i][5] ] >0);
		X_contra = ( LargeX[499][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit499_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[499][1]=0; L[499][0]=1;}
			satisfiable[499][0]=satisfiable[499][0] & ((x[499] ^ 0) | (x[ unit499_0[i][0] ] ^ unit499_0[i][1]) |(x[ unit499_0[i][2] ] ^ unit499_0[i][3]));
			}
		if(X_contra>0) L[499][0]=2;
		}
	//Check all rules of unit[499][1]
	L[499][1] = LargeX[499][0]>0 ? 1 : 0;
	satisfiable[499][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit499_1[i][0] ][ unit499_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit499_1[i][2] ][ unit499_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit499_1[i][4] ][ unit499_1[i][5] ] >0);
		X_contra = ( LargeX[499][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit499_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[499][0]=0; L[499][1]=1;}
			satisfiable[499][1]=satisfiable[499][1] & ((x[499] ^ 1) | (x[ unit499_1[i][0] ] ^ unit499_1[i][1]) |(x[ unit499_1[i][2] ] ^ unit499_1[i][3]));
			}
		if(X_contra>0) L[499][1]=2;
		}
	//Check all rules of unit[500][0]
	L[500][0] = LargeX[500][1]>0 ? 1 : 0;
	satisfiable[500][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit500_0[i][0] ][ unit500_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit500_0[i][2] ][ unit500_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit500_0[i][4] ][ unit500_0[i][5] ] >0);
		X_contra = ( LargeX[500][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit500_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[500][1]=0; L[500][0]=1;}
			satisfiable[500][0]=satisfiable[500][0] & ((x[500] ^ 0) | (x[ unit500_0[i][0] ] ^ unit500_0[i][1]) |(x[ unit500_0[i][2] ] ^ unit500_0[i][3]));
			}
		if(X_contra>0) L[500][0]=2;
		}
	//Check all rules of unit[500][1]
	L[500][1] = LargeX[500][0]>0 ? 1 : 0;
	satisfiable[500][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit500_1[i][0] ][ unit500_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit500_1[i][2] ][ unit500_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit500_1[i][4] ][ unit500_1[i][5] ] >0);
		X_contra = ( LargeX[500][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit500_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[500][0]=0; L[500][1]=1;}
			satisfiable[500][1]=satisfiable[500][1] & ((x[500] ^ 1) | (x[ unit500_1[i][0] ] ^ unit500_1[i][1]) |(x[ unit500_1[i][2] ] ^ unit500_1[i][3]));
			}
		if(X_contra>0) L[500][1]=2;
		}
	//Check all rules of unit[501][0]
	L[501][0] = LargeX[501][1]>0 ? 1 : 0;
	satisfiable[501][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit501_0[i][0] ][ unit501_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit501_0[i][2] ][ unit501_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit501_0[i][4] ][ unit501_0[i][5] ] >0);
		X_contra = ( LargeX[501][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit501_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[501][1]=0; L[501][0]=1;}
			satisfiable[501][0]=satisfiable[501][0] & ((x[501] ^ 0) | (x[ unit501_0[i][0] ] ^ unit501_0[i][1]) |(x[ unit501_0[i][2] ] ^ unit501_0[i][3]));
			}
		if(X_contra>0) L[501][0]=2;
		}
	//Check all rules of unit[501][1]
	L[501][1] = LargeX[501][0]>0 ? 1 : 0;
	satisfiable[501][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit501_1[i][0] ][ unit501_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit501_1[i][2] ][ unit501_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit501_1[i][4] ][ unit501_1[i][5] ] >0);
		X_contra = ( LargeX[501][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit501_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[501][0]=0; L[501][1]=1;}
			satisfiable[501][1]=satisfiable[501][1] & ((x[501] ^ 1) | (x[ unit501_1[i][0] ] ^ unit501_1[i][1]) |(x[ unit501_1[i][2] ] ^ unit501_1[i][3]));
			}
		if(X_contra>0) L[501][1]=2;
		}
	//Check all rules of unit[502][0]
	L[502][0] = LargeX[502][1]>0 ? 1 : 0;
	satisfiable[502][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit502_0[i][0] ][ unit502_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit502_0[i][2] ][ unit502_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit502_0[i][4] ][ unit502_0[i][5] ] >0);
		X_contra = ( LargeX[502][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit502_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[502][1]=0; L[502][0]=1;}
			satisfiable[502][0]=satisfiable[502][0] & ((x[502] ^ 0) | (x[ unit502_0[i][0] ] ^ unit502_0[i][1]) |(x[ unit502_0[i][2] ] ^ unit502_0[i][3]));
			}
		if(X_contra>0) L[502][0]=2;
		}
	//Check all rules of unit[502][1]
	L[502][1] = LargeX[502][0]>0 ? 1 : 0;
	satisfiable[502][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit502_1[i][0] ][ unit502_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit502_1[i][2] ][ unit502_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit502_1[i][4] ][ unit502_1[i][5] ] >0);
		X_contra = ( LargeX[502][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit502_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[502][0]=0; L[502][1]=1;}
			satisfiable[502][1]=satisfiable[502][1] & ((x[502] ^ 1) | (x[ unit502_1[i][0] ] ^ unit502_1[i][1]) |(x[ unit502_1[i][2] ] ^ unit502_1[i][3]));
			}
		if(X_contra>0) L[502][1]=2;
		}
	//Check all rules of unit[503][0]
	L[503][0] = LargeX[503][1]>0 ? 1 : 0;
	satisfiable[503][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit503_0[i][0] ][ unit503_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit503_0[i][2] ][ unit503_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit503_0[i][4] ][ unit503_0[i][5] ] >0);
		X_contra = ( LargeX[503][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit503_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[503][1]=0; L[503][0]=1;}
			satisfiable[503][0]=satisfiable[503][0] & ((x[503] ^ 0) | (x[ unit503_0[i][0] ] ^ unit503_0[i][1]) |(x[ unit503_0[i][2] ] ^ unit503_0[i][3]));
			}
		if(X_contra>0) L[503][0]=2;
		}
	//Check all rules of unit[503][1]
	L[503][1] = LargeX[503][0]>0 ? 1 : 0;
	satisfiable[503][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit503_1[i][0] ][ unit503_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit503_1[i][2] ][ unit503_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit503_1[i][4] ][ unit503_1[i][5] ] >0);
		X_contra = ( LargeX[503][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit503_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[503][0]=0; L[503][1]=1;}
			satisfiable[503][1]=satisfiable[503][1] & ((x[503] ^ 1) | (x[ unit503_1[i][0] ] ^ unit503_1[i][1]) |(x[ unit503_1[i][2] ] ^ unit503_1[i][3]));
			}
		if(X_contra>0) L[503][1]=2;
		}
	//Check all rules of unit[504][0]
	L[504][0] = LargeX[504][1]>0 ? 1 : 0;
	satisfiable[504][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit504_0[i][0] ][ unit504_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit504_0[i][2] ][ unit504_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit504_0[i][4] ][ unit504_0[i][5] ] >0);
		X_contra = ( LargeX[504][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit504_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[504][1]=0; L[504][0]=1;}
			satisfiable[504][0]=satisfiable[504][0] & ((x[504] ^ 0) | (x[ unit504_0[i][0] ] ^ unit504_0[i][1]) |(x[ unit504_0[i][2] ] ^ unit504_0[i][3]));
			}
		if(X_contra>0) L[504][0]=2;
		}
	//Check all rules of unit[504][1]
	L[504][1] = LargeX[504][0]>0 ? 1 : 0;
	satisfiable[504][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit504_1[i][0] ][ unit504_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit504_1[i][2] ][ unit504_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit504_1[i][4] ][ unit504_1[i][5] ] >0);
		X_contra = ( LargeX[504][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit504_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[504][0]=0; L[504][1]=1;}
			satisfiable[504][1]=satisfiable[504][1] & ((x[504] ^ 1) | (x[ unit504_1[i][0] ] ^ unit504_1[i][1]) |(x[ unit504_1[i][2] ] ^ unit504_1[i][3]));
			}
		if(X_contra>0) L[504][1]=2;
		}
	//Check all rules of unit[505][0]
	L[505][0] = LargeX[505][1]>0 ? 1 : 0;
	satisfiable[505][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit505_0[i][0] ][ unit505_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit505_0[i][2] ][ unit505_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit505_0[i][4] ][ unit505_0[i][5] ] >0);
		X_contra = ( LargeX[505][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit505_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[505][1]=0; L[505][0]=1;}
			satisfiable[505][0]=satisfiable[505][0] & ((x[505] ^ 0) | (x[ unit505_0[i][0] ] ^ unit505_0[i][1]) |(x[ unit505_0[i][2] ] ^ unit505_0[i][3]));
			}
		if(X_contra>0) L[505][0]=2;
		}
	//Check all rules of unit[505][1]
	L[505][1] = LargeX[505][0]>0 ? 1 : 0;
	satisfiable[505][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit505_1[i][0] ][ unit505_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit505_1[i][2] ][ unit505_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit505_1[i][4] ][ unit505_1[i][5] ] >0);
		X_contra = ( LargeX[505][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit505_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[505][0]=0; L[505][1]=1;}
			satisfiable[505][1]=satisfiable[505][1] & ((x[505] ^ 1) | (x[ unit505_1[i][0] ] ^ unit505_1[i][1]) |(x[ unit505_1[i][2] ] ^ unit505_1[i][3]));
			}
		if(X_contra>0) L[505][1]=2;
		}
	//Check all rules of unit[506][0]
	L[506][0] = LargeX[506][1]>0 ? 1 : 0;
	satisfiable[506][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit506_0[i][0] ][ unit506_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit506_0[i][2] ][ unit506_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit506_0[i][4] ][ unit506_0[i][5] ] >0);
		X_contra = ( LargeX[506][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit506_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[506][1]=0; L[506][0]=1;}
			satisfiable[506][0]=satisfiable[506][0] & ((x[506] ^ 0) | (x[ unit506_0[i][0] ] ^ unit506_0[i][1]) |(x[ unit506_0[i][2] ] ^ unit506_0[i][3]));
			}
		if(X_contra>0) L[506][0]=2;
		}
	//Check all rules of unit[506][1]
	L[506][1] = LargeX[506][0]>0 ? 1 : 0;
	satisfiable[506][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit506_1[i][0] ][ unit506_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit506_1[i][2] ][ unit506_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit506_1[i][4] ][ unit506_1[i][5] ] >0);
		X_contra = ( LargeX[506][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit506_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[506][0]=0; L[506][1]=1;}
			satisfiable[506][1]=satisfiable[506][1] & ((x[506] ^ 1) | (x[ unit506_1[i][0] ] ^ unit506_1[i][1]) |(x[ unit506_1[i][2] ] ^ unit506_1[i][3]));
			}
		if(X_contra>0) L[506][1]=2;
		}
	//Check all rules of unit[507][0]
	L[507][0] = LargeX[507][1]>0 ? 1 : 0;
	satisfiable[507][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit507_0[i][0] ][ unit507_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit507_0[i][2] ][ unit507_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit507_0[i][4] ][ unit507_0[i][5] ] >0);
		X_contra = ( LargeX[507][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit507_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[507][1]=0; L[507][0]=1;}
			satisfiable[507][0]=satisfiable[507][0] & ((x[507] ^ 0) | (x[ unit507_0[i][0] ] ^ unit507_0[i][1]) |(x[ unit507_0[i][2] ] ^ unit507_0[i][3]));
			}
		if(X_contra>0) L[507][0]=2;
		}
	//Check all rules of unit[507][1]
	L[507][1] = LargeX[507][0]>0 ? 1 : 0;
	satisfiable[507][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit507_1[i][0] ][ unit507_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit507_1[i][2] ][ unit507_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit507_1[i][4] ][ unit507_1[i][5] ] >0);
		X_contra = ( LargeX[507][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit507_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[507][0]=0; L[507][1]=1;}
			satisfiable[507][1]=satisfiable[507][1] & ((x[507] ^ 1) | (x[ unit507_1[i][0] ] ^ unit507_1[i][1]) |(x[ unit507_1[i][2] ] ^ unit507_1[i][3]));
			}
		if(X_contra>0) L[507][1]=2;
		}
	//Check all rules of unit[508][0]
	L[508][0] = LargeX[508][1]>0 ? 1 : 0;
	satisfiable[508][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit508_0[i][0] ][ unit508_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit508_0[i][2] ][ unit508_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit508_0[i][4] ][ unit508_0[i][5] ] >0);
		X_contra = ( LargeX[508][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit508_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[508][1]=0; L[508][0]=1;}
			satisfiable[508][0]=satisfiable[508][0] & ((x[508] ^ 0) | (x[ unit508_0[i][0] ] ^ unit508_0[i][1]) |(x[ unit508_0[i][2] ] ^ unit508_0[i][3]));
			}
		if(X_contra>0) L[508][0]=2;
		}
	//Check all rules of unit[508][1]
	L[508][1] = LargeX[508][0]>0 ? 1 : 0;
	satisfiable[508][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit508_1[i][0] ][ unit508_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit508_1[i][2] ][ unit508_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit508_1[i][4] ][ unit508_1[i][5] ] >0);
		X_contra = ( LargeX[508][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit508_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[508][0]=0; L[508][1]=1;}
			satisfiable[508][1]=satisfiable[508][1] & ((x[508] ^ 1) | (x[ unit508_1[i][0] ] ^ unit508_1[i][1]) |(x[ unit508_1[i][2] ] ^ unit508_1[i][3]));
			}
		if(X_contra>0) L[508][1]=2;
		}
	//Check all rules of unit[509][0]
	L[509][0] = LargeX[509][1]>0 ? 1 : 0;
	satisfiable[509][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit509_0[i][0] ][ unit509_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit509_0[i][2] ][ unit509_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit509_0[i][4] ][ unit509_0[i][5] ] >0);
		X_contra = ( LargeX[509][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit509_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[509][1]=0; L[509][0]=1;}
			satisfiable[509][0]=satisfiable[509][0] & ((x[509] ^ 0) | (x[ unit509_0[i][0] ] ^ unit509_0[i][1]) |(x[ unit509_0[i][2] ] ^ unit509_0[i][3]));
			}
		if(X_contra>0) L[509][0]=2;
		}
	//Check all rules of unit[509][1]
	L[509][1] = LargeX[509][0]>0 ? 1 : 0;
	satisfiable[509][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit509_1[i][0] ][ unit509_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit509_1[i][2] ][ unit509_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit509_1[i][4] ][ unit509_1[i][5] ] >0);
		X_contra = ( LargeX[509][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit509_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[509][0]=0; L[509][1]=1;}
			satisfiable[509][1]=satisfiable[509][1] & ((x[509] ^ 1) | (x[ unit509_1[i][0] ] ^ unit509_1[i][1]) |(x[ unit509_1[i][2] ] ^ unit509_1[i][3]));
			}
		if(X_contra>0) L[509][1]=2;
		}
	//Check all rules of unit[510][0]
	L[510][0] = LargeX[510][1]>0 ? 1 : 0;
	satisfiable[510][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit510_0[i][0] ][ unit510_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit510_0[i][2] ][ unit510_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit510_0[i][4] ][ unit510_0[i][5] ] >0);
		X_contra = ( LargeX[510][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit510_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[510][1]=0; L[510][0]=1;}
			satisfiable[510][0]=satisfiable[510][0] & ((x[510] ^ 0) | (x[ unit510_0[i][0] ] ^ unit510_0[i][1]) |(x[ unit510_0[i][2] ] ^ unit510_0[i][3]));
			}
		if(X_contra>0) L[510][0]=2;
		}
	//Check all rules of unit[510][1]
	L[510][1] = LargeX[510][0]>0 ? 1 : 0;
	satisfiable[510][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit510_1[i][0] ][ unit510_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit510_1[i][2] ][ unit510_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit510_1[i][4] ][ unit510_1[i][5] ] >0);
		X_contra = ( LargeX[510][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit510_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[510][0]=0; L[510][1]=1;}
			satisfiable[510][1]=satisfiable[510][1] & ((x[510] ^ 1) | (x[ unit510_1[i][0] ] ^ unit510_1[i][1]) |(x[ unit510_1[i][2] ] ^ unit510_1[i][3]));
			}
		if(X_contra>0) L[510][1]=2;
		}
	//Check all rules of unit[511][0]
	L[511][0] = LargeX[511][1]>0 ? 1 : 0;
	satisfiable[511][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit511_0[i][0] ][ unit511_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit511_0[i][2] ][ unit511_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit511_0[i][4] ][ unit511_0[i][5] ] >0);
		X_contra = ( LargeX[511][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit511_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[511][1]=0; L[511][0]=1;}
			satisfiable[511][0]=satisfiable[511][0] & ((x[511] ^ 0) | (x[ unit511_0[i][0] ] ^ unit511_0[i][1]) |(x[ unit511_0[i][2] ] ^ unit511_0[i][3]));
			}
		if(X_contra>0) L[511][0]=2;
		}
	//Check all rules of unit[511][1]
	L[511][1] = LargeX[511][0]>0 ? 1 : 0;
	satisfiable[511][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit511_1[i][0] ][ unit511_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit511_1[i][2] ][ unit511_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit511_1[i][4] ][ unit511_1[i][5] ] >0);
		X_contra = ( LargeX[511][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit511_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[511][0]=0; L[511][1]=1;}
			satisfiable[511][1]=satisfiable[511][1] & ((x[511] ^ 1) | (x[ unit511_1[i][0] ] ^ unit511_1[i][1]) |(x[ unit511_1[i][2] ] ^ unit511_1[i][3]));
			}
		if(X_contra>0) L[511][1]=2;
		}
	//Check all rules of unit[512][0]
	L[512][0] = LargeX[512][1]>0 ? 1 : 0;
	satisfiable[512][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit512_0[i][0] ][ unit512_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit512_0[i][2] ][ unit512_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit512_0[i][4] ][ unit512_0[i][5] ] >0);
		X_contra = ( LargeX[512][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit512_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[512][1]=0; L[512][0]=1;}
			satisfiable[512][0]=satisfiable[512][0] & ((x[512] ^ 0) | (x[ unit512_0[i][0] ] ^ unit512_0[i][1]) |(x[ unit512_0[i][2] ] ^ unit512_0[i][3]));
			}
		if(X_contra>0) L[512][0]=2;
		}
	//Check all rules of unit[512][1]
	L[512][1] = LargeX[512][0]>0 ? 1 : 0;
	satisfiable[512][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit512_1[i][0] ][ unit512_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit512_1[i][2] ][ unit512_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit512_1[i][4] ][ unit512_1[i][5] ] >0);
		X_contra = ( LargeX[512][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit512_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[512][0]=0; L[512][1]=1;}
			satisfiable[512][1]=satisfiable[512][1] & ((x[512] ^ 1) | (x[ unit512_1[i][0] ] ^ unit512_1[i][1]) |(x[ unit512_1[i][2] ] ^ unit512_1[i][3]));
			}
		if(X_contra>0) L[512][1]=2;
		}
	//Check all rules of unit[513][0]
	L[513][0] = LargeX[513][1]>0 ? 1 : 0;
	satisfiable[513][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit513_0[i][0] ][ unit513_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit513_0[i][2] ][ unit513_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit513_0[i][4] ][ unit513_0[i][5] ] >0);
		X_contra = ( LargeX[513][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit513_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[513][1]=0; L[513][0]=1;}
			satisfiable[513][0]=satisfiable[513][0] & ((x[513] ^ 0) | (x[ unit513_0[i][0] ] ^ unit513_0[i][1]) |(x[ unit513_0[i][2] ] ^ unit513_0[i][3]));
			}
		if(X_contra>0) L[513][0]=2;
		}
	//Check all rules of unit[513][1]
	L[513][1] = LargeX[513][0]>0 ? 1 : 0;
	satisfiable[513][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit513_1[i][0] ][ unit513_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit513_1[i][2] ][ unit513_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit513_1[i][4] ][ unit513_1[i][5] ] >0);
		X_contra = ( LargeX[513][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit513_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[513][0]=0; L[513][1]=1;}
			satisfiable[513][1]=satisfiable[513][1] & ((x[513] ^ 1) | (x[ unit513_1[i][0] ] ^ unit513_1[i][1]) |(x[ unit513_1[i][2] ] ^ unit513_1[i][3]));
			}
		if(X_contra>0) L[513][1]=2;
		}
	//Check all rules of unit[514][0]
	L[514][0] = LargeX[514][1]>0 ? 1 : 0;
	satisfiable[514][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit514_0[i][0] ][ unit514_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit514_0[i][2] ][ unit514_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit514_0[i][4] ][ unit514_0[i][5] ] >0);
		X_contra = ( LargeX[514][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit514_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[514][1]=0; L[514][0]=1;}
			satisfiable[514][0]=satisfiable[514][0] & ((x[514] ^ 0) | (x[ unit514_0[i][0] ] ^ unit514_0[i][1]) |(x[ unit514_0[i][2] ] ^ unit514_0[i][3]));
			}
		if(X_contra>0) L[514][0]=2;
		}
	//Check all rules of unit[514][1]
	L[514][1] = LargeX[514][0]>0 ? 1 : 0;
	satisfiable[514][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit514_1[i][0] ][ unit514_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit514_1[i][2] ][ unit514_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit514_1[i][4] ][ unit514_1[i][5] ] >0);
		X_contra = ( LargeX[514][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit514_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[514][0]=0; L[514][1]=1;}
			satisfiable[514][1]=satisfiable[514][1] & ((x[514] ^ 1) | (x[ unit514_1[i][0] ] ^ unit514_1[i][1]) |(x[ unit514_1[i][2] ] ^ unit514_1[i][3]));
			}
		if(X_contra>0) L[514][1]=2;
		}
	//Check all rules of unit[515][0]
	L[515][0] = LargeX[515][1]>0 ? 1 : 0;
	satisfiable[515][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit515_0[i][0] ][ unit515_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit515_0[i][2] ][ unit515_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit515_0[i][4] ][ unit515_0[i][5] ] >0);
		X_contra = ( LargeX[515][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit515_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[515][1]=0; L[515][0]=1;}
			satisfiable[515][0]=satisfiable[515][0] & ((x[515] ^ 0) | (x[ unit515_0[i][0] ] ^ unit515_0[i][1]) |(x[ unit515_0[i][2] ] ^ unit515_0[i][3]));
			}
		if(X_contra>0) L[515][0]=2;
		}
	//Check all rules of unit[515][1]
	L[515][1] = LargeX[515][0]>0 ? 1 : 0;
	satisfiable[515][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit515_1[i][0] ][ unit515_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit515_1[i][2] ][ unit515_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit515_1[i][4] ][ unit515_1[i][5] ] >0);
		X_contra = ( LargeX[515][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit515_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[515][0]=0; L[515][1]=1;}
			satisfiable[515][1]=satisfiable[515][1] & ((x[515] ^ 1) | (x[ unit515_1[i][0] ] ^ unit515_1[i][1]) |(x[ unit515_1[i][2] ] ^ unit515_1[i][3]));
			}
		if(X_contra>0) L[515][1]=2;
		}
	//Check all rules of unit[516][0]
	L[516][0] = LargeX[516][1]>0 ? 1 : 0;
	satisfiable[516][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit516_0[i][0] ][ unit516_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit516_0[i][2] ][ unit516_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit516_0[i][4] ][ unit516_0[i][5] ] >0);
		X_contra = ( LargeX[516][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit516_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[516][1]=0; L[516][0]=1;}
			satisfiable[516][0]=satisfiable[516][0] & ((x[516] ^ 0) | (x[ unit516_0[i][0] ] ^ unit516_0[i][1]) |(x[ unit516_0[i][2] ] ^ unit516_0[i][3]));
			}
		if(X_contra>0) L[516][0]=2;
		}
	//Check all rules of unit[516][1]
	L[516][1] = LargeX[516][0]>0 ? 1 : 0;
	satisfiable[516][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit516_1[i][0] ][ unit516_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit516_1[i][2] ][ unit516_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit516_1[i][4] ][ unit516_1[i][5] ] >0);
		X_contra = ( LargeX[516][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit516_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[516][0]=0; L[516][1]=1;}
			satisfiable[516][1]=satisfiable[516][1] & ((x[516] ^ 1) | (x[ unit516_1[i][0] ] ^ unit516_1[i][1]) |(x[ unit516_1[i][2] ] ^ unit516_1[i][3]));
			}
		if(X_contra>0) L[516][1]=2;
		}
	//Check all rules of unit[517][0]
	L[517][0] = LargeX[517][1]>0 ? 1 : 0;
	satisfiable[517][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit517_0[i][0] ][ unit517_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit517_0[i][2] ][ unit517_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit517_0[i][4] ][ unit517_0[i][5] ] >0);
		X_contra = ( LargeX[517][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit517_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[517][1]=0; L[517][0]=1;}
			satisfiable[517][0]=satisfiable[517][0] & ((x[517] ^ 0) | (x[ unit517_0[i][0] ] ^ unit517_0[i][1]) |(x[ unit517_0[i][2] ] ^ unit517_0[i][3]));
			}
		if(X_contra>0) L[517][0]=2;
		}
	//Check all rules of unit[517][1]
	L[517][1] = LargeX[517][0]>0 ? 1 : 0;
	satisfiable[517][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit517_1[i][0] ][ unit517_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit517_1[i][2] ][ unit517_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit517_1[i][4] ][ unit517_1[i][5] ] >0);
		X_contra = ( LargeX[517][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit517_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[517][0]=0; L[517][1]=1;}
			satisfiable[517][1]=satisfiable[517][1] & ((x[517] ^ 1) | (x[ unit517_1[i][0] ] ^ unit517_1[i][1]) |(x[ unit517_1[i][2] ] ^ unit517_1[i][3]));
			}
		if(X_contra>0) L[517][1]=2;
		}
	//Check all rules of unit[518][0]
	L[518][0] = LargeX[518][1]>0 ? 1 : 0;
	satisfiable[518][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit518_0[i][0] ][ unit518_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit518_0[i][2] ][ unit518_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit518_0[i][4] ][ unit518_0[i][5] ] >0);
		X_contra = ( LargeX[518][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit518_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[518][1]=0; L[518][0]=1;}
			satisfiable[518][0]=satisfiable[518][0] & ((x[518] ^ 0) | (x[ unit518_0[i][0] ] ^ unit518_0[i][1]) |(x[ unit518_0[i][2] ] ^ unit518_0[i][3]));
			}
		if(X_contra>0) L[518][0]=2;
		}
	//Check all rules of unit[518][1]
	L[518][1] = LargeX[518][0]>0 ? 1 : 0;
	satisfiable[518][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit518_1[i][0] ][ unit518_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit518_1[i][2] ][ unit518_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit518_1[i][4] ][ unit518_1[i][5] ] >0);
		X_contra = ( LargeX[518][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit518_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[518][0]=0; L[518][1]=1;}
			satisfiable[518][1]=satisfiable[518][1] & ((x[518] ^ 1) | (x[ unit518_1[i][0] ] ^ unit518_1[i][1]) |(x[ unit518_1[i][2] ] ^ unit518_1[i][3]));
			}
		if(X_contra>0) L[518][1]=2;
		}
	//Check all rules of unit[519][0]
	L[519][0] = LargeX[519][1]>0 ? 1 : 0;
	satisfiable[519][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit519_0[i][0] ][ unit519_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit519_0[i][2] ][ unit519_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit519_0[i][4] ][ unit519_0[i][5] ] >0);
		X_contra = ( LargeX[519][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit519_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[519][1]=0; L[519][0]=1;}
			satisfiable[519][0]=satisfiable[519][0] & ((x[519] ^ 0) | (x[ unit519_0[i][0] ] ^ unit519_0[i][1]) |(x[ unit519_0[i][2] ] ^ unit519_0[i][3]));
			}
		if(X_contra>0) L[519][0]=2;
		}
	//Check all rules of unit[519][1]
	L[519][1] = LargeX[519][0]>0 ? 1 : 0;
	satisfiable[519][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit519_1[i][0] ][ unit519_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit519_1[i][2] ][ unit519_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit519_1[i][4] ][ unit519_1[i][5] ] >0);
		X_contra = ( LargeX[519][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit519_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[519][0]=0; L[519][1]=1;}
			satisfiable[519][1]=satisfiable[519][1] & ((x[519] ^ 1) | (x[ unit519_1[i][0] ] ^ unit519_1[i][1]) |(x[ unit519_1[i][2] ] ^ unit519_1[i][3]));
			}
		if(X_contra>0) L[519][1]=2;
		}
	//Check all rules of unit[520][0]
	L[520][0] = LargeX[520][1]>0 ? 1 : 0;
	satisfiable[520][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit520_0[i][0] ][ unit520_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit520_0[i][2] ][ unit520_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit520_0[i][4] ][ unit520_0[i][5] ] >0);
		X_contra = ( LargeX[520][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit520_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[520][1]=0; L[520][0]=1;}
			satisfiable[520][0]=satisfiable[520][0] & ((x[520] ^ 0) | (x[ unit520_0[i][0] ] ^ unit520_0[i][1]) |(x[ unit520_0[i][2] ] ^ unit520_0[i][3]));
			}
		if(X_contra>0) L[520][0]=2;
		}
	//Check all rules of unit[520][1]
	L[520][1] = LargeX[520][0]>0 ? 1 : 0;
	satisfiable[520][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit520_1[i][0] ][ unit520_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit520_1[i][2] ][ unit520_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit520_1[i][4] ][ unit520_1[i][5] ] >0);
		X_contra = ( LargeX[520][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit520_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[520][0]=0; L[520][1]=1;}
			satisfiable[520][1]=satisfiable[520][1] & ((x[520] ^ 1) | (x[ unit520_1[i][0] ] ^ unit520_1[i][1]) |(x[ unit520_1[i][2] ] ^ unit520_1[i][3]));
			}
		if(X_contra>0) L[520][1]=2;
		}
	//Check all rules of unit[521][0]
	L[521][0] = LargeX[521][1]>0 ? 1 : 0;
	satisfiable[521][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit521_0[i][0] ][ unit521_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit521_0[i][2] ][ unit521_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit521_0[i][4] ][ unit521_0[i][5] ] >0);
		X_contra = ( LargeX[521][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit521_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[521][1]=0; L[521][0]=1;}
			satisfiable[521][0]=satisfiable[521][0] & ((x[521] ^ 0) | (x[ unit521_0[i][0] ] ^ unit521_0[i][1]) |(x[ unit521_0[i][2] ] ^ unit521_0[i][3]));
			}
		if(X_contra>0) L[521][0]=2;
		}
	//Check all rules of unit[521][1]
	L[521][1] = LargeX[521][0]>0 ? 1 : 0;
	satisfiable[521][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit521_1[i][0] ][ unit521_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit521_1[i][2] ][ unit521_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit521_1[i][4] ][ unit521_1[i][5] ] >0);
		X_contra = ( LargeX[521][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit521_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[521][0]=0; L[521][1]=1;}
			satisfiable[521][1]=satisfiable[521][1] & ((x[521] ^ 1) | (x[ unit521_1[i][0] ] ^ unit521_1[i][1]) |(x[ unit521_1[i][2] ] ^ unit521_1[i][3]));
			}
		if(X_contra>0) L[521][1]=2;
		}
	//Check all rules of unit[522][0]
	L[522][0] = LargeX[522][1]>0 ? 1 : 0;
	satisfiable[522][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit522_0[i][0] ][ unit522_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit522_0[i][2] ][ unit522_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit522_0[i][4] ][ unit522_0[i][5] ] >0);
		X_contra = ( LargeX[522][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit522_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[522][1]=0; L[522][0]=1;}
			satisfiable[522][0]=satisfiable[522][0] & ((x[522] ^ 0) | (x[ unit522_0[i][0] ] ^ unit522_0[i][1]) |(x[ unit522_0[i][2] ] ^ unit522_0[i][3]));
			}
		if(X_contra>0) L[522][0]=2;
		}
	//Check all rules of unit[522][1]
	L[522][1] = LargeX[522][0]>0 ? 1 : 0;
	satisfiable[522][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit522_1[i][0] ][ unit522_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit522_1[i][2] ][ unit522_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit522_1[i][4] ][ unit522_1[i][5] ] >0);
		X_contra = ( LargeX[522][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit522_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[522][0]=0; L[522][1]=1;}
			satisfiable[522][1]=satisfiable[522][1] & ((x[522] ^ 1) | (x[ unit522_1[i][0] ] ^ unit522_1[i][1]) |(x[ unit522_1[i][2] ] ^ unit522_1[i][3]));
			}
		if(X_contra>0) L[522][1]=2;
		}
	//Check all rules of unit[523][0]
	L[523][0] = LargeX[523][1]>0 ? 1 : 0;
	satisfiable[523][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit523_0[i][0] ][ unit523_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit523_0[i][2] ][ unit523_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit523_0[i][4] ][ unit523_0[i][5] ] >0);
		X_contra = ( LargeX[523][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit523_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[523][1]=0; L[523][0]=1;}
			satisfiable[523][0]=satisfiable[523][0] & ((x[523] ^ 0) | (x[ unit523_0[i][0] ] ^ unit523_0[i][1]) |(x[ unit523_0[i][2] ] ^ unit523_0[i][3]));
			}
		if(X_contra>0) L[523][0]=2;
		}
	//Check all rules of unit[523][1]
	L[523][1] = LargeX[523][0]>0 ? 1 : 0;
	satisfiable[523][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit523_1[i][0] ][ unit523_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit523_1[i][2] ][ unit523_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit523_1[i][4] ][ unit523_1[i][5] ] >0);
		X_contra = ( LargeX[523][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit523_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[523][0]=0; L[523][1]=1;}
			satisfiable[523][1]=satisfiable[523][1] & ((x[523] ^ 1) | (x[ unit523_1[i][0] ] ^ unit523_1[i][1]) |(x[ unit523_1[i][2] ] ^ unit523_1[i][3]));
			}
		if(X_contra>0) L[523][1]=2;
		}
	//Check all rules of unit[524][0]
	L[524][0] = LargeX[524][1]>0 ? 1 : 0;
	satisfiable[524][0]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit524_0[i][0] ][ unit524_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit524_0[i][2] ][ unit524_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit524_0[i][4] ][ unit524_0[i][5] ] >0);
		X_contra = ( LargeX[524][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit524_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[524][1]=0; L[524][0]=1;}
			satisfiable[524][0]=satisfiable[524][0] & ((x[524] ^ 0) | (x[ unit524_0[i][0] ] ^ unit524_0[i][1]) |(x[ unit524_0[i][2] ] ^ unit524_0[i][3]));
			}
		if(X_contra>0) L[524][0]=2;
		}
	//Check all rules of unit[524][1]
	L[524][1] = LargeX[524][0]>0 ? 1 : 0;
	satisfiable[524][1]=1; 
	for(int i=0;i<3;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit524_1[i][0] ][ unit524_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit524_1[i][2] ][ unit524_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit524_1[i][4] ][ unit524_1[i][5] ] >0);
		X_contra = ( LargeX[524][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit524_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[524][0]=0; L[524][1]=1;}
			satisfiable[524][1]=satisfiable[524][1] & ((x[524] ^ 1) | (x[ unit524_1[i][0] ] ^ unit524_1[i][1]) |(x[ unit524_1[i][2] ] ^ unit524_1[i][3]));
			}
		if(X_contra>0) L[524][1]=2;
		}
	//Check all rules of unit[525][0]
	L[525][0] = LargeX[525][1]>0 ? 1 : 0;
	satisfiable[525][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit525_0[i][0] ][ unit525_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit525_0[i][2] ][ unit525_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit525_0[i][4] ][ unit525_0[i][5] ] >0);
		X_contra = ( LargeX[525][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit525_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[525][1]=0; L[525][0]=1;}
			satisfiable[525][0]=satisfiable[525][0] & ((x[525] ^ 0) | (x[ unit525_0[i][0] ] ^ unit525_0[i][1]) |(x[ unit525_0[i][2] ] ^ unit525_0[i][3]));
			}
		if(X_contra>0) L[525][0]=2;
		}
	//Check all rules of unit[525][1]
	L[525][1] = LargeX[525][0]>0 ? 1 : 0;
	satisfiable[525][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit525_1[i][0] ][ unit525_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit525_1[i][2] ][ unit525_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit525_1[i][4] ][ unit525_1[i][5] ] >0);
		X_contra = ( LargeX[525][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit525_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[525][0]=0; L[525][1]=1;}
			satisfiable[525][1]=satisfiable[525][1] & ((x[525] ^ 1) | (x[ unit525_1[i][0] ] ^ unit525_1[i][1]) |(x[ unit525_1[i][2] ] ^ unit525_1[i][3]));
			}
		if(X_contra>0) L[525][1]=2;
		}
	//Check all rules of unit[526][0]
	L[526][0] = LargeX[526][1]>0 ? 1 : 0;
	satisfiable[526][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit526_0[i][0] ][ unit526_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit526_0[i][2] ][ unit526_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit526_0[i][4] ][ unit526_0[i][5] ] >0);
		X_contra = ( LargeX[526][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit526_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[526][1]=0; L[526][0]=1;}
			satisfiable[526][0]=satisfiable[526][0] & ((x[526] ^ 0) | (x[ unit526_0[i][0] ] ^ unit526_0[i][1]) |(x[ unit526_0[i][2] ] ^ unit526_0[i][3]));
			}
		if(X_contra>0) L[526][0]=2;
		}
	//Check all rules of unit[526][1]
	L[526][1] = LargeX[526][0]>0 ? 1 : 0;
	satisfiable[526][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit526_1[i][0] ][ unit526_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit526_1[i][2] ][ unit526_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit526_1[i][4] ][ unit526_1[i][5] ] >0);
		X_contra = ( LargeX[526][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit526_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[526][0]=0; L[526][1]=1;}
			satisfiable[526][1]=satisfiable[526][1] & ((x[526] ^ 1) | (x[ unit526_1[i][0] ] ^ unit526_1[i][1]) |(x[ unit526_1[i][2] ] ^ unit526_1[i][3]));
			}
		if(X_contra>0) L[526][1]=2;
		}
	//Check all rules of unit[527][0]
	L[527][0] = LargeX[527][1]>0 ? 1 : 0;
	satisfiable[527][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit527_0[i][0] ][ unit527_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit527_0[i][2] ][ unit527_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit527_0[i][4] ][ unit527_0[i][5] ] >0);
		X_contra = ( LargeX[527][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit527_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[527][1]=0; L[527][0]=1;}
			satisfiable[527][0]=satisfiable[527][0] & ((x[527] ^ 0) | (x[ unit527_0[i][0] ] ^ unit527_0[i][1]) |(x[ unit527_0[i][2] ] ^ unit527_0[i][3]));
			}
		if(X_contra>0) L[527][0]=2;
		}
	//Check all rules of unit[527][1]
	L[527][1] = LargeX[527][0]>0 ? 1 : 0;
	satisfiable[527][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit527_1[i][0] ][ unit527_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit527_1[i][2] ][ unit527_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit527_1[i][4] ][ unit527_1[i][5] ] >0);
		X_contra = ( LargeX[527][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit527_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[527][0]=0; L[527][1]=1;}
			satisfiable[527][1]=satisfiable[527][1] & ((x[527] ^ 1) | (x[ unit527_1[i][0] ] ^ unit527_1[i][1]) |(x[ unit527_1[i][2] ] ^ unit527_1[i][3]));
			}
		if(X_contra>0) L[527][1]=2;
		}
	//Check all rules of unit[528][0]
	L[528][0] = LargeX[528][1]>0 ? 1 : 0;
	satisfiable[528][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit528_0[i][0] ][ unit528_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit528_0[i][2] ][ unit528_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit528_0[i][4] ][ unit528_0[i][5] ] >0);
		X_contra = ( LargeX[528][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit528_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[528][1]=0; L[528][0]=1;}
			satisfiable[528][0]=satisfiable[528][0] & ((x[528] ^ 0) | (x[ unit528_0[i][0] ] ^ unit528_0[i][1]) |(x[ unit528_0[i][2] ] ^ unit528_0[i][3]));
			}
		if(X_contra>0) L[528][0]=2;
		}
	//Check all rules of unit[528][1]
	L[528][1] = LargeX[528][0]>0 ? 1 : 0;
	satisfiable[528][1]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit528_1[i][0] ][ unit528_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit528_1[i][2] ][ unit528_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit528_1[i][4] ][ unit528_1[i][5] ] >0);
		X_contra = ( LargeX[528][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit528_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[528][0]=0; L[528][1]=1;}
			satisfiable[528][1]=satisfiable[528][1] & ((x[528] ^ 1) | (x[ unit528_1[i][0] ] ^ unit528_1[i][1]) |(x[ unit528_1[i][2] ] ^ unit528_1[i][3]));
			}
		if(X_contra>0) L[528][1]=2;
		}
	//Check all rules of unit[529][0]
	L[529][0] = LargeX[529][1]>0 ? 1 : 0;
	satisfiable[529][0]=1; 
	for(int i=0;i<4;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit529_0[i][0] ][ unit529_0[i][1] ] >0);
		X_contra23 = ( LargeX[ unit529_0[i][2] ][ unit529_0[i][3] ] >0);
		X_contra45 = ( LargeX[ unit529_0[i][4] ][ unit529_0[i][5] ] >0);
		X_contra = ( LargeX[529][0] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit529_0[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[529][1]=0; L[529][0]=1;}
			satisfiable[529][0]=satisfiable[529][0] & ((x[529] ^ 0) | (x[ unit529_0[i][0] ] ^ unit529_0[i][1]) |(x[ unit529_0[i][2] ] ^ unit529_0[i][3]));
			}
		if(X_contra>0) L[529][0]=2;
		}
	//Check all rules of unit[529][1]
	L[529][1] = LargeX[529][0]>0 ? 1 : 0;
	satisfiable[529][1]=1; 
	for(int i=0;i<0;i++){
		one_bit_t X_contra01;
		one_bit_t X_contra23;
		one_bit_t X_contra45;
		one_bit_t X_contra;
		X_contra01 = ( LargeX[ unit529_1[i][0] ][ unit529_1[i][1] ] >0);
		X_contra23 = ( LargeX[ unit529_1[i][2] ][ unit529_1[i][3] ] >0);
		X_contra45 = ( LargeX[ unit529_1[i][4] ][ unit529_1[i][5] ] >0);
		X_contra = ( LargeX[529][1] >0) & X_contra01 & X_contra23 & X_contra45;
		if(unit529_1[i][4]==0){
				if((X_contra01 & X_contra23)>0) {L[529][0]=0; L[529][1]=1;}
			satisfiable[529][1]=satisfiable[529][1] & ((x[529] ^ 1) | (x[ unit529_1[i][0] ] ^ unit529_1[i][1]) |(x[ unit529_1[i][2] ] ^ unit529_1[i][3]));
			}
		if(X_contra>0) L[529][1]=2;
		}
}