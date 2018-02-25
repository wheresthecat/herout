/**
int a = 2, b = 2, c = 2, d = 0, e = 4;


**/


#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int output;
	int a = 2, b = 2, c = 2, d = 0, e = 4;

	output = a++ / ++c * --e;
	printf("%d\n", output);

	output = --b * c++ - a;
	printf("%d\n", output);

	output = -b - --c;
	printf("%d\n", output);

	output = ++a - --e;
	printf("%d\n", output);

	output = e / --a * b++  / c++;
	printf("%d\n", output);



	return 0;
}