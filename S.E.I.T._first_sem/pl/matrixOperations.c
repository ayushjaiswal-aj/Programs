#include <stdio.h>
int A[3][3],B[3][3],Matrix[3][3];
int i,j,k,n;
void getMatrix(int getmat[3][3]){
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &getmat[i][j]);
			}
		}
	}

void putMatrix(int putmat[3][3]){
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf(" %d ", putmat[i][j]);
			}
		printf("\n");
		}
	}

void addMatrix(int a[3][3], int b[3][3]){
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			Matrix[i][j] = a[i][j]+b[i][j];
			}
		}
	printf("\nThe Addition of \n");
	putMatrix(a);
	printf("    +    \n");
	putMatrix(b);
	printf("    =   \n");
	putMatrix(Matrix);
	printf("\n\n");
	}

void Multiply(){
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			Matrix[i][j]=0;
			for(k=0; k<3; k++){
				Matrix[i][j]=Matrix[i][j]+(A[i][k]*B[k][j]);
				}
			}
		}
	printf("\nThe Multiplication of \n");
	putMatrix(A);
	printf("    *    \n");
	putMatrix(B);
	printf("    =   \n");
	putMatrix(Matrix);
	printf("\n\n");
	}

void Transpose(int a[3][3]){
	putMatrix(a);
	int u;
	u+=1;
	printf("   Transpose of set %d\n",u);
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf(" %d ", a[j][i]);
			}
		printf("\n");
		}
	printf("\n");
	}

void Saddle(int a[3][3]){
	int minR,coli,i,j,k,t=0;
	for (i=0; i<3; i++){
		minR = a[i][0];
		coli = 0;
		for (j=0; j<3; j++){
			if(minR > a[i][j]){
				minR = a[i][j];
				coli = j;
				}
			}
		for (k=0; k<3; k++){
			if (minR < a[k][coli]){
				break;
				}
			}
		if (k==3){
			printf("saddle point of matrix is %d\n",minR);
			printf("located at row = %d, column = %d\n",i,coli);
			t=1;
			}
		}
	if(t==0){
		printf("no saddle point present\n");
		}
	}		

int main(){	
	int ch;
	printf("\nMatrix Program : \n");
	printf("\nEnter the elements of Matrix A : ");
	getMatrix(A);
        printf("\nEnter the elements of Matrix B : ");
	getMatrix(B);
	do{
	printf("\t\t\t******!!!!!!MENU******!!!!!!\n1.Addition of Matrix\n2.Multiply of Matrix\n3.Transpose of Matrix\n4.Saddle Point of Matrix\n5.Exit\nEnter your choice for the operation to be performed : ");
	scanf("%d", &ch);
		switch(ch){
			case 1:
				addMatrix(A,B);
				break;
			case 2:
				Multiply();
				break;
			case 3:
				Transpose(A);
				Transpose(B);
				break;
			case 4:
				putMatrix(A);
				Saddle(A);
				
				putMatrix(B);
				Saddle(B);
				break;
			case 5:
			return 0;
			break;
		 	default:
			printf("\n!!!!!!!!!INVALID INPUT!!!!!!!\n ");
			}
		}while(1);
	}

