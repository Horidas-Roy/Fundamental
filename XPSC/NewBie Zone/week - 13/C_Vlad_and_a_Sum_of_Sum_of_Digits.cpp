#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int limit = 2e5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> sumOfNumbers(limit+1,0);
    for(int i=1; i<=limit; i++){
        ll digitSum = 0;
        int temp = i;
        while(temp != 0){
            digitSum += (temp%10);
            temp /= 10;
        }
        sumOfNumbers[i] = sumOfNumbers[i-1]+digitSum;
    }

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << sumOfNumbers[n] << endl;
    }

    return 0;
}