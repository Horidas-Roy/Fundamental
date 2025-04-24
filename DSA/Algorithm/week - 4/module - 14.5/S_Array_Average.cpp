#include<bits/stdc++.h>
using namespace std;
double sum(vector<int> &v,int idx){
    if(idx < 0){
        return 0;
    }
    return v[idx] + sum(v,idx-1);
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    double res = (double) sum(v,n-1)/n;
    cout << fixed << setprecision(6) << res << endl;
    return 0;
}