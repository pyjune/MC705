#include <stdio.h>

int main()
{
    int i = 0;
    int s = 0;
    while( s<=1000  )
    {
        i++;
        s += i; //s=s+i
    }
    printf("%d %d\n", s, i);
    i = 0;
    s = 0;
    while( 1 )
    {
        i++;
        s += i; //s=s+i
        if (s>1000)
            break;
    }
    printf("%d %d\n", s, i);
    for(int j=2; j<=9; j++)
    {
        for(i=1; i<=9; i++)
        {
            if (j*i<=30)
                printf("%3d", j*i);
            else
                break;
        }
        printf("\n");
        if(j*i>30)
            break;
    }
    for(int j = 1; j<=20; j++)
    {
        if( j%3==0)
            continue;
        printf("%d ", j);
    }
    
    
    return 0;
}
