/**
 * @description: 1072 开学寄语
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    char namebuf[5];
    int num;
    int numbuf[10];
}tagTest;


int numN, numM;
int testbuf[7];
tagTest tempbuf[1001];
int tempnum,temp;
int testcount1 = 0,testcount2 = 0;

int main(void)
{
    scanf("%d %d", &numN, &numM);

    for(int i = 0; i < numM; i++)
    {
        scanf("%d", &testbuf[i]);
    }

    for(int i = 0; i < numN; i++)
    {
        tempbuf[i].num = 0;
        scanf("%s %d", &tempbuf[i].namebuf[0], &tempnum);
        for(int j = 0; j < tempnum; j++)
        {
            scanf("%d", &temp);
            for(int k = 0; k < numM; k++)
            {
                if(temp == testbuf[k])
                {
                    tempbuf[i].numbuf[tempbuf[i].num++] = temp;
                    break;
                }
            }
        }
    }

    for(int i = 0; i < numN; i++)
    {
        if(tempbuf[i].num != 0)
        {
            if(testcount1!=0)
            {
                printf("\n");
            }
            testcount1++;
            printf("%s:", tempbuf[i].namebuf);
            for(int j = 0; j < tempbuf[i].num; j++)
            {
                printf(" %04d", tempbuf[i].numbuf[j]);
            }
            testcount2 += tempbuf[i].num;
        }
    }
    if(testcount1 > 0)
    {
        printf("\n");
    }
    printf("%d %d", testcount1, testcount2); 


    return 0;
}
