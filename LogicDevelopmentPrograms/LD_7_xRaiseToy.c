/*
	Problem Number: 7
	Problem type: Loops
	Problem statement:
		Program to find x raise to y;
 */
 
#include<stdio.h>
int getExponent(int a,int b){
	int i,sum=1;
	for (i=0; i<b; i++){
		sum = sum * a;
		}
	return sum;
	}
int main(){
	int x,y,exponent;
	printf("enter number and its index respectively");
	scanf("%d%d",&x,&y);
	exponent = getExponent(x,y);
	printf("%d raise to power %d is = %d \n",x,y,exponent);
	}
	
	
