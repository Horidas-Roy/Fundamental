#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int space = n-1, sign = 1;
    for(int i=0; i<n*2-1; i++){
         for(int j=0; j<space; j++){
            printf(" ");
         }
         if(i % 2 == 0){
             for(int j=0; j<sign; j++){
                printf("#");
             }
         }else{
             for(int j=0; j<sign; j++){
                printf("-");
             }
         }
         
         if(i < n-1){
            space--;
            sign += 2;
         }else{
            space++;
            sign -= 2;
         }
         printf("\n");
    }

    return 0;
}