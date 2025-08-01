#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int digit = to_string(n).size();
    vector<int> ans;
    for(int i=1; i<=digit; i++){
        for(int k=0; k<(1<<i); k++){
            int num = 0;
            if((i>>k)&1){
                num = num*10 + 7;
            }
            else{
                num = num*10 + 4;
            }
            ans.push_back(num);
        }
    }
    for( int val : ans){
        cout << val <<" ";
    }

    return 0;
}