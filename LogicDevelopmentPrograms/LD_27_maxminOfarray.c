/*
	Problem Number: 27
	Problem Category: Array
	Problem Statement: 
		Biggest and Lowest elements of an array

 */
#include<stdio.h>
int getBiggest(int s, int A[s]){
	int i,t;
	for (i=0;i<s;i++){
		if(A[i] > A[i+1]){
			t = A[i];
			A[i] = A[i+1];
			A[i+1] = t;
			}
		}
	return A[i-1];
	}		
int getLowest(int s, int A[s]){
	int i,t;
	for (i=0;i<s;i++){
		if(A[i] < A[i+1]){
			t = A[i];
			A[i] = A[i+1];
			A[i+1] = t;
			}
		}
	return A[i-1];
	}		

int main(){
	int arr[]={1,5,7,4,8,3,9};
	int size= sizeof(arr)/sizeof(arr[0]);
	printf("%d is the highst element of array \n", getBiggest(size, arr));
	printf("%d is the lowest element of array \n", getLowest(size, arr));
	}
