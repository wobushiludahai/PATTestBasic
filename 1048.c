/**
 * @description: 1048 数字加密
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    char testAbuf[101];
    int testAlen;
    char testBbuf[101];
    char testresultbuf[101];
    int testBlen;
    int temp = 0;
    int fuzhu = 0;
    int fuzhu1;
    int max;
    int num1,num2;

    scanf("%s %s",testAbuf,testBbuf);
    testAlen = strlen(testAbuf);
    testBlen = strlen(testBbuf);

    max = (testAlen > testBlen)? testAlen : testBlen;

    while((temp < testAlen)||(temp < testBlen))
    {
        num1 = (temp < testAlen) ?((testAbuf[testAlen - temp -1] - '0')):(0);
        num2 = (temp < testBlen) ?((testBbuf[testBlen - temp - 1] -'0')):(0);
        if(fuzhu == 0)
        {
            fuzhu = 1;
            fuzhu1 = num2 + num1;
            fuzhu1 %=13;
            if(fuzhu1 == 10)
            {
                testresultbuf[max - temp - 1] = 'J';
            }
            else if(fuzhu1 == 11)
            {
                testresultbuf[max - temp - 1] = 'Q';
            }
            else if(fuzhu1 == 12)
            {
                testresultbuf[max - temp - 1] = 'K';
            }
            else
            {
                testresultbuf[max - temp - 1] = fuzhu1 + '0';
            }

        }
        else
        {
            fuzhu = 0;
            fuzhu1 = num2 - num1;
            if(fuzhu1 < 0)
            {
                fuzhu1 +=10;
            }
            testresultbuf[max - temp - 1] = fuzhu1 + '0';
        }
        temp++;
    }
    testresultbuf[max] = '\0';

    printf("%s",testresultbuf);
   
    return 0;
}
