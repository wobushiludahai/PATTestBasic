#include<stdio.h>


int A1 = 0;
int A1fuzhu =  0;

int A2 = 0;
int A2fuzhu =  0;
int A2assist = 1;

int A3 = 0;
int A3fuzhu =  0;

float A4 = 0.0;
int A4fuzhu =  0;
int A4nums = 0;

int A5 = 0;
int A5fuzhu =  0;

void statisticsupdate(int num)
{
    int tempnum  = (num%5);
    switch(tempnum)
    {
    case 0:
        if(num%2 == 0)
        {
            A1fuzhu = 1;
            A1 += num;
        }
        break;

    case 1:
        A2fuzhu = 1;
        if(A2assist)
        {
            A2+=num;
            A2assist = 0;
        }
        else
        {
            A2-=num;
            A2assist = 1;
        }
        break;

    case 2:
        A3fuzhu = 1;
        A3++;
        break;

    case 3:
        A4fuzhu = 1;
        A4nums++;
        A4 += num;
        break;

    case 4:
        A5fuzhu = 1;
        if(num > A5)
        {
            A5 = num;
        }
        break;
    }
}
void printnone(void)
{
    printf("N");
}


void printresult(void)
{
    float A4temp = A4/A4nums;
    if(A1fuzhu)
    {
        printf("%d ",A1);
    }
    else
    {
        printnone();
        printf(" ");
    }

    if(A2fuzhu)
    {
        printf("%d ",A2);
    }
    else
    {
        printnone();
        printf(" ");
    }

    if(A3fuzhu)
    {
        printf("%d ",A3);
    }
    else
    {
        printnone();
        printf(" ");
    }

    if(A4fuzhu)
    {
        printf("%.1f ",A4temp);
    }
    else
    {
        printnone();
        printf(" ");
    }

    if(A5fuzhu)
    {
        printf("%d",A5);
    }
    else
    {
        printnone();
    }
}

int main(void)
{
    int testcount,tempnum;

    scanf("%d",&testcount);

    for(int i=0; i<testcount; i++)
    {
        scanf("%d",&tempnum);
        statisticsupdate(tempnum);
    }
    printresult();
}
