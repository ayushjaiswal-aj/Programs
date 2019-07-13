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
long double add_V2(long double o){
	long double a = (o*(o+1)/2);
	return a;
	}
int main(){
	
	int n;
	printf("%d is the sum of numbers till %d\n",add(5),5);
	printf("%d is the sum of numbers till %d\n",add(1),1);
	printf("%d is the sum of numbers till %d\n",add(10),10);
	printf("%Lf is the sum of numbers till %d\n",add_V2(2147483647),10);
	n=28;
	n=n/2;		
	printf("%d is the sum of numbers till %d\n",add_V1(n),n);
	printf("%lu\n",sizeof(long double));
	return 0;

	}

