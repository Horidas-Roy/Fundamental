#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int mxCoin = 0;
        for(int i=1; i<n; i++){
            if(s[i] == '.') continue;
            if(s[i] == '@') mxCoin++;
            else if(i<n-1 && s[i] == '*' && s[i+1] == '*'){
                break;
            }
        }
        cout << mxCoin << endl;
    }

    return 0;
}