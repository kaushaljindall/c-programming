#include  <stdio.h>
int main(){
    int x = 45, y = 8;
    float z = (float)x / y;

    printf("%d\n" , x+y);
    printf("%d\n" , x-y);
    printf("%d\n" , x*y);
    printf("%.2f\n" , z);
    
    return 0;
}