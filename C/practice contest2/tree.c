#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int space = (10+n)/2, sign = 1;

    for(int i=0; i<(10+n)/2+1; i++){
        for(int j=0; j<space; j++){
            printf(" ");
        }
        for(int j=0; j<sign; j++){
            printf("*");
        }
        space--;
        sign += 2;
        printf("\n");
    }
    sign = n;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf(" ");
        }
        for(int j=0; j<sign; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}