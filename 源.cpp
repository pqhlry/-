
#include "game.h"
using namespace std;


void menu()
{
	printf("##################\n");
	printf("#1.��ʼ#####0.�˳�\n");
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
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��Ϸ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}