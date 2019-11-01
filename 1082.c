/**
 * @description: 1082  射击比赛
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testcount;
int IDguanjun, IDcainiao;
int IDtemp,Xtemp,Ytemp,distancetemp;
int MAXdistance = 0, MINdistance = 100000;

int main(void)
{
    scanf("%d", &testcount);
    for(int i = 0; i < testcount; i++)
    {
        scanf("%d %d %d", &IDtemp, &Xtemp, &Ytemp);
        distancetemp = Xtemp*Xtemp + Ytemp*Ytemp;
        if(distancetemp > MAXdistance)
        {
            MAXdistance = distancetemp;
            IDguanjun = IDtemp;

        }
        if(distancetemp < MINdistance)
        {
            MINdistance = distancetemp;
            IDcainiao = IDtemp;
        }
    }

    printf("%04d %04d", IDcainiao, IDguanjun);

    return 0;
}
