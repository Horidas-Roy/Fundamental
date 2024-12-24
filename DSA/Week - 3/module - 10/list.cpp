#include<bits/stdc++.h>
using namespace std;
int main(){
    // list<int> l(10,3);
    // list<int> l = {1,2,3,4,5,6,7,8,9,10};
    // int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // list<int> l(arr,arr + 10);
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    list<int> l(v.begin(),v.end());
    for(auto it=l.begin(); it != l.end(); it++){
         cout << *it <<" ";
    }
    
    cout << endl;
    // l.resize(15,7);
    // list<int> l2 = l;
    // l.push_back(100);
    // l.push_front(100);
    // l.pop_back();
    // l.pop_front();
    l.insert(next(l.begin(),3),100);
    for(int val:l){
        cout << val << " ";
    }
    return 0;
}