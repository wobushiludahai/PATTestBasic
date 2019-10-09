/**
 * @description: 1063    计算谱半径
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
    int num1, num2;
    double result = 0.0;
    double temp;

    scanf("%d", &testnum);
    for(int i = 0; i < testnum; i++)
    {
        scanf("%d %d", &num1, &num2);
        if((temp = sqrt(num1*num1 + num2*num2)) > result)
        {
            result = temp;
        }
    }

    printf("%.2f", result);

    return 0;
}
