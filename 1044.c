/**
 * @description: 1044 火星数字
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char gaoweibuf[][10] = {"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
char diweibuf[][10] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};

void earthtohuoxing(char *numtest)
{
    int caltemp = 0;
    int temp = 0;

    while(numtest[temp]!='\0')
    {
        caltemp = (caltemp *10) + (numtest[temp] - '0');
        temp++;
    }

    temp = caltemp/13;
    if(temp!=0)
    {
        if(caltemp%13 != 0)
        {
            printf("%s ",&gaoweibuf[temp - 1][0]);  
        }
        else
        {
            printf("%s",&gaoweibuf[temp - 1][0]);
            return;
        }
    }

    printf("%s",&diweibuf[caltemp%13][0]);
}

void huoxingtoearth(char *zimu)
{
    int temp = strlen(zimu);
    char *temptest = zimu;
    int result = 0;

    for(int i = 0; i < 12; i++)
    {
        if((gaoweibuf[i][0] == temptest[0])&&(gaoweibuf[i][1] == temptest[1])&&(gaoweibuf[i][2] == temptest[2]))
        {
            result = (i + 1) * 13;
            if(temp!=3)
            {
                temptest += 4;
                break;

            }
            printf("%d",result);
            return;
        }
    }
    
    for(int i = 0; i < 13; i++)
    {
        if((diweibuf[i][0] == temptest[0])&&(diweibuf[i][1] == temptest[1])&&(diweibuf[i][2] == temptest[2]))
        {
            result += i;
            break;
        }
    }

    printf("%d",result);
}

int main(void)
{
    char testbuf[100][10];
    int testnum,testfuzhu;

    scanf("%d\n",&testnum);

    for(int i = 0; i < testnum; i++)
    {
        testfuzhu = 0;
        while ((testbuf[i][testfuzhu] = getchar())!='\n')
        {
            testfuzhu++;
        }
        testbuf[i][testfuzhu] = '\0';
    }

    for(int i = 0; i < testnum; i++)
    {
        if(i!=(testnum - 1))
        {
            if((testbuf[i][0] >= '0')&&(testbuf[i][0] <= '9'))
            {
                earthtohuoxing(&testbuf[i][0]);
            }
            else
            {
                huoxingtoearth(&testbuf[i][0]);
            }
            printf("\n");
        }
        else
        {
            if((testbuf[i][0] >= '0')&&(testbuf[i][0] <= '9'))
            {
                earthtohuoxing(&testbuf[i][0]);
            }
            else
            {
                huoxingtoearth(&testbuf[i][0]);
            }
        }
    }
    return 0;
}
