#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    scanf("%s",str);
    int index;
    scanf("%d %c",&index);

    for(int i = index; i < strlen(str); i++){
         str[i] = str[i+1];
    }
    str[strlen(str)] = '\0';

    fputs(str,stdout);

    return 0;
}