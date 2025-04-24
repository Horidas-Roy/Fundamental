#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<string,int>  mp;
    while(n--){
        string s; cin >> s;
        auto it = mp.find(s);
        if(it == mp.end()){
            cout << "NO" <<"\n";
            mp.insert({s,1});
        }
        else{
            cout << "YES" <<"\n";
        }
    }
    return 0;
}