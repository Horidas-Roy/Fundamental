#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int  i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int i=0;
    while (i<n-i-1)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
        i++;
    }

    for(int j = 0; j<n; j++){
        printf("%d ",arr[j]);
    }
    

    return 0;
}