#include<stdio.h>
#include<string.h>

int is_palindrome(char *str, int len){
      for(int i=0, j=len-1; i<j; i++, j--){
           if(str[i] != str[j]){
             return 0;
           }
      }
      return 1;
}

int main(){
     char str[1005];
     scanf("%s",str);
     int len = strlen(str);
    int result = is_palindrome(str,len);

    if(result){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }

    return 0;
}