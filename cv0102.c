/**
Napišete program, ktery precte znak a vypise znak s ASCII hodnotou o jednu vyšši např:
vstup: A
vystup: B (ASCII 66)

**/

#include <stdlib.h>
#include <stdio.h>

int main()
{
	// Deklarace promenne
	char input;

	// Uzivatelsky vstup
	printf("Zadejte nejaky znak: ");
	scanf("%c", &input);

	printf("%c (ASCII %d)", (char)input+1, input+1);


	return 0;
}