#include<stdio.h>

void First(){
	printf("First function\n");
}

void Second(){
	printf("Second function\n");
}

void Third(){
	printf("Third function\n");
}

void Fourth(){
	printf("Fourth function\n");
}

int main() {
	int a;
	printf("Enter the number corresponding to the function [1-4]: ");
	scanf("%d", &a);

	switch(a){
		case 1:
			First();
			break;
		case 2:
			Second();
			break;
		case 3:
			Third();
			break;
		case 4:
			Fourth();
			break;
		default:
			printf("Default Statement\n");
			break;
	}

	return 0;
}
