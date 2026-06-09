#include <stdio.h>
struct student{
    char name[100];
    int roll;
    float percentage;
    char grade;
} s1,s2,s3; // s1 ], s2 ,s3 are already defined
  
int main(){
    scanf("%s %d %f %c" , s1.name , &s1.roll , &s1.percentage, &s1.grade);
    printf("%s %d %f %c\n" , s1.name , s1.roll , s1.percentage, s1.grade);

}
