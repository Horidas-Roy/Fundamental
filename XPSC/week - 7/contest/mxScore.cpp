#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int score = 0;
        for(int i=0; i+1<n; i+=2){
            score += abs(v[i] - v[i+1]);
        }
        cout << score <<"\n";
    }

    return 0;
}