#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x, y;
} vector;

void printVector(vector* v)
{
	printf("v(@%d): x(@%d)=%d, y(@%d)=%d\n", v, &(v->x), v->x, &(v->y), v->y);
}

int main()
{
	vector v1 = { 5, 3 };
	printVector(&v1);
	vector* v2 = (vector*) malloc(sizeof(vector));
	v2->x = 9;
	v2->y = 7;
	printVector(v2);
	
	vector v3 = v1;
	printVector(&v3);
	
	vector* v4 = (vector*) malloc(sizeof(vector));
	v4->x = v1.x;
	v4->y = v1.y;
	printVector(v4);
	// pos1
	free(v2);
	printVector(v2);
	// pos2
	return 0;
}