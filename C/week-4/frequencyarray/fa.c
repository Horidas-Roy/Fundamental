#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n+5];
    int freq[100005] = {0};

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        freq[arr[i]] += 1;
    }

    for(int i=1; i<=m; i++){
         printf("%d\n",freq[i]);
    }


    return 0;
}