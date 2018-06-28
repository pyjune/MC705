#include <stdio.h>

int main(void)
{
        char str[100];
        FILE * fp;
        fp = fopen("file1.txt", "r");
        if(fp==NULL)
        {
                printf("파일 열기에 실패했습니다.\n");
                return;
        }
        while(1)
        {
                fgets(str, 99, fp);
                if(feof(fp))
                        break;
                printf("%s", str);
        }
        fclose(fp);
}
