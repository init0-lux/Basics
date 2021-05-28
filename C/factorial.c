#include <stdio.h>

int main() {
	int i, number, fact = 1;

	printf("Enter a number to compute the factorial: ");
	scanf("%d", &number);

	for ( i = 1; i <= number; i++ )
		fact *= i;

	printf("The factorial of %d is: %d", number, fact);
	printf("\n\n\n");

	return 0;
}
