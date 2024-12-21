#include<stdio.h>
#include<limits.h>

int findMaxNum(int a[],int index, int length){
      if(index >= length){
        return INT_MIN;
      }
    int max = findMaxNum(a,index+1,length);
    if(max >= a[index]){
        return max;
    }else{
        return a[index];
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int res = findMaxNum(a,0,n);
    printf("%d",res);
    return 0;
}