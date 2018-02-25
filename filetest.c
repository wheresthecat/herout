#include <stdio.h>
#include <stdlib.h>


extern int line = 0;

void write(char*);

int main(int argc, char const *argv[])
{
	

	
	FILE *flRead, *flWrite;

	flWrite = fopen("MRKEV.DAT", "ab+");


	fprintf(flWrite, "Some message.\n");
	printf("Some message\n");


for(int i = 0; i < 20; i++)
{
	write("Other message");
}



	return 0;
}

void write(char* message)
{
	FILE *flWrite = fopen("MRKEV.DAT", "ab+");
		

	printf("%d.) %s\n", line, message);
	fprintf(flWrite, "%d.) %s\n", line, message);

	fclose(flWrite);

	line++;
}