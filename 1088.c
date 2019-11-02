/**
 * @description: 1088   三人行
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int jia,yi = 0,X,Y,self;
double bing;
int temp;

int main(void)
{
    scanf("%d %d %d", &self, &X, &Y);

    for(jia  = 99; jia >= 10; jia--)
    {
        yi = (jia%10)*10 + jia/10;
        if(((jia > yi? (jia - yi): (yi - jia))*1.0/X) == (yi*1.0 / Y))
        {
            bing = yi*1.0/Y;
            printf("%d", jia);
            printf(jia > self ? " Cong" : (jia == self ? " Ping" : " Gai"));
            printf(yi > self ? " Cong" : (yi == self ? " Ping" : " Gai"));
            printf(bing > self ? " Cong" : (bing == self ? " Ping" : " Gai"));
            return 0;
        }

    }

    printf("No Solution");

    return 0;
}