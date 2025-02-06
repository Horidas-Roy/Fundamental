#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m){
        return false;
    }
    return true;
}

void dfs(int si,int sj){
        cout << si <<" "<< sj <<"\n";
        vis[si][sj] = true;
        for(int i=0; i<4; i++){
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj]){
                dfs(ci,cj);
                vis[ci][cj] = true;
            }
        }
}

void bfs(int si, int sj){
     queue<pair<int,int>> q;
     q.push({si,sj});
     vis[si][sj] = true;
     while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        int par_i = p.first;
        int par_j = p.second;
        
        cout << par_i <<" "<< par_j <<"\n";
        
        for(int i=0; i<4; i++){
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj]){
                bfs(ci,cj);
                vis[ci][cj] = true;
            }
        }
     }
}

int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
              cin >> grid[i][j];
        }
    } 
    memset(vis,false,sizeof(vis));
    bfs(2,2);
    return 0;
}