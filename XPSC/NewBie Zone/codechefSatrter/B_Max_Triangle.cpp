#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a = n;
        ll b = n-1;
        ll c = n-2;
        if(2*max({a,b,c}) < (a+b+c)){
            cout << (a+b+c) <<"\n";
        }
        else cout << -1 <<"\n";
    }

    return 0;
}