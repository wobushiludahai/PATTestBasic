/**
 * @description: 1046.c 划拳
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int testnum;
    int jiahan,jiahua,yihan,yihua,temp;
    int jiaresult = 0, yiresult = 0;

    scanf("%d",&testnum);

    for(int i = 0; i < testnum; i++)
    {
        scanf("%d%d%d%d", &jiahan, &jiahua, &yihan, &yihua);
        temp = jiahan + yihan;
        if((jiahua == temp)&&(yihua!=temp))
        {
            yiresult++;
            continue;
        }

        if((yihua == temp)&&(jiahua!=temp))
        {
            jiaresult++;
        }
    }

    printf("%d %d", jiaresult, yiresult);

    return 0;
}
