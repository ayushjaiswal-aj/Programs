/*
	Problem No.1
	Problem category: Loops
	Problem statement:
		Sum of n first numbers.(normal, formula)
*/


#include<stdio.h>
int add(int n){
	int i,sum=0;
	for (i=1; i<=n; i++){
		sum = sum + i;
		}
	return sum;
	}
/*
 *This is the optimized funtion of above add funtion 
 *With use of formula the time consumption of program is reduced
 *It became more efitiant in long run
 */
int add_V1(int m){
	int a = (m*(m+1)/2);
	return a;
	}
int main(){

	printf("%d is the sum of numbers till %d\n",add(5),5);
	printf("%d is the sum of numbers till %d\n",add(1),1);
	printf("%d is the sum of numbers till %d\n",add(10),10);
	printf("%d is the sum of numbers till %d\n",add_V1(10),10);
	return 0;

	}

