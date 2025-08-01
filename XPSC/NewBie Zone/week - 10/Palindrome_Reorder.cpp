#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int sz = s.size();
    vector<int> freq(26,0);
    for(int i=0; i<sz; i++){
        int idx = s[i] - 'A';
        freq[idx] += 1;
    }
    int odd = 0;
    bool posible = true;
    for(int i=0; i<26; i++){
        if(freq[i]%2 != 0){
            odd++;
        }
        if(odd > 1){
            posible = false;
            break;
        }
    }
    if(!posible){
        cout << "NO SOLUTION\n";
        return 0;
    }
    deque<char> newStr;
    //handle odd number character
    for(int i=0; i<26; i++){
        if(freq[i]%2 == 1){
            for(int j=0; j<freq[i]; j++){
                char ch = 'A' + i;
                newStr.push_back(ch);
            }
            freq[i] = 0;
            break;
        }
    }
    //handle even number char
    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            for(int j=0; j<freq[i]/2; j++){
                char ch = 'A' + i;
                newStr.push_front(ch);
            }
            for(int j=0; j<freq[i]/2; j++){
                char ch = 'A' + i;
                newStr.push_back(ch);
            }
        }
    }
    for(char ch : newStr){
        cout << ch;
    }
    return 0;
}