// Ques : Count the number of elements in given array greater than a given number x.

#include <stdio.h>
int main(){
    int x = 8;
    int arr[8]= {292,2,1,7,5,4,6,};
    int count = 0;
    for (int i=0 ; i < 8 ; i++){
        if (arr[i] > x) 
        count++;
    }
    printf("there are %d numbers grater then %d" , count , x);
}