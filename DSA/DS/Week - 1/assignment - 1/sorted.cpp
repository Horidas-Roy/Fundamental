#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        bool sorted = true;
        for(int i=1; i<n; i++){
                if(v[i] < v[i-1]){
                    sorted = false;
                }
        }
        if(sorted){
        cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    
    
    return 0;
}