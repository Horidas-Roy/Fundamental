#include<stdio.h>
#include<string.h>


int main(){
    char str1[1005],str2[1005];
    scanf("%s %s",str1,str2);
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int freq1[26] = {0};
    int freq2[26] = {0};

    for(int i=0; i<len1; i++){
        char ch = str1[i];
        int index = ch - 'a';
        freq1[index] += 1; 
    }
    for(int i=0; i<len2; i++){
        char ch = str2[i];
        int index = ch - 'a';
        freq2[index] += 1; 
    }

    int flag = 1;
    for(int i=0; i<26; i++){
        if(freq1[i] != freq2[i]){
            flag = 0;
        } 
    }

    if(flag){
        printf("YES");
    }else{
        printf("NO");
    }

    

    return 0;
}