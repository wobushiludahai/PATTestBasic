/*
 * @Description: 注意题目表述范围
 * @Author: your name
 * @Date: 2019-09-17 12:15:24
 * @LastEditTime: 2019-09-17 12:16:00
 * @LastEditors: Please set LastEditors
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    char testbuf1[100] = {0},len1;
    char testbuf2[100] = {0},len2;
    int tempcount = 0;
    char testbuf3[100] = {0},len3;
    char testbuf4[100] = {0},len4;

    scanf("%s",testbuf1);
    scanf("%s",testbuf4);
    scanf("%s",testbuf2);
    scanf("%s",testbuf3);

    len1 = strlen(testbuf1);
    len2 = strlen(testbuf2);

    len3 = strlen(testbuf3);
    len4 = strlen(testbuf4);

    if(len1 > len4)
    {
        len1  = len4;
    }

    for(int i = 0; i < len1; i++)
    {
        if(testbuf1[i] == testbuf4[i])
        {
            if(tempcount == 0)
            {
                if(((testbuf1[i] - 'A')>=0)&&((testbuf1[i] - 'A')<=6))
                {
                    switch(testbuf1[i] - 'A')
                    {
                    case 0:
                        printf("MON ");
                        break;

                    case 1:
                        printf("TUE ");
                        break;

                    case 2:
                        printf("WED ");
                        break;

                    case 3:
                        printf("THU ");
                        break;

                    case 4:
                        printf("FRI ");
                        break;

                    case 5:
                        printf("SAT ");
                        break;

                    case 6:
                        printf("SUN ");
                        break;
                    }
                    tempcount++;
                    continue;
                }
            }
            else
            {
                if((testbuf1[i]>= '0')&&(testbuf1[i]<='9'))
                {
                    printf("%02d:",(testbuf1[i] - '0'));
                    break;
                }
                if((testbuf1[i]>='A')&&(testbuf1[i]<='N'))
                {
                    printf("%02d:",(testbuf1[i] - 'A' + 10));
                }
            }

        }
    }

    if(len2 > len3)
    {
        len2 = len3;
    }

    for(int i = 0; i < len2; i++)
    {
        if(testbuf2[i] == testbuf3[i])
        {
            if(((testbuf2[i] >= 'A')&&(testbuf2[i]<='Z'))||((testbuf2[i] >= 'a')&&(testbuf2[i]<='z')))
            {
                printf("%02d",i);
            }
        }
    }

    return 0;
}

