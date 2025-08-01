#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k; cin >> n >> m >> k;
    vector<int> applicant(n),apartment(m);
    for(int i=0; i<n; i++){
        cin >> applicant[i];
    }
    sort(applicant.begin(),applicant.end());
    for(int i=0; i<m; i++){
        cin >> apartment[i];
    }
    sort(apartment.begin(),apartment.end());
    int i = 0, j = 0, cnt = 0;
    while(i < n && j < m ){
        if(abs(applicant[i]-apartment[j]) <= k){
             cnt++;
             i++;
             j++;
        }
        else if(applicant[i] - k > apartment[j]){
            j++;
        }
        else{
            i++;
        }
    }
    cout << cnt <<"\n";
    return 0;
}