#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    for(int i = 1; i<s.size(); i++){
        if(s[i] == s[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(check(s)){
            cout << 0 << endl;
            continue;
        }

        int one = 0, zero = 0;
        for(int i=0; i<s.size(); i++){
            one += (s[i] == '1');
            zero += (s[i] == '0');
        }
        
        if(one == zero){
            cout << 1 << endl;
        }
        else{
            int cnt = abs(one-zero);
            int opt = cnt/2;
            if(opt == 0){
                // if(check(s)){
                //     cout << 0 << endl;
                // }
                // else{
                    cout << 1 << endl;
                // }
            }
            if(opt == 1){
                cout << 2 << endl;
            }
            if(opt >= 2){
                cout << 3 << endl;
            }
        }
    }

    return 0;
}