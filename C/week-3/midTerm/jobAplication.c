#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int experience = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&experience);
        if(experience < 1){
             printf("Entry-level candidate\n");
        }
        else if( 1 <= experience && experience <= 3){
             printf("Junior candidate\n");
        }
        else if( 4 <= experience && experience <= 7){
             printf("Mid-level candidate\n");
        }else{
             printf("Senior candidate\n");
        }
    }

    return 0;
}