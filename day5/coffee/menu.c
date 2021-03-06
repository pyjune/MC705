#include <stdio.h>
#include "menu.h"

void pay_menu(int pbill[], int cnt, int s)
{
	int total = 0;
	int n;
	printf("사용 금액 : ");
	for (int i = 1; i<cnt; i++)
	{
		printf("%d.%d\t",i, pbill[i]);
	}
	printf("\n");
	while(total<s)
	{
		printf("지불 : ");
		scanf("%d", &n);
		if(n>0 && n<cnt)
		{
			total += pbill[n];
			printf("총 금액 %d, 지불액 %d, 부족 %d\n", s, total, ((s-total)>=0?(s-total):0));
		}
		else
		{
			printf("없는 번호입니다.\n");
		}
	}
	printf("거스름 : %d\n", total-s);

}

void select_menu(MenuType pmenu[], int cnt, int *psum)
{
	int n = 0;

	while(1)
	{
		printf("메뉴선택 (지불은 0) : ");
		scanf("%d", &n);
		if(n==0)
			break;
		else if(n>0 && n<cnt)
		{
			*psum += pmenu[n].price;
			printf("선택한 메뉴는 %s, 총합계 %d\n", pmenu[n].name, *psum);
		}
		else
		{
			printf("없는 메뉴번호 입니다.\n");
		}
		
	}
}
void print_menu(MenuType pmenu[], int cnt)
{
	for(int i=1;i<cnt;i++)
	{
		printf("%d.%-12s %3d\n",i, pmenu[i].name, pmenu[i].price);
	}
}
