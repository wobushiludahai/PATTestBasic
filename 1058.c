/**
 * @description: 1058 选择题    使用结构体滤清结构
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>

typedef struct ti
{
    int a;
    int n1;
    int n2;
    char b[10];
}Ti; 
    
int main()
{
    int n,m;
    Ti ti[1010];
    int cuo[1001]={0};
    int stu[1001]={0};
    scanf("%d %d",&n,&m);
    int temp;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d %d",&ti[i].a,&ti[i].n1,&ti[i].n2);
        temp = 0;
        for(int j=0;j<ti[i].n2;j++)
        {
            getchar(); 
            scanf("%c",&ti[i].b[temp++]);
        } 
    }
    char a[10];
    getchar();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            getchar(); 
            scanf("%d",&temp);
            for(int k=0;k<temp;k++)
            {
                getchar(); 
                scanf("%c",&a[k]);
            }
            a[temp] = '\0';
            getchar(); 
            getchar();
            if(!strcmp(a,ti[j].b))
            {
                stu[i] = stu[i] + ti[j].a;
            }
            else
            {
                cuo[j]++;
            }
        }
    
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",stu[i]);
    }
    int max = 0;
    for(int i=0;i<m;i++)
    {
        if(max<cuo[i])
        {
            max = cuo[i];
        }
    }
    if(max==0)
    {
        printf("Too simple");
        return 0;
    }
    printf("%d",max);
    for(int i=0;i<m;i++)
    {
        if(cuo[i]==max)
           {
            printf(" %d",i+1);
        }
    }
    
    return 0;
}
