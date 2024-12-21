#include<bits/stdc++.h>
using namespace std;
class Student{
      public:
      string name;
      int roll;
      char section;
      float math_marks;
	  int cls;

      Student(string name,int roll,char section,float math_marks,int cls){
            this->name = name;
            this->roll = roll;
            this->section = section;
            this->math_marks = math_marks;
            this->cls = cls;
      }
};
int main(){
    Student akash("Akash",30,'A',90,9);
    Student batash("Batash",40,'A',79,9);
    Student mohakash("Mohakash",20,'A',81,9);

    if(akash.math_marks >= batash.math_marks 
            && akash.math_marks >= mohakash.math_marks){
        cout << akash.name ;
    }
    else if(batash.math_marks > akash.math_marks
           && batash.math_marks >= mohakash.math_marks){
        cout << batash.name;
    }else{
        cout << mohakash.name;
    }
    return 0;
}