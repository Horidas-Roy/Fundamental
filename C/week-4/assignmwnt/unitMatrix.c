#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int m[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&m[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                if(m[i][j] != 1){
                    printf("NO");
                    return 0;
                }
            }else{
                if(m[i][j] != 0){
                    printf("NO");
                    return 0;
                }
            }
        }
    }

    printf("YES");
    return 0;
}