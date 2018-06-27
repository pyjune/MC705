// 배열을 인자로 받는 함수
#include <stdio.h>

//void sumarr(int p[], int n);
void sumarr(const int p[], int n);
void sumarr2(const int *p, int n);
void f(void);

int main(void)
{
    int a[] = {10, 20, 30};
    
    sumarr(a, sizeof(a)/sizeof(a[0]));
    //sumarr(a, sizeof(a)/sizeof(a[0]));
    
    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}

void sumarr(const int p[], int n)
{
    int s;
    printf("s= %d\n", s);
    s = 0;
    for(int i=0; i<n; i++)
    {
        s += p[i];
    }
    printf("sum = %d\n", s);
    //p[0] = s;
}

void sumarr2(const int *p, int n)
{
    int s;
    printf("s= %d\n", s);
    s = 0;
    for(int i=0; i<n; i++)
    {
        s += *(p+i); // p[i]
    }
    printf("sum = %d\n", s);
}
