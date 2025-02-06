#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e; cin >> n >> e;
    vector<int> adj_list[n+1];
    while(e--){
        int a,b; cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // undirected
    }

    for(int i=1; i<n; i++){
        cout << i <<"-->";
        for(auto x : adj_list[i]){
            cout << x <<" ";
        }
        cout <<"\n";
    }
    return 0;
}