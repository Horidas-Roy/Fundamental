#include<stdio.h>

int main(){
    // int matrix[3][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int matrix[3][5];
     for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            scanf("%d ",&matrix[i][j]);
        }
    }
    


    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
             printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }



    return 0;
}