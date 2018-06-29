#ifndef _MENU_H
#define _MENU_H

// struct data type
typedef struct{
	char name[20];
	int price;
}MenuType;

// user function
void print_menu(MenuType pmenu[], int cnt);
void select_menu(MenuType pmenu[], int cnt, int *psum);
void pay_menu(int pbill[], int cnt, int s);

#endif // #ifndef _MENU_H
