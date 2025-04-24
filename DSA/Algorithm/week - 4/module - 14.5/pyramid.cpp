#include<bits/stdc++.h>
using namespace std;

void pyramid(int space,int star){

    if(space < 0) return;
    
    for(int i=1; i<= space; i++){
        cout << " ";
    }
    for(int i=1; i<= star; i++){
        cout << "*";
    }
    cout << endl;
    pyramid(--space,star+2);
}

int main(){
    int n; cin >> n;
    pyramid(n-1,1);
    return 0;
}