#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0; i<7; i++){
        cout << string(i+1,'a');
        if(i>0)
            cout << string(i,'b');
        if(i>1)
            cout << string(i-1,'*');
        cout << string(1,'A'+ 2*i);

        cout<<endl;
    }
    return 0;
}