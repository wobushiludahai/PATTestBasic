/**
 * @description: 1087 有多少不同的值
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int moresimple(void)
{
    int N, n, m, m0 = -1, count = 0;

    scanf("%d", &N);

    for(n = 1; n <= N; n++)
    {
        m = n / 2 + n / 3 + n / 5;
        if(m > m0)
            count++;
        m0 = m;
    }

    printf("%d", count);

    return 0;
}

int result[30000] = {0};
int resultcount = 0;
int tempcal;
int testcount;

int main(void)
{
    scanf("%d", &testcount);

    for(int i = 1; i <= testcount; i++)
    {
        tempcal = i/2 + i/3 + i/5;
        result[tempcal] = 1;
    }

    for(int i = 0; i < 30000; i++)
    {
        if(result[i]!=0)
        {
            resultcount++;
        }
    }

    printf("%d", resultcount);

    return 0;
}