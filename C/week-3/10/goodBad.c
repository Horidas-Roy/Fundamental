#include<stdio.h>
#include<string.h>


int main(){
    int n;
    scanf("%d",&n);
    

    char str[100000];
    for(int i = 0; i<n ;i++){
          scanf("%s",str);
          int result = 0;
          for(int  j=0; j<strlen(str)-2; j++){
               if(strncmp(&str[j],"010",3) == 0 || strncmp(&str[j],"101",3) == 0){
                    printf("Good\n");
                    result = 1;
                    break;
               }
          }
          if(!result){
              printf("Bad\n");
          }
    }


    return 0;
}