/**
 * @description: 1060    爱丁顿数
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int testnum;
    int testbuf[100002];
    int result = 0;

    scanf("%d", &testnum);
    for(int i = 0; i < testnum; i++)
    {
        scanf("%d", &testbuf[i]);
    }
    qsort(testbuf, testnum, sizeof(int), cmp);

    for(int i = 0; i < testnum; i++)
    {
        if(testbuf[i] > (testnum - i))
        {
            result =  testnum - i;
            break;
        }
    }

    printf("%d", result);

    return 0;
}
