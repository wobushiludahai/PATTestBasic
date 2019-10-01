/**
 * @description: 统计同成绩的学生
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int testnum,testbuf[110] = {0};
    int countnum,countcount = 0,countbuf[100000] = {0};
    int temp;

    scanf("%d",&testnum);

    for(int i = 0; i < testnum; i++)
    {
        scanf("%d",&temp);
        testbuf[temp]++;
    }
    scanf("%d",&countnum);
    for(int i = 0; i < (countnum); i++)
    {
        scanf("%d",&temp);
        countbuf[countcount++] = testbuf[temp];
    }

    for(int i = 0; i < (countnum - 1); i++)
    {
        printf("%d ", countbuf[i]);
    }
    printf("%d", countbuf[countnum - 1]);

    return 0;
}
