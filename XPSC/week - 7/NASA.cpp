#include<bits/stdc++.h>
using namespace std;

const int maxN = (1LL << 15);
vector<int> allPalindrome;

bool isPalindrome(int x){
    string s = to_string(x);
    int sz = s.size();
    for(int i=0; i<sz/2; i++){
        if(s[i] != s[sz-i-1]){
            return false;
        }
    }
    return true;
}

void markPalindrome(){
    for(int i=0; i<maxN; i++){
        if(isPalindrome(i)){
            allPalindrome.push_back(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    markPalindrome();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n), cnt(maxN+1);
        for(int i=0; i<n; i++){
            cin >> v[i];
            cnt[v[i]]++;
        }
        long long ans = n;
        for(int i=0; i<n; i++){
            for(int j=0; j<allPalindrome.size(); j++){
                    int cur = v[i] ^ allPalindrome[j];
                    ans += cnt[cur];
            }
        }
        cout << ans/2 <<"\n";
    }

    return 0;
}