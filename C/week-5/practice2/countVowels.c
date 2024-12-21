#include<stdio.h>
#include<limits.h>

int isVowel(char ch){
    if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u'){
         return 1;
    }
    if(ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U'){
         return 1;
    }
    return 0;
}

int countVowels(char str[],int index){
    if(str[index] == '\0'){
        return 0;
    }
    if(isVowel(str[index])){
        return 1 + countVowels(str,index+1);
    }else{
        // return 0 + countVowels(str,index+1);
        return countVowels(str,index+1);
    }
}

int main(){
    char str[205];
    // scanf("%s",str);
    fgets(str,sizeof(str),stdin);
    
    int res = countVowels(str,0);
    printf("%d",res);
    return 0;
}