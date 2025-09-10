#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int l=0,r =0,operation = 0;
        bool R=false,G=false,B=false;
        while(r<n){
            if(s[r] == 'R')  R = true;
            if(s[r] == 'G')  G = true;
            if(s[r] == 'B')  B = true;
            if(r-l+1 == 3){
                if(!R)  operation++;
                if(!G)  operation++;
                if(!B)  operation++;

                if(s[l] == 'R')  R = false;
                if(s[l] == 'G')  G = false;
                if(s[l] == 'B')  B = false;
                l++;
            }
            r++;
        }
        cout << operation << endl;
    }

    return 0;
}