#include<stdio.h>

int main(){
    int mbs[] = {255, 124, 300, 100, 70};
    while(1){
        printf("\nMenu\n1. Temple Run 2\n2. Car race\n3. GTA\n4. fruit ninja\n5. bike race\n");
        printf("Enter the game number: ");
        int no;
        scanf("%d",&no);

        if(mbs[no-1] > 250){
            printf("This game exceeds your storage capacity.\nYou can't install");
        }else{
            printf("The game is installing");
            printf("Your game installed");
        }
    }
    return 0;
}