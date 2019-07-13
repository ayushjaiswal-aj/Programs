#include <stdio.h> 

void fun(int *arr2,int a) 
{ 
	/* Some operations on arr[] */
	arr2[0] = 10; 
	arr2[1] = 20; 
a = 10;

} 

int main() 
{ 
	int arr[100]; 
	int a = 1;
	fun(arr,a); 
	printf("%d %d", arr[0], a); 
	return 0; 
} 
