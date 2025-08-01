#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int index = 0;
    for(int i=1; i<s.size(); i++){
        index += (1<<i);
    }

    int mask = 0;
    for(int i=0; i<s.size(); i++){
        mask = (mask << 1);
        if(s[i] == '7') mask = (mask | 1);
    }
    
    int ans = index + mask + 1;  // add 1 for 1 base index;
    cout << ans;

    return 0;
}