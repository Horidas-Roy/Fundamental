#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n  >> k;
        map<int,set<int>> mp;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            mp[x].insert(i);
        }
        while(k--){
            int a,b; cin >> a >> b;
            if(mp.find(a) == mp.end() || mp.find(b) == mp.end()){
                cout <<"NO\n";
            }else{
                int leftIndexOfA = *mp[a].begin();
                int rightIndexOfB = *mp[b].rbegin();
                if(rightIndexOfB>leftIndexOfA){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }
    }
    
    return 0;
}