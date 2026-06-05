#include <stdio.h>
void function1(){
    printf("This is 1st function\n");
    return;
}
void function2(){
    printf("This is 2nd function\n");
    function1();
    return;
}
void function3(){
    printf("This is 3rd function");
    function2();
    return;
}

int main(){
    function3();
    return 0;
}