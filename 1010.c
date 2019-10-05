int main()
{
    int flag=0;
    int coe, exp;
    while(1)
    {
        scanf("%d%d",&coe,&exp);
        if(exp)
        {
            if(flag)printf(" ");
            printf("%d %d",coe*exp,exp-1);
            flag=1;
        }
        if(getchar()!=' ') break;
    }
if(!flag)printf("0 0");

    return 0;
}
