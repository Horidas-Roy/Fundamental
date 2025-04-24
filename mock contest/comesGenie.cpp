#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    set<long long int> s;
    long long int val;
    while(n--){
        cin >> val;
        s.insert(val);
    }
    long long int sum = 0;
    for(auto it = s.begin(); it != s.end(); it++){
        sum += *it;
    }
    cout << sum;
    return 0;
}