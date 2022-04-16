#include<memory> 
#include<string> 
#include<cstring> 
#include<iostream>
#include<windows.h> 
#include<stdlib.h>
#include<time.h>
using namespace std;

void menu()
{
	printf("######################\n");
	printf("开始；1     结束；2   \n");
	printf("######################\n");
}
void game()
{
	int b=0;
	int q = 0;
	b=rand()%100+1; 
	//printf("%d",b);
	//猜数字

	while(1) 
	{	
		printf("请猜数字");
		scanf("%d", &q);
		if(q>b) 
		{
			printf("猜大了\n");
		}
		else if(q<b)
		{
			printf("猜小了\n"); 
		} 
		else
		{
			printf("猜对了\n");
			break; 
		}
	}
	
}

int main()
{	srand((unsigned int) time (NULL));
	int a=0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				game();//游戏进程 
				break;
			case 2:
				printf("退出游戏\n"); 
				break;
			default:
				printf("选择错误\n"); 
				break;
		}	
		
	}
	while(a!=2);
	
	return 0;
}
	
	
