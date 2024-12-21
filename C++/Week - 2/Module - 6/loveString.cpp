#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string S ,T;
    for(int i=0; i<n; i++){
        cin >> S >> T;
        int lenS = S.length();
        int lenT = T.length();
        int bigLength = 0,smallLength = 0;
        if(lenS > lenT){
            bigLength = lenS;
            smallLength = lenT;
        }else{
            bigLength = lenT;
            smallLength = lenS;
        }

        string newString;
        
        for(int j=0; j<bigLength; j++){

            if( j < smallLength){
             newString.push_back(S[j]);
             newString.push_back(T[j]);
            }
            else if (lenS == bigLength)
            {
                newString.push_back(S[j]);
            }
            else{
                newString.push_back(T[j]);
            }
            
        }
    
        
        cout << newString << endl;;
    }


    return 0;
}