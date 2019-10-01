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
    char testbuf[10002] = {0};
    int countP = 0;
    int countA = 0;
    int countT = 0;
    int counte = 0;
    int counts = 0;
    int countt = 0;
    int testlen;

    scanf("%s",testbuf);
    testlen = strlen(testbuf);
    for(int i = 0; i < testlen; i++)
    {
        switch(testbuf[i])
        {
            case 'P':
            countP++;
            break;

            case 'A':
            countA++;
            break;

            case 'T':
            countT++;
            break;

            case 'e':
            counte++;
            break;

            case 's':
            counts++;
            break;

            case 't':
            countt++;
            break;

            default:
            break;
        }
    }

    while((countP > 0)||(countA > 0)||(countT > 0)||(counte > 0)||(counts > 0)||(countt > 0))
    {
        if(countP > 0)
        {
            printf("P");
            countP--;
        }

        if(countA > 0)
        {
            printf("A");
            countA--;
        }

        if(countT > 0)
        {
            printf("T");
            countT--;
        }

        if(counte > 0)
        {
            printf("e");
            counte--;
        }

        if(counts > 0)
        {
            printf("s");
            counts--;
        }

        if(countt > 0)
        {
            printf("t");
            countt--;
        }
    }

    return 0;
}
