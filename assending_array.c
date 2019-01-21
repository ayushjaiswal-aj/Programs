#include<stdio.h>
int main(){
	int x,y,n,m;
	scanf("%d",&n);
	int arr[n];
	for (m=0;m<n;m++)
		scanf("%d",&arr[m]);

	for (x=0;x<n;x++){
		for (y=x+1;y<n;y++){
			if (arr[x] > arr[y]){
				int a = arr[x];
				arr[x] = arr[y];
				arr[y] = a;
				}
			}
		}
	printf("numbers in assending order");
	for (x=0;x<n;x++)
	printf("%d\n",arr[x]);
}
