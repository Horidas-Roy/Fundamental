#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<ll,ll> l,pair<ll,ll> r){
       return (double) l.first/l.second < (double) r.first/r.second;
}

int main() {
	ll t; cin >> t;
	while(t--){
	    ll n,h; cin >> n >> h;
	    ll x,y;
	    vector<pair<ll,ll>> v;
	    while(n--){
	        cin >> x >> y;
	        v.push_back({x,y});
	    }
	    sort(v.begin(),v.end(),cmp);
        ll s=0;
        for(auto [x,y] : v){
             if(h <= 0) break;
             if(h >= y){
                while(h>= y){
                    h -= y;
                    s += x;
                }
             }
             else{
                h -= y;
                s += x;
             }

            // cout << x <<" " << y <<"\n";
        }
        cout << s <<"\n";
	}

}
