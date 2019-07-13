/*
	Problem No.1
	Problem category: Loops
	Problem statement:
		Sum of n first numbers.(normal, formula)
*/


#include<stdio.h>
int add(int n){
	int i,sum=0;
	for (i=1; i<=n; i++){
		sum = sum + i;
		}
	return sum;
	}
int main(){

	printf("%d is the sum of numbers till %d\n",add(5),5);
	printf("%d is the sum of numbers till %d\n",add(1),1);
	printf("%d is the sum of numbers till %d\n",add(0),0);
	return 0;

	}

