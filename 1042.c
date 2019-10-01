/**
 * @description: 1042 字符统计
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    int testresult[26] = {0};
    char testtemp;
    int testRec,temp;

    while((testtemp = getchar())!='\n')
    {
        if(((testtemp) >='A')&&(testtemp <= 'Z'))
        {
            testresult[testtemp - 'A']++;
        }
        if((testtemp >= 'a')&&(testtemp<='z'))
        {
            testresult[(testtemp - 'a')]++;
        }
    }

    temp = testresult[0];
    testRec = 0;
    for(int i = 1; i < 26; i++)
    {
        if(temp < testresult[i])
        {
            temp = testresult[i];
            testRec = i;
        }
    }

    printf("%c %d",(testRec + 'a'),(testresult[testRec]));

    return 0;
}
