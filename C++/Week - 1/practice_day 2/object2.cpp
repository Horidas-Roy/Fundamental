#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
	int jersey_no;
	string country;
};

int main(){
    Cricketer* dhoni = new Cricketer;
    dhoni->jersey_no = 7;
    dhoni->country = "india";
    Cricketer* kohli = new Cricketer;
    
    //don't given out
    // kohli = dhoni;
    // delete dhoni;

    //output given
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    //alternate solution *kohli = *dhoni //best approach

    cout << kohli->jersey_no << " " << kohli->country;
    return 0;
}