// Ques : Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include <stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    scanf("%d %d %d %d %d %d" , &x1 , &y1 , &x2, &y2 , &x3 , &y3);

    if ( x1 != x2 && x2 != x3 ){
        // slope of A and B
        float m1 = (float)(y2 - y1) / (x2 - x1);

        // slope of B and C
        float m2 = (float)(y3 - y2) / (x3 - x2);
    

        // checking SL 

        if ( m1 == m2){ printf("SL");}
        else {printf("no SL");}
    } 
    else 
    printf("WRONG COORDINATES");

    return 0;
}