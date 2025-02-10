#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[100];

void listTomatrix(vector<int> adj_list[100], int n){
        int adj_mat[n][n];
        memset(adj_mat,0,sizeof(adj_mat));
        for (int i = 0; i < n; i++){
            for(int val : adj_list[i]){
                 adj_mat[i][val] = 1;
            }
        }
       for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << adj_mat[i][j] <<" ";
            }
            cout << "\n";
       } 
}

int main(){
    int n,e; cin >> n >> e;
    while(e--){
        int a,b; cin >> a >> b;
        adj_list[a].push_back(b);
    }
    listTomatrix(adj_list,n);
    return 0;
}