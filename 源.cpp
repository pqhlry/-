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
	printf("#1.开始#####0.退出\n");
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
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("你输了\n");
	}
	else
	{
		printf("平局\n");
	}
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