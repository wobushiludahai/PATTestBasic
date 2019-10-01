/**
 * @description: 插入与归并
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int testnum;
int testbuf1[100];
int testbuf2[100];
int testInsertbuf[100];
int testMergebuf[100];
int MergeResultbuf[100] = {0};
int testcount = 0;
int testMergeflag = 0;
int testflag = 0;
void InsertSortFresh(void)
{
    int temp = testInsertbuf[testcount + 1];

    for(int i = 0; i < (testcount + 1); i++)
    {
        if(temp <= testInsertbuf[i])
        {
            for(int j = (testcount + 1); j > (i); j--)
            {
                testInsertbuf[j] = testInsertbuf[j - 1];
            }
            testInsertbuf[i] = temp;
            break;
        }
    }
}

int InsertSort(void)
{
    int temp = 0;
    InsertSortFresh();
    while(temp < testnum)
    {
        if(testInsertbuf[temp] != testbuf2[temp])
        {
            break;
        }
        temp++;
    }
    if(temp == testnum)
    {
        printf("Insertion Sort\n");
        testcount++;
        InsertSortFresh();
        for(int i = 0; i < (testnum - 1); i++)
        {
            printf("%d ",testInsertbuf[i]);
        }
        printf("%d",testInsertbuf[testnum - 1]);
        return 1;
    }
    return 0;
}

//用于归并排序数组合并
void Merge(int *Merge1, int len1, int *Merge2, int len2, int *Mergedest)
{
    int templen = 0;
    int templen1 = 0,templen2 = 0;

    while ((templen1 < len1)&&(templen2 < len2))
    {
        if(Merge1[templen1] < Merge2[templen2])
        {
            Mergedest[templen++] = Merge1[templen1++];
        }
        else
        {
            Mergedest[templen++] = Merge2[templen2++];
        }
    }

    while (templen1 < len1)
    {
        Mergedest[templen++] = Merge1[templen1++];
    }

    while (templen2 < len2)
    {
        Mergedest[templen++] = Merge2[templen2++];
    }
}

void MergeSortFlesh(void)
{
    int count = 0;
    int temp = (int)pow(2, testcount);

    if((temp<<1) > testnum)
    {
        testMergeflag = 1;
    }

    while(1)
    {
        if((count + temp) >= testnum)
        {
            break;
        }
        if(count + (temp<<1) >= testnum)
        {
            Merge(&testMergebuf[count],temp,&testMergebuf[count + temp],(testnum - count - temp),&MergeResultbuf[count]);
            break;
        }
        Merge(&testMergebuf[count],temp,&testMergebuf[count + temp], temp, &MergeResultbuf[count]);
        count+=(temp<<1);
    }

    for (int i = 0; i < testnum; i++)
    {
        testMergebuf[i] = MergeResultbuf[i];
    }
}

int MergeSort(void)
{
    int temp = 0;
    MergeSortFlesh();
    while(temp < testnum)
    {
        if(testMergebuf[temp] != testbuf2[temp])
        {
            break;
        }
        temp++;
    }
    if(temp == testnum)
    {
        printf("Merge Sort\n");
        testcount++;
        MergeSortFlesh();
        for(int i = 0; i < (testnum - 1); i++)
        {
            printf("%d ",testMergebuf[i]);
        }
        printf("%d",testMergebuf[testnum - 1]);
        testflag = 1;
        return 1;
    }
    return 0;
}

int main(void)
{
    scanf("%d", &testnum);

    for(int i = 0; i < testnum; i++)
    {
        scanf("%d",&testbuf1[i]);
        testInsertbuf[i] = testbuf1[i];
        testMergebuf[i] = testbuf1[i];
    }

    for(int i = 0; i < testnum; i++)
    {
        scanf("%d",&testbuf2[i]);
    }

    while((MergeSort() == 0)&&(testMergeflag == 0)) testcount++;
    if(testflag == 0)
    {
        testcount = 0;
        while(InsertSort() == 0) testcount++;
    }
    // printf("\n测试结束\n");

    return 0;
}
