#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,x; cin >> n >> x;
        if(n == 0) return 0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int mx = 0;
        int count = 0;
        for(int i=1,j=0; i<=x; i++){
            count++;
            if(i == v[j]){
                mx = max(mx,count);
                count = 0;
                j++;
            }
        }
        for(int i=x-1,j=n-1; i>=0; i--){
            count++;
            if(i == v[j]){
                mx = max(mx,count);
                count = 0;
                j--;
            }
        }
        cout << mx << endl;
    return 0;
}