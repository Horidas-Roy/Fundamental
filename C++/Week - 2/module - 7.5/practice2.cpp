#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
	int roll;
	int marks;
};

int main(){

    int n;
    cin >> n;

    Student *arr = new Student[n];
    for(int i=0; i<n; i++){
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    for(int i=0, j=n-1; i<j; i++,j--){
        //  swap(arr[i],arr[j]);
         Student temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
    }
    for(int i=0; i<n; i++){
        cout << arr[i].name <<" "<< arr[i].roll <<" "<< arr[i].marks<<endl;
    }
    
    return 0;
}