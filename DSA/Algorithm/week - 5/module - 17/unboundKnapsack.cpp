#include<bits/stdc++.h>
using namespace std;
int val[1005];

int knapsack(int i, int sum){
    if(i < 0){
        if(sum == 0) return 1;
        return 0;
    }
    if(val[i] <=  sum){
        int op1 = knapsack(i,sum - val[i]);
        int op2 = knapsack(i-1,sum);
        return op1+op2;
    }
    else{
        return knapsack(i-1,sum);
    }
}

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> val[i];
    }
    int sum; cin >> sum;
    cout << knapsack(n-1,sum);
    return 0;
}