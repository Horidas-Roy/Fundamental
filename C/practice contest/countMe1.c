#include<stdio.h>

int main(){
   int n ,divBy2 = 0, divBy3 = 0;
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);

      if(arr[i] % 2 == 0 && arr[i] % 3 == 0){
          divBy2++;
      }else if (arr[i] % 2 == 0)
      {
           divBy2++;
      }else if (arr[i] % 3 == 0)
      {
           divBy3++;
      }
   }
   
   printf("%d %d",divBy2,divBy3);
   
   return 0;
}