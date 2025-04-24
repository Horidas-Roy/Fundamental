#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int t; cin >> t;
    while(t--){
        int n,m,q; cin >> n >> m >> q;
        vector<int> t(m);
        for(int i=0; i<m; i++){
             cin >> t[i];
        }
        sort(t.begin(),t.end());
        while(q--){
            int stdPos; cin >> stdPos;
            if(stdPos < t[0]){
                cout << t[0] - 1 <<"\n";
            }
            else if(stdPos > t[m-1]){
                cout << n - t[m-1] << "\n"; 
            }
            else{
                int t2 = n;
                int t1 = 1;
                auto it = upper_bound(t.begin(),t.end(),stdPos);
                if(it == t.end()){
                    t2 = *(--it);
                }
                else if(it != t.end()){
                    t2 = *it;
                }

                if(it != t.begin()){
                    t1 = *(--it);
                }
                int move = (t2-t1)/2;
                cout << move << "\n";
            }
        }
    }
     
    return 0;
}