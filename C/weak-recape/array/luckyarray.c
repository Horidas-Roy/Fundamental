#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    // find min number
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    //min count
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == min){
            count++;
        }
    }

    if(count % 2 != 0){
        printf("Lucky");
    }else{
        printf("Unlucky");
    }
    


    return 0;
}