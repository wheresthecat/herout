/**
Napiště program, ve kterém budou tyto příkazy:

i = 5;
printf("%d\n",  i == 8);
printf("%d\n",  i = 8);
printf("%d\n",  i == 8);

**/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i = 0;

	i = 5;
	printf("%d\n",  i == 8);
	printf("%d\n",  i = 8);
	printf("%d\n",  i == 8);
	printf("%d\n", 25 < 3);

	return 0;

}