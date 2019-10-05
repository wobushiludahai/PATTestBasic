#include<stdio.h>
#include<string.h>

int main(void)
{
    int i = 0,j = 0,k = 0;
    char testbuf[81] = {0};

    gets(&testbuf[0]);

    k = strlen(testbuf);

    for(i = strlen(testbuf) - 1; i >= 0; i--)
    {
        if(testbuf[i] == ' ')
        {
            for(j = i + 1; j < k; j++)
            {
                printf("%c",testbuf[j]);
            }
            printf(" ");
            k = i;
        }
    }

    for(j = 0; j < k; j++)
    {
        printf("%c",testbuf[j]);
    }

    return 0;

}
