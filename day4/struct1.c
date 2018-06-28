#include <stdio.h>
#include <string.h>

struct data{
    int no;
    char name[10];
    int age;
};

void f(struct data *pData);
void f2(struct data list);
void f3(const struct data *pList);

int main(void)
{
    struct data list1 = {1, "홍길동", 39};
    struct data list2;
    struct data *sp;
    sp = &list1;
    
    printf("%d %s %d\n", list1.no, list1.name, list1.age);
    
    list2.no = 2;
    strcpy(list2.name, "흥부");
    list2.age = 40;
    printf("%d %s %d\n", list2.no, list2.name, list2.age);
    
    printf("%d %s %d\n", sp->no, sp->name, sp->age);
    printf("%d %s %d\n", (*sp).no, (*sp).name, (*sp).age);
    f(&list2);
    printf("%d %s %d\n", list2.no, list2.name, list2.age);
    f2(list1);
    f3(&list1);
}
void f2(struct data list)
{
    printf("%d %s %d\n", list.no, list.name, list.age);
}
// 구조체는 전체 복사가 가능하나 주소를 넘김
void f3(const struct data *pList)
{
    printf("%d %s %d\n", pList->no, pList->name, pList->age);
}

void f(struct data *pData)
{
    pData->no = 10;
    strcpy(pData->name, "놀부");
    pData->age = 50;
}


