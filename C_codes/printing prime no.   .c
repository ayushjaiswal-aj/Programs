#include<stdio.h>
int main()
{
   int x,y,z,composite;
   scanf ("%d",&z);
   for (x=2;x<=z;x++)
   {
   	composite = 0;
   	for(y=2;y<=x-1;y++)
   	{
   		if(x%y==0)
   		{
   			composite =1;
   			break;
   			
   		}
   				
   		
   	}
   	if ( composite !=1)
   	{
   		
   	    printf("%d\n",x);
   	    
   	}
   }
   
   return 0;
   
   
}
    
