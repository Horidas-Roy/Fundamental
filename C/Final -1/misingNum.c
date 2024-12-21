#include<stdio.h>

long long int findMisingNum(long long int m,int a, int b, int c){
      int misingNum = m/(a*b*c);
      if(a*b*c*misingNum == m){
           return misingNum;
      }else{
        return -1;
      }
}

int main(){
    int t;
    scanf("%d",&t);
    long long int m;
    int a, b, c;
    for(int i=0; i<t; i++){
        scanf("%lld %d %d %d",&m,&a,&b,&c);
        long long int res = findMisingNum(m,a,b,c);
        printf("%lld\n",res);
    }

    return 0;
}