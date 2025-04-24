#include<bits/stdc++.h>
using namespace std;
int val[1005];

bool equalSum(int i, int sum){
    if(i < 0 ){
        if(sum == 0) return true;
        else return false;
    }
    if(val[i] <= sum){
        bool op1 = equalSum(i-1,sum - val[i]);
        bool op2 = equalSum(i-1,sum);
        return op1 || op2;
    }
    else{
        return equalSum(i-1,sum);
    }
}

int main(){
    int n; cin >> n;
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> val[i];
        sum += val[i];
    }
    if(sum%2 != 0){
        cout << "NO";
    }else{
       if(equalSum(n-1,sum/2)){
            cout << "YES";
       }
       else{
            cout << "NO";
       }
    }
    return 0;
}