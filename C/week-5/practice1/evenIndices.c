#include<stdio.h>

void printEvenIndices(int arr[], int x, int length){
     if(x == length){
        return;
     }
     printEvenIndices(arr,x+2,length);
     printf("%d ",arr[x]);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printEvenIndices(arr,0,n);

    return 0;
}

