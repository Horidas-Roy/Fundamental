#include<stdio.h>


int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n != m){
        printf("NO");
        return 0;
    }
    int matrix[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == j){
                if(matrix[i][j] != 1){
                    printf("NO");
                    return 0;
                }
                
            }else if(i+j == n-1){
                if(matrix[i][j] != 1){
                    printf("NO");
                    return 0;
                }

            }else if(matrix[i][j] != 0){
                    printf("NO");
                    return 0;
            }
        }
    }
    
    printf("YES");

    return 0;
}