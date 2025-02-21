#include<bits/stdc++.h>
using namespace std;
bool vis[105][105];
int level[105][105];
vector<pair<int,int>> d = {{-2,-1},{-2,1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2},{-1,2}};
int n,m;

bool isValid(int i, int j){
    if(i<0 || i>= n || j<0 || j>=m){
        return false;
    }
    return true;
}

void bfs(int si,int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty()){
        pair<int,int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        for(int i=0; i<8; i++){
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if(isValid(ci,cj) && !vis[ci][cj]){
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        int ki,kj; cin >> ki >> kj;
        memset(vis,false,sizeof(vis));
        memset(level,-1,sizeof(level));
        bfs(ki,kj);
        int qi,qj; cin >> qi >> qj;
        cout << level[qi][qj] << "\n";
    }
    
    return 0;
}