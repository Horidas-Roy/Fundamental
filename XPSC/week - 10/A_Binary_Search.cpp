#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q; cin >> n >> q;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    while(q--){
        int x; cin >> x;
        int l = 0 , r = n-1;
        bool found = false;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(v[mid] == x){
                found = true;
                break;
            }
            else if(v[mid] > x){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        if(found) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}