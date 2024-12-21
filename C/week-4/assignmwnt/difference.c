#include<stdio.h>
#include<stdlib.h>


int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int *x = &a;
    int *y = &b;

    int sum = abs(*x - *y);

    int *result = &sum;

    printf("%d",*result);

    return 0;
}