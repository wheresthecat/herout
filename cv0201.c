/**
Upravte pomocí explicitní typové konverze dělení f = i /j; tak, aby byla v porměnné f hodnota 2.5, kterou vypište. V přiřzení hodnot proměnným
i (5) a j (2) ověřte také funkci operátoru čárky.


**/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i = 5;
	int j = 2;
	double output;

	output = (double)5 / 2;


	printf("%2.2lf\n", output);
	return 0;
}