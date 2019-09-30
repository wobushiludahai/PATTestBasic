#include<stdio.h>
#include<math.h>

void NumtoPinyin(int num)
{
    switch(num)
    {
        case 0:
            printf("ling");
            break;

        case 1:
            printf("yi");
            break;

        case 2:
            printf("er");
            break;

        case 3:
            printf("san");
            break;

        case 4:
            printf("si");
            break;

        case 5:
            printf("wu");
            break;

        case 6:
            printf("liu");
            break;

        case 7:
            printf("qi");
            break;

        case 8:
            printf("ba");
            break;

        case 9:
            printf("jiu");
            break;

        default:
            break;
    }
}
char pinyin[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main(void)
{
    char testnum[100];
    int testsum = 0,i;
    // char testsave[10][10]
    int count = 0,tempsum;

    scanf("%s",&testnum[0]);
    for(i=0;testnum[i]!='\0';i++)
    {
        testsum+=testnum[i]-'0';
    }



    //do{
        //testsum += (testnum%10);
        //testnum /=10;
    //}
    //while(testnum);

    //printf("%d \n",testsum);

    tempsum = testsum;
    do{
        count++;
        tempsum /=10;
    }while(tempsum);

    for(unsigned int i = count;; i--)
    {
        if(i == 1)
        {
            printf("%s",&pinyin[testsum][0]);
            //NumtoPinyin(testsum);
            break;
        }
        else
        {
            tempsum = testsum /(unsigned int)(pow(10, (i - 1)));
            printf("%s ",&pinyin[tempsum][0]);
            //NumtoPinyin(tempsum);
            //printf(" ");
            testsum -= (tempsum * pow(10, (i - 1)));
        }
    }
    return 0;
}
