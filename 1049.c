/**
 * @description: 1049 数列的片段和
 * 注意规律总结
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
    long long testnum;
    double testbuf[100002] = {0};
    double result = 0.0;

    scanf("%lld", &testnum);
    for(int i = 0; i < testnum; i++)
    {
        scanf("%lf", &testbuf[i]);
        result += ((testbuf[i])*((i+1)*(testnum - i)));
    }

    printf("%.2f", result);

    return 0;
}
