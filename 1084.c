/**
 * @description: 1084  外观数列
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void calnext(char *pcur1, char *pnext1)
{
    int count = 1;
    char *p1, *p2;
    p1 = pcur1; p2 = pnext1;
    while(1)
    {
        *p2 = *p1;
        count = 1;
        while (*(p1+1) == *p1++)
        {
            count++;
        }
        *(p2 + 1) = count + '0';
        p2 += 2;
        if(*p1 == 0)
        {
            return;
        }
    }
}

int main(void)
{
    int testcount;
    int test;
    char testbuf1[100000] = {0}, testbuf2[100000] = {0};
    char *pcur, *pnext, *ptemp;

    pcur = testbuf1;
    pnext = testbuf2;
    scanf("%d %d", &test, &testcount);
    pcur[0] = test + '0';
    if(testcount > 1)
    {
        for(int i = 0; i < testcount - 1; i++)
        {
            // printf("\ntest");
            calnext(pcur, pnext);
            ptemp = pcur;
            pcur = pnext;
            pnext = ptemp;
        }
    }

    puts(pcur);
    // for(int i = 0; pcur[i]!=0; i++)
    // {
    //     putchar(pcur[i]);
    // }

    return 0;
}