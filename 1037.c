#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    int testGal1,testSick1,testKnut1;
    int testGal2,testSick2,testKnut2;

    long long testnum1,testnum2,testresult;
    int resultGal = 0,resultSick = 0,resultKnut = 0;
    int resultstate = 0;

    scanf("%d.%d.%d %d.%d.%d",&testGal1,&testSick1,&testKnut1,&testGal2,&testSick2,&testKnut2);

    testnum1 = testGal1*17*29 + testSick1*29 + testKnut1;
    testnum2 = testGal2*17*29 + testSick2*29 + testKnut2;
    if(testnum1 > testnum2)
    {
        resultstate = 1;
        testresult = testnum1 - testnum2;
    }
    else
    {
        testresult = testnum2 - testnum1;
    }

    if(testresult >= (17*29))
    {
        resultGal = testresult/(17*29);
        testresult = testresult - (17*29*resultGal);
    }
    if(testresult >= (29))
    {
        resultSick = testresult/(29);
        testresult = testresult - (29*resultSick);
    }
    resultKnut = testresult;

    if(resultstate == 1)
    {
        printf("-");
    }
    printf("%d.%d.%d",resultGal,resultSick,resultKnut);

    return 0;
}

