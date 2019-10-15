/**
 * @description: 1070 小赌怡情
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int numT, numK;
int tempN1, tempB, tempT, tempN2;

int main(void)
{
    scanf("%d %d", &numT, &numK);

    for(int i = 0; i < numK; i++)
    {
        scanf("%d %d %d %d", &tempN1, &tempB, &tempT, &tempN2);
        if(tempT > numT)
        {
            printf("Not enough tokens.  Total = %d.\n", numT);
        }
        else
        {
            if(((tempN2 > tempN1)&&(tempB == 1))||((tempB == 0)&&(tempN2 < tempN1)))
            {
                numT += tempT;
                printf("Win %d!  Total = %d.\n", tempT, numT);
            }
            else
            {
                numT -= tempT;
                printf("Lose %d.  Total = %d.\n", tempT, numT);
                if(numT == 0)
                {
                    printf("Game Over.\n");
                    break;
                }
            }
            
        }
        

    }


    return 0;
}
