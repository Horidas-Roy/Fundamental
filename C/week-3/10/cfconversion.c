#include<stdio.h>
#include<string.h>

int main(){
    char str[100000];
    scanf("%s",str);

    for(int i=0; i<strlen(str); i++){

        if(str[i] == ','){
            str[i] = ' ';
        }else if(str[i] <= 'Z'){
               str[i] = str[i] + 32;
        }else if(str[i] > 'Z'){
            str[i] = str[i] - 32;
        }
        
    }

    printf("%s",str);

    return 0;
}