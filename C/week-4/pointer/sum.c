#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int *arr = (int*) malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
          scanf("%d",arr+i);
    }

    long long int sum = 0;
    for(int i=0; i<n; i++){
          sum += (long long int) *(arr+i);
    }

    if(sum < 0){
        sum = -1 *sum;
    }
    
    printf("%lld",sum);
   
    return 0;
}