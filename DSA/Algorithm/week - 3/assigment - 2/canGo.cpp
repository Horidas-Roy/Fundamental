#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
        int a,b,w;
        Edge(int a, int b, int w){
            this->a = a;
            this->b = b;
            this->w = w;
        }
};




int main(){
    int n,e; cin >> n >> e;
    vector<Edge> edge_list;
    while(e--){
        int a,b,w; cin >> a >> b >> w;
        edge_list.push_back(Edge(a,b,w)); 
    }

    vector<long long int> dis(n+1,LLONG_MAX);

    int s; cin >> s;
    dis[s] = 0;
    
    for(int j=0; j<n-1; j++){
        for(auto ed : edge_list){
            int a,b,w;
            a = ed.a;
            b = ed.b;
            w = ed.w;
            if(dis[a] != LLONG_MAX && dis[a]+w < LLONG_MAX && dis[a]+w < dis[b]){
               dis[b] = dis[a]+w;
            }
       }
    }
    bool cycle = false;
    for(auto ed : edge_list){
        int a,b,w;
        a = ed.a;
        b = ed.b;
        w = ed.w;
        if(dis[a] != LLONG_MAX && dis[a]+w < LLONG_MAX && dis[a]+w < dis[b]){
           cycle = true;
           break;
        }
   }

   if(cycle){
      cout << "Negative Cycle Detected" <<"\n";
      return 0;
   }

   int t; cin >> t;
   while(t--){
       int d; cin >> d;
       if(dis[d] == LLONG_MAX){
        cout << "Not Possible" <<"\n";
       }else{
          cout << dis[d] << "\n";
       }
   }

    return 0;
}