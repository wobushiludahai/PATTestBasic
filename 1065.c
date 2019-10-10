/**
 * @description: 1065    单身狗
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int testnum1,testnum2;
    int qinglvbuf[100000] = {0};
    int testbuf[100000] = {0};
    int tempa,tempb,temp;
    int count = 0;

    scanf("%d", &testnum1);
    for(int i = 0; i < testnum1; i++)
    {
        scanf("%d %d", &tempa, &tempb);
        qinglvbuf[tempa] = tempb;
        qinglvbuf[tempb] = tempa;
    }

    scanf("%d", &testnum2);
    for(int i = 0; i < testnum2; i++)
    {
        scanf("%d", &temp);
        testbuf[temp] = 1;
    }

    temp = 0;
    for(int i  = 0; i < 100000; i++)
    {
        if(testbuf[i] == 1)
        {
            temp++;
            if(testbuf[qinglvbuf[i]]!=1)
            {
                count++;
                testbuf[i] = 2;
            }
            if(temp == testnum2)
            {
                break;
            }
        }
    }

    temp = 0;
    printf("%d\n", count);
    for(int i = 0; i < 100000; i++)
    {
        if(testbuf[i] == 2)
        {
            temp++;
            if(temp!=count)
            {
                printf("%05d ", i);
            }
            else
            {
                printf("%05d", i);
                break;
            }
        }
    }


    return 0;
}
