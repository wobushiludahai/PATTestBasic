/**
 * @description: 1081  检查密码
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testcount;
int nodecount = 0;
int numcount = 0;
int lettercount = 0;
int othercount = 0;
char temp;

int main(void)
{
    scanf("%d", &testcount);
    while(getchar() == '\n');
    for(int i = 0; i < testcount; i++)
    {
        othercount = nodecount = numcount = lettercount = 0;
        while((temp = getchar()) != '\n')
        {
            if((temp >= '0')&&(temp <= '9')) numcount++;
            else if(((temp >= 'a')&&(temp <= 'z'))||((temp >= 'A')&&(temp <= 'Z'))) lettercount++;
            else if(temp == '.') nodecount++;
            else othercount++;
        }

        if((othercount + nodecount + numcount + lettercount) < 6) puts("Your password is tai duan le.");
        else if(othercount > 0) puts("Your password is tai luan le.");
        else if(numcount == 0) puts("Your password needs shu zi.");
        else if(lettercount == 0) puts("Your password needs zi mu.");
        else puts("Your password is wan mei.");
    }

    return 0;
}