#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    char testbuf1[100] = {0},testbuf2[100] = {0};
    char testresultbuf[100] = {0};
    int tempassiat = 0;
    int testcount = 0;
    int count1 = 0,count2 = 0;

    scanf("%s",testbuf1);
    scanf("%s",testbuf2);

    while(1)
    {
        if(testbuf1[count1]!=testbuf2[count2])
        {
            if((testbuf1[count1] >= '0')&&(testbuf1[count1] <= '9'))
            {
                for(int i = 0; i < testcount;i++)
                {
                    if(testresultbuf[i] == testbuf1[count1])
                    {
                        tempassiat = 1;
                        break;
                    }
                }
                if(tempassiat == 0)
                {
                    testresultbuf[testcount] = testbuf1[count1];
                    testcount++;
                }
                tempassiat = 0;
            }

            if(testbuf1[count1] == '_')
            {
                for(int i = 0; i < testcount;i++)
                {
                    if(testresultbuf[i] == testbuf1[count1])
                    {
                        tempassiat = 1;
                        break;
                    }
                }
                if(tempassiat == 0)
                {
                    testresultbuf[testcount] = testbuf1[count1];
                    testcount++;
                }
                tempassiat = 0;
            }

            if((testbuf1[count1] >='a')&&(testbuf1[count1]<='z'))
            {

                for(int i = 0; i < testcount;i++)
                {
                    if(testresultbuf[i] == (char)(testbuf1[count1] - 32))
                    {
                        tempassiat = 1;
                        break;
                    }
                }
                if(tempassiat == 0)
                {
                    testresultbuf[testcount] = (char)(testbuf1[count1] - 32);
                    testcount++;
                }
                tempassiat = 0;
            }

            if((testbuf1[count1] >= 'A')&&(testbuf1[count1] <='Z'))
            {
                for(int i = 0; i < testcount;i++)
                {
                    if(testresultbuf[i] == testbuf1[count1])
                    {
                        tempassiat = 1;
                        break;
                    }
                }
                if(tempassiat == 0)
                {
                    testresultbuf[testcount] = testbuf1[count1];
                    testcount++;
                }
                tempassiat = 0;
            }

           count1++;
        }
        else
        {
            count1++;
            count2++;
        }

        if(count1 == strlen(testbuf1))
        {
            break;
        }

   }

   for(int i = 0; i < testcount;i++)
   {
       printf("%c",testresultbuf[i]);
   }



    return 0;
}

