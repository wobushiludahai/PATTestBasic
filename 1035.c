/*
 * @Description: In User Settings Edi
 * @Author: your name
 * @Date: 2019-09-30 11:48:13
 * @LastEditTime: 2019-09-30 17:37:41
 * @LastEditors: Please set LastEditors
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
int testcount = 0;

void InsertSort(void)
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

    for (int i = 0; i < testnum; i++)
    {
        printf("%d ",testInsertbuf[i]);
    }
    printf("\n");
}
//用于归并排序数组合并
void Merge(int *Merge1, int len1, int *Merge2, int len2, int *Mergedest)
{
    int templen = 0;
    int templen1 = 0,templen2 = 0;

    while ((templen1 < len1)&&(templen2 < len2))
    {
        if(Merge1[templen] < Merge2[templen])
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

void MergeSort(void)
{
    int MergeResultbuf[100] = {0};
    int count = 0;
    int temp = (int)pow(2, 0);

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
        printf("%d ",MergeResultbuf[i]);
    }
    printf("\n");
    temp = testnum;
    count = 0;
    while (temp)
    {
        testMergebuf[count] = MergeResultbuf[count];
        temp--;
    }
    printf("\nMergebuf: \n");
     for (int i = 0; i < testnum; i++)
    {
        printf("%d ",testMergebuf[i]);
    }

    temp = (int)pow(2, 1);
    printf("\ntemp = %d\n",temp);
    count = 0;

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
        printf("%d ",MergeResultbuf[i]);
    }
    printf("\n");
    temp = testnum;
    count = 0;
    while (temp)
    {
        testMergebuf[count] = MergeResultbuf[count];
        temp--;
    }
    printf("\nMergebuf: \n");
     for (int i = 0; i < testnum; i++)
    {
        printf("%d ",testMergebuf[i]);
    }

    
    temp = (int)pow(2, 2);
    printf("\ntemp = %d\n",temp);
    count = 0;

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
        printf("%d ",MergeResultbuf[i]);
    }
    printf("\n");
    temp = testnum;
    count = 0;
    while (temp)
    {
        testMergebuf[count] = MergeResultbuf[count];
        temp--;
    }
    printf("\nMergebuf: \n");
     for (int i = 0; i < testnum; i++)
    {
        printf("%d ",testMergebuf[i]);
    }


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

    // for(int i = 0; i < testnum; i++)
    // {
        MergeSort();
        // testcount++;
    // }
        // MergeSort();
        // testcount++;
        
        // MergeSort();
        // testcount++;
    // for(int i = 0; i < testnum; i++)
    // {
    //     scanf("%d",&testbuf2[i]);
    // }

    return 0;
}
