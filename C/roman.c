#include<stdio.h>

int main() {
	char n[30]; scanf("%s", &n);
	int sum = 0;
	
	for(int i = 0; i < 30; i++){
		if (n[i] == 'I') sum+= 1;
		else if (n[i] == 'V') sum += 5;
		else if (n[i] == 'X') sum += 10;
		else if (n[i] == 'L') sum += 50;
		else if (n[i] == 'C') sum += 100;
		else if (n[i] == 'D') sum += 500;
		else if (n[i] == 'M') sum += 1000;
		else break;
	}

	printf("%d\n", sum);

	return 0;
}
