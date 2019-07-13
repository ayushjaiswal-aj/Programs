#include<stdio.h>
void printspace(int x);
void printstar(int p);
int main() {
	int i,a;
	printf("enter the number of rows in pyramid");
	scanf("%d",&a);
	for (i = 0; i <= a ;i++){
		printspace(a-i);
		printstar(i);
		printf("\n");
	} 
}
void printspace(int x){
	int y;
	for (y=0 ; y<x ; y++){
		printf(" ");
	}
}
void printstar(int p){
	int q;
	for (q=0 ; q<p ; q++){
		printf("* ");
	}
}
