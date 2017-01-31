#include <stdio.h>
#include <stdlib.h>

char* create_string(int length, char init)
{
	char* str = (char*) malloc(sizeof(char) * (length + 1));
	
	int i;
	for(i=0; i < length; i++)
	{
		str[i] = init;
	}
	
	str[length] = '\0';
	
	return str;
}

void delete_string(char* str)
{
	free(str);
}

int main()
{
	char* str1 = create_string(5, 'a');
	char* str2 = create_string(9, 'B');
	
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	
	delete_string(str1);
	delete_string(str2);
	
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	
	return 0;
}