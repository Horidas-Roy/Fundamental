#include<bits/stdc++.h>
using namespace std;
int par[1005];
int groupSz[1005];

int find(int node){
    if(par[node] == -1){
        return node;
    }
    int leader =  find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int a,int b){
    int lead1 = find(a);
    int lead2 = find(b);
    if(groupSz[lead1] >= groupSz[lead2]){
        par[lead2] = lead1;
        groupSz[lead1] += groupSz[lead2];
    }else{
        par[lead1] = lead2;
        groupSz[lead2] += groupSz[lead1];
    }
}

int main(){
    int n; cin >> n;
    int e = n-1;
    memset(par,-1,sizeof(par));
    memset(groupSz,1,sizeof(groupSz));

    vector<pair<int,int>> rmv;
    vector<pair<int,int>> create;
    while (e--)
    {
        int a,b; cin >> a >> b;
        int lead1 = find(a);
        int lead2 = find(b);
        if(lead1 == lead2){
            rmv.push_back({a,b});
        }else{
            dsu_union(a,b);
        }
    }

    for(int i=2; i<=n; i++){
        int lead1 = find(1);
        int lead2 = find(i);
        if(lead1 != lead2){
             create.push_back({1,i});
             dsu_union(1,i);
        }
    }
    
    cout << rmv.size() <<"\n";
    
    for(int i=0; i<rmv.size(); i++){
        cout << rmv[i].first <<" "<<rmv[i].second <<" ";
        cout << create[i].first <<" "<<create[i].second <<"\n";
    }
    
    return 0;
}