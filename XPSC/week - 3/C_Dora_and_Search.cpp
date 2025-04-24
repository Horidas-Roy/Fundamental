#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        deque<int> dq;
        deque<int> sorted;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            dq.push_back(x);
            sorted.push_back(x);
        }
        sort(sorted.begin(),sorted.end());
        int l = 1, r = n;
        while(!dq.empty()){
            int mxVal = sorted.back();
            int mnVal = sorted.front();
            if(dq.front() == mxVal){
                 dq.pop_front();
                 sorted.pop_back();
                 l++;
            }
            else if(dq.front() == mnVal){
                dq.pop_front();
                sorted.pop_front();
                l++;
            }
            else if(dq.back() == mxVal){
                 dq.pop_back();
                 sorted.pop_back();
                 r--;
            }
            else if(dq.back() == mnVal){
                 dq.pop_back();
                 sorted.pop_front();
                 r--;
            }
            else{
                break;
            }
        }
        if(l<r){
            cout << l <<" "<< r <<"\n";
        }
        else{
            cout << -1 << "\n";
        }
     }
    return 0;
}