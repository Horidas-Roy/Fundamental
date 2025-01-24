#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int k,n; cin >> n >> k;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        bool canSorted = false;
        if(is_sorted(v.begin(),v.end())){
            canSorted = true;
        }
        else{
            for(int m = 2; m < k; m++){
                for(int sz=1; sz<k; sz += m){
                    vector<int> result;
                    for(int i=0,j=sz; j<n;){
                        vector<int> temp;
                        temp.insert(temp.begin(),v.begin()+i,v.begin()+j);
                        reverse(temp.begin(),temp.end());
                        result.insert(result.end(),temp.begin(),temp.end());
                        i = j+1;
                        j = i+sz;
                    }
                    if(is_sorted(result.begin(),result.end())){
                        canSorted = true;
                        break;
                    }
                }
            }
        }
        if(canSorted) cout << "YES"<< endl;
        else cout << "NO" << endl;
    }
    return 0;
}