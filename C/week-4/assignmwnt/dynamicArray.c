#include<stdio.h>
#include<stdlib.h>
   
 int main(){
    int n;
    scanf("%d",&n);
    int length = 1;
    int *arr = (int*) malloc(length*sizeof(int));
    
    for(int i=0; i<n; i++){
        scanf("%d",arr+i);
        if(i<n-1){
            length++;
            int *temp = arr;
            arr = (int*) realloc(arr,length*sizeof(int));
            if(arr == NULL){
                arr = temp;
            }
        }
    }
    
    for(int i=0; i<length; i++){
         printf("%d ",*(arr+i));
    }
    free(arr);
    return 0;
 }