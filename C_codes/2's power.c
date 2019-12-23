#include<stdio.h>
int fun(int n){
	int power=1;
	if(n%2 == 0){
		n = n/2;
		power++;
		fun (n);
		}
	} 
int main(){
	int n, a;
	scanf("%d",&n);
	a= fun(n);
	printf("%d",a);
	}
