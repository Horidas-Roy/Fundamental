/*  ------------------------Documenta section----------------------------
    Author:Horidas Roy
    Date: 29/09/2024
    Code:Basic C programme with Phitron
*/

//Linking Section
#include<stdio.h>

//Definition Section
#define pi 3.1416
#define ll long long double

//Global Declaration section
int sum(int x, int y);
int x = 100;
int y = 200;

//Main function section
int main(){
    //  printf("Hellow,c programme.This is my second day with phitron\n");
    //  printf("Your sum is: %d",sum(x,y));

    // printf("Please Enter your First Number:\n");
    // scanf("%d",&x);
    // printf("Please enter your second number:\n");
    // scanf("%d",&y);
    // printf("Your summation is: %d",sum(x,y));

    char s;
    s = getchar();
    putchar(s);


    return 0;
}

//sub programme section
int sum(int x, int y){
    return x+y;
}