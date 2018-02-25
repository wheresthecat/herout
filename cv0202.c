/**
cv0202.c - Ternární operátor and shit.


**/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	int first, second;

	printf("Napiste dve cela cisla: ");

	scanf("%d %d", &first, &second);

	first < second ? printf("Mensi cislo: %d\nVetsi cislo: %d", first, second) : printf("Mensi cislo: %d\nVetsi cislo: %d", second, first);

	return 0;
}