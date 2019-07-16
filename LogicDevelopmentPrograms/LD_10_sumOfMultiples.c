/*
	Problem Number: 10
	Problem catagory: Loops
	Problem statement:
			10. If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The
			sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
			
*/


#include<stdio.h>
int getMultiplesSum(int x, int y){
	int i,j;
	int multi3[100/x],multi5[100/5];
	for (i=0; i<(100/x); i++){
		multi3[i] = (i+1)*3;
		}
	for  (j=0; j<(100/y);j++){
		multi5[j] = (j+1)*5;
		}
	for (i=0; i<(100/x); i++){
		printf("%d\n",multi3[i]);
		}
	printf("\n");
	for (j=0; j<(100/y); j++){
		printf("%d\n",multi5[j]);
		}
	printf("\n");
	int s1= sizeof(multi3)/sizeof (multi3[0]);
	int s2= sizeof(multi5)/sizeof (multi5[0]);
	int count1=0, count2=0,sum=0;
	while (count1<s1 && count2<s2){
		if(multi3[count1] < multi5[count2]){
			sum = sum + multi5[count2++];
			}
		else if (multi5[count2] < multi3[count1]){
			sum = sum + multi3[count1++];
			}
		else {
			sum = sum + multi3[count1++];
			count2++;
			}
		while(count1 < s1){
			sum = sum + multi3[count1++];
			}
		while (count2 < s2){
			sum = sum + multi5[count2++];
			}
		}
	printf("%d \n",sum);
	}
int main(){
	getMultiplesSum(3,5);
}

	
