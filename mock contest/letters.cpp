#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    int freq[26] = {0};
    for (int i = 0; i < sz; i++)
    {
        char ch = s[i];
        int idx = ch - 'a';
        if (freq[idx] == 0)
        {
            freq[idx] += 1;
        }
    }
    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            char ch = 'a' + i;
            cout << ch;
        }
    }
    return 0;
}