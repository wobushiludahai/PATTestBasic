/**
 * @description: 1070 结绳
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>

int testnum;
int testbuf[10002];
int result = 0;

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    scanf("%d", &testnum);

    for(int i = 0; i < testnum; i++)
    {
        scanf("%d", &testbuf[i]);
    }

    // printf("\n");
    // for(int i = 0; i < testnum; i++)
    // {
    //     printf("%d ", testbuf[i]);
    // }

    qsort(testbuf, testnum, sizeof(int), cmp);

    result = (testbuf[0] + testbuf[1])/2;

    for(int i = 2; i < testnum; i++)
    {
        result = (result + testbuf[i])/2;
    }

    printf("%d", result);

    return 0;
}
