#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,w; cin >> n >> w;
        multiset<int> ms;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            ms.insert(x);
        }
        int currentBoxWidth = w, height = 1;
        while (!ms.empty())
        {
            auto it = ms.upper_bound(currentBoxWidth);
            if(it != ms.begin()){
                it--;
                currentBoxWidth -= *it;
                ms.erase(it);
            }
            else{
                height++;
                currentBoxWidth = w;
            }
        }
        
        cout << height << endl;
     }
    return 0;
}