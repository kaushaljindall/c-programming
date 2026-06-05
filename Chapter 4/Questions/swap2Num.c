#include <Stdio.h>
void swap(int a,int b){
    int temp;
    a = a+b;
    b = a - b;
    a = a - b;
    return;
}

int main(){
    int a , b;
    printf("Enter value of a: ");
    scanf("%d" , &a);
    printf("Enter value of b: ");
    scanf("%d" , &b);
    a = a+b;
    b = a - b;
    a = a - b;
    printf("value of a: %d\n" , a);
    printf("value of b: %d" , b);
}
