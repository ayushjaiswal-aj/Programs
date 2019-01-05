#include<stdio.h>
int main()    
{
	int a,b,c;
	printf ("enter any number a=\n");
	scanf("%d",&a);
	c=0;
	printf ("factors are:\n");
	for(b=1;b<=a;b++)
	{
		if(a%b==0)
		{
			
			printf("%d\n",b);
			c++;
			
		}
		
	}
	printf("number of factors:\n");
	printf("%d\n",c);
	return 0;
}