#include<stdio.h>

int main(){
    int v1 = 15;
    if(v1 > 6){
        printf("v1 is greater than 6\n");
        if(v1 % 2 == 0){
            printf("v1 is even");
        }else{
            printf("v1 is odd");
        }
    }else{
        printf("v1 is less than or equal to 6");
    }
    return 0;
}