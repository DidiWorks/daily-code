#include"Contact.h"
#include"SeqList.h"
//初始化
void ContactInit(Contact* con)
{
	SLInit(con);
}
//销毁
void ContactDesTroy(Contact* con)
{
	SLDestroy(con);
}
//添加
void ContactAdd(Contact* con)
{
	peoInfo info;
	printf("请输入要添加的联系人姓名：\n");
	scanf("%s", info.name);

	printf("请输入要添加的联系人性别：\n");
	scanf("%s", info.gender);

	printf("请输入要添加的联系人年龄：\n");
	scanf("%d", &info.age);

	printf("请输入要添加的联系人电话：\n");
	scanf("%s", info.tel);

	printf("请输入要添加的联系人地址：\n");
	scanf("%s", info.addr);

	SLPushBack(con, info);
}
int FindByName(Contact* con, char name[])
{
	for (int i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->arr[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
//删除
void ContactDel(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要删除的联系人姓名：\n");
	scanf("%s", name);

	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("要删除的联系人不存在:\n");
		return;
	}
	SLErase(con, find);
	printf("删除成功!\n");

}
 //通讯录数据
void  ContactShow(Contact* con)
{
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (int i = 0; i < con->size; i++)
	{
		printf("%3s %3s %3d %3s %3s\n", con->arr[i].name,
									con->arr[i].gender,
									con->arr[i].age,
									con->arr[i].tel,
									con->arr[i].addr);
	}
}
//修改
void ContactModify(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要修改的用户名字:\n");
	scanf("%s", name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("要修改的联系人数据不存在! \n");
		return;
	}
	printf("请输入新的姓名：\n");
	scanf("%s", con->arr[find].name);

	printf("请输入新的性别：\n");
	scanf("%s", con->arr[find].gender);

	printf("请输入新的年龄：\n");
	scanf("%d", &con->arr[find].age);

	printf("请输入新的电话：\n");
	scanf("%s", con->arr[find].tel);

	printf("请输入新的住址：\n");
	scanf("%s", con->arr[find].addr);

	printf("修改成功!\n");
}
void ContactFind(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要查找的联系人姓名\n");
	scanf("%s", name);
	int find = FindByName(con, name);
	if (find < 0)
	{
		printf("要查找的联系人数据不存在！\n");
		return;
	}
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	printf("%3s %3s %3d %3s %3s\n", con->arr[find].name,
									con->arr[find].gender,
									con->arr[find].age,
									con->arr[find].tel,
									con->arr[find].addr);
	printf("查找成功\n");

}


