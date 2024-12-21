#include<stdio.h>

int Log2(long long int n){
    if(n <= 1){
        return 0;
    }
    return 1 + Log2(n/2);
}

int main(){
    long long int n;
    scanf("%lld",&n);

    int res =  Log2(n);
    printf("%d",res);
    return 0;
}