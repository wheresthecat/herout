/**
Přečte soubor po radcich, radek vypise a na novy radek vypise pocet znaku z onoho radku.
**/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	

	printf("Prectu soubor a spocitam stuff z jednoho radku: \n");


	FILE *fileRead, *fileWrite;
	int c, count = 0, wholeCount = 0;

	fileRead = fopen("PISMENA.TXT", "r");
	fileWrite = fopen("KOLIK.TXT", "ab+");

	
	// Cyklus bezi do konce souboru.
	while(c != EOF)
	{
		count++;
		if((c = getc(fileRead)) == '\n') // Podminka hlida konec radku.
		{
			// -1 je kvuli pricteni noveho radku jako znaku.
			wholeCount += count - 1;
			printf("V radku bylo %d znaku.\n", count - 1 );
			fprintf(fileWrite, "V radku bylo %d znaku.\n", count - 1);
			count = 0;
		}

		
	}

	fclose(fileRead);
	fclose(fileWrite);

	printf("V souboru je celkem %d znaku.\n", wholeCount);
	

	return 0;
}