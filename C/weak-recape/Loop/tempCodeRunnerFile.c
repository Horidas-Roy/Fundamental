#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    
    int space = 3;
    int star = 1;

    for(int i = 0; i<2*n; i++){
        //space
        for(int j=0; j<space; j++){
           printf(" ");
        }
        //star
        for(int j=0; j<star; j++){
            printf("*");
        }

        if(i<n){
            space--;