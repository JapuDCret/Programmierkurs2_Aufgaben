#include <stdio.h>

int add_two(int a)
{
	return a+2;
}

int multiply_by_three(int a)
{
	return a*3;
}

int work(int a, int (*fp) (int))
{
	return fp(a);
}

int main()
{
	int (* fp1) (int) = &add_two;
	int (* fp2) (int) = &multiply_by_three;
	
	int a = 7;
	printf("work(a, fp1) = %d\n", work(a, fp1));
	printf("work(a, fp2) = %d\n", work(a, fp2));
	
	return 0;
}