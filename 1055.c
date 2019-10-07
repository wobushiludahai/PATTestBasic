/**
 * @description: 1055 集体照     注意使用C语言库函数的快速排序函数，其效率较高
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    char namebuf[10];
    int height;
}TestInf;
int cmp_up(const void*a,const void*b) //先身高后字典
{
    if(( * (TestInf * )a).height != ( * (TestInf * )b).height)
    return ( * (TestInf * )b).height - ( * (TestInf * )a).height;
    else return strcmp(( * (TestInf * )a).namebuf , ( * (TestInf * )b).namebuf) >0;
}


int main(void)
{
    int testnum,numK;
    TestInf testbuf[10050];
    TestInf tagtemptest;
    int tempmax;
    int tempsave[15][10050];
    int temp;

    scanf("%d %d", &testnum, &numK);
    for(int i = 0; i < testnum; i++)
    {
        scanf("%s %d", &testbuf[i].namebuf[0], &testbuf[i].height);
    }

    qsort(testbuf,testnum,sizeof(testbuf[0]),cmp_up);//排序

    int p = 1;
    int pp = 0;
    for(int i = 0; i < numK; ++i)
    {
        p = 1;
        int m = (i == 0 ? (testnum/numK + testnum%numK): testnum/numK);
        tempsave[i][m/2] = pp;
        pp++;
        int j = 1;
        while(j < m)
        {
            tempsave[i][m/2 - p] = pp;
            pp++;
            j++;
            if(j < m)
            {
                tempsave[i][m/2 + p] = pp;pp++;j++;
            }
            p++;
        }
    }

    for(int i = 0; i < numK; ++i)
    {
        int m = (i == 0 ? (testnum/numK + testnum%numK): testnum/numK);
        for(int j = 0; j < m; ++j)
        {
            j == m-1?printf("%s", testbuf[tempsave[i][j]].namebuf):printf("%s ", testbuf[tempsave[i][j]].namebuf);
        }
        if(i != (numK -1))
        {
            printf("\n");
        }
    }
    return 0;
}
