#include<stdio.h>

void sort(int *a, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[j] < a[i]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int findMinDIff(int *a, int m, int n){
    sort(a, n);
    for(int i = 0; i < n; i++){
        printf("%d, ",a[i]);
    }
    int res = 9999;
    for(int i = 0; i < n-m+1;i++){
        if(a[i+m-1] - a[i] < res){
            res = a[i+m-1] - a[i];
        }
    }
    return res;
}

void reverseAry(int * ary, int sI, int eI){
    int mid = (sI + eI)/2;
    for(int i = sI; i <= mid; i++){
        int temp = ary[sI];
        ary[sI] = ary[eI];
        ary[eI] = temp;
        sI++;
        eI--;
    }
    
}

void subArrayReverse(int *ary, int k, int n){
    int start = 0;
    int end = 0 + k-1;
    while(end < n){
        reverseAry(ary, start, end);
        start += k;
        end += k;
    }
    reverseAry(ary, start, n-1);
    
}

int main(){
    int ayr[] = {7, 3,2,4, 9, 12, 56};
    // int res = findMinDIff(ayr, 3, 7);
    // printf("\nResult = %d\n", res);
    subArrayReverse(ayr, 2, 7);
    for(int i = 0; i < 7; i++){
        printf("%d, ", ayr[i]);
    }
 
    return 0;
}