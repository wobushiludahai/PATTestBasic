/**
 * @description: 1091   N-自守数
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int M, N, K, C, temp;
int judge(int a, int b)
{
    int tempb = b, tempa = a;
    while(tempb)
    {
        if((tempa%10)!=(tempb%10))
        {
            return 0;
        }
        tempa /= 10; tempb /= 10;
    }
    return 1;
}

int main(void)
{
    scanf("%d", &M);

    for(int i = 0; i < M; i++)
    {
        scanf("%d", &K);
        for(N = 1; N < 10; N++)
        {
            temp = N * K * K;
            if(judge(temp, K) == 1)
            {
                printf("%d %d\n", N, temp);
                break;
            }
        }

        if(N == 10)
        {
            puts("No");
        }
    }

    return 0;
}