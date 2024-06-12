#include<stdio.h>

void showMenu(){
    printf("\nMENU\n");
    printf("1. Bucket\n2. Brush\n3. Soap\n");
    printf("Select an Item no: ");
}
void showOptions(){
    printf("Options:\n1. Buy\n2. Add to cart\n");
}
void buy(int option){
    switch (option){
        case 1:
            printf("You bought Bucket\n");
            break;
        case 2:
            printf("You bought Brush\n");
            break;
        case 3:
            printf("You bough Soap\n");
        default: 
            printf("Invalid Item\n");
    }
}
void cart(int option){
    switch (option){
        case 1:
            printf("Bucket added to cart\n");
            break;
        case 2:
            printf("Brush added to cart\n");
            break;
        case 3:
            printf("Soap added to cart\n");
            break;
        default: 
            printf("Invalid Item\n");
    }
}
int main(){
    int  cur, curOption;
    while(1){
        showMenu();
        scanf("%d",&cur);
        showOptions();
        scanf("%d",&curOption);
        if(curOption == 1){
            buy(cur);
        }else if(curOption == 2){
            cart(cur);
        }
    }
}