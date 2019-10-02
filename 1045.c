/**
 * @description: 1045  快速排序
 *          注意硬解题容易导致超时，需要理解主元和排序后的数字位置相同。
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void quicksort(int *test, int start, int end)
{
    if(end <= start)
    {
        return;
    }

    int i = start;
    int j = end;
    int key = test[i];

    while (i < j)
    {
        while (i < j && test[j] >= key)
        {
            j--;
        }
        if(i < j)
        {
            test[i++] = test[j];
        }

        while (i < j && test[i] < key)
        {
            i++;
        }
        if(i < j)
        {
            test[j] = test[i];
            j--;
        }
    }

    test[i] = key;
    quicksort(test, start, i-1);
    quicksort(test, i+1, end);
}
int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
    int testnum;
    int testbuf[100002] = {0};
    int testtempbuf[100002] = {0};
    int testresult = 0;
    int testresultbuf[100002] = {0};
    int tempmax = -1;

    scanf("%d",&testnum);
    for(int i = 0; i < testnum; i++)
    {
        scanf("%d",&testbuf[i]);
        testtempbuf[i] = testbuf[i];
    }

    // quicksort(testtempbuf, 0, (testnum - 1));
    qsort(testtempbuf, testnum, sizeof(int), cmp);

    for(int i = 0; i < testnum; i++)
    {
        if((testtempbuf[i] == testbuf[i])&&(testbuf[i] > tempmax))
        {
            testresultbuf[testresult++] = testbuf[i];
        }

        if(testbuf[i] > tempmax)
        {
            tempmax = testbuf[i];
        }
    }

    printf("%d\n", testresult);
    if(testresult!=0)
    {
        for(int i = 0; i < testresult; i++)
        {
            if(i!=(testresult - 1))
            {
                printf("%d ", testresultbuf[i]);
            }
            else
            {
                printf("%d",testresultbuf[testresult - 1]);
            }
            
        }
    }
    printf("\n");


    return 0;
}
