/**
 * @description: 1051  复数乘法  注意判断实部虚部是否大于0.01
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double R1,P1,R2,P2;
    double A1,B1,A2,B2;
    double AR,BR;

    scanf("%lf %lf %lf %lf", &R1, &P1, &R2, &P2);

    A1 = R1*cos(P1);
    B1 = R1*sin(P1);

    A2 = R2*cos(P2);
    B2 = R2*sin(P2);
    
    AR = (A1*A2 - B1*B2);
    BR = (A1*B2+B1*A2);
    if(fabs(AR) < 0.01)
    {
        AR = 0;
    }
    if(fabs(BR) < 0.01)
    {
        BR = 0;
    }

    if(BR >= 0)
    {
        printf("%.2f+%.2fi", AR, BR);    
    }
    else
    {
        printf("%.2f%.2fi", AR, BR);    
    }

    return 0;
}
