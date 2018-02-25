/**
Precte znak a napise, co toje. Velke male pismeno, cislo, znak etc.


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

	if(input <= 57 && input >= 48)
	{
		printf("Cislo: %c \n", input);
	}
	else if(input <= 122 && input >=96)
	{
		printf("Male pismeno: %c\n", input);
	}
	else if(input <= 97 && input >=65)
	{
		printf("Velke pismeno: %c", input);
	}
	else
	{
		printf("Interpunkcni znak.\n");
	}

	printf("%d", input);

	return 0;
} 