#include<stdio.h>

int a[100000], b[100000];

int main(){

   int length;
   scanf("%d",&length);

   for(int i=0; i<length; i++){
       scanf("%d",&a[i]);
   }
   
//reverse array
//========= double variable =============
//    for(int i=0,j=length-1; i<j; i++,j--){
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//    }

//========= single variable =============
   for(int i=0; i<length-i-1; i++){
        int temp = a[i];
        a[i] = a[length-i-1];
        a[length-i-1] = temp;
   }

   for(int i=0; i<length; i++){
      printf("%d ",a[i]);
   }
   
   return 0;
}