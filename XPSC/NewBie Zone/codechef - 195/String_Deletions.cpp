#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        string s; cin >> s;
        for(int i=0; i<n; i++){
            if(i>0 && i < n-1 ){
                if(s[i] == '0' && s[i-1] == '1' && s[i+1] == '1'){
                    s[i] = '2';
                }
            }
        }
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(s[i] != '2') cnt++;
        }
        cout  << cnt << endl;
    }

    return 0;
}