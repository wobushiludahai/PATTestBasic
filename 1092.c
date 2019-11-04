/**
 * @description: 1092   最好吃的月饼
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

unsigned long long tongji[1005] = {0};
int N, M, temp;

int main(void)
{
    scanf("%d %d", &N, &M);

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &temp);
            tongji[j] += temp;
        }
    }

    temp = 0;
    for(int j = 0; j < N; j++)
    {
        if(tongji[j] > temp)
        {
            temp = tongji[j];
        }
    }
    printf("%d\n", temp);
    M = 0;
    for(int j = 0; j < N; j++)
    {
        if(tongji[j] == temp)
        {
            if(M == 0)
            {
                M = 1;
                printf("%d", (j +1));
                continue;
            }
            printf(" %d", (j+1));
        }
    }
    


    return 0;
}