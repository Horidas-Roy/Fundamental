#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n/2; i++){
         for(int j=i; j>0; j--){
             cout << " ";
         }
         cout << "\\";
         for(int j = (n-2*i-2); j>0; j--){
             cout <<" ";
         }
         cout << "/";
         cout << endl;
    }
    for(int i=0; i<n/2; i++){
        cout << " ";
    }
    cout <<"X"<<endl;
    for(int i=0; i<n/2; i++){
         for(int j=(n/2-i-1); j>0; j--){
             cout << " ";
         }
         cout << "/";
         for(int j=0; j<(2*i+1); j++){
             cout <<" ";
         }
         cout << "\\";
         cout << endl;
    }
    return 0;
}