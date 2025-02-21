#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];

void dfs(int src){
       vis[src] = true;
       for(int child : adj_list[src]){
           if(!vis[child]){
             dfs(child);
           }
       }
}

int main(){
    int n,m; cin >> n >> m;
    while(m--){
        int a,b; cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    vector<int> v;
    for(int i=1; i<=n; i++){
        if(!vis[i]){
              v.push_back(i);
              dfs(i);
        }
    }
    cout << v.size()-1 <<"\n";
    
    if( v.size()-1 == 0) return 0;

    for(int i=0; i < v.size()-1; i++){
         cout << v[i] <<  " " << v[i+1] <<"\n";
    }

    return 0;
}