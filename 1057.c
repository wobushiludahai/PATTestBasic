/**
 * @description: 1057   数零壹
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // char testbuf[100003];
    char ch;
    int i = 0;
    long long result = 0;
    int result0 = 0;
    int result1 = 0;
    

    // scanf("%s",testbuf);
    while((ch = getchar())!='\n')
    {
        if((ch >= 'a')&&(ch <= 'z'))
        {
            result += (ch - 'a' + 1);
        }
        if((ch >= 'A')&&(ch <= 'Z'))
        {
            result += (ch - 'A' + 1);
        }
    }

    // while(testbuf[i]!='\0')
    // {
    //     if((testbuf[i] >= 'a')&&(testbuf[i] <= 'z'))
    //     {
    //         result += (testbuf[i] - 'a' + 1);
    //     }
    //     if((testbuf[i] >= 'A')&&(testbuf[i] <= 'Z'))
    //     {
    //         result += (testbuf[i] - 'A' + 1);
    //     }
    //     i++;
    // }

    if(result)
    {
        while(result/2)
        {
            if(result%2 == 1) 
            {
                result1++;
            }
            else
            {
                result0++;
            }
            result /= 2;
        }
        result1++;
    }

    printf("%d %d", result0, result1);

    return 0;
}
