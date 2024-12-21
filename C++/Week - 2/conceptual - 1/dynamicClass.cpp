#include<bits/stdc++.h>
using namespace std;

class Player{
    public:
    string name;
    string country_name;
    int jersy_no;

    Player(string name,string country_name,int jersy_no){
          this->name = name;
          this->country_name = country_name;
          this->jersy_no = jersy_no;
    }

    void chaneJersyNo(int n){
        this->jersy_no = n;
    }
};

int main(){
    Player* dhoni = new Player("Dhoni","india",7);
    Player* kohli = new Player("Kohli","India",27);
    //dhoni = kohli;
    *dhoni = *kohli;
    delete dhoni;
    //cout << dhoni->name <<" "<<dhoni->country_name<<" "<<dhoni->jersy_no << endl;
    cout << kohli->name <<" "<<kohli->country_name<<" "<<kohli->jersy_no<< endl;
    kohli->chaneJersyNo(25);
    cout << kohli->name <<" "<<kohli->country_name<<" "<<kohli->jersy_no;
    return 0;
}