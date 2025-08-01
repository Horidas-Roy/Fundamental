#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> s(3);
        cin >> s[0] >> s[1] >> s[2];
        vector<int> ones(3,0);
        vector<int> zeros(3,0);
        for(int i=0; i<3; i++){
            for(char ch : s[i]){
                ones[i] += (ch == '1');
                zeros[i] += (ch == '0');
            }
        }
        int one = ones[0]+ones[1]+ones[2];
        int ans;
        if(one%n != 0){
            cout << -1 << endl;
        }
        else if(one == 0 || one == n*3){
            cout << 0 << endl;
        }
        else if(one == n){
            ans = n - max({ones[0],ones[1],ones[2]});
            cout << ans << endl;
        }
        else{
            ans = n - max({zeros[0],zeros[1],zeros[2]});
            cout << ans << endl;
        }
    }

    return 0;
}