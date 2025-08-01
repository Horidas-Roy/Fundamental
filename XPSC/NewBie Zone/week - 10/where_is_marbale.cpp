#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    int case_no = 1;
    while(cin >> n >> q){
        if(n == 0 && q == 0 ) break;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        cout << "CASE# " << case_no++ <<":\n";
        while(q--){
            int x; cin >> x;
            auto it = lower_bound(v.begin(),v.end(),x);
            if(it != v.end() && *it == x){
                cout << x <<" found at " << it - v.begin()+1 << endl;
            }
            else{
                cout << x << " not found" << endl;
            }
        }
    }

    return 0;
}