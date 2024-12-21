#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
     int arr[n];

     for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
     }

     int frequency[10000];

     for(int i=0; i<n; i++){
         frequency[arr[i]] = 1;
     }

     for(int i=0; i<20; i++){
         printf("%d ",frequency[i]);
     }


    return 0;
}