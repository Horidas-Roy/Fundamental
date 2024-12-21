#include<stdio.h>


int main(){
    int x,y;
    scanf("%d %d",&x,&y);

    int* a = &x;
    int* b = &y;

    int sum = *a + *b;

    printf("%d",sum);

    return 0;
}