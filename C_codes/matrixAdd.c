#include<stdio.h>
int addIntegers(int x, int y){
	int z;
	z=x+y;
	return z;
	}

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

void addMatrix(int size, int matA[][size],int matB[][size])
{
	int C[2][2];
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			C[i][j] = addIntegers(matA[i][j], matB[i][j]);
		}
	}
	printMatrix(size,C);
}

int main(){
	int A[2][2] = {{1,2},
		       {1,8}};

	int B[2][2] = {{3,4},
                       {3,4}};
	int C[2][2];

	int i,j;
	
	addMatrix(2,A,B);
	//printMatrix(2,addMatrix(2,A,B));
}
