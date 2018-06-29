#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int size;
	short dummy1;
	short dummy2;
	int offset;
}BMPHType;

int main(void)
{
	char bm[3] = {0}; // 
	BMPHType header;

	FILE *fp = fopen("bitmap.bmp", "rb");
	if(fp==NULL)
	{
		printf("Error!\n");
		return;
	}
	fread(bm, 2, 1, fp);
	printf("%s\n", bm);
	fread(&header, sizeof(BMPHType), 1, fp);
	printf("size : %d\n", header.size);
	printf("offset : %#04x\n", header.offset);
	fclose(fp);
}
