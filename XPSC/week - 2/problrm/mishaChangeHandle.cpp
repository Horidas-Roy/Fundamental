#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string x,y; cin >> x >> y;
    set<pair<string,string>> s;
    s.insert({x,y});
    for(int i=0; i<n-1; i++){
        cin >> x >> y;
        bool flag = true;
        for(auto it = s.begin(); it != s.end();){
            if(it->second == x){
                s.insert({it->first,y});
                it = s.erase(it);
                flag = false;
            }
            else{
                it++;
            }
        }
        if(flag){
            s.insert({x,y});
        }
    }

    cout << s.size() << endl;
    
    for(auto it = s.begin(); it != s.end(); it++){
        cout << it->first <<" "<< it->second <<"\n";
    }
    return 0;
}