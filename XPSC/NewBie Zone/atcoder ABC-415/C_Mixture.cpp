#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        reverse(s.begin(),s.end());
        if(n == 1){
            cout << "No\n";
            continue;
        }
        int sum = 0;
        bool ok = true;
        int sz = s.size();
        for(int i=0; i<sz; i++){
            int x = s[i] - '0';
            if(x == 1){
                  int val = i+1;
                  if(sum != 0 && val == sum){
                    ok = false;
                    break;
                  }else{
                    sum += val;
                  }
            }
        }
        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}