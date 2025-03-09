#include<stdio.h>

void thisCall(){
	printf("Called this func\n");
}

int main() {
	printf("Hello, World.\n");
	thisCall();

	return 0;
}
