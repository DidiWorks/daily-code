#include "Contact.h"

// 联系人姓名比较函数（用于排序）
static int CmpByName(const void* e1, const void* e2)
{
    return strcmp(((peoInfo*)e1)->name, ((peoInfo*)e2)->name);
}

// 按姓名查找联系人（返回索引，找不到返回-1）
static int FindByName(Contact* con, const char* name)
{
    assert(con && name);
    for (int i = 0; i < con->sl.size; i++)
    {
        peoInfo* p = (peoInfo*)SLGet(&con->sl, i);
        if (strcmp(p->name, name) == 0)
        {
            return i;
        }
    }
    return -1;
}

// 初始化通讯录
void ContactInit(Contact* con)
{
    assert(con);
    // 初始化顺序表，元素类型为peoInfo
    SLInit(&con->sl, sizeof(peoInfo));
    // 从文件加载联系人
    ContactLoad(con);
}

// 销毁通讯录
void ContactDestroy(Contact* con)
{
    assert(con);
    // 销毁内部顺序表
    SLDestroy(&con->sl);
}

// 添加联系人
void ContactAdd(Contact* con)
{
    assert(con);
    peoInfo info = { 0 };
    // 读取用户输入
    printf("请输入姓名：");
    scanf("%s", info.name);
    printf("请输入性别：");
    scanf("%s", info.gender);
    printf("请输入年龄：");
    scanf("%d", &info.age);
    printf("请输入电话：");
    scanf("%s", info.tel);
    printf("请输入地址：");
    scanf("%s", info.addr);
    // 调用顺序表尾插
    SLPushBack(&con->sl, &info);
    printf("添加成功！\n");
}

// 删除联系人
void ContactDel(Contact* con)
{
    assert(con);
    if (con->sl.size == 0)
    {
        printf("通讯录为空，无法删除！\n");
        return;
    }
    char name[NAME_MAX] = { 0 };
    printf("请输入要删除的联系人姓名：");
    scanf("%s", name);
    int pos = FindByName(con, name);
    if (pos == -1)
    {
        printf("未找到该联系人！\n");
        return;
    }
    // 调用顺序表删除
    SLErase(&con->sl, pos);
    printf("删除成功！\n");
}

// 修改联系人
void ContactModify(Contact* con)
{
    assert(con);
    if (con->sl.size == 0)
    {
        printf("通讯录为空，无法修改！\n");
        return;
    }
    char name[NAME_MAX] = { 0 };
    printf("请输入要修改的联系人姓名：");
    scanf("%s", name);
    int pos = FindByName(con, name);
    if (pos == -1)
    {
        printf("未找到该联系人！\n");
        return;
    }
    // 获取要修改的联系人指针
    peoInfo* p = (peoInfo*)SLGet(&con->sl, pos);
    // 重新读取信息
    printf("请输入新姓名：");
    scanf("%s", p->name);
    printf("请输入新性别：");
    scanf("%s", p->gender);
    printf("请输入新年龄：");
    scanf("%d", &p->age);
    printf("请输入新电话：");
    scanf("%s", p->tel);
    printf("请输入新地址：");
    scanf("%s", p->addr);
    printf("修改成功！\n");
}

// 显示所有联系人
void ContactShow(Contact* con)
{
    assert(con);
    if (con->sl.size == 0)
    {
        printf("通讯录为空！\n");
        return;
    }
    // 打印表头
    printf("%-10s %-8s %-5s %-15s %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
    printf("-------------------------------------------------------------\n");
    // 遍历顺序表，打印每个联系人
    for (int i = 0; i < con->sl.size; i++)
    {
        peoInfo* p = (peoInfo*)SLGet(&con->sl, i);
        printf("%-10s %-8s %-5d %-15s %-20s\n",
            p->name, p->gender, p->age, p->tel, p->addr);
    }
}

// 查找联系人
void ContactFind(Contact* con)
{
    assert(con);
    if (con->sl.size == 0)
    {
        printf("通讯录为空！\n");
        return;
    }
    char name[NAME_MAX] = { 0 };
    printf("请输入要查找的联系人姓名：");
    scanf("%s", name);
    int pos = FindByName(con, name);
    if (pos == -1)
    {
        printf("未找到该联系人！\n");
        return;
    }
    // 打印找到的联系人
    peoInfo* p = (peoInfo*)SLGet(&con->sl, pos);
    printf("%-10s %-8s %-5d %-15s %-20s\n",
        p->name, p->gender, p->age, p->tel, p->addr);
}

// 排序联系人（按姓名）
void ContactSort(Contact* con)
{
    assert(con);
    if (con->sl.size <= 1)
    {
        printf("无需排序！\n");
        return;
    }
    // 调用顺序表排序，传入比较函数
    SLSort(&con->sl, CmpByName);
    printf("排序成功！\n");
}

// 保存联系人到文件
void ContactSave(Contact* con)
{
    assert(con);
    FILE* pf = fopen("contact.txt", "wb");
    if (pf == NULL)
    {
        perror("保存文件失败");
        return;
    }
    // 遍历顺序表，写入每个联系人
    for (int i = 0; i < con->sl.size; i++)
    {
        peoInfo* p = (peoInfo*)SLGet(&con->sl, i);
        fwrite(p, sizeof(peoInfo), 1, pf);
    }
    fclose(pf);
    pf = NULL;
    printf("保存成功！\n");
}

// 从文件加载联系人
void ContactLoad(Contact* con)
{
    assert(con);
    FILE* pf = fopen("contact.txt", "rb");
    if (pf == NULL)
    {
        // 文件不存在是正常情况，无需报错
        return;
    }
    peoInfo tmp = { 0 };
    // 循环读取文件中的联系人
    while (fread(&tmp, sizeof(peoInfo), 1, pf) == 1)
    {
        SLPushBack(&con->sl, &tmp);
    }
    fclose(pf);
    pf = NULL;
}