#include<stdio.h>

int main() {
	int n; scanf("%d", &n);

	int r=0, rem = 0;

	while(n) {
		int rem = n%2;
		r = r*10 + rem;
		n /= 10;
	}

	int rev=0;
	while (rem) {
		int last = rem%10;
		int rev = rev*10 + last;
		rem /= 10;
	}

	printf("%d %d\n", rem, rev);
}
