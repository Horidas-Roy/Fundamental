#include<stdio.h>

int main(){
   int t;
   scanf("%d",&t);
   int m1,m2,d,fewerDays;
   for(int i=0; i<t; i++){
      scanf("%d %d %d",&m1,&m2,&d);
      fewerDays = d-(d*m1)/(m1+m2);
      printf("%d\n",fewerDays);
   }
   
   return 0;
}