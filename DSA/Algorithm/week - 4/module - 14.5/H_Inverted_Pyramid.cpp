#include<bits/stdc++.h>
using namespace std;
void inverted(int space,int star){
      if(star < 0) return;
      for(int i=0; i<space; i++){
         cout <<" ";
      }
      for(int i=0; i<star; i++){
         cout <<"*";
      }
      cout << endl;
      inverted(++space,star-2);
}
int main(){
    int n; cin >> n;
    inverted(0,2*n-1);
    return 0;
}