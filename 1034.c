#include<stdio.h>
#include<string.h>
#include <stdlib.h>

long long gcd(long long a,long long b)
{
    if(a%b==0)
    return b;
    else;
    return gcd(b,a%b);
}

void display(long long a, long long b)
{
    long long temp;
    long long tempa = a,tempb = b;

    if(a == 0)
    {
        printf("0");
    }
    else if(a < 0)
    {
        temp = gcd(tempa, tempb);
        if(temp > 0)
        {
            tempa /= (-temp);
            tempb /= temp;
        }
        else
        {
            tempa /= (temp);
            tempb /= (-temp);
        }

        if((tempa/tempb > 0)&&(tempa%tempb !=0))
        {
            printf("(-%lld %lld/%lld)",(tempa/tempb),(tempa%tempb),(tempb));
        }
        else if((tempa/tempb > 0)&&(tempa%tempb == 0))
        {
            printf("(-%lld)",(tempa/tempb));
        }
        else
        {
            printf("(-%lld/%lld)",(tempa%tempb),(tempb));
        }
    }
    else
    {
        temp = gcd(tempa, tempb);
        if(temp!=1)
        {
            tempa = tempa/temp;
            tempb = tempb/temp;
        }

        if((tempa/tempb > 0)&&(tempa%tempb !=0))
        {
            printf("%lld %lld/%lld",(tempa/tempb),(tempa%tempb),(tempb));
        }
        else if((tempa/tempb > 0)&&(tempa%tempb == 0))
        {
            printf("%lld",(tempa/tempb));
        }
        else
        {
            printf("%lld/%lld",(tempa%tempb),(tempb));
        }
    }
}

int main(void)
{
    long long testnum1,testnum2,testnum3,testnum4;
    long long testtemp1,testtemp2,testtemp;

    scanf("%lld/%lld %lld/%lld",&testnum1,&testnum2,&testnum3,&testnum4);

    testtemp1 = testnum1*testnum4 + testnum2*testnum3;
    testtemp2 = testnum2*testnum4;

    display(testnum1,testnum2);
    printf(" + ");
    display(testnum3,testnum4);
    printf(" = ");
    display(testtemp1,testtemp2);
    printf("\n");

    testtemp1 = testnum1*testnum4 - testnum2*testnum3;
    testtemp2 = testnum2*testnum4;

    display(testnum1,testnum2);
    printf(" - ");
    display(testnum3,testnum4);
    printf(" = ");
    display(testtemp1,testtemp2);
    printf("\n");

    testtemp1 = testnum1*testnum3;
    testtemp2 = testnum2*testnum4;

    display(testnum1,testnum2);
    printf(" * ");
    display(testnum3,testnum4);
    printf(" = ");
    display(testtemp1,testtemp2);
    printf("\n");

    if(testnum3 == 0)
    {
        display(testnum1,testnum2);
        printf(" / ");
        display(testnum3,testnum4);
        printf(" = Inf");
    }
    else
    {
        testtemp1 = testnum1*testnum4;
        testtemp2 = testnum2*testnum3;

        if(testtemp2 < 0)
        {
            testtemp1 = -testtemp1;
            testtemp2 = -testtemp2;
        }

        display(testnum1,testnum2);
        printf(" / ");
        display(testnum3,testnum4);
        printf(" = ");
        display(testtemp1,testtemp2);
    }

    return 0;
}

