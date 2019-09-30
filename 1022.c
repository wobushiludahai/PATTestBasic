#include<stdio.h>
int main(int argc,char *argv[])
{
    int number[31];
    int a,b,d,t,i;
    scanf("%d %d %d",&a,&b,&d);
    a=a+b;
    if(a == 0)
    {
        printf("0");
        return 0;
    }

    if(d == 10)
    {
        printf("%d",a);
        return 0;
    }
    int cnt=0;
    while(a)
    {
        t=a%d;
        number[cnt]=t;
        cnt ++;
        a/=d;
    }
    for(i=cnt-1;i>=0;i--)
    {
        printf("%d",number[i]);
    }
    return 0;

}
