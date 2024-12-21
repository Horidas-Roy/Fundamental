#include<stdio.h>

int main(){
    int N,X,Y;
    scanf("%d %d %d",&N,&X,&Y);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    
    int availablePhn = 0;
    for(int i=0; i<N; i++){
        if(X <= arr[i] && arr[i] <= Y){
            availablePhn++;
        }
    }

    printf("%d",availablePhn);

    return 0;
}