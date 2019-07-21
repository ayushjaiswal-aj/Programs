/*
	Problem number: 25
	Problem catagory: Series
	Problem statement:
		25.Write a function to calculate the series
2 , 8/3 , 32/5 , 128/7 , 512/9 , 2048/11....

 */


#include<stdio.h>
void getSeries(int x){
	int i,sum=1;
	for (i=1;i<=x*2;i++){
		sum = sum *2;
		if(i%2!=0){
			printf("%d/%d\n",sum,i);
			}
		}
	}
int main(){
	int n;
	printf("enter the number of terms in series\n");
	scanf("%d",&n);
	getSeries(n);
	}
	
