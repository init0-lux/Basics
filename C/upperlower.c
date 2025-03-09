#include<stdio.h>
#include<string.h>

int main() {
	char s[100], r[100];
	scanf("%[^\n]%s", s);
	
	int len = strlen(s);

	int su = 0, sl = 0;
	for(int i = 0; i < len; i++){
		if( (int)s[i] >= 65 && (int) s[i] >= 97){
			su++;
			strcat(r, strlwr(s[i]));
		}
		else{
			sl++;
			strcat(r, strupr(s[i]));
		}
	}

	printf("%s %d %d", r, sl, su);

	return 0;
}
