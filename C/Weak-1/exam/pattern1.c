#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int even = 0,odd = 0,positive = 0,negative = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);

        if(arr[i]%2 == 0){
            even++;
        }else{
            odd++;
        }
        if(arr[i] > 0){
            positive++;
        }else if(arr[i]<0){
            negative++;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);
    return 0;
}