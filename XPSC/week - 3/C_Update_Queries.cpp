#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,m; cin >> n >> m;
        string s; cin >> s;
        set<int> st;
        for(int i=0; i<m; i++){
            int x; cin >> x;
            st.insert(x);
        }
        string c; cin >> c;
        sort(c.begin(),c.end());
        int charIndx = 0;
        for(auto it = st.begin(); it != st.end(); it++){
             int ind = *it;
             s[ind-1] = c[charIndx];
             charIndx++;
        }
        cout << s <<"\n";
     }
    return 0;
}