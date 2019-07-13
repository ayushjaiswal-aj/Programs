#include<stdio.h>
int main()
{
   int x,y;
   for (x=1;x<=50;x++)
   {
   	for(y=2;y<=x-1;y++)
   	{
   		if(x%y==0)
   		{
   			printf("%d\n",x);
   			break;
   		}
   		
   	}
   }
   
   return 0;
   
   
}
    
    
    