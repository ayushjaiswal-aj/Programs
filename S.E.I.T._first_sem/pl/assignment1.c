/*
	NAME: AYUSH JAISWAL	ROLL NO. 43
	SUBJECT: PROGRAMMING LABORATORY
	ASSIGNMENT 1:
		REPRESENT SETS AS ONE DIMENTIONAL ARRAY AND IMPLIMENT FUNCTION TO PERFORM
		1.UNION
		2.INTERSECTION
		3.DIFFERECE
		4.SYMMETRIC DIFFERNECE
		OF TWO SETS.
 */
#include<stdio.h>
void getSet(int x,int arr[x]){
	int i,j;
	printf("enter elements of set\n");
	for (i=0;i<x;i++){
		scanf("%d",&arr[i]);
		for (j=1;j<i;j++){
			if(arr[i]==arr[j]){
				i--;
				printf("do not repeat the elements\n");
				}
			}
		}
	}
void unionSet(int a,int b,int arr1[a],int arr2[b]){
	int i=0,j=0,n3=0;
	int arr3[n3];
	while (i<a && j<b){
		if(arr1[i] < arr2[j]){
			arr3[n3]=arr1[i++];
			n3++;
			}
		else if(arr1[i] > arr2[j]){
			arr3[n3]=arr2[j++];
			n3++;
			}
		else {
			arr3[n3]=arr1[i++];
			j++;
			n3++;
			}
		}
	while (i<a){
		arr3[n3] = arr1[i++];
		n3++;
		}
	while (j<b){
		arr3[n3] = arr2[j++];
		n3++;
		}
	for (i=0;i<n3;i++){
		printf("%d\n",arr3[i]);
		}	
	}
void setDifference(int a,int b,int arr1[a],int arr2[b]){
	int i,j,n3=0;
	int arr3[n3];
	for (i=0; i<a; i++){
		for (j=0; j<b; j++){
			if (arr1[i]==arr2[j]){
				break;
				}
			else if(j==b-1){
				arr3[n3]=arr1[i];
				n3++;
				}
			}
		}	
	for (i=0;i<n3;i++){
		printf("%d\n",arr3[i]);
		}
	}
void intersectionSet(int a,int b,int arr1[a],int arr2[b]){
	int i,j,n3=0;
	int arr3[n3];
	for (i=0; i<a; i++){
		for (j=0; j<b; j++){
			if (arr1[i]==arr2[j]){
				arr3[n3]=arr1[i];
				n3++;
				}
			}
		}
	for (i=0;i<n3;i++){
		printf("%d\n",arr3[i]);
		}
	}
int setSymmetricDifference(int m, int n, int set1[m], int set2[n]){
	int i=0,j=0,np=0;
	int P[np];
	while (i<m && j<n){
		if(set1[i] < set2[j]){
			P[np]=set1[i++];
			np++;
			}
		else if(set1[i] > set2[j]){
			P[np]=set2[j++];
			np++;
			}
		else {
			P[np]=set1[i++];
			j++;
			np++;
			}
		}
	while (i<m){
		P[np] = set1[i++];
		np++;
		}
	while (j<n){
		P[np] = set2[j++];
		np++;
		}
 		
	int nq=0;
	int Q[nq];
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			if (set1[i]==set2[j]){
				Q[nq]=set1[i];
				nq++;
				}
			}
		}
 
	setDifference(np,nq,P,Q);	
 	}
int main(){
	int na,nb;
	printf("enter size of set A\n");
	scanf("%d",&na);
	int A[na];
	getSet(na,A);
	printf("enter size of set B\n");
	scanf("%d",&nb);
	int B[nb];
	getSet(nb,B);
	printf("___________________________MENU___________________________\n");
	int ch;
	do{
		printf("enter operation on sets\n");
		printf("1-UNION \n2-INTERSECTION\n3-DIFFERENCE\n4-SYMMETRIC_DIFFERENCE\n5-EXIT\n");
		scanf("%d",&ch);
		switch (ch){
			case 1:
			printf("union of sets is\n");
			unionSet(na,nb,A,B);
			break;
			case 2:
			printf("intersection of sets is\n");	
			intersectionSet(na,nb,A,B);
			break;
			case 3:
			printf("difference of sets A-B is\n");
			setDifference(na,nb,A,B);
			break;
			case 4:
			printf("symmetric difference of sets A and B is\n");
			setSymmetricDifference(na,nb,A,B);
			break;
			default:
			break;
			}
		}while(ch!=5);
	}
