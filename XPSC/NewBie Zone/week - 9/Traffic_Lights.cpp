#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,n; cin >> x >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    set<int> road = {0,x};
    multiset<int> space = {x-0};
    for(int i=0; i<n; i++){
        road.insert(v[i]);
        auto it = road.find(v[i]);
        int preVal = *prev(it);
        int nxtVal = *next(it);
        
        space.erase(space.find(nxtVal - preVal));
        space.insert(*it - preVal);
        space.insert(nxtVal - *it);

        cout << *space.rbegin() <<" ";

    }
    return 0;
}