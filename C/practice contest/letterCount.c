#include<stdio.h>
#include<string.h>

int main(){
    char str[10005];
    scanf("%s",str);
    int freq[26] = { 0 };
    for(int i=0; i<strlen(str); i++){
         char ch = str[i];
         int index = ch - 'a';
         freq[index] += 1;
    }

    for(int i=0; i<26; i++){
         if(freq[i] != 0){
            printf("%c - %d\n",i+'a',freq[i]);
         }
    }
    return 0;
}