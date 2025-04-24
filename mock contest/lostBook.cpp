#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin >> n;
    vector<long long int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    long long int target; cin >> target;
    
    int x = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
              x = i;
              break;
        }
    }

    cout << x;
    
    return 0;
}