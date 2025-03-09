#include<stdio.h>

int main(){
	char s[] = "Asd";
	char *p = &s[0];
	char **pp = &p;

	printf("%p %p %p", s, *p, **pp);
	return 0;
}
