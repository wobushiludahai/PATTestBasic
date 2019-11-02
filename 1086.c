/**
 * @description: 1086  就不告诉你
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int morequick(void)
{
    int A, B, C;
    scanf("%d %d", &A, &B);
    C = A * B;

    while(!(C % 10))
        C /= 10;

    while(C)
    {
        putchar('0' + C % 10);
        C /= 10;
    }

    return 0;
}

int main(void)
{
    int testA, testB, result;
    char output[8] = {0};
    int count = 0;
    int fuzhu = 0;

    scanf("%d %d", &testA, &testB);
    result = testA * testB;

    while (1)
    {
        output[count++] = (result % 10);
        result /= 10;
        if(result == 0)
        {
            break;
        }
    }

    for(int i = 0; i < count; i++)
    {
        if(fuzhu == 0)
        {
            if(output[i] != 0)
            {
                fuzhu  = 1;
                printf("%c", (output[i] + '0'));
            }
        }
        else
        {
            printf("%c", (output[i] + '0'));
        }
    }

    return 0;
}