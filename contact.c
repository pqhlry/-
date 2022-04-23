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
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������:");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:");
		scanf("%d", &(ps->data[ps->size]).age);
		printf("�������Ա�:");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:");
		scanf("%s", ps->data[ps->size].tel);
		printf("�������ַ:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}
void Showcontact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("����ϵ��\n");
	}
	else
	{	
		printf("%-5s\t%-3s\t%-4s\t%-20s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ������ϵ��");
	scanf("%s", name);
	int pos = Findname(ps, name);
	if (pos == -1)
	{
		printf("�޸���ϵ��\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void Searchcontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ��");
	scanf("%s", name);
	int pos = Findname(ps, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%-5s\t%-3s\t%-4s\t%-20s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-5s\t%-3d\t%-4s\t%-20s\t%-20s\n", ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tel, ps->data[pos].addr);
	}
}
void Modifycontact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ��");
	scanf("%s", name);
	int pos = Findname(ps, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("����������:");
		scanf("%s", ps->data[pos].name);
		printf("����������:");
		scanf("%d", &(ps->data[pos]).age);
		printf("�������Ա�:");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:");
		scanf("%s", ps->data[pos].tel);
		printf("�������ַ:");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
	}
}


void Sortcontact(struct Contact* ps)
{	
	printf("��ѡ������ʽ��\n");
	printf("1.������\n");
	printf("2.������\n");
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
		printf("ѡ�����\n");
		break;
	}
}
