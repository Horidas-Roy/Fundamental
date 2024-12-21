#include<stdio.h>
#include<string.h>

int main(){

    char str[1000000];
    scanf("%s",str);
     
    int length = strlen(str);
    int count = 0;

    for(int i=0; i<length; i++){
        int digit = str[i] - '0';
        count += digit;
    }

    printf("%d",count);

    return 0;
}