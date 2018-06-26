#include <stdio.h>

int main()
{
    //int a[] = {10, 20, 30, 40};
    int a[] = {10, 20, 30, 40, 50, 60}; // 수정 후
    int n= sizeof(a)/sizeof(a[0]) - 1; //n=5;
    
    for (int i=0; i<=n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i=n; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
