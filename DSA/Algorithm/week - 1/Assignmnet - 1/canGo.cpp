#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int n,m;

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i, int j){
    if( i<0 || i>= n || j<0 || j >= m){
        return false;
    }
    return true;
}

void dfs(int si,int sj){
    // cout << si <<" "<< sj <<"\n";
    vis[si][sj] = true;
    for(int i=0; i<4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && (grid[ci][cj] == '.'||grid[ci][cj] == 'B')){
            dfs(ci,cj);
        }
    }
}

int main(){
    cin >> n >> m;
    pair<int,int> roomA;
    pair<int,int> roomB;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'A'){
                roomA = {i,j};
            }
            else if(grid[i][j] == 'B'){
                roomB = {i,j};
            }
        }
    }
    int si = roomA.first;
    int sj = roomA.second;
    dfs(si,sj);

    int dst_i = roomB.first;
    int dst_j = roomB.second;
    if(vis[dst_i][dst_j]){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}