#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,c; cin >> n >> c;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int extra = 0;
        while(1){
            int less = false;
            int equal = false;
            int val = c+extra;
            for(int i=0; i<n; i++){
                if(val > v[i]) less = true;
                if(v[i] == val) equal = true;
            }

            if(less && !equal){
                cout << extra << endl;
                break;
            }
            extra++;
        }
    }

    return 0;
}