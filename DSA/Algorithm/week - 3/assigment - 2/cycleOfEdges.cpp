#include<bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];

int find(int node){
    if(par[node] == -1){
        return node;
    }
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int a,int b){
    int leaderA = find(a);
    int leaderB = find(b);
    if(group_size[leaderA] >= group_size[leaderB]){
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }else{
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main(){
    int n,e; cin >> n >> e;
    int cnt = 0;
    memset(par,-1,sizeof(par));
    memset(group_size,1,sizeof(group_size));
    while(e--){
        int a,b; cin >> a >> b;
        int laederA = find(a);
        int laederB = find(b);
        if(laederA == laederB){
             cnt++;
        }else{
            dsu_union(a,b);
        }
    }

    cout << cnt;
    
    return 0;
}