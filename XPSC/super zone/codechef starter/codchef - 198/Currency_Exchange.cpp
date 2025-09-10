#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int a1,b1,a2,b2; cin >> a1 >> b1 >> a2 >> b2;
        if(a1 == a2 && b1 == b2){
            cout << "Yes" << endl;
            continue;
        }
        if(a1 < a2 && b1 < b2){
            cout << "No" << endl;
            continue;
        }
        
        bool flag = false;
        if (a1 > a2) {
            int A = a1, B = b1;
            B += (A - a2) * 5;
            if (A >= a2 && B >= b2 && (A - a2 == B - b2)) {
                flag = true;
            }
        }
        if (b1 > b2){
            int A = a1, B = b1;
            A += (B - b2) / 5;
            if (A >= a2 && B >= b2 && (A - a2 == B - b2)) {
                flag = true;
            }
        }

        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}