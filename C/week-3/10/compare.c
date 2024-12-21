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
                printf("small a: %s\n",a);
                break;
             }else if(a[i]>b[i]){
                printf("small b: %s\n",b);
                break;
             }else{
                printf("equal\n");
                break;
             }
         }
    }

    if(result == 0){
        if(len_a<len_b){
            printf("small a: %s\n",a);
        }else if(len_a>len_b){
            printf("small b: %s\n",b);
        }else{
            printf("equal\n");
        }
    }

    char aa[] = "aaa";
char bb[] = "abc";
printf("%d",strcmp(b,a));


    return 0;
}