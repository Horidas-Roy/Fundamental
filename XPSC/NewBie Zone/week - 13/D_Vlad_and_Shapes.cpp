#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    // t = 1;
    while(t--){
        int n; cin >> n;
        vector<vector<char>> v(n,vector<char>(n));
        for(int i=0; i<n; i++){
            string  s; cin >> s;
            for(int j=0; j<n; j++){
                v[i][j] = s[j];
            }
        }

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         cout << v[i][j] <<" ";
        //     }
        //     cout << endl;
        // }
        
        vector<int> cnt;
        for(int i=0; i<n; i++){
            int cnt1 = 0;
            for(int j=0; j<n; j++){
                if(v[i][j] == '1'){
                    cnt1++;
                }
            }
            if(cnt1) cnt.push_back(cnt1);
        }

        if(cnt[0] == cnt[1]){
            cout << "SQUARE" << endl;
        }
        else{
            cout << "TRIANGLE" << endl;
        }
        // else if(cnt[0] == cnt[1]-2 || cnt[0] == cnt[1]+2){
        //     cout << "TRIANGLE" << endl;
        // }
    }

    return 0;
}