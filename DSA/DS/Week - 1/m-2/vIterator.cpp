#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    // vector<string> v(n);
    // for(int i=0; i<v.size();i++){
    //     string x;
    //     getline(cin,x);
    //     v[i] = x;
    // }

    vector<string> v;
    for(int i=0; i<n; i++){
        string s;
        getline(cin,s);
        v.push_back(s);
    }

    // for(int i=0; i<v.size();i++){
    //     cout << v[i] << endl;
    // }

    for(string it : v){
        cout << it << endl;
    }
    return 0;
}