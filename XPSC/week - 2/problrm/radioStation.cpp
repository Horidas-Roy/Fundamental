#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;
    map<string,string> mp;
    while(n--){
        string name,ip; cin >> name >> ip;
        mp[ip] = name;
    }
    while(m--){
        string command,ip; cin >> command >> ip;
        ip.pop_back();
        auto it = mp.find(ip);
        if(it != mp.end()){
            ip.push_back(';');
            cout << command << " " << ip << " #" <<it->second <<'\n'; 
        }
    }
    return 0;
}