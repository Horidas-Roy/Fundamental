#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair<int, int> p;
    // // p = make_pair(2,3);
    // p = {2,3};
    // cout << p.first <<" "<<p.second;

    int n = 5;
    vector<pair<string,int>> v(n);
    string name;
    int roll;
    for(int i=0; i < n; i++){
        cin >> name >> roll;
        v[i].first = name;
        v[i].second = roll;
    }
    for(int i=0; i < n; i++){
        cout << v[i].first <<" "<<v[i].second<<endl;
    }
    return 0;
}