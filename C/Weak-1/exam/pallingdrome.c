#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n);

    long long x = n;

    long long int digit = 0;
    //digit count
    while(n>0){
          n = n/10;
          digit++;
    }
    n = x;
    // digit array
    long long int digitArr[digit];
    for(int i=0;i<digit;i++){
        digitArr[i] = n%10;
        n = n/10;
    }
    //print number in reverse
    for(int i=0; i<digit; i++){
        if(digitArr[i] != 0){
            printf("%lld",digitArr[i]);
        }
    }
    printf("\n");
    //chech numbers is pallindrome or not
    for(int i=0;i<digit/2;i++){
        if(digitArr[i] != digitArr[digit-i-1]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}