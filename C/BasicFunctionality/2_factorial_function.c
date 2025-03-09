#include<stdio.h>

int fac(int n){
	int fac = 1;
	if (n == 0 || n == 1) return 1;
	for(int i = 1; i <= n; i++)
		fac *= i;
	return fac;
}

int fac_rec(int n){
	int fac = 1;
}

int main() {
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	printf("Factorial of %d is %d\n", n, fac(n));

	return 0;
}
