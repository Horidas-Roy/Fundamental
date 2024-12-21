#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int lowest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < lowest){
            lowest = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] == lowest){
            printf("%d %d",lowest,i+1);
            break;
        }
    }


    return 0;
}