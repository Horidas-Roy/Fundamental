#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    scanf("%s",str);

    int length = 0;

    for(int i=0; str[i] != '\0'; i++){
        length++;
    }

    printf("%d\n",length);
    printf("%d",strlen(str));
}