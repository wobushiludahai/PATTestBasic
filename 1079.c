/**
 * @description: 1079  延迟的回文数
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int getlen(char *input)
{
    for(int i = 1014;;i--)
    {
        if(input[i] != 0)
        {
            return (i + 1);
        }
    }
}

int Ispalindromicnumber(char *input)
{
    int tlen = getlen(input);

    for(int i = 0; i < tlen/2; i++)
    {
        if(input[i]!=input[tlen - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

void reverse(char *input)
{
    char temp[1015] = {0};
    int tlen = getlen(input);
    for(int i = 0; i < tlen; i++)
        temp[tlen - i - 1] = input[i] + '0';

    memcpy(input, temp, tlen);
}

void numaddandprint(char *input, char *result)
{
    char temp[1015] = {0};
    int tempsum;

    memset(result, 0, 1015);
    int tlen = getlen(input);
    for(int i = 0; i < tlen; i++)
        temp[tlen - i - 1] = input[i];
    printf("%s + %s = ", input, temp);

    for(int i = tlen - 1; i >= 0; i--)
    {
        tempsum = temp[i] - '0' + input[i] - '0' + result[tlen - 1 - i];
        result[tlen - 1 - i] = (tempsum%10);
        if(tempsum >= 10)
        {
            result[tlen - i] = 1;
        }
    }
    // printf("  %d   ", getlen(result));

    reverse(result);

    printf("%s\n", result);
}

char a[1015] = {0},b[1015] = {0};

int main(void)
{
    int count = 0;
    char *input, *result, *temp;

    input = a;
    result = b;

    scanf("%s", input);

    while((count < 10)&&(!Ispalindromicnumber(input)))
    {
        numaddandprint(input, result);
        temp = input;
        input = result;
        result = temp;
        count++;
    }

    if(count == 10)
    {
        printf("Not found in 10 iterations.");
    }
    else
    {
        printf("%s is a palindromic number.", input);
    }

    return 0;
}
