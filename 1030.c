/*
 * @Description: 使用快速排序的方式进行
 * @Author: your name
 * @Date: 2019-09-24 15:41:49
 * @LastEditTime: 2019-09-24 15:43:03
 * @LastEditors: Please set LastEditors
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

void Swap(int arr[], int low, int high)
{
    int temp;
    temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
}

int Partition(int arr[], int low, int high)
{
    int base = arr[low];
    while(low < high)
    {
        while(low < high && arr[high] >= base)
        {
            high --;
        }
        Swap(arr, low, high);
        while(low < high && arr[low] <= base)
        {
            low ++;
        }
        Swap(arr, low, high);
    }
    return low;
}

void QuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int base = Partition(arr, low, high);
        QuickSort(arr, low, base - 1);
        QuickSort(arr, base + 1, high);
    }
}


int main(void)
{
    unsigned int testnum,nump;
    unsigned int testbuf[100001];
    unsigned int resultmax = 0;

    scanf("%d%d",&testnum,&nump);
    for(int i = 0; i < testnum; i++)
    {
        scanf("%d",&testbuf[i]);
    }

    QuickSort(testbuf,0,testnum-1);

    for(int i = 0; i < testnum; i++)
    {
        for(int j = resultmax + i; j < testnum; j++)
        {
            if(testbuf[j] > testbuf[i]*nump)
            {
                break;
            }
            else
            {
                resultmax++;
            }
        }
    }

    printf("%d",resultmax);

    return 0;
}

