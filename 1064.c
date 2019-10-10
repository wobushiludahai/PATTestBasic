/**
 * @description: 1064 朋友数    注意理解题意    首先一定要满足示例输出
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int testnum;
    int testresultbuf[40] = {0};
    int testtempbuf[40] = {0};
    char testbuf[10] = {0};
    int temp;
    int j;
    int count = 0;

    scanf("%d", &testnum);
    for(int i = 0; i < testnum; i++)
    {
        scanf("%s", testbuf);
        // printf("%s", testbuf);

        j = 0;
        temp = 0;
        while(testbuf[j] != '\0')
        {
            temp += (testbuf[j] - '0');
            j++;
        }

        if((testtempbuf[temp] == 0))
        {
            // printf("\n%d\n", temp);
            testtempbuf[temp] = 1;
            count++;
        }
        // else
        {
            // testtempbuf[temp] = 1;
        }
    }

    printf("%d\n", count);
    temp = 0;
    for(int i = 1; i < 40; i++)
    {
        if(testtempbuf[i] == 1)
        {
            temp++;
            printf("%d", i);
            if(temp < count)
            {
                printf(" ");
            }
        }
    }

    return 0;
}
