#include<stdio.h>
int main(){
	int i,j;
	printf("enter the timer limit in seconds");
	scanf("%d",&j);
	for (i=j; i>0; i--){
		printf("%d\n",i);
		sleep(1);
		}
	printf("time over\n");
	}
