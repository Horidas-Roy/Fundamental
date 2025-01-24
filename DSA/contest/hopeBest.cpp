#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        if(n <= 2){
            cout << "YES" << endl;
            continue;
        }
        
        bool isGood = false;
        do
        {   
            bool flag = true;
            for(int i=1; i<n-1 ; i++){
                 if(v[i-1]+v[i] != v[i]+v[i+1]){
                    flag = false;
                    break;
                 }
            }
            if(flag){
                isGood = true;
                break;
            }
        } while (next_permutation(v.begin(),v.end()));
        if(isGood) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}