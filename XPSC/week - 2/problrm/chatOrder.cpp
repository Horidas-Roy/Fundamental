#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    map<string,int> mp;
    int cnt = 1;
    while(n--){
        string name; cin >> name;
        auto it = mp.find(name);
        if(it != mp.end()){
            mp[name] = cnt;
        }
        else{
            mp.insert({name,cnt});
        }
        cnt++;
    }
    vector<pair<int,string>> v;
    for(auto [x,y] : mp){
       v.push_back({y,x});
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(auto [x,y] : v){
       cout << y <<"\n";
    }
    return 0;
}