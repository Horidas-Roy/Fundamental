#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1; i<=m; i++){
        int numbersApearInArray = 0;
        for(int j=0; j<n; j++){
            if(arr[j] == i){
                numbersApearInArray++;
            }
        }
        printf("%d\n",numbersApearInArray);
    }

    return 0;
}