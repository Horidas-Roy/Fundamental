#include<bits/stdc++.h>
using namespace std;
int adj_mat[100][100];

void matrixToList(int adj_mat[][100],int n){
      vector<int> adj_list[n];
      for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(adj_mat[i][j] == 1){
                adj_list[i].push_back(j);
            }
        }
      }
      for(int i=0; i<n; i++){
        cout << i << "--> ";
        for(int val : adj_list[i]){
            cout << val <<" ";
        }
        cout << endl;
      }
}

int main(){
    int n,e; cin >> n >> e;
    while(e--){
        int a,b; cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1; // undirected
    }

    matrixToList(adj_mat,n);
    
    return 0;
}