/*
 * @Description: 可以学习日期的读入方式
 * @Author: your name
 * @Date: 2019-09-23 09:57:18
 * @LastEditTime: 2019-09-23 09:57:51
 * @LastEditors: Please set LastEditors
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
char mostoldbuf[100];
int mostoldyear = 1814;
int mostoldmonth = 9;
int mostoldday = 5;

char mostyoungbuf[100];
int mostyoungyear = 2014;
int mostyoungmonth = 9;
int mostyoungday = 7;

void updatedata(char *namebuf, int len, int year, int month, int day)
{
    if((year > mostoldyear)||((year == mostoldyear)&&(month > mostoldmonth))||((year == mostoldyear)&&(month == mostoldmonth)&&(day >= mostoldday)))
    {
        mostoldyear = year;
        mostoldmonth = month;
        mostoldday = day;
        for(int i = 0; i < len; i++)
        {
            mostoldbuf[i] = namebuf[i];
        }
        mostoldbuf[len] = '\0';
    }

    if((year < mostyoungyear)||((year == mostyoungyear)&&(month < mostyoungmonth))||((year == mostyoungyear)&&(month == mostyoungmonth)&&(day <= mostyoungday)))
    {
        mostyoungyear = year;
        mostyoungmonth = month;
        mostyoungday = day;
        for(int i = 0; i < len; i++)
        {
            mostyoungbuf[i] = namebuf[i];
        }
        mostyoungbuf[len] = '\0';
    }
}


int main(void)
{
    int testnum;
    int testcount = 0;
    char testnamebuf[100];
    char testdatebuf[100];
    int testyear;
    int testmonth;
    int testday;

    scanf("%d",&testnum);

    if(testnum < 1)
    {
        return 0;
    }

    for(int i = 0; i < testnum; i++)
    {
        scanf("%s %d/%d/%d",testnamebuf,&testyear,&testmonth,&testday);
        //testyear = (testdatebuf[0] - '0')*1000 + (testdatebuf[1] - '0')*100 + (testdatebuf[2] - '0')*10 + testdatebuf[3] - '0';
        //testmonth = (testdatebuf[5] - '0')*10 + testdatebuf[6] - '0';
        //testday = (testdatebuf[8] - '0')*10 + testdatebuf[9] - '0';
        if((testyear > 1814)&&(testyear < 2014))
        {
            testcount++;
            updatedata(&testnamebuf[0],strlen(testnamebuf),testyear,testmonth,testday);
        }
        else if(testyear == 1814)
        {
            if(testmonth > 9)
            {
                testcount++;
                updatedata(&testnamebuf[0],strlen(testnamebuf),testyear,testmonth,testday);
            }
            else if(testmonth == 9)
            {
                if(testday >= 6)
                {
                    testcount++;
                    updatedata(&testnamebuf[0],strlen(testnamebuf),testyear,testmonth,testday);
                }
            }
        }
        else if(testyear == 2014)
        {
            if(testmonth < 9)
            {
                testcount++;
                updatedata(&testnamebuf[0],strlen(testnamebuf),testyear,testmonth,testday);
            }
            else if(testmonth == 9)
            {
                if(testday <= 6)
                {
                    testcount++;
                    updatedata(&testnamebuf[0],strlen(testnamebuf),testyear,testmonth,testday);
                }
            }

        }

    }

    if(testcount!=0)
    {
        printf("%d %s %s",testcount,mostyoungbuf,mostoldbuf);
    }
    else
    {
        printf("0");
    }


    return 0;
}

