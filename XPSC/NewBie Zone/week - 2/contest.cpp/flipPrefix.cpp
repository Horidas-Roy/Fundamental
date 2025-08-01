#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int zero = 0, one = 0;
        int idx;
        if(s[0] == '0'){
            for(int i=0; i<n; i++){
                if(s[i] == '0'){
                    zero++;
                }
                else{
                    idx = i;
                    break;
                }
            }
            for(int i=idx; i<n; i++){
                if(s[i] == '1'){
                    one++;
                }
                else{
                    break;
                }
            }
            if(zero <= one){
                cout << zero*2 <<"\n";
            }
            else{
                cout << 1 <<"\n";
            }
        }
        else{
            for(int i=0; i<n; i++){
                if(s[i] == '1'){
                    one++;
                }
                else{
                    idx = i;
                    break;
                }
            }
            for(int i=idx; i<n; i++){
                if(s[i] == '0'){
                    zero++;
                }
                else{
                    break;
                }
            }
            if(one <= zero){
                cout << one*2 <<"\n";
            }
            else{
                cout << 1 <<"\n";
            }
        }
    }
    return 0;
}