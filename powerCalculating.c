// this program is to calculate indices value.
#include<stdio.h>
int Power (int x,int y)
int main() {
	int base, power, ans;
	printf ("enter the base number of indice.\n");
	scanf("%d",&base);
	printf ("enter the power of base.\n");
	scanf("%d",&power);
	ans = Power(base,power);
	printf ("%d\n",ans);
	}
int Power (int x,int y) {
	int i,p;
	p = 1;
	for (i=1;i<=y,i++){
		p  = p * x;
		}
	return p;
	}
	
