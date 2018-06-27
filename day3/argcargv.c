#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	for(int i=0; i<argc; i++)
	{
		printf("%s %d\n", argv[i], i);
	}
	if(strcmp(argv[1], "-help")==0)
	{
		printf("argc, argv example!\n");
	}

}
