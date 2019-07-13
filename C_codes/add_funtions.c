#include<stdio.h>
int main()
{
	int a,b,c;
	int add(int x, int y);
	printf("enter any two numbers");
	scanf("%d%d",&a,&b);
	c= add (a,b);
	printf("%d\n",c);
}
	add (int x, int y)
{
	int z;
	z= x+y;
	return z;
}
