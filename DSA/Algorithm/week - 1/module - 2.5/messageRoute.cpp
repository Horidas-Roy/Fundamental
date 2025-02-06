#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];
int level[100005];
int par[100005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 1;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int child : adj_list[p]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[p] + 1;
                par[child] = p;
            }
        }
    }
}

int main(){
    int n,m; cin >> n >> m;
    while (m--){
        int a,b; cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(par,-1,sizeof(par));

    bfs(1);

    for(int i=1; i<=n; i++){
        if(vis[i] == false){
            cout <<"IMPOSSIBLE";
            return 0;
        }
    }

    cout << level[n] <<"\n";
    int node = n;
    vector<int> v;
    while(node != -1){
        v.push_back(node);
        node = par[node];
    }
    reverse(v.begin(),v.end());
    for(int x : v){
        cout << x <<" ";
    }
    
    return 0;
}