/*
 * @Description: 无法理解题意
 * @Author: your name
 * @Date: 2019-09-12 15:48:37
 * @LastEditTime: 2019-09-12 15:49:57
 * @LastEditors: Please set LastEditors
 */
#include <stdio.h>
#define N 101
int main()
{
    int n,i,j,count1,count2,count3;
    //count1统计P之前A的个数
    //count2统计P与T之间A的个数
    //count3统计T之后A的个数
    char str[N];
    scanf("%d",&n);
    getchar();//吸收掉缓冲区的换行符
    for(i = 0; i < n; i++){
        gets(str);
        j = 0;
        count1 = count2 = count3 = 0;
        while(str[j] != '\0'){
            if(str[j] == 'P'||str[j] == 'A'||str[j] == 'T'){
                //首先判断是否满足条件1
                //找到第一个P
                while(str[j] == 'A'&&str[j] != '\0'){
                    count1++;
                    j++;
                }
                if(str[j]!='\0'&&str[j] == 'P'){
                    j++;
                    while(str[j] == 'A'&&str[j] != '\0'){
                        count2++;
                        j++;
                    }
                    if(str[j]!='\0'&&str[j] == 'T'){
                        j++;
                        while(str[j] == 'A'&&str[j] != '\0'){
                            count3++;
                            j++;
                        }
                        if(str[j] != '\0'){//T之后还有除A之外的字符
                            printf("NO\n");
                            break;
                        }
                        else{
                            //满足count1 * count2 == count3且三者不同时为零
                            if((count1 * count2 == count3)&&(count1||count2||count3)){
                                printf("YES\n");
                                break;
                            }
                            else{
                                printf("NO\n");
                                break;
                            }
                        }
                    }
                    else{
                        printf("NO\n");
                        break;
                    }
                }
                else{
                    printf("NO\n");
                    break;
                }
            }
            else{//不满足条件1
                printf("NO\n");
                break;
            }
        }
    }
    return 0;
}