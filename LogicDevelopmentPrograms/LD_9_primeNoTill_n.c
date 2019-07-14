/*
	 Problem No.9
		Problem category: loops
		Problem statement:
				Write a algorithm to print all prime no‟s from 1 to n.
 */

#include<stdio.h>
void getPrimeNo(int  z){
	int y,x,composite;
  	for (x=2;x<=z;x++){
   		composite = 0;
   		for(y=2;y<=x-1;y++){
   			if(x%y==0){
   				composite =1;
   				break;
   				}
   			}
   		if ( composite !=1){
   		 	 printf("%d\n",x);
   	    		}
  	 	}
  	 }
int main(){
   	int num;
   	printf("enter the number");
   	scanf ("%d",&num);
   	getPrimeNo(num);
  	return 0;
  	}
    
