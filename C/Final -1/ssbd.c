#include<stdio.h>
#include<string.h>

int main(){
    char s1[105],s2[105],s3[105];
    scanf("%s %s %s",s1,s2,s3);

    int len = strlen(s2);
    int operations = 0;

    for(int i=0; i<len; i++){
        if(s2[i] != s1[i]){
           s2[i] = s1[i];
           operations++;
        }
    }
    for(int i=0; i<len; i++){
        if(s3[i] != s1[i]){
           s3[i] = s1[i];
           operations++;
        }
    }
    printf("%d",operations);
    return 0;
}