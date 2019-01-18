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
    int a = 0;
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
            if (index > 0)
            {
                index--;
                printf("删除成功，点击回车继续\n");
            }
            else
            {
                printf("删除失败，点击回车继续\n");
            }
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            if (index > 0)
            {
                for (int i = 0; i < index; i++)
                {
                    printf("学生%s的语文成绩为%d,数学成绩为%d,英语成绩为%d\n", arr[i].name, arr[i].yuwen, arr[i].shuxue, arr[i].yingyu);
                }
            }
            else
            {
                printf("无可显示学生成绩\n");
            }
            printf("点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            for (int i = 0; i < index; i++)
            {
                a = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if (a < 180)
                {
                    printf("第%d名学生%s成绩不及格\n", i + 1, arr[i].name);
                }
            }
            printf("筛选成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            for (int i = 0; i < index; i++)
            {
                if (arr[i].yuwen < 60 && arr[i].shuxue < 60 && arr[i].yingyu < 60)
                {
                    printf("第%d名学生%s的每一科都不及格\n", i + 1, arr[i].name);
                }
            }
            printf("筛选完成，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 6)
        {
            int b = 0;
            int c;

            for (int i = 0; i < index; i++)
            {
                int a = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if (b < a)
                {
                    b = a;
                }
                c = i + 1;
            }
            printf("第%d名学生%s的总成绩最高，最高为%d\n", c, arr[index].name, b);
            printf("筛选完成，点击回车继续\n");

            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 7)
        {
            double b = 0.0;
            int c = 0;
            for (int i = 0; i < index; i++)
            {
                if (arr[i].yuwen >= 60 && arr[i].shuxue >= 60 && arr[i].yingyu >= 60)
                {
                    double avg = (arr[i].yuwen + arr[i].shuxue + arr[i].yingyu) / 3.0;
                    if (b < avg)
                    {
                        b = avg;
                        c = i;
                    }
                }
            }
            printf("平均分最高且没有不及格科目的学生姓名为%s，语文：%d，数学%d，英语%d\n", arr[c].name, arr[c].yuwen, arr[c].shuxue, arr[c].yingyu);
            printf("\n点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 8)
        {
            printf("程序已退出\n");
            break;
        }
    }

    return 0;
}