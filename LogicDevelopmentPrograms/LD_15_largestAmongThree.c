/*
	Problem Number :15
	Problem Catagory : Conditional Problems;
	Problem Statement:
		Maximum of three numbers.
 */
  



#include<stdio.h>
void findLargest(int num1, int num2, int num3){
		if (num1 > num2){
			if (num1 > num3){
				printf("%d is the largest number \n",num1);
				}
			else{
				printf("%d is largest number \n",num3);
				}
			}
		else if(num2 > num3){
			printf("%d is the largest number \n",num2);
			}
		else {
			printf("%d is the largest number \n",num3);
			}
		}
int main(){
	int n1,n2,n3;
	printf("enter three numbers to find out largest among them\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	findLargest(n1,n2,n3);
	}
		
			
