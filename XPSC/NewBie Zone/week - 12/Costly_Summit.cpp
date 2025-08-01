#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,c; cin >> n >> c;
        string s; cin >> s;
        vector<int> freqA(26,0);
        for(char ch : s){
            int idx = ch - 'A';
            freqA[idx]++;
        }
        vector<int> v;
        for(int i=0; i<26; i++){
            if(freqA[i] != 0){
                v.push_back(freqA[i]);
            }
        }
        int mnCost = INT_MAX;
        int sz = v.size();
        for(int mask = 0; mask < (1 << sz); mask++){
            int cost = 0;
            int incre = 1;
            for(int i= 0; i<sz; i++){
                if((mask >> i)&1){
                    cost += c;
                }
                else{
                    int temp = v[i];
                   while(temp--){
                      cost += incre;
                      incre++;
                   }
                }
            }
            mnCost = min(mnCost,cost);
        }
        cout << mnCost << endl;
    }

    return 0;
}