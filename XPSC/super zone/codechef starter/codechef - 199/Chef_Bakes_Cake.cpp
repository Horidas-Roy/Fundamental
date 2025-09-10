#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,y; cin >> n >> x >> y;
    int singleVehicle = y/x;
    cout << ceil((n)/(singleVehicle*1.0)) << endl;

    return 0;
}