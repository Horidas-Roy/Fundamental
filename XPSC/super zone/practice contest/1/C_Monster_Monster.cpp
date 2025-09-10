#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        ll result = 0;
        for(int i=0; i<n; i++){
            ll hp = v[i]+ 1LL*i*x;
            if(hp>result){
                result = hp;
            }
        }
        cout << result << endl;
    }

    return 0;
}