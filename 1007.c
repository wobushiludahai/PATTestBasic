#include<stdio.h>

int main(void)
{
    int testnum,temp;
    int i,j,count = 0,tempbak = 2;
    unsigned char judge;

    scanf("%d",&testnum);
    for(i = 3; i <= testnum; i++)
    {
        judge = 0;
        temp = sqrt(i);
        for(j = 2; j <= temp;j++)
        {
            if(i%j==0)
            {
                judge = 1;
                break;
            }
        }

        if(judge == 0)
        {
            if((i - tempbak)==2)
            {
                //printf("\n%d\n",i);
                count++;
            }
            tempbak = i;
        }
        else
        {
            judge = 0;
        }
    }
    printf("%d",count);

    return 0;
}
