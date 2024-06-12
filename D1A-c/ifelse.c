#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the values of a, b, c: \n");
    scanf("%d%d%d",&a, &b,&c);
    if(a > b && a > c){
        printf("a is greater than b and c\n");
        if(b > c){
            printf("b is greater than c\n");
        }else{
            printf("c is greater than b\n");
        }
    }else{
        if(b > c){
            printf("b is greater than a and c\n");
        }else{
            printf("c is greater than b and a\n");
        }
        printf("a is less than b and c\n");
    }
    return 0;
}