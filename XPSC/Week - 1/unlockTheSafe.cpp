#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    // t =1;
    while (t--)
    {
        int n,k; cin >> n >> k;
        vector<int> A(n);
        for(int i=0; i<n; i++){
            cin >> A[i];
        }
        vector<int> B(n);
        for(int i=0; i<n; i++){
            cin >> B[i];
        }
        if(A == B){
            cout << "No" << endl;
            continue;
        }
        for(int i=0; i<n; i++){
            if(A[i] - B[i] >= 5){
                while(A[i] != B[i] && k != 0){
                      A[i] += 1;
                      if(A[i] == 10){
                         A[i] = 1;
                      }
                      k--;
                }
            }
            else if(B[i] - A[i] >= 5){
                while(A[i] != B[i] && k != 0){
                      B[i] += 1;
                      if(B[i] == 10){
                         B[i] = 1;
                      }
                      k--;
                }
            }
            else{
                if(A[i] < B[i]){
                    while(A[i] != B[i] && k != 0){
                        A[i] += 1;
                        if(A[i] == 10){
                           A[i] = 1;
                        }
                        k--;
                    }
                }
                else{
                    while(A[i] != B[i] && k != 0){
                        B[i] += 1;
                        if(B[i] == 10){
                           B[i] = 1;
                        }
                        k--;
                    }
                }
            }
            if(k == 0) break;
        }
        for(int i=0; i<n; i++){
            cout << A[i] <<" ";
         }
         cout << endl;
         for(int i=0; i<n; i++){
             cout << B[i] <<" ";
         }
         cout << endl;
        if(A == B){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}