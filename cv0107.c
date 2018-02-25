/**
Napište program, ktery přečte reálné číslo a vypíše jeho celou část. 
**/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	

	printf("Napiste realne cislo: \n");

	double input;
	scanf("%lf", &input);

	printf("Cela cast je: %d", (int)input);

	return 0;
}