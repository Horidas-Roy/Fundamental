#include<stdio.h>

void printMonument(int n){
     for(int i = 1; i < 2*n; i++){
         if(i <= n){
            printf("%d ",i);
         }else{
            printf("%d ",2*n-i);
         }
     }
}

int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int i=0; i<t; i++){
        scanf("%d",&n);
        printMonument(n);
        printf("\n");
    }


    return 0;
}