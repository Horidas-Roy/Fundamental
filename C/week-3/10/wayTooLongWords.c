#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);

    char str[100];
    for(int i=0; i<n; i++){
        scanf("%s",str);
        int length = strlen(str);
        if(length > 10){
            printf("%c%d%c\n",str[0],length-2,str[length-1]);
        }else{
            printf("%s\n",str);
        }
    }

    return 0;
}