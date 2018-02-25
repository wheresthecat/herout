/**
cv0211.c - precti string a spocitej male a velke znaky. Na zbytek nasrat.

**/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *input;
	input = (char *) malloc(512);
	int male = 0, velke = 0;
	int i = 0;




	printf("Napis neco: ");

	scanf("%s", input);

	// Testovaci output.

	printf("Vstup: %s\n", input);

	// Porovnava jednotlive chary podle ASCII
	while(input[i] != '\0')
	{	
		
		if(input[i] <= 122 && input[i] >=97)
		{
			male++;
		}
		if(input[i] <= 96 && input[i] >=65)
		{
			velke++;
		}
		i++;
	}

	printf("Pocet velkych pismen: %d\nPocet malych pismen: %d\n", velke, male);

	return 0;
}