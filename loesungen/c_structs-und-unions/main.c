#include <stdio.h>

struct teststruct {
	int a;
	char b;
};

union testunion {
	int a;
	char b;
};

int main()
{
	/*	Auszug aus der ASCII Tabelle
		65 = A
		66 = B	*/
	struct teststruct s;
	s.a = 65;
	s.b = 66;
	
	printf("s.a = %d\n", s.a);
	printf("s.b = %c\n", s.b);
	
	union testunion u;
	u.a = 65;
	u.b = 66;
	
	printf("u.a = %d\n", u.a);
	printf("u.b = %c\n", u.b);
	
	return 0;
}