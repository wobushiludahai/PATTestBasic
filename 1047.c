/**
 * @description: 1047 编程团体赛
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int testnum;
    int resultbuf[1003] = {0};
    char tempbuf[20] = {0};
    int temp;
    int fuzhu1,fuzhu2;

    scanf("%d", &testnum);
    for(int i = 0; i < testnum; i++)
    {
        scanf("%s %d", tempbuf, &temp);
        fuzhu1 = 0;
        fuzhu2 = 0;
        while (tempbuf[fuzhu1]!='-')
        {
            fuzhu2 = (fuzhu2*10) + tempbuf[fuzhu1] - '0';
            fuzhu1++;
        }
        resultbuf[fuzhu2] += temp;
    }

    fuzhu1 = resultbuf[0];
    fuzhu2 = 0;
    for(int i = 1; i < 1003; i++)
    {
        if(resultbuf[i] > fuzhu1)
        {
            fuzhu1 = resultbuf[i];
            fuzhu2 = i;
        }
    }

    printf("%d %d", fuzhu2, fuzhu1);

    return 0;
}
