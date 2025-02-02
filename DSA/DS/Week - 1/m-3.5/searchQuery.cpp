#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int t;
    cin >> t;
    while (t--)
    {   
        int target;
        cin >> target;
        int l = 0, r=n-1;
        bool flag = false;
        while (l<=r)
        {    
            int mid = l+(r-l)/2;
            if(v[mid] == target){
                flag = true;
                break;
            }
            else if(v[mid] < target){
                 l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        if(flag){
            cout << "YES"<< endl;
        }else{
           cout << "NO"<<endl;
        } 

        
    }
    
    return 0;
}