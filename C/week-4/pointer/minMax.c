#include<stdio.h>
#include<limits.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int* x = &a;
    int* y = &b;
    int* z = &c;

    int min = INT_MAX;
    int max = INT_MIN;
    
    if(*x <= *y && *x <= *z){
        min = *x;
    }else if(*y <= *x && *y <= *z){
        min = *y;
    }else{
        min = *z;
    }

    if(*x >= *y && *x >= *z){
        max = *x;
    }else if(*y >= *x && *y >= *z){
        max = *y;
    }else{
        max = *z;
    }
    
    printf("%d %d",min,max);
    return 0;
}