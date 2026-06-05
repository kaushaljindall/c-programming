#include <stdio.h>
#define MIN(a,b) (a)<(b)?  (a) : (b);  //MARCOS
// void sum(int x,int y){
//     int sum;
//     sum = x+y;
//     printf("%d" , sum);
//     return;
// }

int sum(int x,int y){
    return x+y;
}

int main(){
    int a, b;
    scanf("%d %d" , &a , &b);

    printf("%d\n", sum(a,b));
    int r = MIN(a,b);
    printf("%d" ,r);
    return 0;
}
