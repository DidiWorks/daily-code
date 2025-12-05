
#include"Contact.h"
#include"SeqList.h"


//加载
void ContactLoad(Contact* ps)
{
	//ps->arr = NULL;
	//ps->size = ps->capacity = 0;
	assert(ps);
	FILE* pfRead = fopen("contact.txt", "rb");
	if (pfRead == NULL)
	{
		perror("LoadContact");
		return;
	}
	peoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(peoInfo), 1, pfRead) == 1)
	{
		SLCheckCapacity(ps);
		ps->arr[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;

}

void ContactInit(Contact* con)
{
	SLInit(con);
}
void ContactDesTroy(Contact* con)
{
	SLDestroy(con);
}
//添加
void ContactADD(Contact* con)
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
int FindByname(Contact* con,char name[])
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

void ContactDel(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要删除的联系人姓名：\n");
	scanf("%s", name);
	int find = FindByname(con, name);
	if (find < 0)
	{
		printf("要删除的联系人不存在：\n");
		return;
	}
	SLErase(con, find);
	printf("删除成功!\n");
}
void ContactShow(Contact* con)
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

void ContactModify(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要修改人的名字：\n");
	scanf("%s", name);
	int find = FindByname(con, name);
	if (find < 0)
	{
		printf("要修改的联系人不存在！\n");
		return;
	}
	printf("请输入联系人姓名：\n");
	scanf("%s", con->arr[find].name);
	printf("请输入联系人性别：\n");
	scanf("%s", con->arr[find].gender);
	printf("请输入联系人年龄：\n");
	scanf("%d", con->arr[find].age);
	printf("请输入联系人电话：\n");
	scanf("%s", con->arr[find].tel);
	printf("请输入联系人地址：\n");
	scanf("%s", con->arr[find].addr);
	printf("修改成功!\n");
}


int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((peoInfo*)e1)->name, ((peoInfo*)e2)->name);
}
//排序
void ContactSort(Contact* con)
{
	
		assert(con);
		qsort(con->arr, con->size, sizeof(peoInfo), cmp_name);

}



void ContactFind(Contact* con)
{
	char name[NAME_MAX];
	printf("请输入要查找的联系人\n");
	scanf("%s", name);
	int find = FindByname(con, name);
	if (find < 0)
	{
		printf("要查找的人不存在\n");
		return;
	}
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	printf("%3s %3s %3d %3s %3s\n", con->arr[find].name,
		con->arr[find].gender,
		con->arr[find].age,
		con->arr[find].gender,
		con->arr[find].gender);
	printf("查找成功\n");
}

void ContactSave(Contact* con)
{
	assert(con);
	FILE* prWrite = fopen("contact.txt", "wb");
	if (prWrite == NULL)
	{
		perror("SLSave");
		return;
	}
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		fwrite(con->arr + i, sizeof(peoInfo), 1, prWrite);
	}
	fclose(prWrite);
	prWrite = NULL;

}
