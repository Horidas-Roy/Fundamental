#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    int q; cin >> q;
    int x,v;
    while(q--){
        cin >> x >> v;
        if(x == 0){
            l.push_front(v);
        }
        else if( x == 1){
            l.push_back(v);
        }
        else{
            int sz = l.size();
            if(v >= 0 && v < sz){
                l.erase(next(l.begin(),v));
            }
        }
        cout << "L -> ";
        for(int val:l){
            cout << val <<" ";
        }
        cout << endl;
        cout << "R -> ";
        for(auto it = l.rbegin(); it != l.rend() ; it++){
            cout << *it <<" ";
        }
        cout << endl;
    }
    return 0;
}