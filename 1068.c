/**
 * @description: 1068  万绿丛中一点红
 *          重点！！！！！！  局部变量容易引起段错误，所以最好声明为全局变量
 *          1、注意每个数据都要判断，在原数据周围添加0，解决差异性问题
 *          2、理解题目独一无二颜色的意思
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int numM, numN;
int numTOL;
int testbuf[1002][1002] = {0};
int tempM, tempN;
int tempcount = 0;
int resultvalue;
int pixel[2 << 24] = {0};// 2 << 24 即 2^25次方，能包括任意24位像素点

int main(void)
{
    scanf("%d %d %d", &numM, &numN, &numTOL);

    for(int i = 1; i <= numN; i++)
    {
        for(int j = 1; j <= numM; j++)
        {
            scanf("%d", &testbuf[i][j]);
            pixel[testbuf[i][j]]++;//统计该像素点的数量 
        }
    }

    // printf("%d %d %lld", numM, numN, numTOL);
    // for(int i = 0; i < numN; i++)
    // {
    //     printf("\n");
    //     for(int j = 0; j < numM; j++)
    //     {
    //         printf("%lld ", testbuf[i][j]);
    //     }
    // }

    for(int i = 1; i <= numN; i++)
    {
        for(int j = 1; j <= numM; j++)
        {
            if(pixel[testbuf[i][j]] == 1)
            {
                if((abs(testbuf[i][j] - testbuf[i - 1][j - 1]) > numTOL)&& \
                    (abs(testbuf[i][j] - testbuf[i - 1][j]) > numTOL)&& \
                    (abs(testbuf[i][j] - testbuf[i - 1][j + 1]) > numTOL)&& \
                    (abs(testbuf[i][j] - testbuf[i][j - 1]) > numTOL)&& \
                    (abs(testbuf[i][j] - testbuf[i][j + 1]) > numTOL)&& \
                    (abs(testbuf[i][j] - testbuf[i + 1][j - 1]) > numTOL)&& \
                    (abs(testbuf[i][j] - testbuf[i + 1][j]) > numTOL)&& \
                    (abs(testbuf[i][j] - testbuf[i + 1][j + 1]) > numTOL))
                    {
                        // printf("\njust for test    %d    %d   %lld   %d", i,j, testbuf[i][j],abs(testbuf[i][j] - testbuf[i - 1][j - 1]));
                        tempM = j;
                        tempN = i;
                        resultvalue = testbuf[i][j];
                        tempcount++;
                        if(tempcount == 2)
                        {
                            goto Unique;
                        }
                    }
            }
        }
    }

    if(tempcount == 0)
    {
        printf("Not Exist");
    }
    else if(tempcount == 1)
    {
        printf("(%d, %d): %d", tempM, tempN, resultvalue);
    }
    else
    {
        printf("Not Unique");
    }
    
    

    return 0;

    Unique:
        printf("Not Unique");
}
