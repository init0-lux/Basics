#include<stdio.h>

int main() {
	int n, r, temp, dig = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	temp = n;

	while(n){
		dig = n%10;
		r = r*10 + dig;
		n /= 10;
	}

	if(r == temp) printf("%d is a palindrome\n", temp);
	else printf("%d is not a palindrome\n", temp);

	return 0;
}
