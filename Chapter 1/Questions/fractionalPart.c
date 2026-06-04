#include <stdio.h>
int main(){
    float num;
    scanf("%f" , &num);
    float frac = num - (int)num;
    printf("%f" , frac);
    return 0;
}