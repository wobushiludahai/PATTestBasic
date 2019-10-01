#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct
{
    long long number;
    int seatnum;
    int seatnumreal;
}tagstudentinf;

int main(void)
{
    tagstudentinf tstuinf[1001] = {0};
    int testcountbuf[1001] = {0};
    int testnum;

    int testcount;
    scanf("%d",&testnum);
    for(int i = 0; i < testnum; i++)
    {
        scanf("%lld%d%d", &tstuinf[i].number, &tstuinf[i].seatnum, &tstuinf[i].seatnumreal);    
    }

    scanf("%d", &testcount);

    for(int i = 0; i < testcount; i++)
    {
        scanf("%d", &testcountbuf[i]);
    }

    for(int i = 0; i < testcount; i++)
    {
        for(int j = 0; j < testnum; j++)
        {
            if(testcountbuf[i] == tstuinf[j].seatnum)
            {
                if(i!=(testcount - 1))
                {
                    printf("%lld %d\n", tstuinf[j].number, tstuinf[j].seatnumreal);
                }
                else
                {
                    printf("%lld %d", tstuinf[j].number, tstuinf[j].seatnumreal);
                }
                break;
            }
        }
    }

    return 0;
}
