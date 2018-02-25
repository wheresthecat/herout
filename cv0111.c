/**
cv0111.c - napiste program, který vypíše maximální hodnoty, které lze uložit do short a long

**/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	
	printf("Maximalni short: %d\n", SHRT_MAX);
	printf("Maximalni long: %d\n", LONG_MAX);
	printf("Maximalni int: %d\n", INT64_MAX);
	



	return 0;
}