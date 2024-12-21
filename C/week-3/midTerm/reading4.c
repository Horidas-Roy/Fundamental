#include<stdio.h>

int main(){
    int N,T;
    scanf("%d %d",&N,&T);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    
    int totalBook = 0,timeCount=0;
    for(int i=0; i<N; i++){
          timeCount += arr[i];
          if(timeCount <= T ){
              totalBook++;
          }
    }

    printf("%d",totalBook);

    return 0;
}