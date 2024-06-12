#include<stdio.h>

int main(){
    char bloodType;
    printf("Enter the blood type: ");
    scanf("%c",&bloodType);

    switch (bloodType){
        case 'A':
            printf("Can donate to blood type A and AB");
            break;
        case 'B':
            printf("Can donate to blood type B and AB");
            break;
        default:
            printf("Can donate to blood type A, B, AB and O");
    }
}
