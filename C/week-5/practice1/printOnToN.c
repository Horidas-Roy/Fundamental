#include<stdio.h>

void printNum(int i,int n){
    if(i > n){
        return;
    }
    printNum(i+1,n);
    printf("%d",i);
    if(i > 1){
        printf(" ");
    }
}

int main(){
    int n;
    scanf("%d",&n);

    printNum(1,n);

    return 0;
}