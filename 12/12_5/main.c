#include "Contact.h"

// 菜单枚举
enum Option
{
    EXIT,    // 0.退出
    ADD,     // 1.添加
    DEL,     // 2.删除
    SEARCH,  // 3.查找
    MODIFY,  // 4.修改
    SHOW,    // 5.显示
    SORT     // 6.排序
};

// 菜单打印
void menu()
{
    printf("*****************************************\n");
    printf("****  1.add        2.del        *********\n");
    printf("****  3.search     4.modify     *********\n");
    printf("****  5.show       6.sort       *********\n");
    printf("****  0.exit                    *********\n");
    printf("*****************************************\n");
}

int main()
{
    int input = 0;
    Contact con;
    // 初始化通讯录
    ContactInit(&con);
    do
    {
        menu();
        printf("请选择操作：");
        scanf("%d", &input);
        switch (input)
        {
        case ADD:
            ContactAdd(&con);
            break;
        case DEL:
            ContactDel(&con);
            break;
        case SEARCH:
            ContactFind(&con);
            break;
        case MODIFY:
            ContactModify(&con);
            break;
        case SHOW:
            ContactShow(&con);
            break;
        case SORT:
            ContactSort(&con);
            break;
        case EXIT:
            ContactSave(&con);    // 退出前保存
            ContactDestroy(&con); // 销毁通讯录
            printf("退出通讯录\n");
            break;
        default:
            printf("选择错误，请重新输入！\n");
            break;
        }
    } while (input);
    return 0;
}