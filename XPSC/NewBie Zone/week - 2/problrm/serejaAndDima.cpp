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
    int sereja = 0, dima = 0;
    bool serejaTurn = true;
    while(!v.empty()){
        if(serejaTurn){
            if(v.front() > v.back()){
                sereja += v.front();
                v.erase(v.begin());
            }
            else{
                sereja += v.back();
                v.pop_back();
            }
            serejaTurn = false;
        }
        else{
            if(v.front() > v.back()){
                dima += v.front();
                v.erase(v.begin());
            }
            else{
                dima += v.back();
                v.pop_back();
            }
            serejaTurn = true;
        }
    }
    cout << sereja << " " << dima;
    return 0;
}