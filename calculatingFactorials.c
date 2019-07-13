//this program is to calculate the factorial value of a natural number.
#include<stdio.h>
int main(){
	int factorial (int x);
	int num;
	printf("enter the number of which you want factorial of.\n");
	scanf("%d",&num);
	int fact = factorial (num);
	printf ("factorial of %d id %d\n",num,fact);
	}
int factorial (int x){	
	int i,j=1;
	for (i = x;i>=1;i--){
		j = j*i;
		}
	return j;
	} 

