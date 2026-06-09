#include <stdio.h>
#include <string.h>
typedef struct students{
    char name[100];
    int roll;
    float percentage;
}std;

int main(){
    std s1 = {"kaushal" , 89, 90.82};
    std s2;

    std arr[10];

    strcpy(arr[0].name , "Kaushal");
    arr[0].roll = 97;
    arr[0].roll = 67.83;


}
