#include<stdio.h>
int isPowerOfTwo(int n)
{
	int i, p=1;
	for (i=0; p<n; i++)
	{
		p = p*2;
	}
	if (p==n)
	{
		return 1;
	}
	else
	{ 
		return 0;
	}   
} 
int main(){
	int n, a;
	scanf("%d",&n);
	a= isPowerOfTwo(n);
	if(isPowerOfTwo(n)){
		printf("\nN is power of two\n");
	}
	else{
		printf("\nN is NOT power of two\n");
	}
}
