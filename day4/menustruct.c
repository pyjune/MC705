#include <stdio.h>

typedef struct{
	char name[20];
	int price;
}MenuType;
void print_menu(MenuType pmenu[], int cnt);

int main(void)
{
	MenuType menu[] = {
		{},
		{ "Americano", 1500},
		{ "Latte", 2000},
		{ "Mochar", 2500}};
	//printf("%s %d\n", menu[2].name, menu[2].price);
	// 메뉴출력...
	print_menu(menu, sizeof(menu)/sizeof(menu[0]));
	// 메뉴선택...
	
}

void print_menu(MenuType pmenu[], int cnt)
{
	for(int i=1;i<cnt;i++)
	{
		printf("%d.%-12s %3d\n",i, pmenu[i].name, pmenu[i].price);
	}
}
