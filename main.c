#include <stdio.h>

struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};

int main()
{
    printf("进入学生成绩管理系统\n");
    struct student arr[1000];
    int index = 0;
    while (1)

    {
        printf("1--添加学生成绩\n");
        printf("2--删除最后一个学生成绩\n");
        printf("3--显示所有学生成绩\n");
        printf("4--业务1:所有总分不及格的学生(总分小于180)\n");
        printf("5--业务2:每一科都不及格的学生成绩\n");
        printf("6--业务3:显示总分最高的学生成绩\n");
        printf("7--业务4:显示平均分最高的学生成绩\n");
        printf("8--退出\n");
        printf("请选择相应功能\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("请输入学生姓名\n");
            scanf("%s", arr[index].name);
            printf("添加语文成绩\n");
            scanf("%d", &arr[index].yuwen);
            printf("添加数学成绩\n");
            scanf("%d", &arr[index].shuxue);
            printf("添加英语成绩\n");
            scanf("%d", &arr[index].yingyu);
            index++;
            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
        }
        if (code == 6)
        {
        }
        if (code == 7)
        {
        }
        if (code == 8)
        {
            printf("程序已退出\n");
            break;
        }
    }

    return 0;
}