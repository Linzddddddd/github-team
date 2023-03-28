#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int  x;

    while(1)
    {
        printf("\n\t请输入一个分数：");
        scanf("%d",&x);

        if(x>=90)  printf("\n\t成绩优秀");

        else if (x>=80)  printf("\n\t成绩良好");

        else if (x>=60)  printf("\n\t成绩及格");

        else
        {
            if(x<0)
            {
                printf("\n\t成绩无效");
            }
            else
           {
                break;
           }

        }
    }




    return 0;
}

