/**
cv0105.c: Napiste program, ktery vypise obsah trojuhelnika.
vstup: Zadejte delku a sirku: 5 4
vystup: Obdelnik o delce 5 a sirce 4 ma obsah 20

**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int delka, sirka;

	printf("Zadejte delku a sirku: ");
	scanf("%d %d", &delka, &sirka);

	printf("Obdelnik o delce %d a sirce %d ma obsah: %d", delka, sirka, delka*sirka);

	return 0;
}