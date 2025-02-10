#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e; cin >> n >> e;
    vector<int> adj_list[1005];
    while (e--){
        int a,b; cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        vector<int> v;
            for(int val :  adj_list[x]){
                v.push_back(val);
            }
        sort(v.begin(),v.end(),greater<int>());
        if(v.size() == 0){
            cout << "-1";
        }else{
            for(int val: v){
                cout << val <<" ";
            }
        }
        cout <<"\n";
    }
    
    return 0;
}