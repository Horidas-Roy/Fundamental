#include<stdio.h>
#include<string.h>

int vowel(char ch){
     if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u'){
         return 1;
     }
     return 0;
}

int main(){
   char str[100005];
   scanf("%s",str);
   int length = strlen(str),count=0;
   for(int i=0; i<length; i++){
        if(!vowel(str[i])){
            count++;
        }
   }

   printf("%d",count);
   
   
   return 0;
}