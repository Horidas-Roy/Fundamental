#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int par[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int child : adj_list[p]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                par[child] = p;
            }
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
    memset(par,-1,sizeof(par));
    bfs(0);
    int node = 4;
    vector<int> path;
    while(node != -1){
        path.push_back(node);
        node = par[node];
    }
    reverse(path.begin(),path.end());
    for(int x : path){
        cout << x <<" ";
    }
    return 0;
}