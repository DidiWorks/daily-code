#pragma once
#define _CRT_SECURE_NO_WARNINGS	1
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<ctype.h>

#define MAX 100
#define	MAX_NAME 20
#define	MAX_SEX 10
#define MAX_TETL 12
#define	MAX_ADDR 30


//结构体个人信息PeoInfo
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TETL];
	char addr[MAX_ADDR];
}PeoInfo;

// 通讯录结构体 Contact
typedef struct Contact
{
	PeoInfo data[MAX];	//存放100个人的结构体
	int count;  //记录当前通讯录中实际人的个数
}Contact;


//初始化
void IninContact(Contact* pc);
 //增加
void Addcontact(Contact* pc);
//展示
void ShowContact(const Contact* pc);
//删除
void DelContact(Contact* pc);
