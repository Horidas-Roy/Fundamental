#include<stdio.h>
#include<string.h>

int main(){
    //input string and print as number
    int n;
    scanf("%d",&n);
    char str[20];
    scanf("%s",str);

    int num =0;

    for(int i=0; i<n; i++){
          int digit = str[i] - '0';
          num = num*10 + digit;
    }
    printf("%s\n",str);
    printf("%d",num);

    return 0;
}