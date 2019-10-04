/**
 * @description: 1052 卖个萌    重点在怎么存储   https://www.cnblogs.com/asheng2016/p/7873687.html
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>

#define L1 20
#define L2 20
/* 下面的代码把数组一律人为设置从1开始, 数组长度就表示最后一个元素 */
int main (void) {
    char handStr[L1][L2];
    int hlen = 0;    // 实际长度
    char eyeStr[L1][L2];
    int elen = 0;
    char mouthStr[L1][L2];
    int mlen = 0;
    int i;
    int ch;
    
    // 获取手表情
    while ((ch = getchar()) != '\n') {
        if (ch == '[') {
            scanf("%[^]]", handStr[++hlen]);
        }
    }
    // 获取眼表情
    while ((ch = getchar()) != '\n') {
        if (ch == '[') {
            scanf("%[^]]", eyeStr[++elen]);
        }
    }
    // 获取口表情
    while ((ch = getchar()) != '\n') {
        if (ch == '[') {
            scanf("%[^]]", mouthStr[++mlen]);
        }
    }

    int n;       // 需要输出的表情个数
    int icon[6]; // 存储每个表情序号

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf(
            "%d %d %d %d %d", 
            &icon[1], &icon[2], &icon[3], &icon[4], &icon[5]
        );
        // 如果输入的序号不在1和最大序号之间, 判错
        if (
            icon[1] >= 1 && icon[1] <= hlen &&
            icon[2] >= 1 && icon[2] <= elen &&
            icon[3] >= 1 && icon[3] <= mlen &&
            icon[4] >= 1 && icon[4] <= elen &&
            icon[5] >= 1 && icon[5] <= hlen
        ) {
            printf("%s", handStr[icon[1]]);  // 左手
            printf("(");
            printf("%s", eyeStr[icon[2]]);   // 左眼
            printf("%s", mouthStr[icon[3]]); // 口
            printf("%s", eyeStr[icon[4]]);   // 右眼
            printf(")");
            printf("%s", handStr[icon[5]]);  // 右手
            printf("\n");
        } else {
            printf("Are you kidding me? @\\/@\n");
        }
    }
    
    return 0;
}
