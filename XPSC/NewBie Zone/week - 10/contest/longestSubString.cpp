#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    t =1;
    while(t--){
        int n,q; cin >> n >> q;
        string s; cin >> s;
        vector<int> freq(26,0);
        for(int i=0; i<n; i++){
            char ch = s[i];
            int idx = ch - 'a';
            freq[idx]++;
        }
        int mxSubstring = *max_element(freq.begin(),freq.end());
        cout << mxSubstring <<" ";
        while(q--){
            char ch; cin >> ch;
            s.push_back(ch);
            int idx = ch - 'a';
            freq[idx]++;
            mxSubstring = *max_element(freq.begin(),freq.end());
            cout << mxSubstring <<" ";
        }
        cout <<"\n";
    }

    return 0;
} 