#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n),prefix_mod(n);
        int sum = 0, lastz = -1;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum = (sum + v[i])%3;
            if(sum == 0) lastz = i;
            prefix_mod[i] = sum;
        }
        
        if(lastz == -1){
            cout << "Yes" << endl;
            continue;
        }
        
        if(lastz == n-1){
            cout << "No" << endl;
            continue;
        }

        map<int,int> cnt;
        bool ok = false;
        for(int i=0; i<n; i++){
            if(i > lastz){
                if(cnt[prefix_mod[i]] == 0){
                    ok = true;
                    break;
                }
            }
            cnt[prefix_mod[i]]++;
        }
        if(ok){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}