#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    scanf("%s",str);
    int length = strlen(str);

    for(int i=0; i<strlen(str); i++){
        if(str[i] != str[length-i-1]){
             printf("NO");
             return 0;
        }
    }

    printf("YES");
    return 0;
}