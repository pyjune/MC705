#include <stdio.h>
void print_menu(char pName[][20], int pPrice[], int cnt);

int main(void)
{
	int price[] = {0, 1500, 2000, 2500};
	char name[][20] ={ "", "Americano", "Latte", "Mocha"};
	int bill[] = {0, 10000, 5000, 1000};
    int menuCnt = sizeof(price)/sizeof(price[0]);
	// 메뉴출력
    print_menu(name, price, menuCnt);

	// 음료선택
	int n;
	int s = 0;
	while(1)
	{
		printf("메뉴를 선택하세요. (0은 종료) : ");
		scanf("%d", &n);
		if(n==0)
			break;
		s += price[n];
		printf("선택한 메뉴는 %s, 총 금액은 %d입니다.\n", name[n], s);
	}

	// 지불금액 선택
	printf("사용가능지폐 : ");
	for(int i=1; i<=3; i++)
	{
		printf("%d.%d\t", i, bill[i]);
	}
	printf("\n");
	int total = 0;
	while(total<s) // 지불금액이 음료 가격보다 작으면 반복
	{
		printf("지불액 선택 : ");
		scanf("%d", &n);
		total += bill[n];
		printf("%d, 총 지불액 %d, 총 금액%d\n", bill[n], total, s);
	}
	
	// 거스름 계산
	printf("거스름 금액은 %d원 입니다. \n", total-s);
}

void print_menu(char pName[][20], int pPrice[], int cnt)
{
    for(int i=1; i<cnt; i++)
    {
        printf("%d.%-12s %3d\n", i, pName[i], pPrice[i]);
    }
}
// 참고
void print_menu2(char (*pName)[20], int pPrice[], int cnt)
{
    for(int i=1; i<cnt; i++)
    {
        printf("%d.%-12s %3d\n", i, pName[i], pPrice[i]);
    }
}






