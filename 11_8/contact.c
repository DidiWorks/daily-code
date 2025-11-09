
#include"contact.h"

void IninContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;		//让pc指向通讯路结构体的第一个位置，起始位置
	memset(pc->data, 0, sizeof(pc->data));

}
void Addcontact(Contact* pc)
{
	assert(pc); //如果上个指针传了空指针报错
	if (pc->count == 100)	 //如果指向最后一个位置为真
	{
		printf("通讯录已满，无法添加\n");
		return;		
	}
	printf("请输入名字： 》");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄： 》");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别： 》");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话： 》");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址： 》");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("增加成功\n");
}
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		printf("-%20s\t-%5s\t-%5s\t-%12s\t-%30s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("-%20s\t-%5d\t-%5s\t-%12s\t-%30s\n", pc->data[i].name,
													pc->data[i].age,
													pc->data[i].sex,
													pc->data[i].tele,
													pc->data[i].addr);
	}

}

static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))	   // 完全相同 0，str1>str2 = 1 ,str1<str2= -1
		{
			return i;
		}
	}
	return -1;

}


void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };	//名字给初始化赋值0
	assert(pc);				    //如果传入空指针报错
	int i = 0;
	if (pc->count == 0)			   //考虑最小没有人可以删除的情况
	{
		printf("通讯录为空，没有信息可以删除\n");
		return;
	}
	printf("请选择要删除人的名字\n");
	scanf("%d", &name);
	//查找
	int pos = FindByName(pc, name);	   
	if (pos = -1)
	{
		printf("要删除的人不存在\n");
	}
	//删除
	for (i = pos; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功\n");

}


