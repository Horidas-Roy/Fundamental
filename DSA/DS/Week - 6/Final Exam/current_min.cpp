#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    priority_queue<long long int,vector<long long int>,greater<long long int>> pq;
    for(int i=0; i<n; i++){
        long long int val; cin >> val;
        pq.push(val);
    }
    int t; cin >> t;
    while(t--){
        int q; cin >> q;
        if(q == 0){
            long long int x; cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if( q == 1){
            if(!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if(q == 2){
            if(!pq.empty())
                pq.pop();
            if(!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}