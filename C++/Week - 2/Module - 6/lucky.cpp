#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int number,fisrThreeDigitsum = 0,lastThreeDigitsum = 0;
    for(int i=0; i<t; i++){
         cin >> number;
         for(int i=0; i<6; i++){
              int digit = number % 10;
              if(i<3){
                 lastThreeDigitsum += digit;
              }else{
                 fisrThreeDigitsum += digit;
              }
              number /= 10;
         }
         (fisrThreeDigitsum == lastThreeDigitsum) ? cout << "YES" << endl : cout << "NO"<< endl;
         fisrThreeDigitsum = 0;
         lastThreeDigitsum = 0;
    }
    return 0;
}