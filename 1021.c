#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(void)
{
    char testnumbuf[1001];
    int testresultbuf[10] = {0};
    int testlen;
    int tempcount = 0;

    scanf("%s",testnumbuf);
    testlen = strlen(testnumbuf);
    for(int i = 0; i < testlen; i++)
    {
        testresultbuf[(testnumbuf[i] - '0')]++;
    }

    for(int i = 0;;i++)
    {
        if(testresultbuf[i]!=0)
        {
            tempcount += testresultbuf[i];
            if(tempcount == testlen)
            {
                printf("%d:%d",i,testresultbuf[i]);
                break;
            }
            else
            {
                printf("%d:%d\n",i,testresultbuf[i]);
            }
        }
    }



    return 0;
}

