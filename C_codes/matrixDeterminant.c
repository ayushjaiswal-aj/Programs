#include<stdio.h>
int determinant (int x,int mat2[][x]){
	int i,j;
	int z = 0;
	for (i=0; i<2; i++){
		for (j=1; j>=0; j--){
			z = (mat2[i][i]*mat2[j][j]) - z;
			}		
		}
	return z;
	}
int main(){
	int mat1[2][2] = {{1,2},
			 {1,2}};
		int size = 2; 
		int determinantValue =  determinant (size, mat1);
		printf("value of determinant is = %d",determinantValue);
	}
