#include<stdio.h>
#include<string.h>
#include <stdlib.h>

void count(int countnum,int *numbuf)
{
    int tempcountnum = countnum;
    int temp;

    numbuf[3] = tempcountnum % 10;
    tempcountnum /= 10;
    numbuf[2] = tempcountnum % 10;
    tempcountnum /= 10;
    numbuf[1] = tempcountnum % 10;
    tempcountnum /= 10;
    numbuf[0] = tempcountnum % 10;
    for(int i =0; i < 4; i++)
    {
        for(int j = i; j < 4; j++)
        {
            if(numbuf[j] > numbuf[i])
            {
                temp = numbuf[i];
                numbuf[i] = numbuf[j];
                numbuf[j] = temp;
            }
        }
    }
}

int main(void)
{
    int testnum;
    int numbuf[4];
    int num1,num2,num3,num4;

    int countnum1,countnum2;

    scanf("%d",&testnum);

    while(1)
    {
        count(testnum,numbuf);
        num1 = numbuf[0];
        num2 = numbuf[1];
        num3 = numbuf[2];
        num4 = numbuf[3];

        if((num1 == num2)&&(num1 == num3)&&(num3 == num4))
        {
            printf("%04d - %04d = 0000",testnum,testnum);
            break;
        }

        countnum1 = num1*1000 + num2*100 + num3*10 + num4;
        countnum2 = num4*1000 + num3*100 + num2*10 + num1;
        testnum = countnum1 - countnum2;
        if(testnum!=6174)
        {
            printf("%04d - %04d = %04d\n",countnum1,countnum2,testnum);
        }
        else
        {
            printf("%04d - %04d = %04d",countnum1,countnum2,testnum);
            break;
        }
    }

    return 0;
}

