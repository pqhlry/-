#define _CRT_SECURE_NO_WARNINGS
#include<memory> 
#include<string> 
#include<cstring> 
#include<iostream>
#include<windows.h> 
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<stdio.h>
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
	char ret = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	display(board, ROW, COL);
	while (1)
	{
		Playermove(board, ROW, COL);
		display(board, ROW, COL);
		ret = iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		computermove(board, ROW, COL);
		display(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("������\n");
	}
	else
	{
		printf("ƽ��\n");
	}
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