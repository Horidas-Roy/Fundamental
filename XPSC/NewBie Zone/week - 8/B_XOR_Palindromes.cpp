#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string ans = "";

        int goodPairs = 0;
        int buggish = 0;
        int l=0, r = n-1;
        while (l<r){
            if(s[l] == s[r]){
                goodPairs++;
            }
            else{
                buggish++;
            }
            l++;
            r--;
        }
        
        for(int i=0; i<=n; i++){
            int total = i-buggish;
            if(total < 0){
                ans.push_back('0');
                continue;
            }

            bool ok = false;
            if(total == 0) ok = true;
            else if(n%2 == 1 && total%2 == 1) ok = true;
            else if((total%2 == 0) && (total/2 <= goodPairs)) ok = true;

            if(ok){
                ans.push_back('1');
            }else{
                ans.push_back('0');
            }
        }
        cout << ans <<"\n";

    }

    return 0;
}