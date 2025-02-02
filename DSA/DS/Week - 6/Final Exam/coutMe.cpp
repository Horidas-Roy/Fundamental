#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while (t--)
    {
        map<string, int> mp;
        getline(cin, s);
        stringstream ss(s);
        string word;
        string name;
        int count = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > count)
            {
                name = word;
                count = mp[word];
            }
        }
        cout << name << " " << count << endl;
    }
    return 0;
}