#include<bits/stdc++.h>
using namespace std;

bool vis[105];
vector<int> adj_list[105];
int parent[105];
bool cycle;

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int child : adj_list[p]){
            if(vis[p] && parent[p] != child){
                cycle = true;
            }
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                parent[child] = p;
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
    memset(parent,-1,sizeof(parent));
    cycle = false;
    for(int i=0; i<n;i++){
        if(!vis[i]){
            bfs(i);
        }
    }

    if(cycle){
        cout << "Cycle Detected";
    }else{
        cout << "No Cycle";
    }
    
    return 0;
}