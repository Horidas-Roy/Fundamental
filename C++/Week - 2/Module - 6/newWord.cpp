#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    string word = "egypt";
    int e=0, g=0, y=0, p=0, t=0;

    for(int i=0, j=0; i<s.length(); i++){
         s[i] = tolower(s[i]);
         switch (char ch = s[i])
         {
         case 'e':
            e++;
            break;
         case 'g':
            g++;
            break;
         case 'y':
            y++;
            break;
         case 'p':
            p++;
            break;
         case 't':
            t++;
            break;
         default:
            break;
         }
    }

    int result = min({e,g,y,p,t});
    cout << result;

    return 0;
}