#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

int subtract(int a, int b)
{
	return a-b;
}

int multiply(int a, int b)
{
	return a*b;
}

int divide(int a, int b)
{
	return a/b;
}

int main()
{
	int (* fp1) (int, int) = add;
	int (* fp2) (int, int) = &subtract;
	int (* fp3) (int, int) = *multiply;
	int (* fp4) (int, int) = **divide;
	
	int a = 7;
	int b = 3;
	printf("fp1 = %d\n", (*fp1) (a, b));
	printf("fp2 = %d\n", fp2(a, b));
	printf("fp3 = %d\n", (*fp3) (a, b));
	printf("fp4 = %d\n", fp4(a, b));
	
	printf("etwas Action reinbringen..\n");
	fp2 = fp1;
	fp1 = fp3;
	printf("fp1 = %d\n", (*fp1) (a, b));
	printf("fp2 = %d\n", fp2(a, b));
	printf("fp3 = %d\n", (*fp3) (a, b));
	printf("fp4 = %d\n", fp4(a, b));
	
	return 0;
}