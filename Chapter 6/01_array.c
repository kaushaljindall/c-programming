#include <stdio.h> 

int main(){
    // intitalization of array 

    int marks[] = {23,23,64}; 
    marks[3] = 100 ;
    
    // loops in array 

    // taking input 

    int r[5]; 
    for ( int i = 0 ; i < 5 ; i++){
        scanf("%d " , &r[i]);
    }

    // output 
    for (int i = 0; i< 5; i++){
        printf("%d " , r[i]);
    } 
}