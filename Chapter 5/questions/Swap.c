#include <stdio.h> 

int main(){
    int a , b;
    printf("Enter value of a: ");
    scanf("%d" , &a);
    
    printf("Enter value of b: ");
    scanf("%d" , &b);

    // function
    void swap(int *a , int *b);
    swap(&a , &b);
    

    //output
    printf("value of a: %d\n" , a);
    printf("value of b: %d" , b);
}

void swap (int *a , int *b){
    int temp ;
    temp=*b;
    *b = *a;
    *a = temp;
}
