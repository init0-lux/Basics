#include<stdio.h>

int main() {
	printf("Enter the array size: ");
	int arr_size;

	scanf("%d", &arr_size);
	int var[arr_size];

	printf("\nsizeof array = %zu\n", sizeof var);
	printf("\nsizeof each element: %zu\n", sizeof(var)/sizeof(var[0]));

	return 0;
}
