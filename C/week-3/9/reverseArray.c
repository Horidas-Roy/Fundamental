#include<stdio.h>

int a[100000], b[100000];

int main(){

   int length;
   scanf("%d",&length);

   for(int i=0; i<length; i++){
       scanf("%d",&a[i]);
   }
   
   //reverse array
   for(int i=0,j=length-1; i<length; i++,j--){
        b[j] = a[i];
   }
   
   // b[] to a[]
   for(int i=0; i<length; i++){
        a[i] = b[i];
   }

   for(int i=0; i<length; i++){
      printf("%d ",a[i]);
   }
   
   return 0;
}