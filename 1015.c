/*
 * @Description: 需要重新梳理排序算法
 * @Author: your name
 * @Date: 2019-09-20 20:20:19
 * @LastEditTime: 2019-09-20 20:20:41
 * @LastEditors: Please set LastEditors
 */
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int compare(const void *a_t, const void *b_t){
    int *a = (int *)a_t, *b = (int *)b_t;
    if(a[3] != b[3]){
        return a[3] - b[3]; //type升序
    }
    else if(a[1] + a[2] != b[1] + b[2]){
        return (b[1] + b[2]) - (a[1] + a[2]); //总分降序
    }
    else if(a[1] != b[1]){
        return b[1] - a[1]; //德分降序
    }
    else{
        return a[0] - b[0]; //学号升序
    }
}

int main() {
    int n, l, h;
    scanf("%d %d %d", &n, &l, &h);
    int sno, de, cai, type, count = 0;
    int sTable[n][4]; //n行4列，学号、德分、才分、类型
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &sno, &de, &cai);
        //judge type
        if(de >= l && cai >= l){
            if(de >= h && cai >= h){
                type = 1;
            }
            else if(de >= h && cai < h){
                type = 2;
            }
            else if(de < h && cai < h && de >= cai){
                type = 3;
            }
            else{
                type = 4;
            }
        }
        else{
            type = 0;
            count++;
        }
        sTable[i][0] = sno; sTable[i][1] = de; sTable[i][2] = cai; sTable[i][3] = type;
    }
    //quick sort
    qsort(&sTable[0], n, sizeof(sTable[0]), compare);
    printf("%d\n", n - count);
    for(int i = count; i < n; i++){
        printf("%d %d %d\n", sTable[i][0], sTable[i][1], sTable[i][2]);
    }
    return 0;
}