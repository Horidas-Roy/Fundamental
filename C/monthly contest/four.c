#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int min = arr[0];
    int max = arr[0];
    
    int highestRecord = 0;
    int lowestRecord = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
            highestRecord++;
        }
        if(arr[i] < min){
            min = arr[i];
            lowestRecord++;
        }
    }
    
    printf("%d %d",highestRecord,lowestRecord);
    return 0;
}