// Ques : Write a program to reverse the array without using any extra array.

#include <stdio.h>
int main(){
int arr[6] = {1,2,3,4,5,6};
    for(int i = 0; i < 3 ; i++){
        int temp;
        temp = arr[i];
        arr[i] =  arr[5-i];
        arr[5-i] = temp;

    }
    for (int i = 0; i < 6 ; i++){
        printf("%d " , arr[i]);
        
    }
}