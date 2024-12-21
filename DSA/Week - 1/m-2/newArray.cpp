#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    int x;
    for(int i=0; i<n; i++){
           cin >> x;
           v1[i] = x;
    }
    for(int i=0; i<n; i++){
           cin >> x;
           v2[i] = x;
    }
    v2.insert(v2.end(),v1.begin(),v1.end());
    for(int i=0; i<v2.size(); i++){
           cout << v2[i] <<" ";
    }
    return 0;
}