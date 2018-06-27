#include <stdio.h>

int main()
{
    // 서로 다른 자연수..
    //int a[] = {15, 4, 8, 9, 20, 1, 3, 5, 12, 13};
    // 같은 숫자가 있는 경우
    int a[] = {15, 4, 8, 9, 20, 1, 3, 1, 20, 13};
    int maxIdx = 0;
    int minIdx = 0;
    for(int i=1; i<sizeof(a)/sizeof(a[0]);i++)
    {
        //if(a[i]>a[maxIdx]) // 가장 큰 값 중 첫 번째
        if(a[i]>=a[maxIdx])
            maxIdx = i;
        //if(a[i]<a[minIdx]) // 가장 작은 값 중 첫 번째
        if(a[i]<=a[minIdx])
            minIdx = i;
    }
    printf("%d %d\n", a[maxIdx], maxIdx);
    printf("%d %d\n", a[minIdx], minIdx);
    
    return 0;
}
