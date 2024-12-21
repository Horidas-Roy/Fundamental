#include<stdio.h>
#include<string.h>



int main(){
    char str[1005];
    scanf("%s",str);
    int len = strlen(str);
    int freq[26]={0};

    for (int i = 0; i < len; i++)
    {
       char ch = str[i];
       int idx = ch - 'a';
       freq[idx] += 1; 
    }

    int operation = 0;

    for(int i=0; i<26; i++){
        if(freq[i] != 2 && freq[i] != 0){
            operation++;
        }
    }

    char lastChar = str[len-1];
    for(int i=0; i<26; i++){
         char ch = i + 'a';
         if(ch == lastChar && freq[i] == 1){
            operation--;
         }
    }
    
    printf("%d",operation);

    return 0;
}