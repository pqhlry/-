#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define LEI 80
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

void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			board[i][j] = set;
	}
}
void display(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i <= col; i++)
	{
		printf(" %d ", i);
	}
		printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = LEI;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{	
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] 
		+ mine[x - 1][y + 1] - 8 * '0';
}
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0, win = 0;

	while (win<row*col-LEI)
	{
		printf("请输入排雷坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸了\n");
				display(mine, ROW, COL);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				display(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("请重新输入\n");
		}
	}
	if (win == row * col - LEI)
	{
		printf("恭喜你，你赢了\n");
		display(mine, ROW, COL);
	}
}

//可用递归展开周围没有雷的一篇
//1.不是雷
//2.周围八个不是雷


