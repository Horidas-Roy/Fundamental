#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n);

    long long int sum = 1LL*(n*(n+1)/2);
    printf("%lld\n",sum);

    return 0;
}