#include<stdio.h>
#include<string.h>

int vowel(char ch){
     if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u'){
         return 1;
     }
     return 0;
}

int main(){
   int str[100005];