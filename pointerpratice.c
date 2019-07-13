#include<stdio.h>
int main(){
	float a= 7.9999;
	float *b,*c;
	b=&a;
	c=b;
	printf("%u %u %u\n",&a,b,c);
	printf("%f %f %f %f\n",*b,*c,*(&a),a);


	int *j, i=12;
	j=&i;
	
	}
