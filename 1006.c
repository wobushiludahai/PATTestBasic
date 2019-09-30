#include<stdio.h>
#include<math.h>

int main(void)
{
    int tempnum, testnum;
    int count = 0;
    int i,j,k = 1;

    scanf("%d",&testnum);
    tempnum = testnum;
    do{
        count++;
        tempnum /=10;
    }while(tempnum);

    for(i = count;; i--)
    {
        if(i == 1)
        {
            for(j = 0; j < testnum; j++)
            {
                printf("%d",(k++));
            }
            break;
        }
        else
        {
            tempnum = testnum /(unsigned int)(pow(10, (i - 1)));
            if(i == 3)
            {
                //printf("\n%d\n",tempnum);
                for(j = 0; j < tempnum; j++)
                {
                    printf("B");
                }
            }
            else if(i == 2)
            {
                //printf("\n%d\n",tempnum);
                for(j = 0; j < tempnum; j++)
                {
                    printf("S");
                }
            }
            testnum -= (tempnum * pow(10, (i - 1)));
        }
    }

    return 0;
}
