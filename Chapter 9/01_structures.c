#include<stdio.h>
#include <string.h>

struct student{
    char Garde;
    int rollNo;
    float percentage;
};

int main(){
    struct student s1={'A', 20 , 98.23};
    printf("%d" , s1.rollNo);

    struct student s2;

    scanf("%c %d %f" , &s2.Garde , &s2.rollNo, &s2.percentage);
    printf("----------------------------------------------");
    printf("%c %d %f" , s2.Garde , s2.rollNo, s2.percentage);
}