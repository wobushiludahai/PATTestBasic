/**
 * @description: 1090   危险品装箱
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int xinxi[20010] = {0};
int N, M;
int temp1, temp2, temp;
int linshi[1005] = {0};

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &temp1, &temp2);
        if(temp1 > temp2)
        {
            xinxi[2*i] = temp2;xinxi[2*i+1] = temp1;
        }
        else
        {
            xinxi[2*i] = temp1;xinxi[2*i+1] = temp2;  
        }
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d", &temp);
        for(int j = 0; j < temp; j++)
        {
            scanf("%d", &linshi[j]);
        }

        qsort(linshi, temp, sizeof(int), cmp);
        temp1 = 0;
        for(int j = 0; j < N; j++)
        {
            if(bsearch(&xinxi[2*j], linshi, temp, sizeof(int), cmp)
            && bsearch(&xinxi[2*j + 1], linshi, temp, sizeof(int), cmp))
            {
                temp1 = 1;
                break;
            }
        }

        if(temp1 == 1) puts("No");
        else puts("Yes");
    }

    return 0;
}