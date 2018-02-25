/**
napište program, který přečte n čisel z klávesnice. N se zadá taky.
Očíslovat každý vstup.
Určete, kolik jich leží v intervalu <25, 38>
**/


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;


int main(int argc, char const *argv[])
{

	int top;
	int input;
	int count;
	int interval = 0;

	printf("Kolik chcete napsat cisel: ");
	scanf("%d", &top);

	for(int i = 0; i < top; i++)
	{
		printf("%d. cislo: ", i+1);
		scanf("%d", &input);
		if(input >= 25 && input <= 38)
		{
			interval++;
		}
	}

	printf("V zadanych cislech bylo %d cisel v intervalu <25, 38>.", interval);

	return 0;
}