/**
 * @description: 1089   狼人杀-简单版   思维游戏：遍历选择两个人为狼人。如果一个人说的狼人不是这两个人，或者好人是这两个人。
 *                                              那么他就在说谎。如果恰好一个狼人和一个好人说了假话，直接记录狼人跳出循环。
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int a[101],n,vis[101];
int sw,bw;
int main() {
    scanf("%d",&n);
    for(int i = 1;i <= n;i ++) {
        scanf("%d",&a[i]);
    }
    for(int i = 1;i < n;i ++) {
        for(int j = i + 1;j <= n;j ++) {
            int lieh = 0,liew = 0;
            for(int k = 1;k <= n;k ++) {
                if(a[k] < 0 && -a[k] != i && -a[k] != j || a[k] > 0 && (a[k] == i || a[k] == j)) {
                    if(k != i && k != j) lieh += 1;
                    else liew ++;
                }
            }
            if(liew == 1 && lieh == 1) {
                sw = i;
                bw = j;
                break;
            }
        }
        if(sw)break;
    }
    if(sw)printf("%d %d",sw,bw);
    else printf("No Solution");
}