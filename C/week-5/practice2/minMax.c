#include<stdio.h>

void findMinMax(int *a, int length){
     int max = 0, min = 1000001;
     for(int i=0; i<length; i++){
        if(a[i] < min){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
     }
     printf("%d %d",min,max);
}


int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    findMinMax(a,n);
    return 0;
}