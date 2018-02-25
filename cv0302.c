/**
Vytvořte eidorem textový soubor PISMENA.TXT, ve kterím bude několik řádek složených z 
malých a velkých písmen.
Tento soubor přečte a vypíše na obrazovku, zaroveň vytvoří soubor VELKY.TXT a zapise tam obsah 
souboru a mala pismena převede na velká.
**/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	

	printf("Prectu soubor a vypisu stuff:\n");


	FILE *fileRead, *fileWrite;
	int c;

	fileRead = fopen("PISMENA.TXT", "r");
	fileWrite = fopen("VELKY.TXT", "w");

	while((c = getc(fileRead)) != EOF)
	{
		
		putchar(c);

		c = (c >= 'a'  &&  c <= 'z') ? c - ('a' - 'A') : c;
		
		putc(c, fileWrite);
		
	}

	fclose(fileRead);
	fclose(fileWrite);

	return 0;
}