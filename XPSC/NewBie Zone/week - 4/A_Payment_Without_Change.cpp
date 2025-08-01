#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        long long a,b,n,s; cin >> a >> b >> n >> s;
        long long  y = 0;
        long long mn = min(s/n,a);
        bool res = mn*n + b >= s;

        if(res){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
     }
    return 0;
}