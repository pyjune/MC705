#include <stdio.h>
#include <string.h>

struct data{
    int no;
    char name[10];
    int age;
};

int main(void)
{
    struct data list[] = {
        {1, "홍길동", 39},
        {2, "흥부", 40},
        {3, "놀부", 50}};
    printf("%d %s %d\n", list[0].no, list[0].name, list[0].age);
    for(int i = 0; i<sizeof(list)/sizeof(list[0]); i++)
    {
        printf("%d %s %d\n", list[i].no, list[i].name, list[i].age);
    }
}
