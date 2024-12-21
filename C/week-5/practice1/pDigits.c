#include<stdio.h>

void printDigits(int n){
     if(n == 0){
        return;
     }
     int digit = n % 10;
     printDigits(n/10);
     printf("%d ",digit);
}

int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int i = 0; i < t; i++){
        scanf("%d",&n);
        
        if(n == 0){
            printf("0");
        }else{
           printDigits(n);
        }
        printf("\n");
    }

    return 0;
}

