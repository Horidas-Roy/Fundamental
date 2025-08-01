#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        string s; cin >> s;
        deque<char> dq;
        for(int i=n-1; i>= 0; i--){
            if(s[i] == '0'){
                char ch1 = s[i-2];
                char ch2 = s[i-1];
                int num = (ch1 - '0')*10  +  (ch2 - '0');
                char letter = --num + 'a';
                dq.push_front(letter);
                i -= 2;
                // cout << letter <<" ";
            }
            else{
                int num = s[i] - '0';
                char letter = --num + 'a';
                dq.push_front(letter);
                // cout << letter << " ";
            }
        }
        for(char ch : dq){
            cout << ch;
        }
        cout <<"\n";
     }
    return 0;
}