#include<stdio.h>
#include<string.h>

int main(){
    //input string and print as number
    int n;
    scanf("%d",&n);
    int num;
    scanf("%d",&num);
    char str[20];
    
    for(int i=0; num != 0; i++){
          int digit = num%10;
          char c = digit + '0';
          num /= 10;
          str[i] = c;
    }
    str[n] = '\0';

    fputs(str,stdout);
    printf("\n");

    for(int i = 0 ; i<n/2; i++){
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    str[n] = '\0';
    
    fputs(str,stdout);
    printf("\n");

    
    return 0;
}