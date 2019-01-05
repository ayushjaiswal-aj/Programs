#include<stdio.h>
int main()
{
int x[]= {21,45,64};
int y[]= {43,22,64};
int p=0 , q=0;
for (int a = 0; a < sizeof(x)/sizeof(x[0]) && a< sizeof(y)/sizeof(y[0]) ; a++)
{
if (x[a] > y[a])
{ 
p = p + 1 ;
}
else if ( x[a] < y[a] )
{
q = q+1 ;
}
}
c[0] = p;
c[1] = q;
printf("%d", c);
}
