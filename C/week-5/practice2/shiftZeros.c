#include<stdio.h>

void shiftZeros(int *a,int length){
      int temp[length],nonZeroCount = 0;
      for(int i=0,j=0; i<length; i++){
          if(a[i] != 0){
             temp[j] = a[i];
             j++;
             nonZeroCount++;
          }
      }
      for(int i = nonZeroCount; i<length; i++){
         temp[i] = 0;
      }
      for(int i=0; i<length; i++){
          printf("%d ",temp[i]);
      }
}


int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    shiftZeros(a,n);
    return 0;
}