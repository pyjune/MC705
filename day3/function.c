#include <stdio.h>

void hello(void);
void printnum(int n);
int addnum(int a, int b);
int z;

int main()
{
    int x = 100;
    //int z = 100;
    hello();
    printnum(100);
    printnum(x);
    
    int r = addnum(x, 30);
    printf("r=%d\n", r);
    printf("z = %d\n", z);
    
    return 0;
}

void hello(void)
{
    printf("Hello!\n");
    int z = 10;
    return;
}

void printnum(int n)
{
    printf("%#x\n", n);
    return;
}

int addnum(int a, int b)
{
    int x;
    x = a + b;
    return x;
}
