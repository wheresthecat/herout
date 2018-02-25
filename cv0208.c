/**
Overte na prikladu, ze podminky
if(vyraz != 0) a if(vyraz) jsou totozne
if (vyraz == 0) a if(!vyraz)

**/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int vyraz = 0;


	if(vyraz == 0)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}

	if(!vyraz)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return 0;
}