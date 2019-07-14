#include<stdio.h>
void checkPrimeNo(int  x){
	int i,c;
	for (i=2; i<=x; i++){
		if(x%i==0){
			printf("not a prime anumber");
			c=1;
			break;
			}
		}
		if(c!=1){
			printf("it is prime number"):
		}
	}	
int main(){
   	int num;
   	printf("enter the number");
   	scanf ("%d",&num);
   	checkPrimeNo(num);
  	return 0;
  	}

