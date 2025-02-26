#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e; cin >> n >> e;
    int adj_list[n][n];

    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            if( i == j) adj_list[i][j] = 0;
            else adj_list[i][j] = INT_MAX;
        }
    }

    while(e--){
        int a, b, c; cin >> a >> b >> c;
        adj_list[a][b] = c;
        // adj_list[b][a] = c;
    }

    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if( adj_list[i][k]!= INT_MAX && adj_list[k][j] != INT_MAX &&
                    adj_list[i][k] + adj_list[k][j] < adj_list[i][j]){
                        adj_list[i][j] = adj_list[i][k] + adj_list[k][j];
                }
            }
        }
    }

    bool cycle = false;
    for(int i=0; i<n; i++){
        if(adj_list[i][i] < 0){
            cycle = true;
            break;
        }
    }

    if(cycle){
        cout << " Negative weighted cycle detected";
    }else{
        for(int i =0; i<n; i++){
            for(int j=0; j<n; j++){
                if(adj_list[i][j] == INT_MAX){
                    cout << "INF ";
                }
                else
                    cout << adj_list[i][j] <<" ";
            }
            cout << endl;
        }
    }

    return 0;
}