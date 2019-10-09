/**
 * @description: 1062    最简分数
 *          1、注意题目给出的示例不一定左小右大
 *          2、注意最小公约数的求解
 *          3、注意整数转换浮点数除法
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int gcd(int a,int b)
{
    if(a%b==0)
    return b;
    else;
    return gcd(b,a%b);
}

int issimplenum(int fenzi, int fenmu)
{
    if(gcd(fenzi,fenmu) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int N1,M1,N2,M2,testnum;
    int temp = 1;
    int count = 0;
    int resultbuf[1000] = {0};
    int switchN, switchM;

    scanf("%d/%d %d/%d %d", &N1, &M1, &N2, &M2, &testnum);

    if(1.0*N1/M1 > 1.0*N2/M2)
    {
        switchM = M1;
        switchN = N1;

        M1 = M2;
        N1 = N2;

        M2 = switchM;
        N2 = switchN;
    }

    while(1.0*temp/testnum < 1.0*N2/M2)
    {
        if(1.0*temp/testnum > 1.0*N1/M1)
        {
            if(issimplenum(temp, testnum) == 1)
            {
                resultbuf[count++] = temp;
            }
        }
        temp++;
    }

    for(int i = 0; i < count; i++)
    {
        printf("%d/%d", resultbuf[i], testnum);
        if(i!=(count - 1))
        {
            printf(" ");
        }
    }

    return 0;
}
