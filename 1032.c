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
    int testnum;
    int testbuf[100001] = {0};
    int tempnum,tempchengji,temp = 0;

    scanf("%d",&testnum);

    for(int i = 0; i < testnum; i++)
    {
        scanf("%d%d", &tempnum, &tempchengji);
        testbuf[tempnum] += tempchengji;
    }

    for(int i = 1; i < 100001; i++)
    {
        if(testbuf[i] > testbuf[temp])
        {
            temp = i;
        }
    }

    printf("%d %d",temp,testbuf[temp]);

    return 0;
}

