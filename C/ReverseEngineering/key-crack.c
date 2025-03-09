#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
	if(argc < 2){
		printf("Usage: %s <key>\n", argv[0]);
		return 0;
	}
	
	//char key[] = "AA00-KEY-ACT";
	
	if(strcmp(argv[1], "AA00-KEY-ACT") == 0) printf("Access Granted!\n");
	else printf("Access Denied!\n");

	return 0;
}
