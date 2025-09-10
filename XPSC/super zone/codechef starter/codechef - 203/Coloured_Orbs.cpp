#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r,b; cin >> r >> b;
    int skills = 0;
    skills += (min(r,b)*5);
    if(r>b){
        skills += r-b;
    }
    else{
        skills += (b-r)*2;
    }

    cout << skills << endl;
    return 0;
}