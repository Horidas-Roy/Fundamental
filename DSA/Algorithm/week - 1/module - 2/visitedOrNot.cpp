#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005] = {false};

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty()){
        int p = q.front();
        q.pop();

        for(int child : adj_list[p]){
            if(!vis[child]){
                 q.push(child);
                 vis[child] = true;
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
    if(vis[des])
        cout << "Yes";
    else cout <<"No";
    return 0;
}