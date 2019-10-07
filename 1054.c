/**
 * @description: 1054 求平均值
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>
double testsum = 0.0;
int testcount = 0;

void Judgeandhandle(char *teststring)
{
    int templen = strlen(teststring);
    int pointrec = 0;
    double testtemp = 0.0;
    int temp = 0;
    int tempfushu = 0;
    int i = 0;

    if(teststring[0] == '-')
    {
        tempfushu = 1;
        i = 1;
    }

    for(; i < templen; i++)
    {
        if((teststring[i] >='0')&&(teststring[i] <='9'))
        {
            if(pointrec == 0)
            {
                testtemp  = (testtemp*10) + teststring[i] - '0';
            }
            else
            {
                temp++;
                if(temp == 3)
                {
                    printf("ERROR: %s is not a legal number\n", teststring);
                    return;
                }
                testtemp += ((teststring[i] - '0')*pow(10, -temp));
            }
        }
        else if(teststring[i] == '.')
        {
            if(pointrec == 1)
            {
                printf("ERROR: %s is not a legal number\n", teststring);
                return;
            }
            pointrec = 1;
        }
        else
        {
            printf("ERROR: %s is not a legal number\n", teststring);
            return;
        }
    }
    if(tempfushu == 1)
    {
        testtemp = 0.0 - testtemp;
    }

    if((testtemp < (-1000.0))||(testtemp > 1000.0))
    {
        printf("ERROR: %s is not a legal number\n", teststring);
        return;
    }
    //printf("\n%f \n", testtemp);

    testcount++;
    testsum += testtemp;
}

int main(void)
{
    char testbuf[101][101];
    int testnum;

    scanf("%d", &testnum);

    for(int i = 0; i < testnum; i++)
    {
        scanf("%s", &testbuf[i][0]);
    }

    for(int i = 0; i < testnum; i++)
    {
        Judgeandhandle(&testbuf[i][0]);
    }

    if(testcount == 0)
    {
        printf("The average of 0 numbers is Undefined");
    }
    else if(testcount == 1)
    {
        printf("The average of 1 number is %.2f", (testsum/testcount));
    }
    else
    {
        printf("The average of %d numbers is %.2f", (testcount), (testsum/testcount));
    }
    return 0;
}
