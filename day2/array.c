#include <stdio.h>

int main()
{
    int a[4] = {10, 20, 30, 40};
    printf("%d\n", a[0]);
    printf("%d\n", a[1]+a[2]);
    printf("%d\n", a[3]);
    printf("%d\n", a[4]); // !
    
    int b[] = {1,2,3};
    printf("%d\n", b[2]);
    
    int c[10]; // 내용을 알수없음..
    printf("%d\n", c[0]);
    
    int d[10] = {1}; // 나머지는 0으로 
    printf("%d %d\n", d[0], d[1]);
    
    int e[100] = {0}; // 전체 0으로..
    printf("%d %d\n", e[0], e[99]);
    
    return 0;
}
