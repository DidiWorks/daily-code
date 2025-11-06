#pragma once
#define _CRT_SECURE_NO_WARNINGS	1
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>


#define DEFAULT_SE 3
#define INC_SZ 2
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//静态
//typedef struct Contact
//{
//	PeoInfo data[100];
//	int count;
//}Contact;

typedef struct Contact
{
	PeoInfo* data;	//存放人的信息
	int count;	 //记录当前通讯录中实际人的个数
	int capacity; //当前通讯录的容量
}Contact;

//初始化
int  InitContact(Contact* pc);
//释放
void  DestroyContact(Contact* pc);
//增加
void AddContact(Contact* pc);
//显示
void ShowContact(const Contact* pc);
//删除
void DelContact(Contact* pc);
//查找
void SearchContact(Contact* pc);

void ModifyContact(Contact* pc);

void SortContact(Contact* pc);

//增容
void CheckCapacity(Contact* pc);

void SaveContact(const Contact* pc);


//加载文件的信息到通讯录
void LoadContact(Contact* pc);