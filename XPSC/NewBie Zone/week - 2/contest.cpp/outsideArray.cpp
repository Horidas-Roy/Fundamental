#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        if(v.size() == 1){
            cout << v[0] <<" "<< v[0] <<"\n";
            continue;
        }
        int flag = 1;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int x = v[i] + v[j];
                auto it = find(v.begin(),v.end(),x);
                if(it == v.end()){
                    cout << v[i] <<" "<< v[j] <<"\n";
                    flag = 0;
                    break;
                }
            }
            if(flag == 0) break;
        }
        if(flag){
            cout << -1 <<"\n";
        }
    }
    return 0;
}