#include<stdio.h>
#include<string.h>

int main(){
    char str[10000];
    scanf("%s",str);

    int  length = strlen(str);
    char subArr[] = "hello";

    for(int i=0,j=0; i<length; i++){
        if(str[i] == subArr[j]){
             j++;
        }
        if(j == 4 && subArr[j] == str[i] ){
            printf("YES");
            return 0;
        }