#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    int numB;
    char numAbuf[1001];
    int temp,numAlength;
    //int i = 1;

    scanf("%s",numAbuf);
    scanf("%d",&numB);

    temp = ((numAbuf[0]-'0')%numB);
    if(strlen(numAbuf) == 1)
    {
        printf("%d",((numAbuf[0]-'0')/numB));
        printf(" %d",temp);
        return 0;
    }

    if(((numAbuf[0]-'0')/numB)!=0)
    {
        printf("%d",((numAbuf[0]-'0')/numB));
    }

    numAlength = strlen(numAbuf);
    //printf("\n%d",numAlength);
    //int i = 1;
    //while(numAbuf[i] != '\0')
    for(int i = 1; i < numAlength;i++)
    {
        printf("%d",((10*temp + numAbuf[i] - '0')/numB));
        temp = ((10*temp + numAbuf[i] - '0')%numB);
    }

    printf(" %d",temp);



    return 0;
}

