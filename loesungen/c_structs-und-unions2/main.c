#include <stdio.h>

struct point_s {
	int x;
	char y;
};

//hier kommt die Typdefinition hin:
typedef struct point_s point;

int main()
{
	struct point_s p1 = { 5, 7 };
	point p2 = { 3, 2 };
	
	printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
	printf("p2.x = %d, p2.y = %d\n", p2.x, p2.y);
	
	return 0;
}
