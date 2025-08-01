#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string result;
        vector<int> lower;
        vector<int> upper;
        for(char ch : s){ 
            if(ch == 'b'){
                if(!lower.empty()){
                    result[lower.back()] = '\0';
                    lower.pop_back();
                }
            }
            else if( ch == 'B'){
                if(!upper.empty()){
                    result[upper.back()] = '\0';
                    upper.pop_back();
                }
            }
            else{
                result.push_back(ch);
                if(islower(ch)){
                    lower.push_back(result.size()-1);
                }
                if(isupper(ch)){
                    upper.push_back(result.size()-1);
                }
            }
        }
        for(char c : result){
            if(c != '\0'){
                cout << c;
            }
        }
        cout << "\n";
    }
    return 0;
}