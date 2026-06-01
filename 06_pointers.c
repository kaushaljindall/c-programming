#include<stdio.h>
int main(){
    int a = 10;
    int *ptr = &a; // ptr is a pointer to an integer, and it holds the address of variable a

    printf("Value of a: %d\n", a); // Output: 10
    printf("Address of a: %p\n", &a); // Output: Address of a
    printf("Value of ptr: %p\n", ptr); // Output: Address of a (same as above)
    printf("Value pointed to by ptr: %d\n", *ptr); // Output: 10 (value at the address stored in ptr)

    return 0;
} 