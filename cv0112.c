/**
cv0112.c - Napište progra, který objasní všechny způsoby použití operátoru  / a operátoru %

**/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a = 10, b = 15, c;
	double d = 25.456f, e = 31.25f, f;

	f = (double)a / b;


	printf("%3.2f\n", f);
	return 0;
}