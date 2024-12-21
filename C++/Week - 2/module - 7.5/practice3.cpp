#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence;
    getline(cin,sentence);
    string word;
    getline(cin,word);
    stringstream ss(sentence);
    string w;
    int count = 0;
    while(ss >> w){
        if(word == w){
            count++;
        }
    } 
    cout << count;
    return 0;
}