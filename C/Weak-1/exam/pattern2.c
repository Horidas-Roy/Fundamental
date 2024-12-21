#include<stdio.h>

int main(){
    int n = 5;
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j <i+1; j++){
            printf("%c",ch);
        }
        ch++;
        printf("\n");
    }
}