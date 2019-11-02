/**
 * @description: 1085  PAT单位排行
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct
{
    char ID[7];         //编号
    int score;          //分数
    char school[7];     //学校
}STUDENT;

typedef struct
{
    char name[7];       //名字
    int score;          //分数
    int num;            //排名
}SCHOOL;

int cmp_school(const void *a, const void *b)
{
    return strcmp(((STUDENT *)a)->school, ((STUDENT *)b)->school);
}

int cmp_all(const void *a, const void *b)
{
    SCHOOL *s1, *s2;
    s1 = (SCHOOL *)a; s2 = (SCHOOL *)b;
    if(s1->score != s2->score)
    {
        return (s2->score - s1->score);
    }
    else if(s1->num != s2->num)
    {
        return (s1->num - s2->num);
    }
    else
    {
        return strcmp(s1->name, s2->name);
    }
}

int testcount;
STUDENT students[100001] = {0};
SCHOOL schools[100001] = {0};
double total_score = 0;
int num = 0;
int M = 0;
int shuchuassist = 0;

int main(void)
{
    scanf("%d", &testcount);
    for(int i = 0; i < testcount; i++)
    {
        scanf("%s %d %s", students[i].ID, &students[i].score, students[i].school);
        for(int j = 0; j < sizeof(students[i].school); j++)
        {
            students[i].school[j] = tolower(students[i].school[j]);
        }
    }

    qsort(students, testcount, sizeof(STUDENT), cmp_school);

    for(int i = 0; i < testcount; i++)
    {
        switch (students[i].ID[0])
        {
        case 'B':
            total_score += (students[i].score/1.5);
            break;

        case 'A':
            total_score += (students[i].score);
            break;

        case 'T':
            total_score += (students[i].score*1.5);
            break;
        
        default:
            break;
        }

        num++;
        if(strcmp(students[i].school, students[i + 1].school) != 0)
        {
            schools[M].score = (int)total_score;
            strcpy(schools[M].name, students[i].school);
            schools[M].num = num;
            total_score = 0;
            num = 0;
            M++;
        }
    }

    qsort(schools, M, sizeof(SCHOOL), cmp_all);

    printf("%d", M);
    for(int i  = 0; i < M; i++)
    {
        if((i > 0)&&(schools[i].score != schools[i - 1].score))
        {
            shuchuassist = i;
        }
        printf("\n%d %s %d %d", (shuchuassist + 1), schools[i].name, schools[i].score, schools[i].num);
    }

    return 0;
}