#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e; cin >> n >> e;
    long long int mat[n+1][n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
              if(i == j) mat[i][j] = 0;
              else mat[i][j] = LLONG_MAX;
        }
    }
    while(e--){
        int a,b,w; cin >> a >> b >> w;
        if(mat[a][b] > w){
            mat[a][b] = w;
        }
    }

    for(int k=1; k<=n; k++){
       for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(mat[i][k] != LLONG_MAX && mat[k][j] != LLONG_MAX &&
                mat[i][k]+mat[k][j] < mat[i][j]){
                    mat[i][j] = mat[i][k]+mat[k][j];
                }
        }
       }
    }

    int q; cin >> q;
    while(q--){
        int x,y; cin >> x >> y;
        if(mat[x][y] == LLONG_MAX){
            cout << -1 <<"\n";
        }else{
            cout << mat[x][y] <<"\n";
        }
    }

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //           if(mat[i][j] == INT_MAX) cout << "INF" <<" ";
    //           else cout << mat[i][j] <<" ";
    //     }
    //     cout <<"\n";
    // }
   

    return 0;
}