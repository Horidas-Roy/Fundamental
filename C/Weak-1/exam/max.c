#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        long long int fact = 1;
        if(arr[i]<0){
            printf("-1\n");
        }else{
                for(int j = 1; j <= arr[i]; j++){
                   fact *= j;
                }
                printf("%lld\n",fact);
        }
    }

    return 0;
}