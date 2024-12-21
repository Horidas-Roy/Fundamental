#include<stdio.h>
#include<string.h>

int main(){
    int freq[26] = {0};
    char str[10000005];
    scanf("%s",str);

    int len = strlen(str);
    
    for(int i=0; i<len; i++){
        char ch = str[i];
        int index = ch - 'a';
        freq[index] += 1;
    }

    for(int i=0; i<26; i++){
        if(freq[i] != 0){
          char ch = i + 'a';
          printf("%c : %d\n",ch,freq[i]);
        }
    }

    return 0;
}