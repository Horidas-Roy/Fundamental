#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int l = 0, r = 0;
        int a = 0, b = 0;
        while(r<5){
            if(s[r] == s[l]){
                if(s[r] == 'A') a = max(a,r-l+1);
                else b = max(b,r-l+1);
                r++;
            }
            else{
                l = r;
            }
        }
        if(a == b){
            int cntA = 0, cntB = 0;
            for(int i=0; i<5; i++){
                cntA += (s[i] == 'A');
                cntB += (s[i] == 'B');
            }
            if(cntA >= cntB){
                cout << "A" << endl;
            }
            else{
                cout << "B" << endl;
            }
        }
        else if(a>b){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
        // cout << a << b << endl;
    }

    return 0;
}