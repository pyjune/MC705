/*
    가장 큰 구간 합 구하기
    배열의 크기 N = 10, 구간의 길이 M = 3
*/
#include <stdio.h>

int main()
{
    // 서로 다른 자연수..
    int a[] = {15, 4, 8, 9, 20, 1, 3, 5, 12, 13};
    int N = 10; // N = sizeof(a)/sizeof(a[0])
    int M = 3;
    
    int maxV = 0;
    for(int i=0; i<=N-M; i++) // for i : 0 -> 7 // M-N
    {
        int s = 0;
        for(int j=0; j<M; j++) // for j : 0 -> 2 // M-1
        {
            s += a[i+j];
        }
        if(s>maxV)
            maxV = s;
    }
    printf("%d\n", maxV);
    
    return 0;
}
