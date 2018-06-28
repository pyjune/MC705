#include <stdio.h>

int main(int argc, char*argv[])
{
	char name[10][20];
	int price[10];
	FILE *fp;
	fp = fopen(argv[1], "r");
	if(fp==NULL)
	{
		printf("File Open Error!\n");
		return;
	}
	int i = 1;
	while(1)
	{
		fscanf(fp, "%s %d",name[i], &price[i]);
		if(feof(fp))
			break;
		printf("%d.%s %d\n", i, name[i], price[i]);
		i++;
	}
	fclose(fp);
}
