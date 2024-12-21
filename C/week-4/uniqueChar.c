#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int length = strlen(str);
    int freq[26] = {0};

    for(int i=0; i<length; i++){
        char ch = str[i];
        int index = ch - 'a';
        freq[index] = 1;
    }
    
    int count = 0;
    for(int i=0; i<26; i++){
        printf("%d ",freq[i]);
        if(freq[i] == 1){
            count++;
        }
    }
    printf("\n%d",count);

    return 0;
}