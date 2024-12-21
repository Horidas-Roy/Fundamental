#include<stdio.h>

int main(){
  
    long long int x;
    scanf("%lld",&x);

    for(int i = 2; i*i <= x; i++){
        if(x%i == 0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}