#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e; cin >> n >> e;
    // int adj_mat[n+1][n+1];
    vector<vector<int>> adj_mat(n+1,vector<int>(n+1,0));
    // memset(adj_mat,0,sizeof(adj_mat));
    while(e--){
        int a,b; cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1; // undirected
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << adj_mat[i][j] <<" ";
        }
        cout <<"\n";
    }
    return 0;
}