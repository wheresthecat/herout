/**
Testování souboru.
Nekompletní.
**/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *fread;
	double output;
	int step = 1;

	if((fread = fopen("CISLA.TXT", "r")) == NULL)
	{
		printf("Soubor se nepodarilo otevrit. Now panic!\n");
		return 1;
	}

	
while(fscanf(fread, "$%lf", &output) < 20)
{
	fscanf(fread, "$%lf", &output);

	printf("%.2lf\n", output);
	step++;
}
	



	return 0;
}