#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    char S[51],T[51];
    
    for(int i=0; i<n; i++){
        scanf("%s %s",S,T);
        int len_S = strlen(S);
        int len_T = strlen(T);

        int bigStr,smallStr;
        if(len_S>len_T){
            bigStr = len_S;
            smallStr = len_T;
        }else{
            bigStr = len_T;
            smallStr = len_S;
        }
        char newString[101]={0};
        for(int j=0,k=0; j<bigStr; j++,k += 2){
            if(j<smallStr){
                newString[k] = S[j];
                newString[k+1] = T[j];
            }else if(len_S>len_T && j >= smallStr){
                newString[k] = S[j];
                k--;
            }else if(len_S<len_T && j >= smallStr){
                newString[k] = T[j];
                k--;
            }
        }
        newString[len_S+len_T] = '\0';
        printf("%s\n",newString);
    }



    return 0;
}