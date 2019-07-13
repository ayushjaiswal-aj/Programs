//this program is to calculate the factorial value using recursion in funtion.

#include<stdio.h>
int main(){
	int num;
	printf("enter any number of your choice\n");
	scanf("%d",&num);
	int rec (int x);
	int fact = rec (num);
	printf("factorial of %d is %d\n",num,fact);	
	}
int rec (int x) {
	int f;
	if (x==1)
		return 1;
	else 
		f=x*rec(x-1);
	return f;
	}
