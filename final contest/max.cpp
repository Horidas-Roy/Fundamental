#include<bits/stdc++.h>
using namespace std;
int main(){
    int q; cin >> q;
    vector<int> v;
    while(q--){
        int o; cin >> o;
        if( o == 1){
            int x; cin >> x;
            v.push_back(x);
        }else{
            int sz = v.size();
            if(sz == 0){
                cout << "empty" << "\n";
            }
        }
    }
    return 0;
}