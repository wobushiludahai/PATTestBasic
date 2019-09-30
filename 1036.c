#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    int testnum;
    char testchar;
    int testtemp;

    scanf("%d %c",&testnum,&testchar);

    for(int i = 0; i < testnum; i++)
    {
        printf("%c",testchar);
    }
    printf("\n");
    if(testnum%2 == 0)
    {
        testtemp = testnum/2 - 2;
    }
    else
    {
        testtemp = (testnum +1)/2 - 2;
    }
    for(int i = 0;i < testtemp;i++)
    {
        printf("%c",testchar);
        for(int j = 0; j < testnum - 2; j++)
        {
            printf(" ");
        }
        printf("%c\n",testchar);
    }

    for(int i = 0; i < testnum; i++)
    {
        printf("%c",testchar);
    }



    return 0;
}

