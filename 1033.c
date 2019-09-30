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
    int asciirecord[128] = {0};

    int templen;
    int testjilu = 0;

    char testgoalbuf[100];
    char testbuf[100001];

    //scanf("%s",testgoalbuf);
    //scanf("%s",testbuf);

    //templen = strlen(testgoalbuf);
    //for(int i = 0; i < templen; i++)
    char ch;
    while((ch=getchar())!='\n')
    {
       // if((testgoalbuf[i] >= 'A')&&(testgoalbuf[i] <= 'Z'))
        {
       //     asciirecord[testgoalbuf[i] - 'A' + 'a'] = 1;
        }
       // asciirecord[testgoalbuf[i]] = 1;
       // if(testgoalbuf[i] == '+')
        {
      //      for(char j = 'A'; j  <= 'Z'; j++)
            {
      //          asciirecord[j] = 1;
            }
        }

        if((ch >= 'A')&&(ch <= 'Z'))
        {
            asciirecord[ch - 'A' + 'a'] = 1;
        }
        asciirecord[ch] = 1;
        if(ch == '+')
        {
            for(char j = 'A'; j  <= 'Z'; j++)
            {
                asciirecord[j] = 1;
            }
        }

    }

    //templen = strlen(testbuf);
    //for(int i = 0; i < templen; i++)
    while((ch=getchar())!='\n')
    {
      //  if(asciirecord[testbuf[i]]!=1)
        {
     //       testjilu = 1;
     //       printf("%c",testbuf[i]);
        }

        if(asciirecord[ch]!=1)
        {
            testjilu = 1;
            printf("%c",ch);
        }
    }

    if(testjilu == 0)
    {
        printf("\n");
    }

    return 0;
}

