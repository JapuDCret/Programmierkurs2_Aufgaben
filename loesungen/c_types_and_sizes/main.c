#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr1[5] = { 1, 2, 3 };
	int arr2[] = { 1, 2, 3 };
	int* arr3 = (int*) malloc(sizeof(int) * 5);
	
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(int*) = %d\n", sizeof(int*));
	printf("sizeof(arr1) = %d\n", sizeof(arr1));
	printf("sizeof(arr2) = %d\n", sizeof(arr2));
	printf("sizeof(arr3) = %d\n", sizeof(arr3));
	
	return 0;
}