#include<stdio.h>

int main(){
    int days;
    scanf("%d",&days);
    
    int years=0, months=0, remain_days=0;

    years = days/365;
    remain_days = days % 365;
    months = remain_days/30;
    remain_days = remain_days % 30;

    printf("%d years\n%d months\n%d days",years,months,remain_days);

    return 0;
}