#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];
int level[100005];
int par[100005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
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

    int t;
    cin >> t;

    while (t--)
    {
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        memset(par, -1, sizeof(par));

        int src, des;
        cin >> src >> des;

        bfs(src);
        bool flag = true;
        for (int i = src; i < des; i++)
        {
            if (vis[i] == false)
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout << level[des] << "\n";
        else
            cout << "-1" << "\n";
    }

    return 0;
}