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
	printf("��ʼ��1     ������2   \n");
	printf("######################\n");
}
void game()
{
	int b=0;
	int q = 0;
	b=rand()%100+1; 
	//printf("%d",b);
	//������

	while(1) 
	{	
		printf("�������");
		scanf("%d", &q);
		if(q>b) 
		{
			printf("�´���\n");
		}
		else if(q<b)
		{
			printf("��С��\n"); 
		} 
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ��:>");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				game();//��Ϸ���� 
				break;
			case 2:
				printf("�˳���Ϸ\n"); 
				break;
			default:
				printf("ѡ�����\n"); 
				break;
		}	
		
	}
	while(a!=2);
	
	return 0;
}
	
	
