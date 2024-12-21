#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    scanf("%s",str);
    int index;
    char insertChar;
    scanf("%d %c",&index,&insertChar);

    for(int i = strlen(str)-1; i >= index; i--){
         str[i+1] = str[i];
    }
    str[index] = insertChar;
    str[strlen(str)] = '\0';

    fputs(str,stdout);

    return 0;
}