#define _CRT_SECURE_NO_WARNINGS 
#include "gn.h"


static int Findname(struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void Initcontact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void Addcontact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->data[ps->size]).age);
		printf("请输入性别:");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[ps->size].tel);
		printf("请输入地址:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}
void Showcontact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("无联系人\n");
	}
	else
	{	
		printf("%-5s\t%-3s\t%-4s\t%-20s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
			int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-5s\t%-3d\t%-4s\t%-20s\t%-20s\n", ps->data[i].name ,ps->data[i].age , ps->data[i].sex , ps->data[i].tel , ps->data[i].addr);
		}
	}
}
void Delcontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的联系人");
	scanf("%s", name);
	int pos = Findname(ps, name);
	if (pos == -1)
	{
		printf("无该联系人\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void Searchcontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的联系人");
	scanf("%s", name);
	int pos = Findname(ps, name);
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("%-5s\t%-3s\t%-4s\t%-20s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-5s\t%-3d\t%-4s\t%-20s\t%-20s\n", ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tel, ps->data[pos].addr);
	}
}
void Modifycontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的联系人");
	scanf("%s", name);
	int pos = Findname(ps, name);
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("请输入名字:");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->data[pos]).age);
		printf("请输入性别:");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[pos].tel);
		printf("请输入地址:");
		scanf("%s", ps->data[pos].addr);
		printf("修改完成\n");
	}
}


void Sortcontact(struct Contact* ps)
{	
	printf("请选择排序方式：\n");
	printf("1.按年龄\n");
	printf("2.按名字\n");
	int input = 0;
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		agesort();
		break;
	case 2:
		namesort();
		break;
	default:
		printf("选择错误！\n");
		break;
	}
}
