#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
pair<int,int> parent[1005][1005];
vector<pair<int,int>> d = {{0,-1},{0,1},{-1,0},{1,0}};
int n,m;

bool isValid(int i, int j){
    if(i<0 || i >= n || j<0 || j>=m){
        return false;
    }
    return true;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    while(!q.empty()){
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        for(int i=0; i<4; i++){
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(isValid(ci,cj) && !vis[ci][cj] && (grid[ci][cj] == '.'||grid[ci][cj] == 'D'||grid[ci][cj] == 'R')){
                   q.push({ci,cj});
                   vis[ci][cj] = true;
                   parent[ci][cj] = {par_i,par_j};
            }
        }
    }
}

int main(){
    cin >> n >> m;
    int si  = -1,sj = -1, di = -1, dj = -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
            vis[i][j] = false;
            parent[i][j] = {-1,-1};
            if(grid[i][j] == 'R'){
                si = i;
                sj = j;
            }
            else if(grid[i][j] == 'D'){
                di = i;
                dj = j;
            }
        }
    }
    
    bfs(si,sj);

    int x = di;
    int y = dj;
    while(1){
        pair<int,int> par = parent[x][y];
        x = par.first;
        y = par.second;
        if(grid[x][y] == 'R' || x == -1||y == -1){
            break;
        }
        grid[x][y] = 'X';
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           cout << grid[i][j];
        }
        cout <<"\n";
    }

    
    return 0;
}