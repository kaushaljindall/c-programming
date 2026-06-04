#include <stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    if (n>= 0){
        printf("%d" , n);
    }
    else{
        printf("%d" , n + 2*(-n));
    }
}