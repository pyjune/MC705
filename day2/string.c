#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "ABC";
    char b[] = "ABC";
    char c[] = "ABCD";
    char d[10];
    
    printf("%d\n", strlen(a));
    printf("%d\n", strcmp(a, b));
    printf("%d\n", strcmp(a, c));
    printf("%d\n", strcmp(c, a));
    strcpy(d, a);
    printf("%s", d);
    
    return 0;
}
