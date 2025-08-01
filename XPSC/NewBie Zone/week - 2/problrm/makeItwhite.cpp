#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        char ch[n];
        for(int i=0; i<n; i++){
            cin >> ch[i];
        }
        int fwd,bkwd;
        for(int i=0; i<n; i++){
            if(ch[i] == 'B' ){
                fwd = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(ch[i] == 'B' ){
                bkwd = i;
                break;
            }
        }
        int mnLn = bkwd - fwd + 1;
        cout << mnLn << "\n";
    }
    return 0;
}