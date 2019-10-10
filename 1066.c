/**
 * @description: 1066 图像过滤  注意i和j别搞混
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int numM, numN, numA, numB, value;
    int testbuf[1000][500] = {0};


    scanf("%d %d %d %d %d", &numM, &numN, &numA, &numB, &value);

    for(int i = 0; i < numM; i++)
    {
        for(int j = 0; j < numN; j++)
        {
            scanf("%d", &testbuf[i][j]);
        }
    }

    // for(int i = 0; i < numM; i++)
    // {
    //     printf("\n");
    //     for(int j = 0; j < numN; j++)
    //     {
    //         printf("%d ", testbuf[i][j]);
    //     }
    // }
    // printf("\n"); 
    // printf("%d %d\n", numA, numB);   

    for(int i = 0; i < numM; i++)
    {
        for(int j = 0; j < numN; j++)
        {
            if((testbuf[i][j] >= numA)&&(testbuf[i][j] <= numB))
            {
                printf("%03d", value);
            }
            else
            {
                printf("%03d", testbuf[i][j]);
            }
            if(j!=(numN - 1))
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }
    }

    return 0;
}
