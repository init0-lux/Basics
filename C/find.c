#include<stdio.h>
#include<math.h>

int main() {
	int a, b;

	//scanf("%d %d", &a, &b);
	a = 10; b = a;
	
	int total, valid;

	for(int i = a; i <= b; i++){
		double sq = sqrt(i);

		if( (int) sq == sq ) total++;
	}

	printf("%d", total);

	return 0;
}
