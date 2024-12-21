#include<stdio.h>
#include<string.h>


int main(){
    char s1[1001],s2[1001],s3[1001];
    scanf("%s %s %s",s1,s2,s3);

    char min[1001];
    char max[1001];

    //for s1 & s2
    if(strcmp(s1,s2) < 0){
        strcpy(min,s1);
        strcpy(max,s2);
    }else{
        strcpy(min,s2);
        strcpy(max,s1);
    }

    //for min & s3
    if(strcmp(min,s3) > 0){
        strcpy(min,s3);
    }

    //for max & s3
    if(strcmp(max,s3) < 0){
        strcpy(max,s3);
    }
   
    printf("%s\n%s",min,max);


    return 0;
}
