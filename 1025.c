/*
 * @Description: 有一个测试用例无法通过
 * @Author: your name
 * @Date: 2019-09-22 18:33:44
 * @LastEditTime: 2019-09-22 18:34:18
 * @LastEditors: Please set LastEditors
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct
{
    int Addr;
    int Data;
    int Next;
}tagtestlink;

int main(void)
{
    int FirstAddr;
    int testcount,testnum,testcountbak;
    tagtestlink ttestlink[100000];
    int printmark;
    int i = 0;

    int goaladdr;
    tagtestlink ttemplink;

    scanf("%d%d%d",&FirstAddr,&testcount,&testnum);

    if(FirstAddr == -1)
    {
        printf("-1\n");
        return 0;
    }

    for(i = 0; i < testcount; i++)
    {
        scanf("%d%d%d",&ttestlink[i].Addr,&ttestlink[i].Data,&ttestlink[i].Next);
    }

    goaladdr = FirstAddr;
    for(i = 0; i < testcount - 1; i++)
    {
        for(int j = i; j < testcount; j++)
        {
            if(ttestlink[j].Addr == goaladdr)
            {
                goaladdr = ttestlink[j].Next;

                ttemplink.Addr = ttestlink[i].Addr;
                ttemplink.Data = ttestlink[i].Data;
                ttemplink.Next = ttestlink[i].Next;

                ttestlink[i].Addr = ttestlink[j].Addr;
                ttestlink[i].Data = ttestlink[j].Data;
                ttestlink[i].Next = ttestlink[j].Next;

                ttestlink[j].Addr = ttemplink.Addr;
                ttestlink[j].Data = ttemplink.Data;
                ttestlink[j].Next = ttemplink.Next;

                break;
            }
        }
    }

    testcountbak = testcount;
    printmark = 0;
    while(1)
    {
        if(testnum <= testcount)
        {
            for(int j = printmark + testnum - 1; j > printmark; j--)
            {
                printf("%05d %d %05d\n",ttestlink[j].Addr,ttestlink[j].Data,ttestlink[j-1].Addr);
            }
            if(ttestlink[printmark + testnum - 1].Next == (-1))
            {
                printf("%05d %d %d",ttestlink[printmark].Addr,ttestlink[printmark].Data,(-1));
                break;
            }
            testcount -= testnum;
            if(testnum <= testcount)
            {
                printf("%05d %d %05d\n",ttestlink[printmark].Addr,ttestlink[printmark].Data,ttestlink[printmark + 2*testnum - 1].Addr);
            }
            else
            {
                printf("%05d %d %05d\n",ttestlink[printmark].Addr,ttestlink[printmark].Data,ttestlink[printmark + testnum].Addr);
            }
            printmark+=testnum;
        }
        else
        {
            for(int j = printmark; j < testcountbak - 1; j++)
            {
                printf("%05d %d %05d\n",ttestlink[j].Addr,ttestlink[j].Data,ttestlink[j].Next);
            }
            printf("%05d %d %d",ttestlink[testcountbak - 1].Addr,ttestlink[testcountbak - 1].Data,ttestlink[testcountbak - 1].Next);
            break;
        }
    }

    return 0;
}

