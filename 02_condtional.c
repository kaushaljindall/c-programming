#include<stdio.h>
int main(){
    int age;
    scanf("%d" , &age );
    if (age>18 && age<60){
        printf("Adult\n");
    }
    else if(age>60){
        printf("old\n");
    }
    else{
        printf("kid\n");
    }

    age > 18 ? printf("adult") : printf("kid");
}




