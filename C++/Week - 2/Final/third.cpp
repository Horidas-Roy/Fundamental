#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;
};
int main(){
    int n;
    cin >> n;

    Student* arr = new Student[n];
    for(int i=0; i<n; i++){
         cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }

    for(int i=0, j=n-1; i<j; i++,j--){
         swap(arr[i].s,arr[j].s);
    }

    for(int i=0; i<n; i++){
         cout << arr[i].nm <<" "<< arr[i].cls <<" "<< arr[i].s <<" "<< arr[i].id << endl;
    }
    
    return 0;
}