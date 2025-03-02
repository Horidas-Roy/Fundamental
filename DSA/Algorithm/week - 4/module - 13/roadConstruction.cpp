#include <bits/stdc++.h>
using namespace std;
int par[100005];
int groupSize[100005];
int cmp, mx;

int find(int node)
{
    if (par[node] == -1)
    {
        return node;
    }
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu(int a, int b)
{
    int leadA = find(a);
    int leadB = find(b);
    if (leadA == leadB)
    {
        return;
    }

    if (groupSize[leadA] >= groupSize[leadB])
    {
        par[leadB] = leadA;
        groupSize[leadA] += groupSize[leadB];
        mx = max(mx, groupSize[leadA]);
    }
    else
    {
        par[leadA] = leadB;
        groupSize[leadB] += groupSize[leadA];
        mx = max(mx, groupSize[leadB]);
    }
    cmp--;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        groupSize[i] = 1;
    }
    cmp = n;
    mx = 1;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        dsu(a,b);
        cout << cmp <<" "<< mx <<"\n";
    }

    return 0;
}