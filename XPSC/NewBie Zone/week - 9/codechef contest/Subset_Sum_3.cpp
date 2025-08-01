#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        vector<int> prefixSum(n);
        prefixSum[0] = v[0];
        for(int i=1; i<n; i++){
            prefixSum[i] = prefixSum[i-1] + v[i];
        }

        if(prefixSum[n-1] % 3 == 0){
            cout << "Yes\n";
            continue;
        }
        bool ok = false;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i; j<n; j++){
                  if((i == j) && (prefixSum[i] % 3 == 0)){
                      ok = true;
                      break;
                  }
                  if(i > 0){
                      sum = prefixSum[j] - prefixSum[i-1];
                  }
                  else{
                    sum = prefixSum[j];
                  }
                  if(sum%3 == 0){
                    ok = true;
                    break;
                  }
            }
            if(ok) break;
        }
        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}