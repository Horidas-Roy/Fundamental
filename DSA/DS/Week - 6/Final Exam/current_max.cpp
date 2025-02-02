#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
      string name;
      int roll;
      int marks;
      Student(string name,int roll,int marks){
          this->name = name;
          this->roll = roll;
          this->marks = marks;
      }
};

class cmp{
    public:
        bool operator()(Student a,Student b){
            if(a.marks == b.marks){
                return a.roll > b.roll;
            }else{
                return a.marks < b.marks;
            }
        }
};

int main(){
    int n; cin >> n;
    priority_queue<Student,vector<Student>,cmp> pq;
    string name;
    int roll,marks;
    for(int i=0; i<n; i++){
        cin >> name >> roll >> marks;
        Student s(name,roll,marks);
        pq.push(s);
    }

    int t; cin >> t;
    while(t--){
        int q; cin >> q;
        if(q == 0){
            cin >> name >> roll >> marks;
            Student s(name,roll,marks);
            pq.push(s);
            if(pq.empty()){
                cout << "Empty" << endl;
            }else{
                cout << pq.top().name <<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
        }
        else if(q == 1){
            if(pq.empty()){
                cout << "Empty" << endl;
            }else{
                cout << pq.top().name <<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
        }
        else if( q == 2){
            if(!pq.empty())
                pq.pop();
            if(pq.empty()){
                cout << "Empty" << endl;
            }else{
                cout << pq.top().name <<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
        }
    }
    return 0;
}