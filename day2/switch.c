#include <stdio.h>

int main()
{
    int n = 1;
    
    switch(n)
    {
        case 1:
            printf("case1\n");
            //break; // case1, 2 실행
        case 2:
            printf("case2\n");
            break;
        default:
            printf("default\n");
            //break;
    }
    return 0;
}
