/** znak "q" , pak ukončete program.
Je-li znak "0", pak vypište: Byla to nula.
Je-li znak 1, pak vypište: Byla to jednička.
Testuje EOF  a použijte switch.

**/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *fileRead;
	int c;

	fileRead = fopen("ZNAKY.TXT", "r");



	// Error check - opening file.
	if((fileRead = fopen("ZNAKY.TXT", "r")) == NULL)
	{
		printf("Error: Soubor se nepodarilo otevrit!\nShutting down...");
		return 1;
	}

	while((c = getc(fileRead)) != EOF)
	{
		switch(c)
		{
			
			case '0':
				printf("Byla to nula.\n");

			case '1':
				printf("Byla to jednicka.\n");
				break;

			case 'q':
				printf("Quit.\n");
				return 0;
				break;

			default:
				printf("Byl to nejaky shit prosty a pouhy.\n");
				break;

		}
	}

	
	
	printf("Whaat.\n");

	fclose(fileRead);
	if(fclose(fileRead) == EOF)
	{
		printf("Soubor se nepodario uzavrit.\n");		
	}
	
	return 0;
}