#include<stdio.h>

int stringLen(char *str){
    int n = 0;
    int count = 0;
    while(str[n] != '\0'){
        count++;
        n++;
    }
    return count;
}

int ovelsLen(char *str){
    int n = 0;
    int count = 0;
    while(str[n] != '\0'){
        switch(str[n]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
                break;
            default:
                break;
        }
        n++;
    }
    return count;
}

int main(){
    char str[50];
    printf("Enter the string: ");
    scanf("%s", str);
    int slen = stringLen(str);
    int olen = ovelsLen(str);
    int clen = slen - olen;
    printf("length of given string is %d \n", slen);
    printf("count of ovels in given string is %d \n", olen);
    printf("count of consonants in given string is %d", clen);
    return 0;
}