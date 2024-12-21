#include<stdio.h>

void printNum(int x,int n){
     if(x > n){
        return;
     }
     printf("%d\n",x);
     printNum(x+1,n);
}

void printNToOne(int x,int n){
     if(x > n){
        return;
     }
     printNToOne(x+1,n);
     printf("%d\n",x);
}

int main(){
    // printNum(1,10);
    printNToOne(1,10);
}