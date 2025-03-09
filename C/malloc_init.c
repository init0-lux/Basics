#include<stdio.h>
#include<stdlib.h>

int main() {
	printf("Enter the size of array: ");
	int size; scanf("%d", &size);
	int *my_ptr = malloc( sizeof(*my_ptr) * size );

	for(int i = 0; i < size; i++)
		*(my_ptr + i) = size - i; // my_ptr[i] = size-i;

	for(int i = size; i > 0; i-- ) printf("%d ", my_ptr[i]);
	printf("\n");
	for(int i = size; i > 0; i-- ) printf("%d ", &my_ptr[i]);
	printf("\n");

	free(my_ptr);
	for(int i = size; i > 0; i-- ) printf("%d ", &my_ptr[i]);
	printf("\n");

	return 0;
}
