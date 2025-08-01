#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        int cnt1 = 0, cnt2 = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] == 1) cnt1++;
            if(v[i] == 2) cnt2++;
        }

        if(cnt1 == 0 || cnt2 ==0){
            cout << 0 << endl;
            continue;
        }
        
        if(cnt1%2 != 0){
            cout << cnt2 << endl;
        }
        else{
            if(cnt1/2 <= cnt2){
                cout << cnt1/2 << endl;
            }
            else{
                cout << cnt2 << endl;
            }
        }
        
    }

    return 0;
}