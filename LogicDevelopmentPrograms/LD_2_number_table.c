/*
	Problem No.2
	Problem category: loops
	Problem statement:
		Write a C program to print the multiplication table of the number entered by the 			user. 
		The table should get displayed in the following form:-
		29*1=29
		29*2=58
*/

#include<stdio.h>
void table(int n){
	for (int i=1; i<=10; i++){
		printf("%d*%d=%d\n",n,i,n*i);
		}
	}
int main(){
	int num;
	printf("enter the number=");
	scanf("%d",&num);
	table(num);
	}
