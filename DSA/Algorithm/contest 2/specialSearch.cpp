#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    int n; cin >> n;
    int arr[n+1];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    int prefixsum[n+1];
    prefixsum[1] = arr[1];
    for(int i=2; i<=n; i++){
        prefixsum[i] = prefixsum[i-1] + arr[i];
    }

    int q; cin >> q;
    bool flag = true;
    while(q--){
        int s; cin >> s;
        int exist = false;
        for(int i=1; i<=n; i++){
            if(s <= prefixsum[i]){
                exist = true;
                cout << i << "\n";
                break;
            }
        }
        if(!exist) cout << -1 << "\n";
    }
    return 0;
}