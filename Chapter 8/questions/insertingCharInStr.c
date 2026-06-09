#include <stdio.h>
#include <string.h>
// Write a function to insert a new character in a string at a given position.

int main(){
    char s1[] = "College";

    // want to insert 'l' in 2nd index

    for (int i = strlen(s1)-1; i<= 2  ; i-- ){
         s1[i+1] = s1[i] ;
    }
    s1[2]= 'l';
    printf("%s" , s1);

}