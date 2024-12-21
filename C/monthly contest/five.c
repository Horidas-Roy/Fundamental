#include<stdio.h>


int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int matrix[n+2][m+2];
    for(int i=0; i<n+2; i++){
        for(int j=0; j<m+2; j++){
            if(i == 0 || j == 0 || i == n+1 || j == m+1){
                matrix[i][j] = 0;
            }else{
                scanf("%d",&matrix[i][j]);
            }
        }
    }
    
    int count = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(matrix[i][j] > matrix[i-1][j] && matrix[i][j] > matrix[i][j-1] && matrix[i][j] > matrix[i+1][j] && matrix[i][j] > matrix[i][j+1]){
                 printf("%d %d\n",i,j);
                 count++;
            }
        }
    }

    printf("%d",count);

    return 0;
}