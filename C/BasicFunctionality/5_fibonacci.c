#include<stdio.h>

int main() {
	int n, a=0, b=1, c = 0;
	printf("Enter the number: ");
	scanf("%d", &n);

	printf("\n%d %d", 0, 1);

	for(int i = 2; i < n; ++i){
		c = a+b;
		printf(" %d", c);
		a = b;
		b = c;
	}
	
	printf("\n");

	return 0;
}
