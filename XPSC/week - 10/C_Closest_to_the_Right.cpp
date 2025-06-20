#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q; cin >> n >> q;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<q; i++){
        int x; cin >> x;
        int l = 0, r = n-1,mid;
        int idx = n;
        while (l<=r){
            mid = l + (r-l)/2;
            if(v[mid] >= x){
                r = mid-1;
                idx = mid;
            }
            else{
                l = mid + 1;
            }
        }
        cout << idx + 1 <<"\n";
    }
    return 0;
}