#include<bits/stdc++.h>
using namespace std;

void even_indices(vector<int> v,int idx){
      if(idx < 0) return;
      if(idx%2 == 0){
         cout << v[idx] <<" ";
      }
      even_indices(v,--idx);
}

int main(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int idx = arr.size()-1;
    even_indices(arr,idx);
    return 0;
}