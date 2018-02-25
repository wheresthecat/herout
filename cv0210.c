#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i = 5;
	int j = 2;

	if(i == 5 && ++j == 3)
	{
		printf("Podminka platna.");
	}
	return 0;
}