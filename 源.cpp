
#include "game.h"
using namespace std;


void menu()
{
	printf("##################\n");
	printf("#1.开始#####0.退出\n");
	printf("##################\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	//display(mine, ROW, COL);
	display(show, ROW, COL);
	setmine(mine, ROW, COL);
	display(mine, ROW, COL);
	findmine(mine,show,ROW, COL);


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//游戏程序
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}