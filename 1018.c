#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    int testcount;
    char testjia,testyi;
    int yingcount = 0,pingcount = 0;
    int jiacount1 = 0,jiacount2 = 0,jiacount3 = 0;
    int yicount1 = 0,yicount2 = 0,yicount3 = 0;
    char tempbuf[10];

    scanf("%d",&testcount);
    for(int i = 0; i < testcount; i++)
    {
        scanf("\n%c %c",&testjia,&testyi);
        if(testjia == 'C')
        {
            if(testyi == 'C')
            {
                pingcount++;
            }
            else if(testyi == 'J')
            {
                yingcount++;
                jiacount1++;
            }
            else
            {
                yicount3++;
            }
            continue;
        }

        if(testjia == 'J')
        {
            if(testyi == 'C')
            {
                yicount1++;
            }
            else if(testyi == 'J')
            {
                pingcount++;
            }
            else
            {
                yingcount++;
                jiacount2++;

            }
            continue;
        }

        if(testjia == 'B')
        {
            if(testyi == 'C')
            {
                yingcount++;
                jiacount3++;
            }
            else if(testyi == 'J')
            {
                yicount2++;
            }
            else
            {
                pingcount++;
            }
            continue;
        }
    }

    printf("%d %d %d\n",yingcount,pingcount,(testcount - yingcount - pingcount));
    printf("%d %d %d\n",(testcount - yingcount - pingcount),pingcount,yingcount);

    //C J B
    if((jiacount3 >= jiacount1)&&(jiacount3 >= jiacount2))
    {
        printf("B");
    }
    else if(jiacount1 >= jiacount2)
    {
        printf("C");
    }
    else
    {
        printf("J");
    }

    //C J B
    if((yicount3 >= yicount1)&&(yicount3 >= yicount2))
    {
        printf(" B");
    }
    else if(yicount1 >= yicount2)
    {
        printf(" C");
    }
    else
    {
        printf(" J");
    }

    return 0;
}

