// Ques : Calculate the sum of all the elements in thegiven array.

#include <stdio.h>
int main(){
    int arr[6]= {1,2,3,4,5,6};
    int sum = 0;
    for (int i = 0; i < 6 ; i++){
        sum += arr[i];
    }
    printf("%d" , sum);
}