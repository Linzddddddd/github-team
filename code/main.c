#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int  x;

    while(1)
    {
        printf("\n\t������һ��������");
        scanf("%d",&x);

        if(x>=90)  printf("\n\t�ɼ�����");

        else if (x>=80)  printf("\n\t�ɼ�����");

        else if (x>=60)  printf("\n\t�ɼ�����");

        else
        {
            if(x<0)
            {
                printf("\n\t�ɼ���Ч");
            }
            else
           {
                break;
           }

        }
    }




    return 0;
}

