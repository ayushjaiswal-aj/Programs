#include<stdio.h>
int main()
{
	int x, y, w;
	printf("enter any two numbers\n");
	scanf("%d%d",x,y);
	for (w=1;w++;)
	{
		if (w/x==0 && w/y==0)
		{
		printf("%d\n",w);
		break;
		}
	}
}
