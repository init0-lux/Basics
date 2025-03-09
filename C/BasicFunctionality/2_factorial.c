#include<stdio.h>

int main() {
	int n, fac=1;
	printf("Enter the number: ");
	scanf("%d", &n);

	if(n == 0 || n == 1) printf("1");
	else{
		for(int i = 1; i <= n; i++){
			fac *= i;
		}
	}

	printf("The factorial of %d is %d\n", n, fac);

	return 0;
}
