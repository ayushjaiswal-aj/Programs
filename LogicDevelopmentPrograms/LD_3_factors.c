/*
	 Problem No.3
		Problem category: loops
		Problem statement:
				Factorial of given no.
 */


#include<stdio.h>
void getFactors(int x){
	int j=1;
	for (int i=1; i <= x; i++){
		if (x%i==0){
			printf("(%d)  %d*%d \n",j,x/i,i);
			j++;
			}
		}
	}
int main(){
	int num;
	printf("enter the number \n");
	scanf("%d",&num);
	printf("factors  of  %d are:\n",num);
	getFactors(num);
	}
