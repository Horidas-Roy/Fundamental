#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s1,s2; cin >> s1 >> s2;
        int numberOddPosOneInA = 0;
        int numberOddFreeCellinB = 0;
        int numberEvenPosOneInA = 0;
        int numberEvenFreeCellinB = 0;
        for(int i=0; i<n; i++){
            if(s1[i] == '1'){
                if(i%2 == 0){
                    numberEvenPosOneInA++;
                }
                else{
                    numberOddPosOneInA++;
                }
            }
            if(s2[i] == '0'){
                if(i%2 == 0){
                    numberEvenFreeCellinB++;
                }
                else{
                    numberOddFreeCellinB++;
                }
            }
        }
        if(numberEvenFreeCellinB >= numberOddPosOneInA 
            && numberOddFreeCellinB >= numberEvenPosOneInA){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
    }
    return 0;
}