#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string rootPalindrome = "aab", resultPallindrome = "";
        for(int i=0; i<n; i++){
            int idx = i % 3;
            resultPallindrome += rootPalindrome[idx];
        }
        cout << resultPallindrome << endl;
    }

    return 0;
}