#include<bits/stdc++.h>
using namespace std;

int* fun(){
    //  int x;
     int *x = new int;
     cin >> *x;
     cout << x << endl;

     return x;
}

int main(){
    int* a = new int;
    *a = 10;
    int* x = fun();
    cout << x << endl;

    return 0;
}