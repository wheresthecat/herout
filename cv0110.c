/**
cv0110.c - napiště program, který vypíše maximální číslo, které je možno uložit do unsigned int a do signed int.

**/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>


int main(int argc, char const *argv[])
{
	
	unsigned int bezZnamenka = -1;


	printf("Maximalni int: %d\n", INT_MAX);
	printf("Maximalni usingned int: %u\n", UINT_MAX );


	return 0;
}