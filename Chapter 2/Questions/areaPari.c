// Ques : Given the length and breadth of a rectangle, Write a program to find whether the area of the rectangle is greater than its perimeter.4

#include<stdio.h>
int main(){
    int l,b ; 
    scanf("%d %d" , &l,&b);
    int area = l*b;
    int pari = 2*(l+b);

    if (area > pari ) printf("area is greater than pari");
    else printf("Not greater than pari");
    return 0;
}