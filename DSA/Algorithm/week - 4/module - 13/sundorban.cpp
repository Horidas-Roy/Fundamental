#include<bits/stdc++.h>
using namespace std;
char grid[32][32];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
bool vis[32][32];
pair<int,int> par[32][32];
int n;

bool valid(int i,int j){
    if(i<0 || i >= n || j<0 || j>=n){
        return false;
    }
    return true;
}

void bfs(int si,int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    while(!q.empty()){
        pair<int,int> parent = q.front();
        q.pop();
        int par_i = parent.first;
        int par_j = parent.second;
        for(int i=0; i<4; i++){
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && 
                (grid[ci][cj] == 'P' ||grid[ci][cj] == 'S' ||grid[ci][cj] == 'E')){
                    q.push({ci,cj});
                    vis[ci][cj] = true;
                    par[ci][cj] = { par_i, par_j };
            }
        }
    }
}


int main(){
    cin >> n;
    int si=-1,sj = -1,di = -1,dj = -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> grid[i][j];
            vis[i][j] = false;
            par[i][j] = {-1,-1};

            if(grid[i][j] == 'S'){
                si = i;
                sj = j;
            }
            else if(grid[i][j] == 'E'){
                di = i;
                dj = j;
            }
        }
    }
    

    bfs(si,sj);

    int i = di, j = dj;
    int cnt = 0;
    while(i != si || j != sj){
          cnt++;
          //grid[i][j] = 'R';
          pair<int,int> p = par[i][j];
          i = p.first;
          j = p.second;
    }
    
    cout << cnt <<"\n";

   
    
    return 0;
}