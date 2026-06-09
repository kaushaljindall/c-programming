#include<stdio.h>
#include <string.h>

int main(){
    char str[90];
    scanf("%[^\n]s" , str);

    // reversing 

    //function hota hai ek strlen(str) --> size de deta haii string ka 

    for(int i =0 ; i < strlen(str)/2 ; i++){
        char temp; 
        temp = str[i];
        str[i] =str[strlen(str)-1 -i];
        str[strlen(str)-1 -i] = temp;
    }

    puts(str);
    return 0;
}   