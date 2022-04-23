#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 12
#define MAX_ADDR 30

#include<string.h> 
#include<windows.h> 
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<stdio.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct PI
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};
struct Contact
{
	struct PI data[MAX];
	int size;
};
void Initcontact(struct Contact* ps);
void Addcontact(struct Contact* ps);
void Showcontact(const struct Contact* ps);
void Delcontact(struct Contact* ps);
void Searchcontact(const struct Contact* ps);
void Modifycontact(struct Contact* ps);
void Sortcontact(struct Contact* ps);

