#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005] = {false};
int level[1005] = {-1};
int parent[1005] = {-1};

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    //par[src] = -1; --> already parent is -1;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int child : adj_list[p]){
            if(!vis[child]){
                 q.push(child);
                 vis[child] = true;
                 level[child] = level[p]+1;
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

    int src,des; cin >> src >> des;
    bfs(src);
    int node = des;
    while(node != -1){
        cout << node <<"<--";
        node = parent[node];
    }

    return 0;
}