#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    map<int,int> mp;
    mp[0] = 1;
    long long sum = 0;
    long long cnt = 0;
    for(int i=0; i<n; i++){
        sum += v[i];
        int reminder =  sum%n;
        if(reminder<0){
            reminder += n;
        }
        cnt += mp[reminder];
        mp[reminder]++;
    }
    cout << cnt << endl;
    return 0;
}