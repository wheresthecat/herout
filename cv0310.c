/**
Napiste program, který vypisuje priozená čísla.
Po deseti cislech se program zepta: Chcete prokraovat? [A/N]

**/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int number = 0;
	char choice = 'A';

	while(choice == 'A' || choice == 'a')
	{
		for(int i = 0; i < 10; i++)
		{
			printf("Cislo: %d\n", number);
			number++;
		}
		printf("Pokracovat? [A/N]\n");
		scanf("%c", &choice);
		getchar();

	}
	


	return 0;
}