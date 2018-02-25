/**
	Napište program, který přečete dvě reálná čísla a pak vypíše všechna sudá čísla v intervalu těchto čísel.

**/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int first, second, loop;
	int output;

	printf("Zadejte dve cisla: ");
	scanf("%d %d", &first, &second);

	if(first<second)
	{
		loop = second - first;
		output = first;
	}
	else
	{
		loop = first - second;
		output = second;
	}

	printf("Suda cisla: ");



	for(int i = 0; i <= loop; i++)
	{
		if(output % 2 == 0)
		{
			printf("%d, ", output);
			
		}
		output++;
	}
	return 0;
}