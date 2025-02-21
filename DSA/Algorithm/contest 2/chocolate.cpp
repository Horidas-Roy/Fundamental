#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int chocolate = 0;
        chocolate = n/5;
        int wrappers = chocolate;
        while(wrappers >= 3){
            int giftChocolate = wrappers/3;
            chocolate += giftChocolate;
            wrappers = (wrappers%3) + giftChocolate;
        }
        cout << chocolate << endl;
    }
    return 0;
}