#include<stdio.h>
int main(){
    char str[]= "KAUSHAL IS A HUMAN LIVING ON THE EARTH";
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        i++;
        count++;
    }
    printf("the size of the string is %d", count);
}