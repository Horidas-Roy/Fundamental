#include<stdio.h>
#include<string.h>

int main(){
    char A[1000],B[1000];
    scanf("%s %s",A,B);

    int len_a = strlen(A);
    int len_b = strlen(B);

    printf("%d %d\n",len_a,len_b);
    printf("%s %s",A,B);
    

    return 0;
}