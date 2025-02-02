#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4};
    // v.resize(2);
    // v.resize(4);
    // v.pop_back();
    v.insert(v.begin()+2,20);
    for(int value : v){
        cout << value << endl;
    }
    return 0;
}