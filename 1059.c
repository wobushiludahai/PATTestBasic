/**
 * @description: 1059   C语言竞赛
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>
int judgezhishu(int test_num)
{
    if (test_num == 1) return 0;
    if (test_num == 2 || test_num == 3) return 1;
    for (int i = 2; i <= sqrt(test_num); ++i) 
        if (test_num % i == 0) return 0;
    return 1;
}

typedef struct
{
    int num;
    int hasprinted;
}tagtest;

int main(void)
{
    int testnum;
    int j;
    int printcount;
    int testtemp;
    tagtest testbuf[10001] = {0};
    int printbuf[10001] = {0};

    scanf("%d", &testnum);
    for(int i = 0; i < testnum; i++)
    {
        scanf("%d", &testbuf[i].num);
    }

    scanf("%d", &printcount);
    for(int i = 0; i < printcount; i++)
    {
        scanf("%d", &printbuf[i]);
    }

    for(int i = 0; i < printcount; i++)
    {
        for(j = 0; j < testnum; j++)
        {
            if(printbuf[i] == testbuf[j].num)
            {
                // printf("\n%d\n", j);
                testtemp = j + 1;
                break;
            }
        }

        if(j == testnum)
        {
            printf("%d: Are you kidding?", printbuf[i]);
        }
        else if(testbuf[testtemp - 1].hasprinted != 1)
        {
            if(testtemp == 1)
            {
                printf("%04d: Mystery Award", printbuf[i]);
            }
            else if((judgezhishu(testtemp)) == 1)
            {
                printf("%04d: Minion", printbuf[i]);
            }
            else
            {
                printf("%04d: Chocolate", printbuf[i]);
            }

            testbuf[testtemp - 1].hasprinted  = 1;
        }
        else
        {
            printf("%04d: Checked", printbuf[i]);
        }
        if(i!=(printcount - 1))
        {
            printf("\n");
        }
    }


    return 0;
}
