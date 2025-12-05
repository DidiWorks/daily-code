#pragma once
#include "SeqList.h"

// 联系人信息结构体（业务实体）
#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 100

typedef struct PersonInfo
{
    char name[NAME_MAX];
    char gender[GENDER_MAX];
    int age;
    char tel[TEL_MAX];
    char addr[ADDR_MAX];
} peoInfo;

// 通讯录结构体（基于顺序表封装）
typedef struct Contact
{
    SL sl; // 内部使用顺序表存储联系人
} Contact;

// 通讯录业务接口
void ContactInit(Contact* con);         // 初始化通讯录
void ContactDestroy(Contact* con);      // 销毁通讯录
void ContactAdd(Contact* con);          // 添加联系人
void ContactDel(Contact* con);          // 删除联系人
void ContactModify(Contact* con);       // 修改联系人
void ContactShow(Contact* con);         // 显示所有联系人
void ContactFind(Contact* con);         // 查找联系人
void ContactSort(Contact* con);         // 排序联系人
void ContactSave(Contact* con);         // 保存联系人到文件
void ContactLoad(Contact* con);         // 从文件加载联系人