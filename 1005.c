#include<stdio.h>

typedef struct
{
    int num;
    unsigned char use;
}tagtest;

int main(void)
{
    int testcount,tempnum,testresult[100] = {0},resultcount;
    tagtest ttest[100];
    int i,j;
    memset(ttest,0,(100*sizeof(tagtest)));

    scanf("%d\n",&testcount);
    for(i = 0; i < testcount; i++)
    {
        scanf("%d",&ttest[i].num);
    }

    for(i = 0; i < testcount; i++)
    {
        for(j = 0; j < testcount; j++)
        {
            if(i!=j)
            {
                tempnum = ttest[j].num;
                while(1)
                {
                    if(tempnum%2 == 0)
                    {
                        tempnum =tempnum/2;
                    }
                    else
                    {
                        tempnum = (3*tempnum + 1)/2;
                    }
                    if(tempnum!=1)
                    {
                        if(tempnum == ttest[i].num)
                        {
                            ttest[i].use = 1;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }

    resultcount = 0;
    for(i = 0; i < testcount; i++)
    {
        if(ttest[i].use == 0)
        {
            j = 0;
            while(1)
            {
                if(ttest[i].num > testresult[j])
                {
                    for(int k = resultcount; k > j; k--)
                    {
                        //printf("testdddddd");
                        //printf("\n%d\n", ttest[i].num);
                        //printf("\n%d\n", k);
                        //printf("\n%d\n", j);

                        testresult[k] = testresult[k - 1];
                    }
                    resultcount++;
                    testresult[j] = ttest[i].num;
                    break;
                }
                j++;
            }
        }
    }

    for(i = 0; i < resultcount; i++)
    {
        if((i+1)==resultcount)
        {
            printf("%d",testresult[i]);
        }
        else
        {
            printf("%d ",testresult[i]);
        }
    }




    return 0;
}
