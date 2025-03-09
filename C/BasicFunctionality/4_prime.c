#include<stdio.h>

int main() {
	int n, m;
	int flag = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	m = n/2;

	for(int i = 2; i <= m; i++){
		if(!(n%i)){
			printf("%d is not a prime\n", n);
			flag = 1;
			break;
		}
	}

	if(!(flag)) printf("%d is a prime number\n", n);

	return 0;
}
