/**
 * @description: 1069  微博转发抽奖
 * @param {type} 
 * @return: 
 */

/**
 * @description: 一种不错的解法
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <string.h>

int main()
{
        char names[1000][21] = {{'\0'}}, line[21];
        int m, n, s;
        int i, j, flag, count = 0, r = 0;

        scanf("%d %d %d", &m, &n, &s);

        for (i = 0, s--; i < m; i++) {
                scanf("%s", line);
                if (i == s + count * n + r) {
                        flag = 1;
                        for (j = 0; j < count && flag; j++)
                                if (!strcmp(names[j], line)) {
                                        flag = 0;
                                        r++;
                                        break;
                                }
                        if (flag) {
                                puts(line);
                                strcpy(names[count++], line);
                        }
                }
        }
        if (!count)
                printf("Keep going...\n");

        return 0;
}


