/*
	Problem Number: 28
	Problem category: Array
	Problem statement: 
		Sum of no. at even/odd indices in an array.	

 */
 

#include<stdio.h>
int oddSum(int s,int A[s]){
	int i,sum=0;
	for (i=0; i<s; i++){
		if(i%2 != 0){
			sum = sum + A[i];
			}
		}
	return sum;
	}	
int evenSum(int s,int A[s]){
	int i,sum=0;
	for (i=0; i<s; i++){
		if(i%2 == 0){
			sum = sum + A[i];
			}
		}
	return sum;
	}	
int main(){
	int arr[]= {8,4,9,2,3,7,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("%d is sum of digits at odd palces\n",oddSum(size, arr));
	printf("%d is sum of digits at even palces\n", evenSum(size, arr));
	}
	 
