#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0; i<n; i++){
        cin >> v[i];
        mp[v[i]] += 1;
    }
    int mnBox = 0;
    for(auto it=mp.begin(); it != mp.end(); it++){
        if(it->second > mnBox){
            mnBox = it->second;
        }
    }
    cout << mnBox;
    return 0;
}