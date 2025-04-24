#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<string,int> mp;
    while(n--){
        string s; cin >> s;
        auto it = mp.find(s);
        if(it != mp.end()){
            mp[s] += 1;
            cout << s+to_string(mp[s]-1) << "\n";
        }
        else{
            mp[s] += 1;
            cout << "OK\n";
        }
    }
    return 0;
}