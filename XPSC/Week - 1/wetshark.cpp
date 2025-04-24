#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    int x;
    long long int sum = 0;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
        sum += x;
    }

    if(sum % 2 == 0){
        cout << sum;
        return 0;
    }

    sort(v.begin(),v.end());
    int sz = v.size();
    for(int i=0; i<sz; i++){
          sum = sum - v[i];
          if(sum % 2 == 0){
            cout << sum;
            break;
          }
          else{
            sum = sum + v[i];
          }
    }
    return 0;
}