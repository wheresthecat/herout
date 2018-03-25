/**
Napište program, který na každý řádek vypíše násobek čísla 3.14
**/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main(int argc, char const *argv[])
{
	FILE *fileWrite;

	if((fileWrite = fopen("CISLA.TXT", "ab+")) == NULL)
	{
		printf("Soubor se nepodarilo otevrit.\n");
		return 1;
	}

	for(int i = 1; i <= 20; i++)
	{
		double output = (double)PI * i;
		fprintf(fileWrite, "$%.2lf\n", output);
	}
	

	return 0;
}