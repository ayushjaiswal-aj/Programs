#include<stdio.h>
int main()
{
int  x = 0;
int a[] = {3, 6, -2, -5, 7, 3};
for (int b = 0; b< sizeof(a)/sizeof(a[0]);b++)
{
int c = a[b];
int d = a[b+1];

if(c*d>x)
{
x = c*d;
}
}
printf("%d",x);
}
