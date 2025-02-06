#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];
int level[100005];
int par[100005];

void bfs(vector<int> &v,int src,int l)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        if(level[p] == l){
            v.push_back(p);
        }
        for (int child : adj_list[p])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[p] + 1;
                par[child] = p;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }


    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(par, -1, sizeof(par));

    vector<int> v;
    int l;
    cin >> l;
    bfs(v,0,l);
    reverse(v.begin(),v.end());
    for(int x: v){
        cout << x <<" ";
    }

    return 0;
}