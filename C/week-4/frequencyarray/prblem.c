#include<stdio.h>
#include<string.h>

int freq[10000] = {0};

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n+5];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        freq[arr[i]] += 1;
    }

    for(int i=0; i<n; i++){
         if(freq[i] != 0){
            printf("%d\n",freq[i]);
         }
    }
    
    

    return 0;
}