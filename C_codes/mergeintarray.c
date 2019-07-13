#include<stdio.h>
void mergearray(int array1[], int array2[],int uniarray);
int main(){
	int a[5], b[5];
//	int *c;
	int p,q,r;
	int uniarray[10];
	printf("enter first string of 5 numbers");
	for (p=0; p<5; p++){
		scanf("%d",&a[p]);
		}
	printf("enter another string of 5 numbers");
	for (q=0;q<5;q++){
		scanf("%d",&b[q]);
		}
	mergearray(a,b);
	for (r=0; r<10; r++){
	printf("%d\n",uniarray[r]);
	}
}
void mergearray(int array1[], int array2[]){
	int x,y,z;
	for (x=0; x < 5; x++){
		uniarray[x]=array1[x];
		}
	for (y=0; y <5; y++){
		uniarray[x+y]= array2[y];
		}
	for (z=0; z<10; z++){
		printf("%d",uniarray[z]);
	}
//	return uniarray;

}

