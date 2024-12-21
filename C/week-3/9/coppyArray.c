#include<stdio.h>

int main(){
   int a[100000], b[100000];

   int length;
   scanf("%d",&length);

   for(int i=0; i<length; i++){
       scanf("%d",&a[i]);
   }

   for(int i=0; i<length; i++){
       b[i] = a[i];
   }

   for(int i=0; i<length; i++){
     printf("%d ",b[i]);
   }

}