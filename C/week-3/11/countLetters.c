#include<stdio.h>
#include<string.h>

int main(){
    char str[1000000];
    fgets(str,sizeof(str),stdin);
    int length = strlen(str);

    //sorting
    for(int i = 0; i<length-1; i++){
        for(int j=i+1; j<length; j++){
             if(str[j] <= str[i]){
                 int temp = str[i];
                  str[i] = str[j];
                  str[j] = temp;
             }
        }
    }
    
    //counting and printing
    for(int i=0; i<length; i++){
         int count=1;
         printf("%c : ",str[i]);
         for(int j=i+1; j<length+1; j++){
              if(str[i] == str[j]){
                  count++;
                  i++;
              }else{
                  printf("%d\n",count);
                  break;
              }
         }
    }
   

    return 0;
}