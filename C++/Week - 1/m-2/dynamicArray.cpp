#include<bits/stdc++.h>
using namespace std;
int* fun(){
    int *arr = new int[5];
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    return arr;
}

int main(){
    int *a = fun();
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    int *b = new int[7];
    for(int i=0; i<5; i++){
        b[i] = a[i];
    }
    delete[] a; // delete array to avoid waste of memory
    b[5] = 6;
    b[6] = 7;
    for(int i=0; i<7; i++){
        cout << b[i] << " ";
    }
    return 0;
}