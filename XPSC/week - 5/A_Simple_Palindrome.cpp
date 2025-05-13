#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = "";
        if (n <= 5)
        {
            if (n-- > 0)
                s.push_back('a');
            if (n-- > 0)
                s.push_back('e');
            if (n-- > 0)
                s.push_back('i');
            if (n-- > 0)
                s.push_back('o');
            if (n-- > 0)
                s.push_back('u');
            
        }
        else
        {   
            int div = n / 5;
            int a = div, e = div, i = div, o = div, u = div;
            int x = n%5;
            int temp = x;
            while(temp--){
                 if(x-- > 0){
                    a++;
                 }
                 if(x-- > 0){
                    e++;
                 }
                 if(x-- > 0){
                    i++;
                 }
                 if(x-- > 0){
                    o++;
                 }
                 if(u-- > 0){
                    u++;
                 }
            }
            while (a-- > 0) s.push_back('a');
            while (e-- > 0) s.push_back('e');
            while (i-- > 0) s.push_back('i');
            while (o-- > 0) s.push_back('o');
            while (u-- > 0) s.push_back('u');
        }
        cout << s << "\n";
    }

    return 0;
}