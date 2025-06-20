#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        string s; cin >> s;
        int swipes = 0;
        bool ok = true;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                swipes = x;
            }
            else{
                if( swipes > 0){
                    swipes--;
                }
                else{
                    ok = false;
                    break;
                }
            }
        }
        if(ok){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}