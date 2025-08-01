#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
        }
        if(sum == 0 || sum%3 == 0){
            cout << 0 << endl;
            continue;
        }
        if((sum+1)%3 == 0){
            cout << 1 << endl;
        }else{
            sort(v.begin(),v.end());
            bool ok = false;
            for(int i=0; i<n; i++){
                if((sum-v[i])%3 == 0){
                    ok = true;
                }
            }
            if(ok){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
    }

    return 0;
}