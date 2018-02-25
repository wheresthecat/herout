/**
Napiště program, který přečte tři malá písmena a vypíše je jako velká písmena v obráceném pořadí.

**/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	char a, b, c;

	printf("Napiste tri mala pismena: ");
	scanf("%c %c %c", &a, &b, &c );

	printf("Mala: %c %c %c\n", (char)c-32, (char)b-32, (char)a-32 );

	return 0;
}