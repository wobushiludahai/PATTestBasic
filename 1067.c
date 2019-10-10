/**
 * @description: 1067 试密码
 * @param {type} 
 * @return: 
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char mima[100],temp[10000];int N,flag=0;
    scanf("%s %d",mima,&N); 
    while(1){
        getchar();
        scanf("%[^\n]",temp);
        if(temp[0]=='#'&&temp[1]=='\0') break;
        flag++;
        if(strcmp(temp,mima)==0){
            printf("Welcome in\n");break;
        }else{
            printf("Wrong password: %s\n",temp);
            if(flag==N) {
                printf("Account locked\n");break;
            }
        }
    }
    return 0;
}
