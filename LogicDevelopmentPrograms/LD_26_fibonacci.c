/*
	Problem number: 26
	Problem category: Serise
	problem statement:
		26.Fibonacci series.
			0 1 1 2 3  5 8 13 21 ...........
 */

#include<stdio.h>
void getSerise(int x){
	int i=0,j=1,k,count;
	printf("%d\n%d\n",i,j);
	for (count=0; count<x; count++){
		k = i+j;
		printf("%d\n",k);
		i=j;
		j=k;
		k=0;
		}
	}
int main(){
	int n;
	printf("enter length of fibonacci series \n");
	scanf("%d",&n);
	getSerise(n);
	}
