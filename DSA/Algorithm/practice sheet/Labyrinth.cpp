#include <bits/stdc++.h>
using namespace std;
char grid[2005][2005];
bool vis[2005][2005];
pair<int, int> par[2005][2005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int p_i = p.first;
        int p_j = p.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = p_i + d[i].first;
            int cj = p_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'A' || grid[ci][cj] == 'B'))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                par[ci][cj] = {p_i, p_j};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si = -1, sj = -1, di = -1, dj = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            vis[i][j] = false;
            par[i][j] = {-1, -1};
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }
    bfs(si, sj);
    if (!vis[di][dj])
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        int x = di, y = dj;
        vector<char> path;
        while (x != si || y != sj)
        {
            int par_i = par[x][y].first;
            int par_j = par[x][y].second;
            if (par_i == x - 1)
            {
                path.push_back('D');
            }
            else if (par_i == x + 1)
            {
                path.push_back('U');
            }
            else if (par_j == y + 1)
            {
                path.push_back('L');
            }
            else if (par_j == y - 1)
            {
                path.push_back('R');
            }
            x = par_i;
            y = par_j;
        }

        reverse(path.begin(), path.end());
        cout << path.size() << endl;
        for (char ch : path)
        {
            cout << ch;
        }
    }

    return 0;
}