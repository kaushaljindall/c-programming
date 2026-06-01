#include<stdio.h>
#include <string.h>
typedef struct students{
    int roll ;
    float cgpa ;
    char name[100];
}st;

int main(){
    struct students s1 = {3119 , 9.42 , "kaushal"};
    struct students s1 = {3319 , 8.42 , "aditi"};
    struct students s1 = {3339 , 8.48 , "rawat"};

}