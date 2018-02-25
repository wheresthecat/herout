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
	

	printf("Prectu soubor a spocitam stuff: \n");


	FILE *fileRead;
	int c, count = 0;

	fileRead = fopen("PISMENA.TXT", "r");

	while((c = getc(fileRead)) != EOF)
	{
		count++;	
	}

	fclose(fileRead);

	printf("V souboru je celkem %d znaku.\n", count);
	

	return 0;
}