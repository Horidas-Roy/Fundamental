#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    scanf("%s",str);
    int n = strlen(str);

    for(int i = 0; i <n/2; i++){
         char temp = str[i];
         str[i] = str[n-i-1];
         str[n-i-1] = temp;
    }
    
    str[strlen(str)] = '\0';

    fputs(str,stdout);

    return 0;
}