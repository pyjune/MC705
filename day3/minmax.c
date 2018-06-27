#include <stdio.h>

int main()
{
    // 서로 다른 자연수..
    int a[] = {15, 4, 8, 9, 20, 1, 3, 5, 12, 13};
    int maxV = a[0]; // maxV = 0;// i를 0부터
    int minV = a[0]; // minV = 0x7fffffff;
    for(int i=1; i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]>maxV)
            maxV = a[i];
        if(a[i]<minV)
            minV = a[i];
    }
    printf("%d %d\n", maxV, minV);
    
    return 0;
}
