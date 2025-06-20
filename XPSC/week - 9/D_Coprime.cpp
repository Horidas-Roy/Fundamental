#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n+1);
        vector<int> lastOcurance(1001,-1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
            lastOcurance[v[i]] = i;
        }
        int mx = -1;
        for(int i=1000; i>0; i--){
            if(lastOcurance[i] == -1) continue;
            for(int j=1000; j>0; j--){
                if(lastOcurance[j] == -1) continue;
                int gcd = __gcd(i,j);
                if( gcd == 1){
                    mx = max(mx,lastOcurance[i] + lastOcurance[j]);
                }
            }
        }
        cout << mx <<"\n";
    }

    return 0;
}