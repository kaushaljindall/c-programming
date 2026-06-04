#include <stdio.h>
int main(){
    int age = 89;
    if (age < 18) printf("kid");
    else if ( age >= 18 && age < 64){
        printf("Adult");
    } else printf("Old");
    return 0;
}