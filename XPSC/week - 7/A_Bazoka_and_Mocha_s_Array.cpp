#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        bool ok = false;
        for(int k = 0; k<n; k++){
            for(int i=1; i<n; i++){
                if(v[i] < v[i-1]){
                    vector<int> x(v.begin(),v.begin()+i);
                    vector<int> y(v.begin()+i,v.end());
                    v.clear();
                    v.insert(v.end(),y.begin(),y.end());
                    v.insert(v.end(),x.begin(),x.end());
                    break;
                }
            }
            if(is_sorted(v.begin(),v.end())){
                ok = true;
                break;
            }
        }
        if(ok){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }

    return 0;
}