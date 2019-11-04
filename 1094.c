/**
 * @description: 1094   谷歌的招聘
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int iPrime(int n)
{
    if(n < 2)
        return 0;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}

int L,K,zuhe,i;
char testbuf[1005] = {0};

int main(void)
{
    scanf("%d %d", &L, &K);
    scanf("%s", testbuf);
    for(i = 0; i < L - K + 1; i++)
    {
        zuhe = 0;
        for(int j = 0; j < K; j++)
        {
            zuhe = zuhe*10 + testbuf[i + j] - '0';
        }
        // printf("%d\n", zuhe);
        if(iPrime(zuhe) == 1)
        {
            for(int j = 0; j < K; j++)
            {
                printf("%c", testbuf[i + j]);
            }
            break;
        }
        // printf("%d\n", zuhe);
    }

    if(i == L - K + 1)
    {
        printf("404");
    }

    return 0;
}