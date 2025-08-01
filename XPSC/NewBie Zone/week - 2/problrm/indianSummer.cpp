#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    set<pair<string,string>> s;
    string x,y;
    while(n--){
        cin >> x >> y;
        s.insert({x,y});
    }
    cout << s.size();
    return 0;
}