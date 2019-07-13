#include<stdio.h>

void printMatrix(int size, int mat[][size])
{
	for(int i = 0; i< size; i++)
	{
		for(int j = 0; j< size; j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");	
	}
}

void multiMatrix(int size1, int matP[][size1],int matQ[][size1]){
	int C[2][2];
	int x,y,z;
	for ( z=0; z<2; z++){
		for ( x=0; x<2; x++){
			int a=0;
			for ( y=0; y<2; y++){
			a = a + (matP[z][y] * matQ[y][x]);
				}
			C[z][x]= a;
			}
		}
	printMatrix(size1, C);

	}

int main(){
	int A[2][2] = {{2,3},
		       {4,5}};

	int B[2][2] = {{4,6},
                       {3,6}};
	
	multiMatrix(2,A,B);
}


