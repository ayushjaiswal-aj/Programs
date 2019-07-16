#include<stdio.h>
int isPrimeNumber(int x) {
	int i, c;
	for (i = 2; i <= x; i++) {
		if (x % i == 0) {
			c = 0;
			break;
		}
	}
	return c;
}
int main() {
	int num, result;
	printf("enter the number");
	scanf("%d", &num);
	result = isPrimeNumber(num);
	if (result == 0) {
		printf("not a prime number");
	}
	else if (result != 0) {
		printf("it is prime number");
	}
	return 0;
}

