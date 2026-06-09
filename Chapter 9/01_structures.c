#include<stdio.h>
#include <string.h>

struct student{
    char name[100];
    char Garde;
    int rollNo;
    float percentage;
};

int main(){
    struct student s1={"Anvi",'A', 20 , 98.23};
    printf("%d\n" , s1.rollNo);

    struct student s2;

    scanf("%s %c %d %f" , s2.name, &s2.Garde , &s2.rollNo, &s2.percentage);
    printf("----------------------------------------------\n");
    printf("%s %c %d %f\n" ,s2.name ,s2.Garde , s2.rollNo, s2.percentage);
    printf("%s\n", s2.name);
}