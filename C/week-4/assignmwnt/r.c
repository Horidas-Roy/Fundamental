#include<stdio.h>
#include<stdlib.h>
   
 int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int count = 0;
    for(int i=0; i<n; i++){
        int x = arr[i];
        int flag = 1;
        for(int j=i+1; j<n; j++){
             if(x == arr[j]){
                flag = 0;
                break;
             }
        }
        if(flag == 1){
            count++;
        }
    }
    
    printf("%d",count);
   
    return 0;
 }