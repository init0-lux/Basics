#include<stdio.h>

int sum(int, int);
int sum1(int a, int b);
int realsum(int x, int y) return x+y;

int main() {
	int a = 5, b = 10;

	printf("%d\n%d\n%d", sum(a, b), sum1(a, b), realsum(a, b));

	return 0;
}

int sum1(int a, int b) return a+b;
int sum(int a, int b) return a+b;
