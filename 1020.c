#include<stdio.h>
#include<string.h>
#include <stdlib.h>
typedef struct
{
    float kucun;
    float sumprice;
}tagyuebing;


int main(void)
{
    int testnum1,testnum2;
    tagyuebing yuebingbuf[1001];
    int i = 0;
    float tempkucun,tempprice;
    float result = 0.0;

    scanf("%d%d",&testnum1,&testnum2);

    while(i!=testnum1)
    {
        scanf("%f",&yuebingbuf[i++].kucun);
    }

    i = 0;
    while(i!=testnum1)
    {
        scanf("%f",&yuebingbuf[i++].sumprice);
    }

    for(int j = 0; j < testnum1; j++)
    {
        for(int k = j; k < testnum1; k++)
        {
            if((yuebingbuf[k].sumprice/yuebingbuf[k].kucun)>(yuebingbuf[j].sumprice/yuebingbuf[j].kucun))
            {
                tempkucun = yuebingbuf[k].kucun;
                tempprice = yuebingbuf[k].sumprice;

                yuebingbuf[k].kucun = yuebingbuf[j].kucun;
                yuebingbuf[k].sumprice = yuebingbuf[j].sumprice;

                yuebingbuf[j].kucun = tempkucun;
                yuebingbuf[j].sumprice = tempprice;
            }
        }
    }

    for(int j = 0; j <testnum1; j++)
    {
        if(yuebingbuf[j].kucun >= testnum2)
        {
            result += (yuebingbuf[j].sumprice * testnum2)/yuebingbuf[j].kucun;
            break;
        }
        else
        {
            result += yuebingbuf[j].sumprice;
            testnum2 -= (yuebingbuf[j].kucun);
        }
    }

    printf("%.2f",result);


    return 0;
}

