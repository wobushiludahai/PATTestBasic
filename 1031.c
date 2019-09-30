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

int testcal(char *testbuf)
{
    int tempsum = 0;
    char resultcheck;

    for(int i = 0; i < 17;i++)
    {
        if((testbuf[i] < '0')||(testbuf[i] > '9'))
        {
            return 0;
        }
    }

    tempsum = (testbuf[0] - '0')*7 + (testbuf[1] - '0')*9 +\
              (testbuf[2] - '0')*10 + (testbuf[3] - '0')*5 +\
              (testbuf[4] - '0')*8 + (testbuf[5] - '0')*4 +\
              (testbuf[6] - '0')*2 + (testbuf[7] - '0')*1 +\
              (testbuf[8] - '0')*6 + (testbuf[9] - '0')*3 +\
              (testbuf[10] - '0')*7 + (testbuf[11] - '0')*9 +\
              (testbuf[12] - '0')*10 + (testbuf[13] - '0')*5 +\
              (testbuf[14] - '0')*8 + (testbuf[15] - '0')*4 +\
              (testbuf[16] - '0')*2;

    tempsum = (tempsum%11);

    if(tempsum == 0)
    {
        resultcheck = '1';
    }
    else if (tempsum == 1)
    {
        resultcheck = '0';
    }
    else if(tempsum == 2)
    {
        resultcheck = 'X';
    }
    else
    {
        resultcheck = (char)(12 - tempsum + '0');
    }

    if(resultcheck == testbuf[17])
    {
        return 1;
    }

    return 0;
}

int main(void)
{
    char testbuf[20];
    int testnum;
    int teststate = 1;

    scanf("%d",&testnum);

    if(testnum == 0)
    {
        return 0;
    }

    for(int i = 0; i < testnum; i++)
    {
        scanf("%s",testbuf);
        if(!testcal(testbuf))
        {
            teststate = 0;
            printf("%s",testbuf);
            if(i!=(testnum-1))
            {
                printf("\n");
            }
        }
    }

    if(teststate == 1)
    {
        printf("All passed");
    }

    return 0;
}

