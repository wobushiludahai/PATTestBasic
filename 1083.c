/**
 * @description: 1083  是否存在相等的差
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testcount;
int beimiannum;
int result[10001] = {0};

int main(void)
{
    scanf("%d", &testcount);
    while (getchar()!='\n');
    for(int i = 0; i < testcount; i++)
    {
        scanf("%d", &beimiannum);
        if(beimiannum > (i + 1))
        {
            result[beimiannum - i - 1]++;
        }
        else
        {
            result[i + 1 - beimiannum]++;
        }
    }

    for(int i = 10000; i >= 0; i--)
    {
        if(result[i]>1)
        {
            printf("%d %d\n", i, result[i]);
        }
    }

    return 0;
}