#include<stdio.h>


int main(){
    int x,y;
    scanf("%d %d",&x,&y);

    int* a = &x;
    int* b = &y;

    int* temp = a;
    a = b;
    b = temp;

    printf("%d %d",*a,*b);

    return 0;
}