/**
Napiště program, který přečte tři velka písmena a vypíše tři malá.
**/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	char a, b, c;

	printf("Napiste tri velka pismena: ");
	scanf("%c %c %c", &a, &b, &c );

	printf("Mala: %c %c %c\n", (char)a+32, (char)b+32, (char)c+32 );

	return 0;
}