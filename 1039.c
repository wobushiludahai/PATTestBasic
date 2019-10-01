/**
 * @description: 1039到底买不买
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void)
{
    char testdianjiabuf[1005] = {0};
    int dianjialen;
    char testxiaohongbuf[1005] = {0};
    int testxiaohongfuzhu[1005] = {0};
    int xiaohonglen,duoyutongji = 0,queshaoshumu = 0;
    int i,j;

    scanf("%s\n%s",&testdianjiabuf[0],&testxiaohongbuf[0]);

    dianjialen = strlen(testdianjiabuf);
    xiaohonglen = strlen(testxiaohongbuf);
    for(i = 0; i < dianjialen; i++)
    {
        for(j = 0; j < xiaohonglen; j++)
        {
            if((testdianjiabuf[i] == testxiaohongbuf[j])&&(testxiaohongfuzhu[j]!=1))
            {
                testxiaohongfuzhu[j] = 1;
                break;
            }
        }
        if(j == xiaohonglen)
        {
            duoyutongji++;
        }
    }

    for(int i = 0; i < xiaohonglen; i++)
    {
        if(testxiaohongfuzhu[i] == 0)
        {
            queshaoshumu++;
        }
    }

    if(queshaoshumu > 0)
    {
        printf("No %d",queshaoshumu);
    }
    else
    {
        printf("Yes %d",duoyutongji);
    }
    


}
