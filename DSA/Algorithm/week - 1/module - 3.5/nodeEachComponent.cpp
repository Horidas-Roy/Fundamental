#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
vector<int> component_list;

int cnt = 0;
void dfs(int src){
     cnt++;
     vis[src] = true;
     for(int child : adj_list[src]){
        if(!vis[child]){
            dfs(child);
        }
     }
}

int main(){
    int n,e; cin >> n >> e;
    while(e--){
        int a,b; cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
            component_list.push_back(cnt);
            cnt = 0;
        }
        
    }
    sort(component_list.begin(),component_list.end());
    for(int val : component_list){
        cout << val <<" ";
    }
    return 0;
}