#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int minTime = n;
        for(int i=0; i<n; i++){
            int damage = v[i];
            int restMonster = n - i - 1;
            minTime = min(minTime,damage+restMonster);
        }
        cout << minTime <<"\n";
    }

    return 0;
}