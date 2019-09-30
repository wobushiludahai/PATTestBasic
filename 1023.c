#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void print(int num, int count)
{
    for(int j = 0; j < count; j++)
    {
        printf("%d",num);
    }
}

int main(void)
{
    int testnum;
    int countresultbuf[10] = {0};

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&testnum);
        countresultbuf[i] = testnum;
    }

    for(int i = 1; i < 10; i++)
    {
        if(countresultbuf[i]!=0)
        {
            printf("%d",i);
            if(countresultbuf[0]!=0)
            {
                print(0,countresultbuf[0]);
            }
            print(i,(countresultbuf[i] - 1));
            for(int k = i + 1; k < 10;k++)
            {
                if(countresultbuf[k]!=0)
                {
                    print(k,countresultbuf[k]);
                }
            }
            break;
        }
        if(i == 9)
        {
            printf("0");
        }
    }




    return 0;
}

