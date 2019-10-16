/**
 * @description: 1076 WIFI密码
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int testnum;
int testcount = 0;
int testbuf[101] = {0};
char ansbuf[4];
char resultbuf[4];

int main(void)
{
    scanf("%d", &testnum);

    for(int i = 0; i < testnum; i++)
    {
        scanf("\n%c-%c %c-%c %c-%c %c-%c", &ansbuf[0],&resultbuf[0],&ansbuf[1],&resultbuf[1],&ansbuf[2],&resultbuf[2],&ansbuf[3],&resultbuf[3]);
        for(int j = 0; j < 4; j++)
        {
            if(resultbuf[j] == 'T')
            {
                testbuf[testcount++] = ansbuf[j] - 'A' + 1;
                break;
            }
        }
    }

    for(int i = 0; i < testnum; i++)
    {
        printf("%d", testbuf[i]);
    }


    return 0;
}
