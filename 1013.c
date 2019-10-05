#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    int num_M,num_N;
    int Judgeassist = 0,temp;
    int printf_assist = 0;
    int count_assist = 0;

    scanf("%d%d",&num_M,&num_N);

    for(int i = 2;; i++)
    {
        Judgeassist = 0;
        temp = sqrt(i);
        for(int j = 2; j <= temp; j++)
        {
            if(i%j == 0)
            {
                Judgeassist = 1;
                break;
            }
        }

        if(Judgeassist == 0)
        {
            count_assist++;
            if(count_assist >= num_M)
            {
                printf_assist++;
                if(printf_assist!=10)
                {
                    if(count_assist >= num_N)
                    {
                        printf("%d",i);
                        break;
                    }
                    printf("%d ",i);
                }
                else
                {
                    if(count_assist >= num_N)
                    {
                        printf("%d",i);
                        break;
                    }
                    printf_assist = 0;
                    printf("%d\n",i);
                }
            }
        }
    }
    return 0;
}

