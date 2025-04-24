#include<bits/stdc++.h>
using namespace std;
int val[1005];

int countSubsetSum(int i,int sum){
    if(i < 0){
        if(sum == 0) return 1;
        else return 0;
    }
    if(val[i] <= sum){
        int opt1 = countSubsetSum(i-1,sum - val[i]);
        int opt2 = countSubsetSum(i-1,sum);
        return opt1 + opt2;
    }
    else{
        return countSubsetSum(i-1,sum);
    }
}

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> val[i];
    }
    int sum; cin >> sum;
    cout << countSubsetSum(n-1,sum);
    return 0;
}