/**
Napište program, který přečte celé dekadické čislo v rozsahu 0 - 255 a vypíše jeho hexadecimální hodnotu dvouznakově, např:
vstup: 127
výstup: 7Fh

**/

#include <stdlib.h>
#include <stdio.h>

int main()
{

	// Deklarace promenne
	short input;

	// Uzivatelsky vstup:
	printf("Napiste cele dekadicke cislo (0-255): ");
	scanf("%d", &input);

	// kontroluje rozsah vstupu: (0-255)

	if(input > 255 || input < 0)
	{
		printf("Cislo je moc velke, nebo moc male.\n");
		return 0;
	}

	// Vystup.

	printf("%.2Xh\n", input);


	return 0;
}