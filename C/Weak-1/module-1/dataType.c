#include<stdio.h>

void main(){
    int a;
    float b;
    char c;
    double d;

    char name[80];

    // printf("Enter the value of int , float, char, double: \n");
    // scanf("%d %f %c %lf",&a,&b,&c,&d);
    // printf("Your data is: %d\t%f\t%c\t%lf",a,b,c,d);


    printf("Please enter your name:\n");
    scanf("%s",name);
    printf("%-80s",name);
}