#include <stdio.h>

int main()
{

    int a[] = {1, 2, 3, 4};
    int *p = NULL;
    int *q = NULL;
    
    p = a + 2;
    q = p - 1;
    printf("%x %d\n", p, *p);
    printf("%x %d\n", q, *q);
    printf("%x %d\n", p, *(p-1));
    p = a;
    printf("%x %d\n", p+2, p[2]); // a[2]
    return 0;
}
