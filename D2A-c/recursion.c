#include<stdio.h>

int size = 3;
int storage[3] = {34, 21, 35};


void fetchContainer(int n, int i){
    if(n == i){
        printf("%d",storage[i]);
        return;
    }
    fetchContainer(n, i+1);
}

void fetchTotal(int i, int sum){
    
    if(i == size){
        printf("total is %d", sum);
        return;
    }
    fetchTotal(i+1, sum+storage[i]);
}
int main(){
    while(1){
        char cur;
        printf("Storage Unit are A, B, C\n");
        printf("Enter Unit name or T for total\n");
        scanf("%c",&cur);
        if(cur != 'T'){
            printf("Container %c has ", cur);
        }
        switch(cur){
            case 'A':
                fetchContainer(0, 0);
                break;
            case 'B':
                fetchContainer(1, 0);
                break;
            case 'C':
                fetchContainer(2, 0);
                break;
            case 'T':
                fetchTotal(0, 0);
                break;
            default:
                printf("invalid option");
        }
    }
    return 0;
}