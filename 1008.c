#include<stdio.h>

int main(void)
{
    int testcount,testnum,i,j;
    int testbuf[100] = {0},testbufbak[100] = {0};

    scanf("%d",&testcount);
    scanf("%d\n",&testnum);

    for(i = 0; i < testcount; i++)
    {
        scanf("%d", &testbuf[i]);
    }

    for(int i = 0; i < testcount; i++)
    {
        //printf("%d\n", testbuf[i]);
    }

    testnum %=(testcount);

    //printf("%d\n", testnum);

    for(i = 0; i < testnum; i++)
    {
        testbufbak[i] = testbuf[testcount - testnum + i];
    }

    //for(i = 0; i < testcount; i++)
    {
        //printf("%d\n", testbufbak[i]);
    }

    for(i = (testcount - testnum); i > 0; i--)
    {
        j = testnum + i - 1;
        testbuf[j] = testbuf[i - 1];
    }

    for(i = 0; i < testnum; i++)
    {
        testbuf[i] = testbufbak[i];
    }

    for(int i = 0; i < testcount; i++)
    {
        if(i!=(testcount - 1))
        {
            printf("%d ", testbuf[i]);
            continue;
        }
        printf("%d", testbuf[i]);
    }

    return 0;

}
