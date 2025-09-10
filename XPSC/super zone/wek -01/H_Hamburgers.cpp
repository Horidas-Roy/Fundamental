#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    ll nb,ns,nc; cin >> nb >> ns >> nc;
    ll pb,ps,pc; cin >> pb >> ps >> pc;
    ll rubles; cin >> rubles;

    ll B = 0, S = 0, C=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'B') B++;
        if(s[i] == 'S') S++;
        if(s[i] == 'C') C++;
    }

    auto ok = [&](ll mid){
        ll needB = max(0LL,mid*B-nb);
        ll needS = max(0LL,mid*S-ns);
        ll needC = max(0LL,mid*C-nc);
        __int128 cost = 1LL*needB*pb + 1LL*needC*pc + 1LL*needS*ps;

        return cost <= rubles;
    };

    ll l = 0, r = 1e13, mid, ans = 0;
    while(l<=r){
        mid = l + (r-l)/2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}