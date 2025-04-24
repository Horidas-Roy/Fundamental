#include<bits/stdc++.h>
using namespace std;

void base(vector<int> &v,int n){
    if(n == 0) return;
    v.push_back(n%2);
    base(v,n/2);
}

int main(){
    int t; cin >> t;
    while(t--){
        vector<int> v;
        int n; cin >> n;
        base(v,n);
        reverse(v.begin(),v.end());
        for(int x : v){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}