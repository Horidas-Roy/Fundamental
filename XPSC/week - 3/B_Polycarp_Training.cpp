#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    multiset<int> ml;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        ml.insert(x);
    }
    int ans = 0, problem = 1;
    while(!ml.empty()){
        auto it = ml.lower_bound(problem);
        if(it != ml.end()){
             ans++;
             ml.erase(it);
        }else{
            break;
        }
        problem++;
    }
    cout << ans ;
    return 0;
}