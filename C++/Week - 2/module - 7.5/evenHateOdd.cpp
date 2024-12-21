#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;
        int arr[n], oddNum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] % 2 != 0){
                oddNum++;
            }
        }
        if(n%2 != 0){
            cout << -1 << endl;
            continue;
        }
        int operation = abs(n/2-oddNum);
        cout << operation << endl;
    }
    return 0;
}