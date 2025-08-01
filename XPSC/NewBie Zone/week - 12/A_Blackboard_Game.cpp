#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool turn = true, winner = false;
        queue<int> q;
        for(int i=0; i<n; i++) q.push(i);
        while(!q.empty()){
            int a = q.front();
            q.pop();
            int b = 3 - a;
            queue<int> q2;
            bool ok = false;
            while(!q.empty()){
                int x = q.front();
                q.pop();
                if(x == b){
                    ok = true;
                }
                else{
                    q2.push(x);
                }
            }
            if(!ok) break;
            q = q2;
            winner = turn;
            turn = !turn;
        }
        if(winner) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }

    return 0;
}
