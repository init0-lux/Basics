#include<stdio.h>

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	auto i = 1;
	auto j = 3.4;
	auto k = "Hello";
	
	//for(auto i = arr) printf("%d ", i);
	printf("%s\n", typeof(arr));
	printf("%s\n", typeof(i));
	printf("%s\n", typeof(j));
	printf("%s\n", typeof(k));

	return 0;
}
