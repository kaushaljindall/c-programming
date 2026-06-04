#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d" , &a,&b,&c);
    if (a >=b && b>=c){
        printf("greater number is %d" , a);
    } else if (b>=a && b>=c){
        printf("greater number is %d" , b);
    } else 
    printf("greater number is %d" , c);
    return 0;
}