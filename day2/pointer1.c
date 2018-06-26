#include <stdio.h>
#include <string.h>

int main()
{
 
    int a[] = {10, 20, 30, 40};
    int *p = a;
    
    printf("%d\n", a[3]);
    printf("%d\n", *(a+3));
    printf("%d\n", *(p+3));
    printf("%d\n", p[3]);
    return 0;
    
}
