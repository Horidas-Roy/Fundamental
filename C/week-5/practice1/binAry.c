#include<stdio.h>

void convertToBinary(int n){
     if(n == 0){
        return;
     }
     int digit = n % 2;
     convertToBinary(n/2);
     printf("%d",digit);
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
           convertToBinary(n);  
        }

        printf("\n");
    }
    return 0;
}

