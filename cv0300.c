/**

Priklady z knihy.

**/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	

	FILE *fileRead, *fileWrite;
	int c;
	
	fileRead = fopen("ORIG.TXT", "r");
	fileWrite = fopen("KOPIE.TXT", "w");

	if((fileRead = fopen("ORIG.TXT", "r")) == NULL)
	{
		printf("Soubor se nepodarilo otevrit!1!!\n");
		return 0;
	}

	while((c = getc(fileRead)) != EOF)
	{
		putc(c, fileWrite);
	}

	fclose(fileRead);
	fclose(fileWrite);
	return 0;
}