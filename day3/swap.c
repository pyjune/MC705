#include <stdio.h>

void swapByValue(int a, int b);
void swapByRefer(int *pA, int *pB);

int main(void)
{
    int a = 10;
    int b = 20;
    int tmp;
    
    //swapByValue(a, b);
    swapByRefer(&a, &b);
    printf("%d %d\n", a, b);
    
    tmp = a;
    a = b;
    b = tmp;
    printf("%d %d\n", a, b);

}
void swapByValue(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("%d %d\n", a, b);    
}
void swapByRefer(int *pA, int *pB)
{
    int tmp;
    tmp = *pA;
    *pA = *pB; // a <- b
    *pB = tmp;
}
