#include <stdio.h>

void uppercase(char* c)
{
	char tmp = (*c);//Wert von Übergabeparameter der Variable tmp zuweisen
	
	//Prüfe ob der Wert im lowercase Bereich liegt
	if(tmp >= 'a' && tmp <= 'z')
	{
		tmp = tmp - 'a' + 'A';
		
		*c = tmp; //Weise dem Speicher, auf den der Zeiger zeigt, den Wert von tmp zu
	}
}

int main()
{
	char c1 = 'a';
	
	printf("c1 = '%c'\n", c1);
	
	printf("making c1 uppercase..\n");
	uppercase(&c1);
	
	printf("c1 = '%c'\n", c1);
	
	return 0;
}
