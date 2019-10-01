/**
 * @description: 1040 有几个PAT   注意超时问题
 *              此题解题技巧及解题思路注意学习。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void)
{
    char testbuf[100002] = {0};
    int testlen;
    long long testcount = 0;
    long long countT = 0;
    long long countAT  = 0;


    scanf("%s",testbuf);
    testlen = strlen(testbuf);

    for(int i = (testlen - 1); i>=0; i--)
    {
        if(testbuf[i] == 'T')
        {
            countT++;
        }
        else if(testbuf[i] == 'A')
        {
            countAT += countT;
        }
        else
        {
            testcount += countAT;
        }
        
    }

    printf("%lld", (testcount%1000000007));
}
