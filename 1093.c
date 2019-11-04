/**
 * @description: 1093   字符串A + B
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

char A[1000002] = {0};
char B[1000002] = {0};
char record[130] = {0};
int len1, len2;

int main(void)
{
    gets(A);
    gets(B);
    for(int i = 0; A[i] != '\0'; i++)
    {
        if(record[A[i]] == 0)
        {
            record[A[i]] = 1;
            printf("%c", A[i]);
        }
    }

    for(int i = 0;  B[i] != '\0'; i++)
    {
        if(record[B[i]] == 0)
        {
            record[B[i]] = 1;
            printf("%c", B[i]);
        }
    }

    return 0;
}