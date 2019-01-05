#include<stdio.h>
int main()
{

	int c;
	c = EOF ;
	printf("%d \n",c);

	long a;
	a = 0;

	while (getchar() != EOF)
	{	
		++a;
	}
	printf("%ld\n",a);

}
