#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    char str[10005];

    for(int k = 0; k<t; k++){
        scanf("%s",str);
        int capital = 0, small = 0, digit = 0;
        for(int i=0; i<strlen(str); i++){
            if (str[i] >= '0' && str[i] <= '9')
            {
                digit++;
            }
            else if(str[i] >= 'A' && str[i] <= 'Z')
            {
                capital++;
            }else if(str[i] >= 'a' && str[i] <= 'z')
            {
                small++;
            } 
        }
        printf("%d %d %d\n",capital,small,digit);
    }

   
   
   return 0;
}