#include <stdio.h>

int work(char* str);
void uppercase_string(char* str);

int main()
{
	char str1[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	char str2[] = "world";
	
	work(str1);
	work(str2);
	
	return 0;
} 

int work(char* str)
{
	printf("str = '%s'\n", str);
	
	printf("making str uppercase..\n");
	uppercase_string(str);
	
	printf("str = '%s'\n", str);
}

void uppercase_string(char* str)
{
	int i;
	for(i=0; *(str+i) != '\0'; i++)
	{
		if( ( *(str+i) >= 'a' ) && ( *(str+i)<= 'z' ) )
		{
			*(str+i) = *(str+i) - 'a' + 'A';
		}
	}
}