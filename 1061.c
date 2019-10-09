/**
 * @description: 1061    判断题
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int Snum,Qnum;
    int Rtestbuf[101] = {0};      //存储正确结果
    int Vtestbuf[101] = {0};      //存储分值
    int Stestbuf[100][100] = {0};   
    int temp = 0;  


    scanf("%d %d", &Snum, &Qnum);

    for(int i = 0; i < Qnum; i++)
    {
        scanf("%d", &Vtestbuf[i]);
    }

    for(int i = 0; i < Qnum; i++)
    {
        scanf("%d", &Rtestbuf[i]);
    }

    for(int i = 0; i < Snum; i++)
    {
        for(int j = 0; j < Qnum; j++)
        {
            scanf("%d", &Stestbuf[i][j]);
        }
    }

    for(int i = 0; i < Snum; i++)
    {
        temp = 0;
        for(int j = 0; j < Qnum; j++)
        {
            if(Stestbuf[i][j] == Rtestbuf[j])
            {
                temp += Vtestbuf[j];
            }
        }
        printf("%d", temp);
        if(i!=(Snum - 1))
        {
            printf("\n");
        }
    }

    return 0;
}
