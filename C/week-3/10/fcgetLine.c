#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);

    int length = strlen(str);
    
    for(int i=0; i<length && (str[i] != '\\'); i++){
          printf("%c",str[i]);
    }
    

    return 0;
}