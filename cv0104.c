/**
cv0104.c: Napište program, který připočítává 25% daň.
zadejte cenu bez daně: 100
Cena s dani (25%): 125;

**/

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int input;
	printf("Zadejte cenu bez dane: ");
	scanf("%d", &input);

	int output = input * 1.25;

	printf("Prodejni cena s dani(25%%): %d\n", output);


	return 0;
}