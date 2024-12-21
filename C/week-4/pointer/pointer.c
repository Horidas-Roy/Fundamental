#include<stdio.h>
#include<stdlib.h>

int main(){

    int *arr = (int*) malloc(5*sizeof(int));

    for(int i=0; i<5; i++){
        arr[i] = i+1;
    }

    int temp = arr;
    arr = realloc(arr, 10*sizeof(int));
    if(arr == NULL){
        free(arr);
        arr = temp;
    }

    for(int i=5; i<10; i++){
        arr[i] = i+1;
    }

    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
    }
    free(arr);

    return 0;
}