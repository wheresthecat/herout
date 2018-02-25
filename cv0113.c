#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	double a, b, c, output;

	printf("Napis tri realna cisla: \n");
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("Aritmeticky prumer je: %2.3lf\n", (a+b+c)/3);

	return 0;
}