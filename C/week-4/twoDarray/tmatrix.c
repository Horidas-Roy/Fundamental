#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int matrix[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    int mainDiagonal = 0, secondaryDiagonal = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                 mainDiagonal += matrix[i][j];
            }
            if(i+j == n-1){
                 secondaryDiagonal += matrix[i][j];
            }
        }
    }

    printf("result: %d",mainDiagonal-secondaryDiagonal);

    return 0;
}