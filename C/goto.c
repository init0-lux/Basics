#include<stdio.h>

int main() {
	int n; scanf("%d", &n);
	int ret = 0;
reversed:
	while(n){
		int last = n%10;
		ret = ret * 10 + last;
		n /= 10;
	}
	printf("Reversed Number: %d\n", ret);
	return ret;

sum:
	while(n) {
		int last = n%10;
		ret += last;
		n /= 10;
	}
	printf("Sum of Digits: %d\n", ret);
	return ret;

	if(n%2 == 0) goto sum;
	else goto sum;
	
	return 0;
}
