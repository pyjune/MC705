#include <stdio.h>
#include <malloc.h>

int main()
{
    //int a[10000000];//Segmentation fault
    int *p = NULL;
    p = (int *) malloc(sizeof(int)*10000000);
    if (p==NULL) // if(!p)
    {
        printf("메모리 확보 실패!\n");
        return 0;
    }
    for(int i= 0; i<10000000; i++)
    {
        p[i] = i+1;
    }
    printf("%d\n", p[9999999]);
    free(p);
    
    return 0;
}
