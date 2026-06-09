#include <stdio.h>
int main(){

    // Some ASCII values
    // 'A' == 65
    // 'a' == 97
    // '0' = 48
    // '9' == 57

    // array of charchtes: 

    char myName[] = {'k','a','u','s','h','a','l','\0'};
    for (int i = 0; myName[i] != '\0'; i++){
        printf("%c",myName[i]);  //kaushal
    }

    // but we do is 

    char line[]= "Kaushal Jindal is a human living on the earth";
    int i =0;
    while (line[i] != '\0'){
        printf("%c" , line[i]);
        i++;
    }
}