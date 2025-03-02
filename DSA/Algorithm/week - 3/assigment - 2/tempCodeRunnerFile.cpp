int q; cin >> q;
    while(q--){
        int x,y; cin >> x >> y;
        if(mat[x][y] == INT_MAX){
            cout << -1 <<"\n";
        }else{
            cout << mat[x][y] <<"\n";
        }
    }