#include<bits/stdc++.h>
using namespace std;
int main(){
    int q; cin >> q;
    set<pair<int,int>> s;
    multiset<pair<int,int>> ml;
    int type,customerNo = 1;
    vector<int> ans;
    while(q--){
         cin >> type;
         if(type == 1){
            int money; cin >> money;
            s.insert({customerNo,money});
            ml.insert({money,-customerNo});
            customerNo++;
         }
         else if(type == 2){
            int pos = s.begin()->first , money = s.begin()->second;
            ans.push_back(pos);
            ml.erase({money,-pos});
            s.erase(s.begin());
         }
         else{
            int pos = -ml.rbegin()->second , money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
         }
    }
    for(int val : ans){
        cout << val <<" ";
    }
    return 0;
}