#include<stdio.h>
#include <string.h>
int main(){
    char b[] = "aaabbbccc";
    int count = 1;
    for(int i= 0 ; b[i] != '\0'; i++){
        char current;
        current = b[i];
        if(b[i] == b[i+1]){
            count++;
        } else{
        printf("%c%d", b[i] , count);
            count = 1;
        }
    }
}