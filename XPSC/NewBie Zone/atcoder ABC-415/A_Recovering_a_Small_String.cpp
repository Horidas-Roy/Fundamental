#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool found = false;
        for(int i=1; i<=26 && !found; i++){
            for(int j=1; j<=26 && !found; j++){
                int k = n - i - j;
                if( k > 0 && k <= 26){
                    cout << char('a'+i-1) << char('a'+j-1) << char('a'+k-1) << endl;
                    found = true;
                }
            }
        }
    }

    return 0;
}