#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        long long cnt = 0, sum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
            if(v[i] == 1) cnt++;
        }
        if(n == 1){
            cout << "No\n";
            continue;
        }
        sum -= n;
        if(sum >= cnt){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }

    return 0;
}