#include<stdio.h>

int mul(int x, int y);

int main() {
	int a, b;
	printf("Enter a: "); scanf("%d", &a);
	printf("\nEnter b: "); scanf("%d", &b);
	
	printf("\nint; The product of %d and %d is %d\n", a, b, mul(a, b));

	return 0;
}

int mul(int x, int y){
	return x*y;
}
