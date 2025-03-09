#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char foo[] = "Hello, World.";
	printf("%s\n", foo);

	char tmp;

	// i < strlen(foo) => the word is reversed twice
	// i < strlen(foo) / 2 => only reversed once
	for(size_t i = 0; i < strlen(foo) / 2; i++){
		//swap functionality
		tmp = foo[i];
		foo[i] = foo[strlen(foo) - i - 1];
		foo[strlen(foo) - i - 1] = tmp;
	}

	printf("%s\n", foo);

	return 0;
}
