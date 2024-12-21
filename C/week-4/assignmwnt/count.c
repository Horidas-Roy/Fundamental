#include<stdio.h>

int main(){
    int n,m,x;
    scanf("%d %d %d",&n,&m,&x);
    int matrix[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for(int k=0; k<x; k++){
        int num;
        scanf("%d",&num);
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == num){
                    count++;
                }
            }
       }
       printf("%d\n",count);
    }

    return 0;
}