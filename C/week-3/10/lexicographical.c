#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];
    scanf("%s %s",a,b);
    
    int len_a = strlen(a);
    int len_b = strlen(b);
    int n;

    if(len_a < len_b){
        n = len_a;
    }else{
        n = len_b;
    }
    int result = 0;
    for(int i = 0; i<n; i++){
         if(a[i] != b[i]){
             result = 1;
             if(a[i]<b[i]){
                printf("%s\n",a);
                break;
             }else if(a[i]>b[i]){
                printf("%s\n",b);
                break;
             }
         }
    }

    if(result == 0){
        if(len_a<len_b){
            printf("%s\n",a);
        }else if(len_a>len_b){
            printf("%s\n",b);
        }else{
            //we can print any of them
            printf("%s",a);
        }
    }
    return 0;
}