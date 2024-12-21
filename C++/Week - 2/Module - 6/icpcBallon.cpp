#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int length;
        cin >> length;
        string s;
        cin >> s;
        
        int countBallon = 0;
        string givenBallon = "";
        for(int i=0; i<length; i++){
            size_t searchResult = givenBallon.find(s[i],0);
            if(searchResult == string::npos){
                countBallon += 2;
                givenBallon.push_back(s[i]);
            }else{
                countBallon += 1;
            }
        }
        cout << countBallon << endl;
    }

    return 0;
}