#include<stdio.h>
#include<string.h>

int main(){
    char A[100];
    scanf("%s",A);
    char B[100];
    scanf("%s",B);
    int len_A = strlen(A);
    int len_B = strlen(B);
    
    //store the original value of a
    char original[100];
    strcpy(original,A);

    printf("%d %d\n",len_A,len_B);

    if((len_A+len_B) <= sizeof(A)+1){
        strcat(A,B);
    }else{
        printf("size over");
    }
    printf("%s\n",A);
    
    //reseting value of A
    strcpy(A,original);

    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;

     printf("%s %s",A,B);

    return 0;
}