#include<stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   long long int sum = 0;
   for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
   }
   
   if(sum < 0){
      sum = -1 * sum;
   }
   
   printf("%lld\n",sum);

   return 0;
}