#include <stdio.h>
#include "menu.h"

int main(void)
{
        int sum;
        MenuType menu[] = {
                {},
                { "Americano", 1500},
                { "Latte", 2000},
                { "Mochar", 2500}};
        int bill[] = {0, 10000, 5000, 1000};
        //printf("%s %d\n", menu[2].name, menu[2].price);
        // 메뉴출력...
        print_menu(menu, sizeof(menu)/sizeof(menu[0]));
        // 메뉴선택...
        sum = 0;
        select_menu(menu, sizeof(menu)/sizeof(menu[0]), &sum);
        // 지불 및 거스름
        pay_menu(bill, sizeof(bill)/sizeof(bill[0]), sum);
}
