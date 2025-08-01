#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> ans;
        for(int i=1; i*i<=n; i++){
            if(n%i == 0){
                ans.push_back(i);
                if(n/i != i){
                    ans.push_back(n/i);
                }
            }
        }
        int even = 0, odd = 0;
        for(int val : ans){
            if(val%2 == 0) even++;
            else odd++;
        }
        cout << odd <<" "<< even << endl;
    }

    return 0;
}