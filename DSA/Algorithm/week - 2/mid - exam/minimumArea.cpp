#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
int n,m;

bool isValid(int i, int j){
    if(i<0 || i >= n || j<0 || j>=m){
        return false;
    }
    return true;
}

int component;

void dfs(int si, int sj){
    vis[si][sj] = true;
    component++;
    for(int i=0; i<4; i++){
        int ci =  si + d[i].first;
        int cj =  sj + d[i].second;
        if(isValid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == '.'){
            dfs(ci,cj);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
            vis[i][j] = false;
        }
    }

    int mn = INT_MAX;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!vis[i][j] && grid[i][j] == '.'){
                 component = 0;
                 dfs(i,j);
                 mn = min(mn,component);
            }
        }
    }
    
    if(mn == INT_MAX){
        cout << -1;
    }
    else{
        cout << mn;
    }
    
    
    return 0;
}