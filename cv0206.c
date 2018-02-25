/**
Prectete znak a není li to ani písmeno ani číslo, vypiste na konzoli "Interpunkční znak", v opačném případě vytisknětě 
"Alfanumericky znak"
Smi se použít je jeden if-else příkaz.

45 - 57

65 122
**/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char input;

	printf("Vlozte znak: ");
	scanf("%c", &input);

	if(input <= 57 && input >= 48 || input <= 122 && input >=65)
	{
		printf("Alfanumericky znak.\n");
	}
	else
	{
		printf("Interpunkcni znak.\n");
	}

	printf("%d", input);

	return 0;
}