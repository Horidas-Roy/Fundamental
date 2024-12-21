#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    //fint minimum and maximum
    int min = arr[0], max=arr[0];

    for (int i = 1; i < n; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }

        if(arr[i] > max){
            max = arr[i];
        }
    }

    //swap
    for(int i=0; i<n; i++){
        if(arr[i] == min){
            arr[i] = max;
            continue;
        }

        if(arr[i] == max){
            arr[i] = min;
            continue;
        }
    }

    //print the array
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    


    return 0;
}