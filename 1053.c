/**
 * @description: 1053 住房空置率   注意百分号输出（%%）
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    int testnum;
    float testmenkan;
    int testmenkantianshu;

    int resultkeneng = 0;
    int resultjieguo = 0; 

    int tempresult = 0;
    int testtempnum;
    float testtemp;

    scanf("%d %f %d", &testnum, &testmenkan, &testmenkantianshu);

    // printf("\n%d %f %d\n", testnum,testmenkan,testmenkantianshu);    

    for(int i = 0; i < testnum; i++)
    {
        scanf("%d", &testtempnum);

        // printf("\n%d", testtempnum);

        tempresult = 0;
        for(int j = 0; j < testtempnum; j++)
        {
            scanf("%f", &testtemp);
            if(testtemp  < testmenkan)
            {
                tempresult++;
            }
        }
        // printf("\n%d     %d\n", (testtempnum/2), tempresult);
        if(tempresult > (testtempnum/2))
        {
            if(testtempnum > testmenkantianshu)
            {
                resultjieguo++;
            }
            else
            {
                resultkeneng++;
            }
        }
    }

    // printf("\n%d     %d\n", resultkeneng, resultjieguo);
    printf("%.1f%% %.1f%%", (resultkeneng*100.0/testnum), (resultjieguo*100.0/testnum));

    return 0;
}
