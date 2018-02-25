/**
Dalsi prace se soubory.

**/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	FILE *file;
	int c;

	file = fopen("DOPIS.TXT", "r");
 	
	while((c = getc(file)) != '\n')
	{
		
		putchar(c);
		
	}

	fclose(file);

	return 0;
}