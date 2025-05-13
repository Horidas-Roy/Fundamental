#include<bits/stdc++.h>
using namespace std;

bool check_kth_bit_on_or_off(int n, int k){
     return ((n>>k)&1);
}

void print_bits(int n){
     for(int i=7; i>=0; i--){
         if((n >> i)&1){
             cout << 1 <<" ";
         }
         else{
             cout << 0 <<" ";
         }
     }
     cout <<"\n";
}

int turn_on_kth_bit(int n,int k){
     return ((1<<k) | n);
}

int turn_off_kth_bit(int n,int k){
     return (~(1<<k) & n);
}

int toggle_kth_bit(int n, int k){
     return ((1 << k)^n);
}

int main(){
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     
     int a = 5, b = 6;
     // cout << (a & b) <<"\n";
     // cout << (a | b) <<"\n";
     // cout << ~(a | b) <<"\n"; //-(a|b)-1

     // if(b & 1 == 1) cout << "Odd";
     // else cout << "even";
     
     // cout << check_kth_bit_on_or_off(5,1) <<"\n";
     // cout << turn_on_kth_bit(5,1) <<"\n";
     // cout << turn_off_kth_bit(5,0) <<"\n";

     // cout << toggle_kth_bit(5,0) <<"\n";

     print_bits(20);
     cout << __builtin_popcount(20) <<"\n";
     cout << __lg(20) <<"\n";

     return 0;
}