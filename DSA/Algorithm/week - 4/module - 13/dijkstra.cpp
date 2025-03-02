#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll, ll>> adj_list[100005];
ll dis[100005];
ll par[100005];

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<ll, ll> parent = pq.top();
        pq.pop();
        ll par_dis = parent.first;
        ll par_node = parent.second;
        for (auto child : adj_list[par_node])
        {
            ll child_node = child.first;
            ll child_dis = child.second;
            if (par_dis + child_dis < dis[child_node])
            {
                par[child_node] = par_node;
                dis[child_node] = par_dis + child_dis;
                pq.push({dis[child_node], child_node});
            }
        }
    }
}

int main()
{
    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        adj_list[a].push_back({b, w});
        adj_list[b].push_back({a, w});
    }
    for (ll i = 0; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        par[i] = -1;
    }
    dijkstra(1);
    if (dis[n] == LLONG_MAX)
    {
        cout << -1 << "\n";
    }
    else
    {
        int node = n;
        vector<int> path;
        while (node != -1)
        {
            path.push_back(node);
            node = par[node];
        }
        reverse(path.begin(), path.end());
        for (int x : path)
        {
            cout << x << " ";
        }
    }
    return 0;
}