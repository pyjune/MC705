#include <stdio.h>

int strLen(const char p[]); // 문자열의 길이 리턴
void strCpy(char d[], const char s[]); // 문자열 복사

int main(void)
{
    char str[] = "Hello";
    int n = strLen(str);
    printf("%d\n", n);
    // printf("%d\n", strLen(str));
    char str2[10];
    strCpy(str2, str);
    printf("%s\n", str2);
    
}
void strCpy(char d[], const char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
}

// {'H','e','l','l','o','\0'}
int strLen(const char p[])
{
    int i=0;
    while(p[i]!='\0')
    {
        i++;
    }
    return i;
}
