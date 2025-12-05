#pragma once
//#include"SeqList.h"

#define DEFAULT_SE 3
#define INC_SZ 2

#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 100

typedef struct Seqlist Contact;

typedef struct personInfo
{
    char name[NAME_MAX];
    char gender[GENDER_MAX];
    int age;
    char tel[TEL_MAX];
    char addr[ADDR_MAX];
}peoInfo;



void ContactLoad(Contact* ps);

void ContactInit(Contact* con);

void ContactDesTroy(Contact* con);

void ContactADD(Contact* con);

void ContactDel(Contact* con);

void ContactModify(Contact* con);

void ContactShow(Contact* con); 

void ContactFind(Contact* con);

void ContactSort(Contact* con);

void ContactSave(Contact* con);

