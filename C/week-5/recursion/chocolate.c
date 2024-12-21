#include<stdio.h>

void distribute(int x){
     if(x == 0){  //Base case to stop the fumction
        return;
     }
     printf("Given chocolate %d,Take 1 and pass %d\n",x,x-1);
     distribute(x-1);
}

int main(){
    distribute(3);
}