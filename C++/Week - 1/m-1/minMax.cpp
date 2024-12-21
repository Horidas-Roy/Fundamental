#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y ;
    cout << x << "  " << y << endl;
    cout <<"min: "<< min(x,y) << endl;
    cout <<"max: "<< max(x,y) << endl;
    swap(y,x);
    cout << x << "  " << y << endl;


    return 0;
}
