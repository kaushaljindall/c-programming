#include<stdio.h>
int main(){
    int r;
    float PI = 3.1415;
    scanf("%d", &r);

    printf("Volume  of Sphere having radius %d is: %.2f" , r , ((4*PI*r*r*r)/3));
}