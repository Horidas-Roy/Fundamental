#include<bits/stdc++.h>
using namespace std;

bool palindrome(vector<int> &v,int l , int r){
      if(l>=r) return true; 
      if(v[l] != v[r]){
         return false;
      }
      return palindrome(v,l+1,r-1);
}

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    if(palindrome(v,0,n-1)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}