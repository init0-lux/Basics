#include<stdio.h>

int main() {
	int n, sum = 0, m;

	printf("Enter a number: ");
	scanf("%d", &n);

	while(n > 0){
		m = n%10;
		sum += m;
		n /= 10;
	}

	printf("Sum is = %d\n", sum);

	return 0;
}
