#include<bits/stdc++.h>
using namespace std;
int main(){
    list<string> l;
    string val;
    while(cin >> val){
        if(val == "end"){
            break;
        }
        l.push_back(val);
    }
    int q; cin >> q;
    cin.ignore();
    auto head = l.begin(); 
    string s;
    while(q--){
        getline(cin,s);
        if( s == "next"){
            auto nextHead = next(head,1);
            if(nextHead != l.end()){
                head = nextHead;
                cout << *head <<  endl;
            }
            else{
                cout << "Not Available" <<endl;
            }
        }
        else if( s == "prev"){
            if(head != l.begin()){
                auto nextHead = prev(head,1);
                head = nextHead;
                cout << *head <<  endl;
            }else{
                cout << "Not Available" <<endl;
            }
        }
        else{
            stringstream ss(s);
            string word;
            ss >> word;
            ss >> word;
            auto result = find(l.begin(),l.end(),word);
            if(result != l.end()){
                head = result;
                cout << *result << endl;
            }else{
                cout << "Not Available" <<endl;
            }
        }
    }
    return 0;
}