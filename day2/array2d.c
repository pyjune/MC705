#include <stdlib.h>

int main()
{
    int a[2][3] = {
        { 10, 20, 30},
        { 40, 50, 60}
    };
    int b[2][3] = {
         10, 20, 30,
         40, 50, 60
    };
    int c[2][3] = {
         {10},              // {10, 0, 0}
         {40, 50, 60}
    };
    int d[2][3] = {0};
    printf("%d\n", a[1][2]);
    printf("%d\n", b[1][2]);
    printf("%d\n", c[0][2]);
    return 0;
}
