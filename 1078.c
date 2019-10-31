/**
 * @description: 1078  字符串压缩与解压
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void compress(void)
{
    char previous = getchar(),current;
    int count = 1;

    while(current = getchar())
    {
        if(current == previous)
        {
            count++;
        }
        else
        {
            if(count!=1)
            {
                printf("%d", count);
            }
            putchar(previous);
            previous = current;
            count = 1;
        }

        if(current == '\n')
        {
            break;
        }
    }
}

void decompress(void)
{
    char test;
    int count = 0;

    while ((test = getchar())!='\n')
    {
        if((test >= '0')&&(test <= '9'))
        {
            count = count*10 + test - '0';      //很重要的点
        }
        else
        {
            if(count == 0)
            {
                putchar(test);
            }
            else
            {
                for(int i = 0; i < count; i++)
                {
                    putchar(test);
                }  
            }
            count = 0;
        }
    }
}

int main()
{
    switch(getchar())
    {
        case 'C':
            while (getchar()!='\n');
            compress();
            break;

        case 'D':
            while (getchar()!='\n');
            decompress();
            break;

        default:
            break;
    }

    return 0;
}
